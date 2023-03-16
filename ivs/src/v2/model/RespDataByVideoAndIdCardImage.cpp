

#include "huaweicloud/ivs/v2/model/RespDataByVideoAndIdCardImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




RespDataByVideoAndIdCardImage::RespDataByVideoAndIdCardImage()
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
    videoResultIsSet_ = false;
}

RespDataByVideoAndIdCardImage::~RespDataByVideoAndIdCardImage() = default;

void RespDataByVideoAndIdCardImage::validate()
{
}

web::json::value RespDataByVideoAndIdCardImage::toJson() const
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
    if(videoResultIsSet_) {
        val[utility::conversions::to_string_t("video_result")] = ModelBase::toJson(videoResult_);
    }

    return val;
}

bool RespDataByVideoAndIdCardImage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("video_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_result"));
        if(!fieldValue.is_null())
        {
            VideoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoResult(refVal);
        }
    }
    return ok;
}


std::string RespDataByVideoAndIdCardImage::getVerificationResult() const
{
    return verificationResult_;
}

void RespDataByVideoAndIdCardImage::setVerificationResult(const std::string& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool RespDataByVideoAndIdCardImage::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void RespDataByVideoAndIdCardImage::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

std::string RespDataByVideoAndIdCardImage::getVerificationMessage() const
{
    return verificationMessage_;
}

void RespDataByVideoAndIdCardImage::setVerificationMessage(const std::string& value)
{
    verificationMessage_ = value;
    verificationMessageIsSet_ = true;
}

bool RespDataByVideoAndIdCardImage::verificationMessageIsSet() const
{
    return verificationMessageIsSet_;
}

void RespDataByVideoAndIdCardImage::unsetverificationMessage()
{
    verificationMessageIsSet_ = false;
}

int32_t RespDataByVideoAndIdCardImage::getVerificationCode() const
{
    return verificationCode_;
}

void RespDataByVideoAndIdCardImage::setVerificationCode(int32_t value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool RespDataByVideoAndIdCardImage::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void RespDataByVideoAndIdCardImage::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

std::string RespDataByVideoAndIdCardImage::getSimilarity() const
{
    return similarity_;
}

void RespDataByVideoAndIdCardImage::setSimilarity(const std::string& value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool RespDataByVideoAndIdCardImage::similarityIsSet() const
{
    return similarityIsSet_;
}

void RespDataByVideoAndIdCardImage::unsetsimilarity()
{
    similarityIsSet_ = false;
}

IdcardResult RespDataByVideoAndIdCardImage::getIdcardResult() const
{
    return idcardResult_;
}

void RespDataByVideoAndIdCardImage::setIdcardResult(const IdcardResult& value)
{
    idcardResult_ = value;
    idcardResultIsSet_ = true;
}

bool RespDataByVideoAndIdCardImage::idcardResultIsSet() const
{
    return idcardResultIsSet_;
}

void RespDataByVideoAndIdCardImage::unsetidcardResult()
{
    idcardResultIsSet_ = false;
}

VideoResult RespDataByVideoAndIdCardImage::getVideoResult() const
{
    return videoResult_;
}

void RespDataByVideoAndIdCardImage::setVideoResult(const VideoResult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool RespDataByVideoAndIdCardImage::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void RespDataByVideoAndIdCardImage::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

}
}
}
}
}


