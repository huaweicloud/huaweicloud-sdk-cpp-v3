

#include "huaweicloud/gaussdb/v3/model/TaurusDbChargeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusDbChargeInfo::TaurusDbChargeInfo()
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

TaurusDbChargeInfo::~TaurusDbChargeInfo() = default;

void TaurusDbChargeInfo::validate()
{
}

web::json::value TaurusDbChargeInfo::toJson() const
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
bool TaurusDbChargeInfo::fromJson(const web::json::value& val)
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


std::string TaurusDbChargeInfo::getPeriodType() const
{
    return periodType_;
}

void TaurusDbChargeInfo::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool TaurusDbChargeInfo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void TaurusDbChargeInfo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t TaurusDbChargeInfo::getPeriodNum() const
{
    return periodNum_;
}

void TaurusDbChargeInfo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool TaurusDbChargeInfo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void TaurusDbChargeInfo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool TaurusDbChargeInfo::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void TaurusDbChargeInfo::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool TaurusDbChargeInfo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void TaurusDbChargeInfo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool TaurusDbChargeInfo::isIsAutoPay() const
{
    return isAutoPay_;
}

void TaurusDbChargeInfo::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool TaurusDbChargeInfo::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void TaurusDbChargeInfo::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


