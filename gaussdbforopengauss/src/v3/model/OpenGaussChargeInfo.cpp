

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussChargeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussChargeInfo::OpenGaussChargeInfo()
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

OpenGaussChargeInfo::~OpenGaussChargeInfo() = default;

void OpenGaussChargeInfo::validate()
{
}

web::json::value OpenGaussChargeInfo::toJson() const
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
bool OpenGaussChargeInfo::fromJson(const web::json::value& val)
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


std::string OpenGaussChargeInfo::getChargeMode() const
{
    return chargeMode_;
}

void OpenGaussChargeInfo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool OpenGaussChargeInfo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void OpenGaussChargeInfo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string OpenGaussChargeInfo::getPeriodType() const
{
    return periodType_;
}

void OpenGaussChargeInfo::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool OpenGaussChargeInfo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void OpenGaussChargeInfo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t OpenGaussChargeInfo::getPeriodNum() const
{
    return periodNum_;
}

void OpenGaussChargeInfo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool OpenGaussChargeInfo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void OpenGaussChargeInfo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool OpenGaussChargeInfo::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void OpenGaussChargeInfo::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool OpenGaussChargeInfo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void OpenGaussChargeInfo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool OpenGaussChargeInfo::isIsAutoPay() const
{
    return isAutoPay_;
}

void OpenGaussChargeInfo::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool OpenGaussChargeInfo::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void OpenGaussChargeInfo::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


