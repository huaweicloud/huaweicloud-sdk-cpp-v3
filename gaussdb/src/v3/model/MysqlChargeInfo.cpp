

#include "huaweicloud/gaussdb/v3/model/MysqlChargeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlChargeInfo::MysqlChargeInfo()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

MysqlChargeInfo::~MysqlChargeInfo() = default;

void MysqlChargeInfo::validate()
{
}

web::json::value MysqlChargeInfo::toJson() const
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
bool MysqlChargeInfo::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::string MysqlChargeInfo::getChargeMode() const
{
    return chargeMode_;
}

void MysqlChargeInfo::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool MysqlChargeInfo::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void MysqlChargeInfo::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string MysqlChargeInfo::getPeriodType() const
{
    return periodType_;
}

void MysqlChargeInfo::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool MysqlChargeInfo::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void MysqlChargeInfo::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t MysqlChargeInfo::getPeriodNum() const
{
    return periodNum_;
}

void MysqlChargeInfo::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool MysqlChargeInfo::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void MysqlChargeInfo::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string MysqlChargeInfo::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void MysqlChargeInfo::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool MysqlChargeInfo::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void MysqlChargeInfo::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string MysqlChargeInfo::getIsAutoPay() const
{
    return isAutoPay_;
}

void MysqlChargeInfo::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool MysqlChargeInfo::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void MysqlChargeInfo::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


