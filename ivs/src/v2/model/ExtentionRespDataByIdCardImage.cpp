

#include "huaweicloud/ivs/v2/model/ExtentionRespDataByIdCardImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ExtentionRespDataByIdCardImage::ExtentionRespDataByIdCardImage()
{
    verificationResult_ = "";
    verificationResultIsSet_ = false;
    verificationMessage_ = "";
    verificationMessageIsSet_ = false;
    verificationCode_ = 0;
    verificationCodeIsSet_ = false;
    idcardResultIsSet_ = false;
}

ExtentionRespDataByIdCardImage::~ExtentionRespDataByIdCardImage() = default;

void ExtentionRespDataByIdCardImage::validate()
{
}

web::json::value ExtentionRespDataByIdCardImage::toJson() const
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
    if(idcardResultIsSet_) {
        val[utility::conversions::to_string_t("idcard_result")] = ModelBase::toJson(idcardResult_);
    }

    return val;
}

bool ExtentionRespDataByIdCardImage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("idcard_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_result"));
        if(!fieldValue.is_null())
        {
            IdcardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardResult(refVal);
        }
    }
    return ok;
}


std::string ExtentionRespDataByIdCardImage::getVerificationResult() const
{
    return verificationResult_;
}

void ExtentionRespDataByIdCardImage::setVerificationResult(const std::string& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool ExtentionRespDataByIdCardImage::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void ExtentionRespDataByIdCardImage::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

std::string ExtentionRespDataByIdCardImage::getVerificationMessage() const
{
    return verificationMessage_;
}

void ExtentionRespDataByIdCardImage::setVerificationMessage(const std::string& value)
{
    verificationMessage_ = value;
    verificationMessageIsSet_ = true;
}

bool ExtentionRespDataByIdCardImage::verificationMessageIsSet() const
{
    return verificationMessageIsSet_;
}

void ExtentionRespDataByIdCardImage::unsetverificationMessage()
{
    verificationMessageIsSet_ = false;
}

int32_t ExtentionRespDataByIdCardImage::getVerificationCode() const
{
    return verificationCode_;
}

void ExtentionRespDataByIdCardImage::setVerificationCode(int32_t value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool ExtentionRespDataByIdCardImage::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void ExtentionRespDataByIdCardImage::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

IdcardResult ExtentionRespDataByIdCardImage::getIdcardResult() const
{
    return idcardResult_;
}

void ExtentionRespDataByIdCardImage::setIdcardResult(const IdcardResult& value)
{
    idcardResult_ = value;
    idcardResultIsSet_ = true;
}

bool ExtentionRespDataByIdCardImage::idcardResultIsSet() const
{
    return idcardResultIsSet_;
}

void ExtentionRespDataByIdCardImage::unsetidcardResult()
{
    idcardResultIsSet_ = false;
}

}
}
}
}
}


