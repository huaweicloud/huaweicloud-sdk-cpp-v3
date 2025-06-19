

#include "huaweicloud/codeartsbuild/v3/model/DeleteKeystorePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteKeystorePermissionResponse::DeleteKeystorePermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

DeleteKeystorePermissionResponse::~DeleteKeystorePermissionResponse() = default;

void DeleteKeystorePermissionResponse::validate()
{
}

web::json::value DeleteKeystorePermissionResponse::toJson() const
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
bool DeleteKeystorePermissionResponse::fromJson(const web::json::value& val)
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


std::string DeleteKeystorePermissionResponse::getStatus() const
{
    return status_;
}

void DeleteKeystorePermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteKeystorePermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteKeystorePermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object DeleteKeystorePermissionResponse::getError() const
{
    return error_;
}

void DeleteKeystorePermissionResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteKeystorePermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteKeystorePermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DeleteKeystorePermissionResponse::getResult() const
{
    return result_;
}

void DeleteKeystorePermissionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteKeystorePermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteKeystorePermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


