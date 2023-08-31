

#include "huaweicloud/ecs/v2/model/PrePaidServerExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerExtendParam::PrePaidServerExtendParam()
{
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    regionID_ = "";
    regionIDIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    supportAutoRecovery_ = false;
    supportAutoRecoveryIsSet_ = false;
    marketType_ = "";
    marketTypeIsSet_ = false;
    spotPrice_ = "";
    spotPriceIsSet_ = false;
    diskPrior_ = "";
    diskPriorIsSet_ = false;
    spotDurationHours_ = 0;
    spotDurationHoursIsSet_ = false;
    interruptionPolicy_ = "";
    interruptionPolicyIsSet_ = false;
    cbCsbsBackup_ = "";
    cbCsbsBackupIsSet_ = false;
    spotDurationCount_ = 0;
    spotDurationCountIsSet_ = false;
}

PrePaidServerExtendParam::~PrePaidServerExtendParam() = default;

void PrePaidServerExtendParam::validate()
{
}

web::json::value PrePaidServerExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("chargingMode")] = ModelBase::toJson(chargingMode_);
    }
    if(regionIDIsSet_) {
        val[utility::conversions::to_string_t("regionID")] = ModelBase::toJson(regionID_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("periodType")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("periodNum")] = ModelBase::toJson(periodNum_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("isAutoRenew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(supportAutoRecoveryIsSet_) {
        val[utility::conversions::to_string_t("support_auto_recovery")] = ModelBase::toJson(supportAutoRecovery_);
    }
    if(marketTypeIsSet_) {
        val[utility::conversions::to_string_t("marketType")] = ModelBase::toJson(marketType_);
    }
    if(spotPriceIsSet_) {
        val[utility::conversions::to_string_t("spotPrice")] = ModelBase::toJson(spotPrice_);
    }
    if(diskPriorIsSet_) {
        val[utility::conversions::to_string_t("diskPrior")] = ModelBase::toJson(diskPrior_);
    }
    if(spotDurationHoursIsSet_) {
        val[utility::conversions::to_string_t("spot_duration_hours")] = ModelBase::toJson(spotDurationHours_);
    }
    if(interruptionPolicyIsSet_) {
        val[utility::conversions::to_string_t("interruption_policy")] = ModelBase::toJson(interruptionPolicy_);
    }
    if(cbCsbsBackupIsSet_) {
        val[utility::conversions::to_string_t("CB_CSBS_BACKUP")] = ModelBase::toJson(cbCsbsBackup_);
    }
    if(spotDurationCountIsSet_) {
        val[utility::conversions::to_string_t("spot_duration_count")] = ModelBase::toJson(spotDurationCount_);
    }

    return val;
}

bool PrePaidServerExtendParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("regionID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regionID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("periodNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isAutoPay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoPay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_auto_recovery"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_auto_recovery"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAutoRecovery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marketType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marketType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spotPrice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spotPrice"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diskPrior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diskPrior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskPrior(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spot_duration_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spot_duration_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotDurationHours(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interruption_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interruption_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterruptionPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("CB_CSBS_BACKUP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("CB_CSBS_BACKUP"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCbCsbsBackup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spot_duration_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spot_duration_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotDurationCount(refVal);
        }
    }
    return ok;
}

std::string PrePaidServerExtendParam::getChargingMode() const
{
    return chargingMode_;
}

void PrePaidServerExtendParam::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool PrePaidServerExtendParam::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void PrePaidServerExtendParam::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string PrePaidServerExtendParam::getRegionID() const
{
    return regionID_;
}

void PrePaidServerExtendParam::setRegionID(const std::string& value)
{
    regionID_ = value;
    regionIDIsSet_ = true;
}

bool PrePaidServerExtendParam::regionIDIsSet() const
{
    return regionIDIsSet_;
}

void PrePaidServerExtendParam::unsetregionID()
{
    regionIDIsSet_ = false;
}

std::string PrePaidServerExtendParam::getPeriodType() const
{
    return periodType_;
}

void PrePaidServerExtendParam::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PrePaidServerExtendParam::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PrePaidServerExtendParam::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t PrePaidServerExtendParam::getPeriodNum() const
{
    return periodNum_;
}

void PrePaidServerExtendParam::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PrePaidServerExtendParam::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PrePaidServerExtendParam::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string PrePaidServerExtendParam::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void PrePaidServerExtendParam::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PrePaidServerExtendParam::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PrePaidServerExtendParam::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

std::string PrePaidServerExtendParam::getIsAutoPay() const
{
    return isAutoPay_;
}

