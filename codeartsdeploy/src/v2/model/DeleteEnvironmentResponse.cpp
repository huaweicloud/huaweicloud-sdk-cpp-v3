

#include "huaweicloud/codeartsdeploy/v2/model/DeleteEnvironmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteEnvironmentResponse::DeleteEnvironmentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteEnvironmentResponse::~DeleteEnvironmentResponse() = default;

void DeleteEnvironmentResponse::validate()
{
}

web::json::value DeleteEnvironmentResponse::toJson() const
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
bool DeleteEnvironmentResponse::fromJson(const web::json::value& val)
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


std::string DeleteEnvironmentResponse::getStatus() const
{
    return status_;
}

void DeleteEnvironmentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteEnvironmentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteEnvironmentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteEnvironmentResponse::getId() const
{
    return id_;
}

void DeleteEnvironmentResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteEnvironmentResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteEnvironmentResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


