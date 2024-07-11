

#include "huaweicloud/codeartsdeploy/v2/model/UpdateEnvironmentPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateEnvironmentPermissionResponse::UpdateEnvironmentPermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

UpdateEnvironmentPermissionResponse::~UpdateEnvironmentPermissionResponse() = default;

void UpdateEnvironmentPermissionResponse::validate()
{
}

web::json::value UpdateEnvironmentPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateEnvironmentPermissionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            DevUcEnvironmentPermission refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateEnvironmentPermissionResponse::getStatus() const
{
    return status_;
}

void UpdateEnvironmentPermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateEnvironmentPermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateEnvironmentPermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

DevUcEnvironmentPermission UpdateEnvironmentPermissionResponse::getResult() const
{
    return result_;
}

void UpdateEnvironmentPermissionResponse::setResult(const DevUcEnvironmentPermission& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateEnvironmentPermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateEnvironmentPermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


