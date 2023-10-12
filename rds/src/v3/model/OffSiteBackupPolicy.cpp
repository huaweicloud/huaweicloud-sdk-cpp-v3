

#include "huaweicloud/rds/v3/model/OffSiteBackupPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




OffSiteBackupPolicy::OffSiteBackupPolicy()
{
    backupType_ = "";
    backupTypeIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
}

OffSiteBackupPolicy::~OffSiteBackupPolicy() = default;

void OffSiteBackupPolicy::validate()
{
}

web::json::value OffSiteBackupPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(destinationProjectIdIsSet_) {
        val[utility::conversions::to_string_t("destination_project_id")] = ModelBase::toJson(destinationProjectId_);
    }

    return val;
}
bool OffSiteBackupPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationProjectId(refVal);
        }
    }
    return ok;
}


std::string OffSiteBackupPolicy::getBackupType() const
{
    return backupType_;
}

void OffSiteBackupPolicy::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool OffSiteBackupPolicy::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void OffSiteBackupPolicy::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

int32_t OffSiteBackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void OffSiteBackupPolicy::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool OffSiteBackupPolicy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void OffSiteBackupPolicy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string OffSiteBackupPolicy::getDestinationRegion() const
{
    return destinationRegion_;
}

void OffSiteBackupPolicy::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool OffSiteBackupPolicy::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void OffSiteBackupPolicy::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string OffSiteBackupPolicy::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void OffSiteBackupPolicy::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool OffSiteBackupPolicy::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void OffSiteBackupPolicy::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

}
}
}
}
}


