

#include "huaweicloud/drs/v3/model/PeriodOrderResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




PeriodOrderResp::PeriodOrderResp()
{
    status_ = "";
    statusIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    chargingMode_ = 0;
    chargingModeIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
    effTime_ = "";
    effTimeIsSet_ = false;
    expTime_ = "";
    expTimeIsSet_ = false;
}

PeriodOrderResp::~PeriodOrderResp() = default;

void PeriodOrderResp::validate()
{
}

web::json::value PeriodOrderResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
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
    if(effTimeIsSet_) {
        val[utility::conversions::to_string_t("eff_time")] = ModelBase::toJson(effTime_);
    }
    if(expTimeIsSet_) {
        val[utility::conversions::to_string_t("exp_time")] = ModelBase::toJson(expTime_);
    }

    return val;
}

bool PeriodOrderResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("eff_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eff_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exp_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exp_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpTime(refVal);
        }
    }
    return ok;
}

std::string PeriodOrderResp::getStatus() const
{
    return status_;
}

void PeriodOrderResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PeriodOrderResp::statusIsSet() const
{
    return statusIsSet_;
}

void PeriodOrderResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PeriodOrderResp::getOrderId() const
{
    return orderId_;
}

void PeriodOrderResp::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool PeriodOrderResp::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void PeriodOrderResp::unsetorderId()
{
    orderIdIsSet_ = false;
}

int32_t PeriodOrderResp::getChargingMode() const
{
    return chargingMode_;
}

void PeriodOrderResp::setChargingMode(int32_t value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool PeriodOrderResp::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void PeriodOrderResp::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

int32_t PeriodOrderResp::getPeriodType() const
{
    return periodType_;
}

void PeriodOrderResp::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PeriodOrderResp::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PeriodOrderResp::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t PeriodOrderResp::getPeriodNum() const
{
    return periodNum_;
}

void PeriodOrderResp::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PeriodOrderResp::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PeriodOrderResp::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

int32_t PeriodOrderResp::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void PeriodOrderResp::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PeriodOrderResp::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PeriodOrderResp::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string PeriodOrderResp::getEffTime() const
{
    return effTime_;
}

void PeriodOrderResp::setEffTime(const std::string& value)
{
    effTime_ = value;
    effTimeIsSet_ = true;
}

bool PeriodOrderResp::effTimeIsSet() const
{
    return effTimeIsSet_;
}

void PeriodOrderResp::unseteffTime()
{
    effTimeIsSet_ = false;
}

std::string PeriodOrderResp::getExpTime() const
{
    return expTime_;
}

void PeriodOrderResp::setExpTime(const std::string& value)
{
    expTime_ = value;
    expTimeIsSet_ = true;
}

bool PeriodOrderResp::expTimeIsSet() const
{
    return expTimeIsSet_;
}

void PeriodOrderResp::unsetexpTime()
{
    expTimeIsSet_ = false;
}

}
}
}
}
}


