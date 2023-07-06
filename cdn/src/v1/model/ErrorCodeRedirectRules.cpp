

#include "huaweicloud/cdn/v1/model/ErrorCodeRedirectRules.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ErrorCodeRedirectRules::ErrorCodeRedirectRules()
{
    errorCode_ = 0;
    errorCodeIsSet_ = false;
    targetCode_ = 0;
    targetCodeIsSet_ = false;
    targetLink_ = "";
    targetLinkIsSet_ = false;
}

ErrorCodeRedirectRules::~ErrorCodeRedirectRules() = default;

void ErrorCodeRedirectRules::validate()
{
}

web::json::value ErrorCodeRedirectRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(targetCodeIsSet_) {
        val[utility::conversions::to_string_t("target_code")] = ModelBase::toJson(targetCode_);
    }
    if(targetLinkIsSet_) {
        val[utility::conversions::to_string_t("target_link")] = ModelBase::toJson(targetLink_);
    }

    return val;
}

bool ErrorCodeRedirectRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetLink(refVal);
        }
    }
    return ok;
}

int32_t ErrorCodeRedirectRules::getErrorCode() const
{
    return errorCode_;
}

void ErrorCodeRedirectRules::setErrorCode(int32_t value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ErrorCodeRedirectRules::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ErrorCodeRedirectRules::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

int32_t ErrorCodeRedirectRules::getTargetCode() const
{
    return targetCode_;
}

void ErrorCodeRedirectRules::setTargetCode(int32_t value)
{
    targetCode_ = value;
    targetCodeIsSet_ = true;
}

bool ErrorCodeRedirectRules::targetCodeIsSet() const
{
    return targetCodeIsSet_;
}

void ErrorCodeRedirectRules::unsettargetCode()
{
    targetCodeIsSet_ = false;
}

std::string ErrorCodeRedirectRules::getTargetLink() const
{
    return targetLink_;
}

void ErrorCodeRedirectRules::setTargetLink(const std::string& value)
{
    targetLink_ = value;
    targetLinkIsSet_ = true;
}

bool ErrorCodeRedirectRules::targetLinkIsSet() const
{
    return targetLinkIsSet_;
}

void ErrorCodeRedirectRules::unsettargetLink()
{
    targetLinkIsSet_ = false;
}

}
}
}
}
}


