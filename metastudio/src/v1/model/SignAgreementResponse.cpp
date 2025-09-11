

#include "huaweicloud/metastudio/v1/model/SignAgreementResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SignAgreementResponse::SignAgreementResponse()
{
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    needToSign_ = false;
    needToSignIsSet_ = false;
    signedVersion_ = "";
    signedVersionIsSet_ = false;
    signedTime_ = "";
    signedTimeIsSet_ = false;
    resignDeadline_ = "";
    resignDeadlineIsSet_ = false;
    resignExpireProcessMode_ = "";
    resignExpireProcessModeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SignAgreementResponse::~SignAgreementResponse() = default;

void SignAgreementResponse::validate()
{
}

web::json::value SignAgreementResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(needToSignIsSet_) {
        val[utility::conversions::to_string_t("need_to_sign")] = ModelBase::toJson(needToSign_);
    }
    if(signedVersionIsSet_) {
        val[utility::conversions::to_string_t("signed_version")] = ModelBase::toJson(signedVersion_);
    }
    if(signedTimeIsSet_) {
        val[utility::conversions::to_string_t("signed_time")] = ModelBase::toJson(signedTime_);
    }
    if(resignDeadlineIsSet_) {
        val[utility::conversions::to_string_t("resign_deadline")] = ModelBase::toJson(resignDeadline_);
    }
    if(resignExpireProcessModeIsSet_) {
        val[utility::conversions::to_string_t("resign_expire_process_mode")] = ModelBase::toJson(resignExpireProcessMode_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SignAgreementResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_to_sign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_to_sign"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedToSign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signed_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signed_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignedVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resign_deadline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resign_deadline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResignDeadline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resign_expire_process_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resign_expire_process_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResignExpireProcessMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string SignAgreementResponse::getCurrentVersion() const
{
    return currentVersion_;
}

void SignAgreementResponse::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool SignAgreementResponse::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void SignAgreementResponse::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

bool SignAgreementResponse::isNeedToSign() const
{
    return needToSign_;
}

void SignAgreementResponse::setNeedToSign(bool value)
{
    needToSign_ = value;
    needToSignIsSet_ = true;
}

bool SignAgreementResponse::needToSignIsSet() const
{
    return needToSignIsSet_;
}

void SignAgreementResponse::unsetneedToSign()
{
    needToSignIsSet_ = false;
}

std::string SignAgreementResponse::getSignedVersion() const
{
    return signedVersion_;
}

void SignAgreementResponse::setSignedVersion(const std::string& value)
{
    signedVersion_ = value;
    signedVersionIsSet_ = true;
}

bool SignAgreementResponse::signedVersionIsSet() const
{
    return signedVersionIsSet_;
}

void SignAgreementResponse::unsetsignedVersion()
{
    signedVersionIsSet_ = false;
}

std::string SignAgreementResponse::getSignedTime() const
{
    return signedTime_;
}

void SignAgreementResponse::setSignedTime(const std::string& value)
{
    signedTime_ = value;
    signedTimeIsSet_ = true;
}

bool SignAgreementResponse::signedTimeIsSet() const
{
    return signedTimeIsSet_;
}

void SignAgreementResponse::unsetsignedTime()
{
    signedTimeIsSet_ = false;
}

std::string SignAgreementResponse::getResignDeadline() const
{
    return resignDeadline_;
}

void SignAgreementResponse::setResignDeadline(const std::string& value)
{
    resignDeadline_ = value;
    resignDeadlineIsSet_ = true;
}

bool SignAgreementResponse::resignDeadlineIsSet() const
{
    return resignDeadlineIsSet_;
}

void SignAgreementResponse::unsetresignDeadline()
{
    resignDeadlineIsSet_ = false;
}

std::string SignAgreementResponse::getResignExpireProcessMode() const
{
    return resignExpireProcessMode_;
}

void SignAgreementResponse::setResignExpireProcessMode(const std::string& value)
{
    resignExpireProcessMode_ = value;
    resignExpireProcessModeIsSet_ = true;
}

bool SignAgreementResponse::resignExpireProcessModeIsSet() const
{
    return resignExpireProcessModeIsSet_;
}

void SignAgreementResponse::unsetresignExpireProcessMode()
{
    resignExpireProcessModeIsSet_ = false;
}

std::string SignAgreementResponse::getXRequestId() const
{
    return xRequestId_;
}

void SignAgreementResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SignAgreementResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SignAgreementResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


