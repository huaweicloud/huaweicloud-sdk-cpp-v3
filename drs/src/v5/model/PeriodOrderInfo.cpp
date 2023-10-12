

#include "huaweicloud/drs/v5/model/PeriodOrderInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PeriodOrderInfo::PeriodOrderInfo()
{
    periodType_ = 0;
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
}

PeriodOrderInfo::~PeriodOrderInfo() = default;

void PeriodOrderInfo::validate()
{
}

web::json::value PeriodOrderInfo::toJson() const
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

    return val;
}
bool PeriodOrderInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    return ok;
}


int32_t PeriodOrderInfo::getPeriodType() const
{
    return periodType_;
}

void PeriodOrderInfo::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PeriodOrderInfo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PeriodOrderInfo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t PeriodOrderInfo::getPeriodNum() const
{
    return periodNum_;
}

void PeriodOrderInfo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PeriodOrderInfo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PeriodOrderInfo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

int32_t PeriodOrderInfo::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void PeriodOrderInfo::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PeriodOrderInfo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PeriodOrderInfo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

}
}
}
}
}


