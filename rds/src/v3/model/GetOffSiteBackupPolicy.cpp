

#include "huaweicloud/rds/v3/model/GetOffSiteBackupPolicy.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetOffSiteBackupPolicy::GetOffSiteBackupPolicy()
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

GetOffSiteBackupPolicy::~GetOffSiteBackupPolicy() = default;

void GetOffSiteBackupPolicy::validate()
{
}

web::json::value GetOffSiteBackupPolicy::toJson() const
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

bool GetOffSiteBackupPolicy::fromJson(const web::json::value& val)
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

std::string GetOffSiteBackupPolicy::getBackupType() const
{
    return backupType_;
}

void GetOffSiteBackupPolicy::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool GetOffSiteBackupPolicy::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void GetOffSiteBackupPolicy::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

int32_t GetOffSiteBackupPolicy::getKeepDays() const
{
    return keepDays_;
}

void GetOffSiteBackupPolicy::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool GetOffSiteBackupPolicy::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void GetOffSiteBackupPolicy::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string GetOffSiteBackupPolicy::getDestinationRegion() const
{
    return destinationRegion_;
}

void GetOffSiteBackupPolicy::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool GetOffSiteBackupPolicy::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void GetOffSiteBackupPolicy::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

std::string GetOffSiteBackupPolicy::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void GetOffSiteBackupPolicy::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool GetOffSiteBackupPolicy::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void GetOffSiteBackupPolicy::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

}
}
}
}
}


