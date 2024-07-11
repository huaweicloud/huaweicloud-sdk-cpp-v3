

#include "huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateEnvironmentResponse::UpdateEnvironmentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

UpdateEnvironmentResponse::~UpdateEnvironmentResponse() = default;

void UpdateEnvironmentResponse::validate()
{
}

web::json::value UpdateEnvironmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool UpdateEnvironmentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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


std::string UpdateEnvironmentResponse::getStatus() const
{
    return status_;
}

void UpdateEnvironmentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateEnvironmentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateEnvironmentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateEnvironmentResponse::getId() const
{
    return id_;
}

void UpdateEnvironmentResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateEnvironmentResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateEnvironmentResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


