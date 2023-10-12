

#include "huaweicloud/cbr/v1/model/BillingCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BillingCreate::BillingCreate()
{
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    consistentLevel_ = "";
    consistentLevelIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    protectType_ = "";
    protectTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
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
    isMultiAz_ = false;
    isMultiAzIsSet_ = false;
}

BillingCreate::~BillingCreate() = default;

void BillingCreate::validate()
{
}

web::json::value BillingCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(consistentLevelIsSet_) {
        val[utility::conversions::to_string_t("consistent_level")] = ModelBase::toJson(consistentLevel_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(protectTypeIsSet_) {
        val[utility::conversions::to_string_t("protect_type")] = ModelBase::toJson(protectType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
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
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(consoleUrlIsSet_) {
        val[utility::conversions::to_string_t("console_url")] = ModelBase::toJson(consoleUrl_);
    }
    if(isMultiAzIsSet_) {
        val[utility::conversions::to_string_t("is_multi_az")] = ModelBase::toJson(isMultiAz_);
    }

    return val;
}
bool BillingCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistent_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistent_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistentLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("is_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiAz(refVal);
        }
    }
    return ok;
}


std::string BillingCreate::getCloudType() const
{
    return cloudType_;
}

void BillingCreate::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool BillingCreate::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void BillingCreate::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string BillingCreate::getConsistentLevel() const
{
    return consistentLevel_;
}

void BillingCreate::setConsistentLevel(const std::string& value)
{
    consistentLevel_ = value;
    consistentLevelIsSet_ = true;
}

bool BillingCreate::consistentLevelIsSet() const
{
    return consistentLevelIsSet_;
}

void BillingCreate::unsetconsistentLevel()
{
    consistentLevelIsSet_ = false;
}

std::string BillingCreate::getObjectType() const
{
    return objectType_;
}

void BillingCreate::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool BillingCreate::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void BillingCreate::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string BillingCreate::getProtectType() const
{
    return protectType_;
}

void BillingCreate::setProtectType(const std::string& value)
{
    protectType_ = value;
    protectTypeIsSet_ = true;
}

bool BillingCreate::protectTypeIsSet() const
{
    return protectTypeIsSet_;
}

void BillingCreate::unsetprotectType()
{
    protectTypeIsSet_ = false;
}

int32_t BillingCreate::getSize() const
{
    return size_;
}

void BillingCreate::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BillingCreate::sizeIsSet() const
{
    return sizeIsSet_;
}

void BillingCreate::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BillingCreate::getChargingMode() const
{
    return chargingMode_;
}

void BillingCreate::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool BillingCreate::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void BillingCreate::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string BillingCreate::getPeriodType() const
{
    return periodType_;
}

void BillingCreate::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool BillingCreate::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void BillingCreate::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t BillingCreate::getPeriodNum() const
{
    return periodNum_;
}

void BillingCreate::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool BillingCreate::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void BillingCreate::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool BillingCreate::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void BillingCreate::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool BillingCreate::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void BillingCreate::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool BillingCreate::isIsAutoPay() const
{
    return isAutoPay_;
}

void BillingCreate::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool BillingCreate::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void BillingCreate::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string BillingCreate::getConsoleUrl() const
{
    return consoleUrl_;
}

void BillingCreate::setConsoleUrl(const std::string& value)
{
    consoleUrl_ = value;
    consoleUrlIsSet_ = true;
}

bool BillingCreate::consoleUrlIsSet() const
{
    return consoleUrlIsSet_;
}

void BillingCreate::unsetconsoleUrl()
{
    consoleUrlIsSet_ = false;
}

bool BillingCreate::isIsMultiAz() const
{
    return isMultiAz_;
}

void BillingCreate::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool BillingCreate::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void BillingCreate::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

}
}
}
}
}


