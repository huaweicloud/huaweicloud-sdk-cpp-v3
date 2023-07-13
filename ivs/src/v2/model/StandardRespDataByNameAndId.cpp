

#include "huaweicloud/ivs/v2/model/StandardRespDataByNameAndId.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




StandardRespDataByNameAndId::StandardRespDataByNameAndId()
{
    verificationResult_ = "";
    verificationResultIsSet_ = false;
    verificationMessage_ = "";
    verificationMessageIsSet_ = false;
    verificationCode_ = 0;
    verificationCodeIsSet_ = false;
    similarity_ = "";
    similarityIsSet_ = false;
}

StandardRespDataByNameAndId::~StandardRespDataByNameAndId() = default;

void StandardRespDataByNameAndId::validate()
{
}

web::json::value StandardRespDataByNameAndId::toJson() const
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

    return val;
}

bool StandardRespDataByNameAndId::fromJson(const web::json::value& val)
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
    return ok;
}

std::string StandardRespDataByNameAndId::getVerificationResult() const
{
    return verificationResult_;
}

void StandardRespDataByNameAndId::setVerificationResult(const std::string& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool StandardRespDataByNameAndId::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void StandardRespDataByNameAndId::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

std::string StandardRespDataByNameAndId::getVerificationMessage() const
{
    return verificationMessage_;
}

void StandardRespDataByNameAndId::setVerificationMessage(const std::string& value)
{
    verificationMessage_ = value;
    verificationMessageIsSet_ = true;
}

bool StandardRespDataByNameAndId::verificationMessageIsSet() const
{
    return verificationMessageIsSet_;
}

void StandardRespDataByNameAndId::unsetverificationMessage()
{
    verificationMessageIsSet_ = false;
}

int32_t StandardRespDataByNameAndId::getVerificationCode() const
{
    return verificationCode_;
}

void StandardRespDataByNameAndId::setVerificationCode(int32_t value)
{
    verificationCode_ = value;
    verificationCodeIsSet_ = true;
}

bool StandardRespDataByNameAndId::verificationCodeIsSet() const
{
    return verificationCodeIsSet_;
}

void StandardRespDataByNameAndId::unsetverificationCode()
{
    verificationCodeIsSet_ = false;
}

std::string StandardRespDataByNameAndId::getSimilarity() const
{
    return similarity_;
}

void StandardRespDataByNameAndId::setSimilarity(const std::string& value)
{
    similarity_ = value;
    similarityIsSet_ = true;
}

bool StandardRespDataByNameAndId::similarityIsSet() const
{
    return similarityIsSet_;
}

void StandardRespDataByNameAndId::unsetsimilarity()
{
    similarityIsSet_ = false;
}

}
}
}
}
}


