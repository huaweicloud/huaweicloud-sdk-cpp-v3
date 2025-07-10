

#include "huaweicloud/codeartsbuild/v3/model/UpdateKeystorePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateKeystorePermissionResponse::UpdateKeystorePermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

UpdateKeystorePermissionResponse::~UpdateKeystorePermissionResponse() = default;

void UpdateKeystorePermissionResponse::validate()
{
}

web::json::value UpdateKeystorePermissionResponse::toJson() const
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
bool UpdateKeystorePermissionResponse::fromJson(const web::json::value& val)
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


std::string UpdateKeystorePermissionResponse::getStatus() const
{
    return status_;
}

void UpdateKeystorePermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateKeystorePermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateKeystorePermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object UpdateKeystorePermissionResponse::getError() const
{
    return error_;
}

void UpdateKeystorePermissionResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateKeystorePermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateKeystorePermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateKeystorePermissionResponse::getResult() const
{
    return result_;
}

void UpdateKeystorePermissionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateKeystorePermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateKeystorePermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


