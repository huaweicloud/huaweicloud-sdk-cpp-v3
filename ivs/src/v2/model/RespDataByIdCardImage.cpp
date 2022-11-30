

#include "huaweicloud/ivs/v2/model/RespDataByIdCardImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




RespDataByIdCardImage::RespDataByIdCardImage()
{
    verificationResult_ = "";
    verificationResultIsSet_ = false;
    verificationMessage_ = "";
    verificationMessageIsSet_ = false;
    verificationCode_ = 0;
    verificationCodeIsSet_ = false;
    similarity_ = "";
    similarityIsSet_ = false;
    idcardResultIsSet_ = false;
}

RespDataByIdCardImage::~RespDataByIdCardImage() = default;

void RespDataByIdCardImage::validate()
{
}

web::json::value RespDataByIdCardImage::toJson() const
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
    if(similarityIsSet_) {
        val[utility::conversions::to_string_t("similarity")] = ModelBase::toJson(similarity_);
    }
    if(idcardResultIsSet_) {
        val[utility::conversions::to_string_t("idcard_result")] = ModelBase::toJson(idcardResult_);
    }

    return val;
}

bool RespDataByIdCardImage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("similarity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("similarity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimilarity(refVal);
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


std::string RespDataByIdCardImage::getVerificationResult() const
{
    return verificationResult_;
}

void RespDataByIdCardImage::setVerificationResult(const std::string& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool RespDataByIdCardImage::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void RespDataByIdCardImage::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

std::string RespDataByIdCardImage::getVerificationMessage() const
{
    return verificationMessage_;
}

void RespDataByIdCardImage::setVerificationMessage(const std::string& value)
{
    verificationMessage_ = value;
    verificationMessageIsSet_ = true;
}

bool RespDataByIdCardImage::verificationMessageIsSet() const
{
    return verificationMessageIsSet_;
}

void RespDataByIdCardImage::unsetverificationMessage()
{
    verificationMessageIsSet_ = false;
}

int32_t RespDataByIdCardImage::getVerificationCode() const
{
    return verificationCode_;
}

void RespDataByIdCardImage::setVerificationCode(int32_t value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool RespDataByIdCardImage::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void RespDataByIdCardImage::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

std::string RespDataByIdCardImage::getSimilarity() const
{
    return similarity_;
}

void RespDataByIdCardImage::setSimilarity(const std::string& value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool RespDataByIdCardImage::similarityIsSet() const
{
    return similarityIsSet_;
}

void RespDataByIdCardImage::unsetsimilarity()
{
    similarityIsSet_ = false;
}

IdcardResult RespDataByIdCardImage::getIdcardResult() const
{
    return idcardResult_;
}

void RespDataByIdCardImage::setIdcardResult(const IdcardResult& value)
{
    idcardResult_ = value;
    idcardResultIsSet_ = true;
}

bool RespDataByIdCardImage::idcardResultIsSet() const
{
    return idcardResultIsSet_;
}

void RespDataByIdCardImage::unsetidcardResult()
{
    idcardResultIsSet_ = false;
}

}
}
}
}
}


