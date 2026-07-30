

#include "huaweicloud/modelarts/v1/model/ChargingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChargingInfo::ChargingInfo()
{
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
}

ChargingInfo::~ChargingInfo() = default;

void ChargingInfo::validate()
{
}

web::json::value ChargingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }

    return val;
}
bool ChargingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    return ok;
}


std::string ChargingInfo::getChargingMode() const
{
    return chargingMode_;
}

void ChargingInfo::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ChargingInfo::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ChargingInfo::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

bool ChargingInfo::isIsAutoPay() const
{
    return isAutoPay_;
}

void ChargingInfo::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChargingInfo::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChargingInfo::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

bool ChargingInfo::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChargingInfo::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChargingInfo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChargingInfo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

int32_t ChargingInfo::getPeriodNum() const
{
    return periodNum_;
}

void ChargingInfo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChargingInfo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChargingInfo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string ChargingInfo::getPeriodType() const
{
    return periodType_;
}

void ChargingInfo::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChargingInfo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChargingInfo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

}
}
}
}
}


