

#include "huaweicloud/cfw/v1/model/CreateFirewallReq_charge_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallReq_charge_info::CreateFirewallReq_charge_info()
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

CreateFirewallReq_charge_info::~CreateFirewallReq_charge_info() = default;

void CreateFirewallReq_charge_info::validate()
{
}

web::json::value CreateFirewallReq_charge_info::toJson() const
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
bool CreateFirewallReq_charge_info::fromJson(const web::json::value& val)
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


std::string CreateFirewallReq_charge_info::getChargeMode() const
{
    return chargeMode_;
}

void CreateFirewallReq_charge_info::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool CreateFirewallReq_charge_info::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void CreateFirewallReq_charge_info::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string CreateFirewallReq_charge_info::getPeriodType() const
{
    return periodType_;
}

void CreateFirewallReq_charge_info::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool CreateFirewallReq_charge_info::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void CreateFirewallReq_charge_info::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t CreateFirewallReq_charge_info::getPeriodNum() const
{
    return periodNum_;
}

void CreateFirewallReq_charge_info::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool CreateFirewallReq_charge_info::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void CreateFirewallReq_charge_info::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool CreateFirewallReq_charge_info::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void CreateFirewallReq_charge_info::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool CreateFirewallReq_charge_info::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void CreateFirewallReq_charge_info::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool CreateFirewallReq_charge_info::isIsAutoPay() const
{
    return isAutoPay_;
}

void CreateFirewallReq_charge_info::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool CreateFirewallReq_charge_info::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void CreateFirewallReq_charge_info::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


