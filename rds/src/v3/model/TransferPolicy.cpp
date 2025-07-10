

#include "huaweicloud/rds/v3/model/TransferPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TransferPolicy::TransferPolicy()
{
    settingId_ = "";
    settingIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
}

TransferPolicy::~TransferPolicy() = default;

void TransferPolicy::validate()
{
}

web::json::value TransferPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }

    return val;
}
bool TransferPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("setting_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    return ok;
}


std::string TransferPolicy::getSettingId() const
{
    return settingId_;
}

void TransferPolicy::setSettingId(const std::string& value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool TransferPolicy::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void TransferPolicy::unsetsettingId()
{
    settingIdIsSet_ = false;
}

std::string TransferPolicy::getInstanceId() const
{
    return instanceId_;
}

void TransferPolicy::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool TransferPolicy::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void TransferPolicy::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string TransferPolicy::getPeriod() const
{
    return period_;
}

void TransferPolicy::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool TransferPolicy::periodIsSet() const
{
    return periodIsSet_;
}

void TransferPolicy::unsetperiod()
{
    periodIsSet_ = false;
}

std::string TransferPolicy::getBackupType() const
{
    return backupType_;
}

void TransferPolicy::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool TransferPolicy::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void TransferPolicy::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string TransferPolicy::getDestination() const
{
    return destination_;
}

void TransferPolicy::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool TransferPolicy::destinationIsSet() const
{
    return destinationIsSet_;
}

void TransferPolicy::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string TransferPolicy::getPrefix() const
{
    return prefix_;
}

void TransferPolicy::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool TransferPolicy::prefixIsSet() const
{
    return prefixIsSet_;
}

void TransferPolicy::unsetprefix()
{
    prefixIsSet_ = false;
}

}
}
}
}
}


