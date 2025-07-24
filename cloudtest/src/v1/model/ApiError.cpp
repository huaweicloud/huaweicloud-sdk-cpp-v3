

#include "huaweicloud/cloudtest/v1/model/ApiError.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ApiError::ApiError()
{
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

ApiError::~ApiError() = default;

void ApiError::validate()
{
}

web::json::value ApiError::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool ApiError::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string ApiError::getCode() const
{
    return code_;
}

void ApiError::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ApiError::codeIsSet() const
{
    return codeIsSet_;
}

void ApiError::unsetcode()
{
    codeIsSet_ = false;
}

std::string ApiError::getReason() const
{
    return reason_;
}

void ApiError::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ApiError::reasonIsSet() const
{
    return reasonIsSet_;
}

void ApiError::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


