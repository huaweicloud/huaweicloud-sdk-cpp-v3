

#include "huaweicloud/cbr/v1/model/ChangeToPeriod.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ChangeToPeriod::ChangeToPeriod()
{
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    consoleUrl_ = "";
    consoleUrlIsSet_ = false;
    vaultIdsIsSet_ = false;
}

ChangeToPeriod::~ChangeToPeriod() = default;

void ChangeToPeriod::validate()
{
}

web::json::value ChangeToPeriod::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(consoleUrlIsSet_) {
        val[utility::conversions::to_string_t("console_url")] = ModelBase::toJson(consoleUrl_);
    }
    if(vaultIdsIsSet_) {
        val[utility::conversions::to_string_t("vault_ids")] = ModelBase::toJson(vaultIds_);
    }

    return val;
}
bool ChangeToPeriod::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("console_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("console_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsoleUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultIds(refVal);
        }
    }
    return ok;
}


std::string ChangeToPeriod::getChargingMode() const
{
    return chargingMode_;
}

void ChangeToPeriod::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ChangeToPeriod::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ChangeToPeriod::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ChangeToPeriod::getPeriodType() const
{
    return periodType_;
}

void ChangeToPeriod::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChangeToPeriod::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChangeToPeriod::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ChangeToPeriod::getPeriodNum() const
{
    return periodNum_;
}

void ChangeToPeriod::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChangeToPeriod::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChangeToPeriod::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool ChangeToPeriod::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ChangeToPeriod::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ChangeToPeriod::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ChangeToPeriod::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool ChangeToPeriod::isIsAutoPay() const
{
    return isAutoPay_;
}

void ChangeToPeriod::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ChangeToPeriod::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ChangeToPeriod::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string ChangeToPeriod::getConsoleUrl() const
{
    return consoleUrl_;
}

void ChangeToPeriod::setConsoleUrl(const std::string& value)
{
    consoleUrl_ = value;
    consoleUrlIsSet_ = true;
}

bool ChangeToPeriod::consoleUrlIsSet() const
{
    return consoleUrlIsSet_;
}

void ChangeToPeriod::unsetconsoleUrl()
{
    consoleUrlIsSet_ = false;
}

std::vector<std::string>& ChangeToPeriod::getVaultIds()
{
    return vaultIds_;
}

void ChangeToPeriod::setVaultIds(const std::vector<std::string>& value)
{
    vaultIds_ = value;
    vaultIdsIsSet_ = true;
}

bool ChangeToPeriod::vaultIdsIsSet() const
{
    return vaultIdsIsSet_;
}

void ChangeToPeriod::unsetvaultIds()
{
    vaultIdsIsSet_ = false;
}

}
}
}
}
}


