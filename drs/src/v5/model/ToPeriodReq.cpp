

#include "huaweicloud/drs/v5/model/ToPeriodReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ToPeriodReq::ToPeriodReq()
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

ToPeriodReq::~ToPeriodReq() = default;

void ToPeriodReq::validate()
{
}

web::json::value ToPeriodReq::toJson() const
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
bool ToPeriodReq::fromJson(const web::json::value& val)
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


std::string ToPeriodReq::getPeriodType() const
{
    return periodType_;
}

void ToPeriodReq::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ToPeriodReq::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ToPeriodReq::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ToPeriodReq::getPeriodNum() const
{
    return periodNum_;
}

void ToPeriodReq::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ToPeriodReq::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ToPeriodReq::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool ToPeriodReq::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ToPeriodReq::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ToPeriodReq::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ToPeriodReq::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool ToPeriodReq::isIsAutoPay() const
{
    return isAutoPay_;
}

void ToPeriodReq::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ToPeriodReq::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ToPeriodReq::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


