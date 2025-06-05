

#include "huaweicloud/codeartsbuild/v3/model/ShowKeystorePermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowKeystorePermissionResponse::ShowKeystorePermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowKeystorePermissionResponse::~ShowKeystorePermissionResponse() = default;

void ShowKeystorePermissionResponse::validate()
{
}

web::json::value ShowKeystorePermissionResponse::toJson() const
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
bool ShowKeystorePermissionResponse::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowKeystorePermissionResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowKeystorePermissionResponse::getStatus() const
{
    return status_;
}

void ShowKeystorePermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowKeystorePermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowKeystorePermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowKeystorePermissionResponse::getError() const
{
    return error_;
}

void ShowKeystorePermissionResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowKeystorePermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowKeystorePermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

ShowKeystorePermissionResponseBody_result ShowKeystorePermissionResponse::getResult() const
{
    return result_;
}

void ShowKeystorePermissionResponse::setResult(const ShowKeystorePermissionResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowKeystorePermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowKeystorePermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


