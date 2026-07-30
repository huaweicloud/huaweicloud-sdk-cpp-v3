

#include "huaweicloud/modelarts/v1/model/ListDevServerImagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerImagesRequest::ListDevServerImagesRequest()
{
    serverType_ = "";
    serverTypeIsSet_ = false;
    flavorName_ = "";
    flavorNameIsSet_ = false;
}

ListDevServerImagesRequest::~ListDevServerImagesRequest() = default;

void ListDevServerImagesRequest::validate()
{
}

web::json::value ListDevServerImagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(flavorNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_name")] = ModelBase::toJson(flavorName_);
    }

    return val;
}
bool ListDevServerImagesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorName(refVal);
        }
    }
    return ok;
}


std::string ListDevServerImagesRequest::getServerType() const
{
    return serverType_;
}

void ListDevServerImagesRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ListDevServerImagesRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ListDevServerImagesRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string ListDevServerImagesRequest::getFlavorName() const
{
    return flavorName_;
}

void ListDevServerImagesRequest::setFlavorName(const std::string& value)
{
    flavorName_ = value;
    flavorNameIsSet_ = true;
}

bool ListDevServerImagesRequest::flavorNameIsSet() const
{
    return flavorNameIsSet_;
}

void ListDevServerImagesRequest::unsetflavorName()
{
    flavorNameIsSet_ = false;
}

}
}
}
}
}


