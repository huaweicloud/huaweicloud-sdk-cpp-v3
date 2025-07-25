

#include "huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




AddKeystorePermissionResponse::AddKeystorePermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

AddKeystorePermissionResponse::~AddKeystorePermissionResponse() = default;

void AddKeystorePermissionResponse::validate()
{
}

web::json::value AddKeystorePermissionResponse::toJson() const
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
bool AddKeystorePermissionResponse::fromJson(const web::json::value& val)
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


std::string AddKeystorePermissionResponse::getStatus() const
{
    return status_;
}

void AddKeystorePermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddKeystorePermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddKeystorePermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object AddKeystorePermissionResponse::getError() const
{
    return error_;
}

void AddKeystorePermissionResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddKeystorePermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddKeystorePermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddKeystorePermissionResponse::getResult() const
{
    return result_;
}

void AddKeystorePermissionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddKeystorePermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddKeystorePermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


