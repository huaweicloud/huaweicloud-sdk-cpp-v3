

#include "huaweicloud/modelarts/v1/model/ListDevServerPublicIPRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerPublicIPRequest::ListDevServerPublicIPRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ListDevServerPublicIPRequest::~ListDevServerPublicIPRequest() = default;

void ListDevServerPublicIPRequest::validate()
{
}

web::json::value ListDevServerPublicIPRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ListDevServerPublicIPRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ListDevServerPublicIPRequest::getId() const
{
    return id_;
}

void ListDevServerPublicIPRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDevServerPublicIPRequest::idIsSet() const
{
    return idIsSet_;
}

void ListDevServerPublicIPRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


