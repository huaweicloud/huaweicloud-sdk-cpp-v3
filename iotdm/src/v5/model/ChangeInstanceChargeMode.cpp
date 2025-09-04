

#include "huaweicloud/iotdm/v5/model/ChangeInstanceChargeMode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ChangeInstanceChargeMode::ChangeInstanceChargeMode()
{
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

ChangeInstanceChargeMode::~ChangeInstanceChargeMode() = default;

void ChangeInstanceChargeMode::validate()
{
}

web::json::value ChangeInstanceChargeMode::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ChangeInstanceChargeMode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ChangeInstanceChargeMode::getPeriodType() const
{
    return periodType_;
}

void ChangeInstanceChargeMode::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChangeInstanceChargeMode::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChangeInstanceChargeMode::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ChangeInstanceChargeMode::getPeriodNum() const
{
    return periodNum_;
}

void ChangeInstanceChargeMode::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChangeInstanceChargeMode::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChangeInstanceChargeMode::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool ChangeInstanceChargeMode::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChangeInstanceChargeMode::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChangeInstanceChargeMode::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChangeInstanceChargeMode::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool ChangeInstanceChargeMode::isIsAutoPay() const
{
    return isAutoPay_;
}

void ChangeInstanceChargeMode::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChangeInstanceChargeMode::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChangeInstanceChargeMode::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


