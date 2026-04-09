

#include "huaweicloud/gaussdbforopengauss/v3/model/PeriodChargeInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




PeriodChargeInfoOption::PeriodChargeInfoOption()
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

PeriodChargeInfoOption::~PeriodChargeInfoOption() = default;

void PeriodChargeInfoOption::validate()
{
}

web::json::value PeriodChargeInfoOption::toJson() const
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
bool PeriodChargeInfoOption::fromJson(const web::json::value& val)
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


std::string PeriodChargeInfoOption::getPeriodType() const
{
    return periodType_;
}

void PeriodChargeInfoOption::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PeriodChargeInfoOption::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PeriodChargeInfoOption::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t PeriodChargeInfoOption::getPeriodNum() const
{
    return periodNum_;
}

void PeriodChargeInfoOption::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PeriodChargeInfoOption::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PeriodChargeInfoOption::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool PeriodChargeInfoOption::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void PeriodChargeInfoOption::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PeriodChargeInfoOption::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PeriodChargeInfoOption::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool PeriodChargeInfoOption::isIsAutoPay() const
{
    return isAutoPay_;
}

void PeriodChargeInfoOption::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool PeriodChargeInfoOption::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void PeriodChargeInfoOption::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


