

#include "huaweicloud/rds/v3/model/ChargeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChargeInfo::ChargeInfo()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

ChargeInfo::~ChargeInfo() = default;

void ChargeInfo::validate()
{
}

web::json::value ChargeInfo::toJson() const
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

bool ChargeInfo::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}

std::string ChargeInfo::getChargeMode() const
{
    return chargeMode_;
}

void ChargeInfo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChargeInfo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChargeInfo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ChargeInfo::getPeriodType() const
{
    return periodType_;
}

void ChargeInfo::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChargeInfo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChargeInfo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ChargeInfo::getPeriodNum() const
{
    return periodNum_;
}

void ChargeInfo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChargeInfo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChargeInfo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool ChargeInfo::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChargeInfo::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChargeInfo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChargeInfo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool ChargeInfo::isIsAutoPay() const
{
    return isAutoPay_;
}

void ChargeInfo::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChargeInfo::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChargeInfo::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