void PrePaidServerExtendParam::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool PrePaidServerExtendParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void PrePaidServerExtendParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string PrePaidServerExtendParam::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PrePaidServerExtendParam::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PrePaidServerExtendParam::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PrePaidServerExtendParam::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool PrePaidServerExtendParam::isSupportAutoRecovery() const
{
    return supportAutoRecovery_;
}

void PrePaidServerExtendParam::setSupportAutoRecovery(bool value)
{
    supportAutoRecovery_ = value;
    supportAutoRecoveryIsSet_ = true;
}

bool PrePaidServerExtendParam::supportAutoRecoveryIsSet() const
{
    return supportAutoRecoveryIsSet_;
}

void PrePaidServerExtendParam::unsetsupportAutoRecovery()
{
    supportAutoRecoveryIsSet_ = false;
}

std::string PrePaidServerExtendParam::getMarketType() const
{
    return marketType_;
}

void PrePaidServerExtendParam::setMarketType(const std::string& value)
{
    marketType_ = value;
    marketTypeIsSet_ = true;
}

bool PrePaidServerExtendParam::marketTypeIsSet() const
{
    return marketTypeIsSet_;
}

void PrePaidServerExtendParam::unsetmarketType()
{
    marketTypeIsSet_ = false;
}

std::string PrePaidServerExtendParam::getSpotPrice() const
{
    return spotPrice_;
}

void PrePaidServerExtendParam::setSpotPrice(const std::string& value)
{
    spotPrice_ = value;
    spotPriceIsSet_ = true;
}

bool PrePaidServerExtendParam::spotPriceIsSet() const
{
    return spotPriceIsSet_;
}

void PrePaidServerExtendParam::unsetspotPrice()
{
    spotPriceIsSet_ = false;
}

std::string PrePaidServerExtendParam::getDiskPrior() const
{
    return diskPrior_;
}

void PrePaidServerExtendParam::setDiskPrior(const std::string& value)
{
    diskPrior_ = value;
    diskPriorIsSet_ = true;
}

bool PrePaidServerExtendParam::diskPriorIsSet() const
{
    return diskPriorIsSet_;
}

void PrePaidServerExtendParam::unsetdiskPrior()
{
    diskPriorIsSet_ = false;
}

int32_t PrePaidServerExtendParam::getSpotDurationHours() const
{
    return spotDurationHours_;
}

void PrePaidServerExtendParam::setSpotDurationHours(int32_t value)
{
    spotDurationHours_ = value;
    spotDurationHoursIsSet_ = true;
}

bool PrePaidServerExtendParam::spotDurationHoursIsSet() const
{
    return spotDurationHoursIsSet_;
}

void PrePaidServerExtendParam::unsetspotDurationHours()
{
    spotDurationHoursIsSet_ = false;
}

std::string PrePaidServerExtendParam::getInterruptionPolicy() const
{
    return interruptionPolicy_;
}

void PrePaidServerExtendParam::setInterruptionPolicy(const std::string& value)
{
    interruptionPolicy_ = value;
    interruptionPolicyIsSet_ = true;
}

bool PrePaidServerExtendParam::interruptionPolicyIsSet() const
{
    return interruptionPolicyIsSet_;
}

void PrePaidServerExtendParam::unsetinterruptionPolicy()
{
    interruptionPolicyIsSet_ = false;
}

std::string PrePaidServerExtendParam::getCbCsbsBackup() const
{
    return cbCsbsBackup_;
}

void PrePaidServerExtendParam::setCbCsbsBackup(const std::string& value)
{
    cbCsbsBackup_ = value;
    cbCsbsBackupIsSet_ = true;
}

bool PrePaidServerExtendParam::cbCsbsBackupIsSet() const
{
    return cbCsbsBackupIsSet_;
}

void PrePaidServerExtendParam::unsetcbCsbsBackup()
{
    cbCsbsBackupIsSet_ = false;
}

int32_t PrePaidServerExtendParam::getSpotDurationCount() const
{
    return spotDurationCount_;
}

void PrePaidServerExtendParam::setSpotDurationCount(int32_t value)
{
    spotDurationCount_ = value;
    spotDurationCountIsSet_ = true;
}

bool PrePaidServerExtendParam::spotDurationCountIsSet() const
{
    return spotDurationCountIsSet_;
}

void PrePaidServerExtendParam::unsetspotDurationCount()
{
    spotDurationCountIsSet_ = false;
}

}
}
}
}
}


