

#include "huaweicloud/metastudio/v1/model/SignSpecialAgreementResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SignSpecialAgreementResponse::SignSpecialAgreementResponse()
{
    agreementType_ = "";
    agreementTypeIsSet_ = false;
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    signedVersion_ = "";
    signedVersionIsSet_ = false;
    signedTime_ = "";
    signedTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

SignSpecialAgreementResponse::~SignSpecialAgreementResponse() = default;

void SignSpecialAgreementResponse::validate()
{
}

web::json::value SignSpecialAgreementResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agreementTypeIsSet_) {
        val[utility::conversions::to_string_t("agreement_type")] = ModelBase::toJson(agreementType_);
    }
    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(signedVersionIsSet_) {
        val[utility::conversions::to_string_t("signed_version")] = ModelBase::toJson(signedVersion_);
    }
    if(signedTimeIsSet_) {
        val[utility::conversions::to_string_t("signed_time")] = ModelBase::toJson(signedTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool SignSpecialAgreementResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agreement_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agreement_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgreementType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
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


std::string SignSpecialAgreementResponse::getAgreementType() const
{
    return agreementType_;
}

void SignSpecialAgreementResponse::setAgreementType(const std::string& value)
{
    agreementType_ = value;
    agreementTypeIsSet_ = true;
}

bool SignSpecialAgreementResponse::agreementTypeIsSet() const
{
    return agreementTypeIsSet_;
}

void SignSpecialAgreementResponse::unsetagreementType()
{
    agreementTypeIsSet_ = false;
}

std::string SignSpecialAgreementResponse::getCurrentVersion() const
{
    return currentVersion_;
}

void SignSpecialAgreementResponse::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool SignSpecialAgreementResponse::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void SignSpecialAgreementResponse::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

std::string SignSpecialAgreementResponse::getSignedVersion() const
{
    return signedVersion_;
}

void SignSpecialAgreementResponse::setSignedVersion(const std::string& value)
{
    signedVersion_ = value;
    signedVersionIsSet_ = true;
}

bool SignSpecialAgreementResponse::signedVersionIsSet() const
{
    return signedVersionIsSet_;
}

void SignSpecialAgreementResponse::unsetsignedVersion()
{
    signedVersionIsSet_ = false;
}

std::string SignSpecialAgreementResponse::getSignedTime() const
{
    return signedTime_;
}

void SignSpecialAgreementResponse::setSignedTime(const std::string& value)
{
    signedTime_ = value;
    signedTimeIsSet_ = true;
}

bool SignSpecialAgreementResponse::signedTimeIsSet() const
{
    return signedTimeIsSet_;
}

void SignSpecialAgreementResponse::unsetsignedTime()
{
    signedTimeIsSet_ = false;
}

std::string SignSpecialAgreementResponse::getXRequestId() const
{
    return xRequestId_;
}

void SignSpecialAgreementResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SignSpecialAgreementResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SignSpecialAgreementResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


