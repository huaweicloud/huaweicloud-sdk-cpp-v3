

#include "huaweicloud/codeartsbuild/v3/model/BatchUpdateJobRolePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




BatchUpdateJobRolePermissionResponse::BatchUpdateJobRolePermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

BatchUpdateJobRolePermissionResponse::~BatchUpdateJobRolePermissionResponse() = default;

void BatchUpdateJobRolePermissionResponse::validate()
{
}

web::json::value BatchUpdateJobRolePermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool BatchUpdateJobRolePermissionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateJobRolePermissionResponse::getStatus() const
{
    return status_;
}

void BatchUpdateJobRolePermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateJobRolePermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateJobRolePermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object BatchUpdateJobRolePermissionResponse::getError() const
{
    return error_;
}

void BatchUpdateJobRolePermissionResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchUpdateJobRolePermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchUpdateJobRolePermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string BatchUpdateJobRolePermissionResponse::getResult() const
{
    return result_;
}

void BatchUpdateJobRolePermissionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchUpdateJobRolePermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchUpdateJobRolePermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


