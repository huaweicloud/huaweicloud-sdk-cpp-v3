

#include "huaweicloud/codeartsbuild/v3/model/ShowProjectPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowProjectPermissionResponse::ShowProjectPermissionResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowProjectPermissionResponse::~ShowProjectPermissionResponse() = default;

void ShowProjectPermissionResponse::validate()
{
}

web::json::value ShowProjectPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowProjectPermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowUserProjectPermission_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


ShowUserProjectPermission_result ShowProjectPermissionResponse::getResult() const
{
    return result_;
}

void ShowProjectPermissionResponse::setResult(const ShowUserProjectPermission_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProjectPermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProjectPermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowProjectPermissionResponse::getError() const
{
    return error_;
}

void ShowProjectPermissionResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowProjectPermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowProjectPermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowProjectPermissionResponse::getStatus() const
{
    return status_;
}

void ShowProjectPermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProjectPermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProjectPermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


