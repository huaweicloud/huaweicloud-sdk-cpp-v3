

#include "huaweicloud/codeartsbuild/v3/model/ApplyProjectPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ApplyProjectPermissionResponse::ApplyProjectPermissionResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

ApplyProjectPermissionResponse::~ApplyProjectPermissionResponse() = default;

void ApplyProjectPermissionResponse::validate()
{
}

web::json::value ApplyProjectPermissionResponse::toJson() const
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
bool ApplyProjectPermissionResponse::fromJson(const web::json::value& val)
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


std::string ApplyProjectPermissionResponse::getStatus() const
{
    return status_;
}

void ApplyProjectPermissionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplyProjectPermissionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ApplyProjectPermissionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ApplyProjectPermissionResponse::getError() const
{
    return error_;
}

void ApplyProjectPermissionResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ApplyProjectPermissionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ApplyProjectPermissionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ApplyProjectPermissionResponse::getResult() const
{
    return result_;
}

void ApplyProjectPermissionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ApplyProjectPermissionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ApplyProjectPermissionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


