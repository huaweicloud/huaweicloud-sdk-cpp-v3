

#include "huaweicloud/cce/v3/model/PeriodOrderParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PeriodOrderParam::PeriodOrderParam()
{
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
}

PeriodOrderParam::~PeriodOrderParam() = default;

void PeriodOrderParam::validate()
{
}

web::json::value PeriodOrderParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("isAutoRenew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("periodNum")] = ModelBase::toJson(periodNum_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("periodType")] = ModelBase::toJson(periodType_);
    }

    return val;
}
bool PeriodOrderParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isAutoPay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoPay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoRenew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRenew"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    return ok;
}


bool PeriodOrderParam::isIsAutoPay() const
{
    return isAutoPay_;
}

void PeriodOrderParam::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool PeriodOrderParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void PeriodOrderParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

bool PeriodOrderParam::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void PeriodOrderParam::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PeriodOrderParam::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PeriodOrderParam::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

int32_t PeriodOrderParam::getPeriodNum() const
{
    return periodNum_;
}

void PeriodOrderParam::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PeriodOrderParam::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PeriodOrderParam::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string PeriodOrderParam::getPeriodType() const
{
    return periodType_;
}

void PeriodOrderParam::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PeriodOrderParam::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PeriodOrderParam::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

}
}
}
}
}


