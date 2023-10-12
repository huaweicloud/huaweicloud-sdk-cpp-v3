

#include "huaweicloud/ivs/v2/model/ExtentionRespDataByNameAndId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ExtentionRespDataByNameAndId::ExtentionRespDataByNameAndId()
{
    verificationResult_ = "";
    verificationResultIsSet_ = false;
    verificationMessage_ = "";
    verificationMessageIsSet_ = false;
    verificationCode_ = 0;
    verificationCodeIsSet_ = false;
}

ExtentionRespDataByNameAndId::~ExtentionRespDataByNameAndId() = default;

void ExtentionRespDataByNameAndId::validate()
{
}

web::json::value ExtentionRespDataByNameAndId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verificationResultIsSet_) {
        val[utility::conversions::to_string_t("verification_result")] = ModelBase::toJson(verificationResult_);
    }
    if(verificationMessageIsSet_) {
        val[utility::conversions::to_string_t("verification_message")] = ModelBase::toJson(verificationMessage_);
    }
    if(verificationCodeIsSet_) {
        val[utility::conversions::to_string_t("verification_code")] = ModelBase::toJson(verificationCode_);
    }

    return val;
}
bool ExtentionRespDataByNameAndId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verification_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationCode(refVal);
        }
    }
    return ok;
}


std::string ExtentionRespDataByNameAndId::getVerificationResult() const
{
    return verificationResult_;
}

void ExtentionRespDataByNameAndId::setVerificationResult(const std::string& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool ExtentionRespDataByNameAndId::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void ExtentionRespDataByNameAndId::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

std::string ExtentionRespDataByNameAndId::getVerificationMessage() const
{
    return verificationMessage_;
}

void ExtentionRespDataByNameAndId::setVerificationMessage(const std::string& value)
{
    verificationMessage_ = value;
    verificationMessageIsSet_ = true;
}

bool ExtentionRespDataByNameAndId::verificationMessageIsSet() const
{
    return verificationMessageIsSet_;
}

void ExtentionRespDataByNameAndId::unsetverificationMessage()
{
    verificationMessageIsSet_ = false;
}

int32_t ExtentionRespDataByNameAndId::getVerificationCode() const
{
    return verificationCode_;
}

void ExtentionRespDataByNameAndId::setVerificationCode(int32_t value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool ExtentionRespDataByNameAndId::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void ExtentionRespDataByNameAndId::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

}
}
}
}
}


