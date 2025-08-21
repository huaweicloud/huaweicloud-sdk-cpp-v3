

#include "huaweicloud/rgc/v1/model/ShowBestPracticeAccountInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowBestPracticeAccountInfoResponse::ShowBestPracticeAccountInfoResponse()
{
    accountType_ = "";
    accountTypeIsSet_ = false;
    effectiveStartTime_ = utility::datetime();
    effectiveStartTimeIsSet_ = false;
    effectiveExpirationTime_ = utility::datetime();
    effectiveExpirationTimeIsSet_ = false;
    currentTime_ = utility::datetime();
    currentTimeIsSet_ = false;
}

ShowBestPracticeAccountInfoResponse::~ShowBestPracticeAccountInfoResponse() = default;

void ShowBestPracticeAccountInfoResponse::validate()
{
}

web::json::value ShowBestPracticeAccountInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountTypeIsSet_) {
        val[utility::conversions::to_string_t("account_type")] = ModelBase::toJson(accountType_);
    }
    if(effectiveStartTimeIsSet_) {
        val[utility::conversions::to_string_t("effective_start_time")] = ModelBase::toJson(effectiveStartTime_);
    }
    if(effectiveExpirationTimeIsSet_) {
        val[utility::conversions::to_string_t("effective_expiration_time")] = ModelBase::toJson(effectiveExpirationTime_);
    }
    if(currentTimeIsSet_) {
        val[utility::conversions::to_string_t("current_time")] = ModelBase::toJson(currentTime_);
    }

    return val;
}
bool ShowBestPracticeAccountInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_expiration_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTime(refVal);
        }
    }
    return ok;
}


std::string ShowBestPracticeAccountInfoResponse::getAccountType() const
{
    return accountType_;
}

void ShowBestPracticeAccountInfoResponse::setAccountType(const std::string& value)
{
    accountType_ = value;
    accountTypeIsSet_ = true;
}

bool ShowBestPracticeAccountInfoResponse::accountTypeIsSet() const
{
    return accountTypeIsSet_;
}

void ShowBestPracticeAccountInfoResponse::unsetaccountType()
{
    accountTypeIsSet_ = false;
}

utility::datetime ShowBestPracticeAccountInfoResponse::getEffectiveStartTime() const
{
    return effectiveStartTime_;
}

void ShowBestPracticeAccountInfoResponse::setEffectiveStartTime(const utility::datetime& value)
{
    effectiveStartTime_ = value;
    effectiveStartTimeIsSet_ = true;
}

bool ShowBestPracticeAccountInfoResponse::effectiveStartTimeIsSet() const
{
    return effectiveStartTimeIsSet_;
}

void ShowBestPracticeAccountInfoResponse::unseteffectiveStartTime()
{
    effectiveStartTimeIsSet_ = false;
}

utility::datetime ShowBestPracticeAccountInfoResponse::getEffectiveExpirationTime() const
{
    return effectiveExpirationTime_;
}

void ShowBestPracticeAccountInfoResponse::setEffectiveExpirationTime(const utility::datetime& value)
{
    effectiveExpirationTime_ = value;
    effectiveExpirationTimeIsSet_ = true;
}

bool ShowBestPracticeAccountInfoResponse::effectiveExpirationTimeIsSet() const
{
    return effectiveExpirationTimeIsSet_;
}

void ShowBestPracticeAccountInfoResponse::unseteffectiveExpirationTime()
{
    effectiveExpirationTimeIsSet_ = false;
}

utility::datetime ShowBestPracticeAccountInfoResponse::getCurrentTime() const
{
    return currentTime_;
}

void ShowBestPracticeAccountInfoResponse::setCurrentTime(const utility::datetime& value)
{
    currentTime_ = value;
    currentTimeIsSet_ = true;
}

bool ShowBestPracticeAccountInfoResponse::currentTimeIsSet() const
{
    return currentTimeIsSet_;
}

void ShowBestPracticeAccountInfoResponse::unsetcurrentTime()
{
    currentTimeIsSet_ = false;
}

}
}
}
}
}


