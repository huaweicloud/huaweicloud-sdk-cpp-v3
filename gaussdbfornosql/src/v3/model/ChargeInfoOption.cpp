

#include "huaweicloud/gaussdbfornosql/v3/model/ChargeInfoOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ChargeInfoOption::ChargeInfoOption()
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

ChargeInfoOption::~ChargeInfoOption() = default;

void ChargeInfoOption::validate()
{
}

web::json::value ChargeInfoOption::toJson() const
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

bool ChargeInfoOption::fromJson(const web::json::value& val)
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

std::string ChargeInfoOption::getChargeMode() const
{
    return chargeMode_;
}

void ChargeInfoOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ChargeInfoOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ChargeInfoOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string ChargeInfoOption::getPeriodType() const
{
    return periodType_;
}

void ChargeInfoOption::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChargeInfoOption::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChargeInfoOption::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string ChargeInfoOption::getPeriodNum() const
{
    return periodNum_;
}

void ChargeInfoOption::setPeriodNum(const std::string& value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChargeInfoOption::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChargeInfoOption::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string ChargeInfoOption::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChargeInfoOption::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChargeInfoOption::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChargeInfoOption::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string ChargeInfoOption::getIsAutoPay() const
{
    return isAutoPay_;
}

void ChargeInfoOption::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChargeInfoOption::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChargeInfoOption::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


