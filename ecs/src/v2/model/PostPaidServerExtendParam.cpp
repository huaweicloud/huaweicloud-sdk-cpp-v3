

#include "huaweicloud/ecs/v2/model/PostPaidServerExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerExtendParam::PostPaidServerExtendParam()
{
    chargingMode_ = 0;
    chargingModeIsSet_ = false;
    regionID_ = "";
    regionIDIsSet_ = false;
    supportAutoRecovery_ = false;
    supportAutoRecoveryIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
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
    spotDurationCount_ = 0;
    spotDurationCountIsSet_ = false;
    cbCsbsBackup_ = "";
    cbCsbsBackupIsSet_ = false;
}

PostPaidServerExtendParam::~PostPaidServerExtendParam() = default;

void PostPaidServerExtendParam::validate()
{
}

web::json::value PostPaidServerExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("chargingMode")] = ModelBase::toJson(chargingMode_);
    }
    if(regionIDIsSet_) {
        val[utility::conversions::to_string_t("regionID")] = ModelBase::toJson(regionID_);
    }
    if(supportAutoRecoveryIsSet_) {
        val[utility::conversions::to_string_t("support_auto_recovery")] = ModelBase::toJson(supportAutoRecovery_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
    if(spotDurationCountIsSet_) {
        val[utility::conversions::to_string_t("spot_duration_count")] = ModelBase::toJson(spotDurationCount_);
    }
    if(cbCsbsBackupIsSet_) {
        val[utility::conversions::to_string_t("CB_CSBS_BACKUP")] = ModelBase::toJson(cbCsbsBackup_);
    }

    return val;
}

bool PostPaidServerExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("chargingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chargingMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("support_auto_recovery"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_auto_recovery"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAutoRecovery(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("spot_duration_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spot_duration_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotDurationCount(refVal);
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
    return ok;
}


int32_t PostPaidServerExtendParam::getChargingMode() const
{
    return chargingMode_;
}

void PostPaidServerExtendParam::setChargingMode(int32_t value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool PostPaidServerExtendParam::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void PostPaidServerExtendParam::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string PostPaidServerExtendParam::getRegionID() const
{
    return regionID_;
}

void PostPaidServerExtendParam::setRegionID(const std::string& value)
{
    regionID_ = value;
    regionIDIsSet_ = true;
}

bool PostPaidServerExtendParam::regionIDIsSet() const
{
    return regionIDIsSet_;
}

void PostPaidServerExtendParam::unsetregionID()
{
    regionIDIsSet_ = false;
}

bool PostPaidServerExtendParam::isSupportAutoRecovery() const
{
    return supportAutoRecovery_;
}

void PostPaidServerExtendParam::setSupportAutoRecovery(bool value)
{
    supportAutoRecovery_ = value;
    supportAutoRecoveryIsSet_ = true;
}

bool PostPaidServerExtendParam::supportAutoRecoveryIsSet() const
{
    return supportAutoRecoveryIsSet_;
}

void PostPaidServerExtendParam::unsetsupportAutoRecovery()
{
    supportAutoRecoveryIsSet_ = false;
}

std::string PostPaidServerExtendParam::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PostPaidServerExtendParam::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PostPaidServerExtendParam::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PostPaidServerExtendParam::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PostPaidServerExtendParam::getMarketType() const
{
    return marketType_;
}

void PostPaidServerExtendParam::setMarketType(const std::string& value)
{
    marketType_ = value;
    marketTypeIsSet_ = true;
}

bool PostPaidServerExtendParam::marketTypeIsSet() const
{
    return marketTypeIsSet_;
}

void PostPaidServerExtendParam::unsetmarketType()
{
    marketTypeIsSet_ = false;
}

std::string PostPaidServerExtendParam::getSpotPrice() const
{
    return spotPrice_;
}

void PostPaidServerExtendParam::setSpotPrice(const std::string& value)
{
    spotPrice_ = value;
    spotPriceIsSet_ = true;
}

bool PostPaidServerExtendParam::spotPriceIsSet() const
{
    return spotPriceIsSet_;
}

void PostPaidServerExtendParam::unsetspotPrice()
{
    spotPriceIsSet_ = false;
}

std::string PostPaidServerExtendParam::getDiskPrior() const
{
    return diskPrior_;
}

void PostPaidServerExtendParam::setDiskPrior(const std::string& value)
{
    diskPrior_ = value;
    diskPriorIsSet_ = true;
}

bool PostPaidServerExtendParam::diskPriorIsSet() const
{
    return diskPriorIsSet_;
}

void PostPaidServerExtendParam::unsetdiskPrior()
{
    diskPriorIsSet_ = false;
}

int32_t PostPaidServerExtendParam::getSpotDurationHours() const
{
    return spotDurationHours_;
}

void PostPaidServerExtendParam::setSpotDurationHours(int32_t value)
{
    spotDurationHours_ = value;
    spotDurationHoursIsSet_ = true;
}

bool PostPaidServerExtendParam::spotDurationHoursIsSet() const
{
    return spotDurationHoursIsSet_;
}

void PostPaidServerExtendParam::unsetspotDurationHours()
{
    spotDurationHoursIsSet_ = false;
}

std::string PostPaidServerExtendParam::getInterruptionPolicy() const
{
    return interruptionPolicy_;
}

void PostPaidServerExtendParam::setInterruptionPolicy(const std::string& value)
{
    interruptionPolicy_ = value;
    interruptionPolicyIsSet_ = true;
}

bool PostPaidServerExtendParam::interruptionPolicyIsSet() const
{
    return interruptionPolicyIsSet_;
}

void PostPaidServerExtendParam::unsetinterruptionPolicy()
{
    interruptionPolicyIsSet_ = false;
}

int32_t PostPaidServerExtendParam::getSpotDurationCount() const
{
    return spotDurationCount_;
}

void PostPaidServerExtendParam::setSpotDurationCount(int32_t value)
{
    spotDurationCount_ = value;
    spotDurationCountIsSet_ = true;
}

bool PostPaidServerExtendParam::spotDurationCountIsSet() const
{
    return spotDurationCountIsSet_;
}

void PostPaidServerExtendParam::unsetspotDurationCount()
{
    spotDurationCountIsSet_ = false;
}

std::string PostPaidServerExtendParam::getCbCsbsBackup() const
{
    return cbCsbsBackup_;
}

void PostPaidServerExtendParam::setCbCsbsBackup(const std::string& value)
{
    cbCsbsBackup_ = value;
    cbCsbsBackupIsSet_ = true;
}

bool PostPaidServerExtendParam::cbCsbsBackupIsSet() const
{
    return cbCsbsBackupIsSet_;
}

void PostPaidServerExtendParam::unsetcbCsbsBackup()
{
    cbCsbsBackupIsSet_ = false;
}

}
}
}
}
}


