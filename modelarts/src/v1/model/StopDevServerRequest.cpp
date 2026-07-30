

#include "huaweicloud/modelarts/v1/model/StopDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopDevServerRequest::StopDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
}

StopDevServerRequest::~StopDevServerRequest() = default;

void StopDevServerRequest::validate()
{
}

web::json::value StopDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool StopDevServerRequest::fromJson(const web::json::value& val)
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


std::string StopDevServerRequest::getId() const
{
    return id_;
}

void StopDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StopDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void StopDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


