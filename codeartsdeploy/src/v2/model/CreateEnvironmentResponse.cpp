

#include "huaweicloud/codeartsdeploy/v2/model/CreateEnvironmentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateEnvironmentResponse::CreateEnvironmentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

CreateEnvironmentResponse::~CreateEnvironmentResponse() = default;

void CreateEnvironmentResponse::validate()
{
}

web::json::value CreateEnvironmentResponse::toJson() const
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

bool CreateEnvironmentResponse::fromJson(const web::json::value& val)
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

std::string CreateEnvironmentResponse::getStatus() const
{
    return status_;
}

void CreateEnvironmentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateEnvironmentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateEnvironmentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateEnvironmentResponse::getId() const
{
    return id_;
}

void CreateEnvironmentResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateEnvironmentResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateEnvironmentResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


