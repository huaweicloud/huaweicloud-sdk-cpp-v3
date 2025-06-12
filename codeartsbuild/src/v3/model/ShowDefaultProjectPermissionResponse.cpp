

#include "huaweicloud/codeartsbuild/v3/model/ShowDefaultProjectPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDefaultProjectPermissionResponse::ShowDefaultProjectPermissionResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDefaultProjectPermissionResponse::~ShowDefaultProjectPermissionResponse() = default;

void ShowDefaultProjectPermissionResponse::validate()
{
}

web::json::value ShowDefaultProjectPermissionResponse::toJson() const
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
bool ShowDefaultProjectPermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowDefaultProjectPermissionResponseBody_result> refVal;
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


std::vector<ShowDefaultProjectPermissionResponseBody_result>& ShowDefaultProjectPermissionResponse::getResult()
{
    return result_;
}

void ShowDefaultProjectPermissionResponse::setResult(const std::vector<ShowDefaultProjectPermissionResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDefaultProjectPermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowDefaultProjectPermissionResponse::getError() const
{
    return error_;
}

void ShowDefaultProjectPermissionResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowDefaultProjectPermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowDefaultProjectPermissionResponse::getStatus() const
{
    return status_;
}

void ShowDefaultProjectPermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDefaultProjectPermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDefaultProjectPermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


