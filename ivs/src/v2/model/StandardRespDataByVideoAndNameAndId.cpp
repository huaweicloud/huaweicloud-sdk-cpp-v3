

#include "huaweicloud/ivs/v2/model/StandardRespDataByVideoAndNameAndId.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




StandardRespDataByVideoAndNameAndId::StandardRespDataByVideoAndNameAndId()
{
    verificationResult_ = "";
    verificationResultIsSet_ = false;
    verificationMessage_ = "";
    verificationMessageIsSet_ = false;
    verificationCode_ = 0;
    verificationCodeIsSet_ = false;
    similarity_ = "";
    similarityIsSet_ = false;
    videoResultIsSet_ = false;
}

StandardRespDataByVideoAndNameAndId::~StandardRespDataByVideoAndNameAndId() = default;

void StandardRespDataByVideoAndNameAndId::validate()
{
}

web::json::value StandardRespDataByVideoAndNameAndId::toJson() const
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
    if(videoResultIsSet_) {
        val[utility::conversions::to_string_t("video_result")] = ModelBase::toJson(videoResult_);
    }

    return val;
}

bool StandardRespDataByVideoAndNameAndId::fromJson(const web::json::value& val)
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


std::string StandardRespDataByVideoAndNameAndId::getVerificationResult() const
{
    return verificationResult_;
}

void StandardRespDataByVideoAndNameAndId::setVerificationResult(const std::string& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool StandardRespDataByVideoAndNameAndId::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void StandardRespDataByVideoAndNameAndId::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

std::string StandardRespDataByVideoAndNameAndId::getVerificationMessage() const
{
    return verificationMessage_;
}

void StandardRespDataByVideoAndNameAndId::setVerificationMessage(const std::string& value)
{
    verificationMessage_ = value;
    verificationMessageIsSet_ = true;
}

bool StandardRespDataByVideoAndNameAndId::verificationMessageIsSet() const
{
    return verificationMessageIsSet_;
}

void StandardRespDataByVideoAndNameAndId::unsetverificationMessage()
{
    verificationMessageIsSet_ = false;
}

int32_t StandardRespDataByVideoAndNameAndId::getVerificationCode() const
{
    return verificationCode_;
}

void StandardRespDataByVideoAndNameAndId::setVerificationCode(int32_t value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool StandardRespDataByVideoAndNameAndId::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void StandardRespDataByVideoAndNameAndId::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

std::string StandardRespDataByVideoAndNameAndId::getSimilarity() const
{
    return similarity_;
}

void StandardRespDataByVideoAndNameAndId::setSimilarity(const std::string& value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool StandardRespDataByVideoAndNameAndId::similarityIsSet() const
{
    return similarityIsSet_;
}

void StandardRespDataByVideoAndNameAndId::unsetsimilarity()
{
    similarityIsSet_ = false;
}

VideoResult StandardRespDataByVideoAndNameAndId::getVideoResult() const
{
    return videoResult_;
}

void StandardRespDataByVideoAndNameAndId::setVideoResult(const VideoResult& value)
{
    videoResult_ = value;
    videoResultIsSet_ = true;
}

bool StandardRespDataByVideoAndNameAndId::videoResultIsSet() const
{
    return videoResultIsSet_;
}

void StandardRespDataByVideoAndNameAndId::unsetvideoResult()
{
    videoResultIsSet_ = false;
}

}
}
}
}
}


