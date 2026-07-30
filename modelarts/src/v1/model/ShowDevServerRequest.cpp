

#include "huaweicloud/modelarts/v1/model/ShowDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowDevServerRequest::ShowDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowDevServerRequest::~ShowDevServerRequest() = default;

void ShowDevServerRequest::validate()
{
}

web::json::value ShowDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowDevServerRequest::fromJson(const web::json::value& val)
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


std::string ShowDevServerRequest::getId() const
{
    return id_;
}

void ShowDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


