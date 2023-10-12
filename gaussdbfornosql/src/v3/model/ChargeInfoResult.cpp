

#include "huaweicloud/gaussdbfornosql/v3/model/ChargeInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ChargeInfoResult::ChargeInfoResult()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = "";
    periodNumIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

ChargeInfoResult::~ChargeInfoResult() = default;

void ChargeInfoResult::validate()
{
}

web::json::value ChargeInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool ChargeInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::string ChargeInfoResult::getChargeMode() const
{
    return chargeMode_;
}

void ChargeInfoResult::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChargeInfoResult::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChargeInfoResult::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ChargeInfoResult::getPeriodType() const
{
    return periodType_;
}

void ChargeInfoResult::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChargeInfoResult::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChargeInfoResult::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string ChargeInfoResult::getPeriodNum() const
{
    return periodNum_;
}

void ChargeInfoResult::setPeriodNum(const std::string& value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChargeInfoResult::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChargeInfoResult::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string ChargeInfoResult::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChargeInfoResult::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChargeInfoResult::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChargeInfoResult::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string ChargeInfoResult::getIsAutoPay() const
{
    return isAutoPay_;
}

void ChargeInfoResult::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChargeInfoResult::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChargeInfoResult::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


