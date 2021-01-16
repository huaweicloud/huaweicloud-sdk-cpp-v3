

#include "huaweicloud/evs/v2/model/BssParamForCreateVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BssParamForCreateVolume::BssParamForCreateVolume()
{
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
}

BssParamForCreateVolume::~BssParamForCreateVolume() = default;

void BssParamForCreateVolume::validate()
{
}

web::json::value BssParamForCreateVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("chargingMode")] = ModelBase::toJson(chargingMode_);
    }
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

bool BssParamForCreateVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chargingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargingMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoPay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoPay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoRenew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRenew"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string BssParamForCreateVolume::getChargingMode() const
{
    return chargingMode_;
}

void BssParamForCreateVolume::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool BssParamForCreateVolume::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void BssParamForCreateVolume::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string BssParamForCreateVolume::getIsAutoPay() const
{
    return isAutoPay_;
}

void BssParamForCreateVolume::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool BssParamForCreateVolume::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void BssParamForCreateVolume::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string BssParamForCreateVolume::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void BssParamForCreateVolume::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool BssParamForCreateVolume::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void BssParamForCreateVolume::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

int32_t BssParamForCreateVolume::getPeriodNum() const
{
    return periodNum_;
}

void BssParamForCreateVolume::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool BssParamForCreateVolume::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void BssParamForCreateVolume::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string BssParamForCreateVolume::getPeriodType() const
{
    return periodType_;
}

void BssParamForCreateVolume::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool BssParamForCreateVolume::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void BssParamForCreateVolume::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

}
}
}
}
}


