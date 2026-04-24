

#include "huaweicloud/drs/v5/model/ChargeInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ChargeInfoVo::ChargeInfoVo()
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

ChargeInfoVo::~ChargeInfoVo() = default;

void ChargeInfoVo::validate()
{
}

web::json::value ChargeInfoVo::toJson() const
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
bool ChargeInfoVo::fromJson(const web::json::value& val)
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


std::string ChargeInfoVo::getChargeMode() const
{
    return chargeMode_;
}

void ChargeInfoVo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChargeInfoVo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChargeInfoVo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ChargeInfoVo::getPeriodType() const
{
    return periodType_;
}

void ChargeInfoVo::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChargeInfoVo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChargeInfoVo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ChargeInfoVo::getPeriodNum() const
{
    return periodNum_;
}

void ChargeInfoVo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChargeInfoVo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChargeInfoVo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool ChargeInfoVo::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChargeInfoVo::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChargeInfoVo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChargeInfoVo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool ChargeInfoVo::isIsAutoPay() const
{
    return isAutoPay_;
}

void ChargeInfoVo::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChargeInfoVo::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChargeInfoVo::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


