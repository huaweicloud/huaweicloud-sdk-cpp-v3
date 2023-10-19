

#include "huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateBackupOffsitePolicyInfo::UpdateBackupOffsitePolicyInfo()
{
    openAutoBackup_ = false;
    openAutoBackupIsSet_ = false;
    openIncrementalBackup_ = false;
    openIncrementalBackupIsSet_ = false;
    destinationProjectId_ = "";
    destinationProjectIdIsSet_ = false;
    destinationRegion_ = "";
    destinationRegionIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

UpdateBackupOffsitePolicyInfo::~UpdateBackupOffsitePolicyInfo() = default;

void UpdateBackupOffsitePolicyInfo::validate()
{
}

web::json::value UpdateBackupOffsitePolicyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openAutoBackupIsSet_) {
        val[utility::conversions::to_string_t("open_auto_backup")] = ModelBase::toJson(openAutoBackup_);
    }
    if(openIncrementalBackupIsSet_) {
        val[utility::conversions::to_string_t("open_incremental_backup")] = ModelBase::toJson(openIncrementalBackup_);
    }
    if(destinationProjectIdIsSet_) {
        val[utility::conversions::to_string_t("destination_project_id")] = ModelBase::toJson(destinationProjectId_);
    }
    if(destinationRegionIsSet_) {
        val[utility::conversions::to_string_t("destination_region")] = ModelBase::toJson(destinationRegion_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool UpdateBackupOffsitePolicyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("open_auto_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_auto_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenAutoBackup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_incremental_backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_incremental_backup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenIncrementalBackup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("destination_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationRegion(refVal);
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
    return ok;
}


bool UpdateBackupOffsitePolicyInfo::isOpenAutoBackup() const
{
    return openAutoBackup_;
}

void UpdateBackupOffsitePolicyInfo::setOpenAutoBackup(bool value)
{
    openAutoBackup_ = value;
    openAutoBackupIsSet_ = true;
}

bool UpdateBackupOffsitePolicyInfo::openAutoBackupIsSet() const
{
    return openAutoBackupIsSet_;
}

void UpdateBackupOffsitePolicyInfo::unsetopenAutoBackup()
{
    openAutoBackupIsSet_ = false;
}

bool UpdateBackupOffsitePolicyInfo::isOpenIncrementalBackup() const
{
    return openIncrementalBackup_;
}

void UpdateBackupOffsitePolicyInfo::setOpenIncrementalBackup(bool value)
{
    openIncrementalBackup_ = value;
    openIncrementalBackupIsSet_ = true;
}

bool UpdateBackupOffsitePolicyInfo::openIncrementalBackupIsSet() const
{
    return openIncrementalBackupIsSet_;
}

void UpdateBackupOffsitePolicyInfo::unsetopenIncrementalBackup()
{
    openIncrementalBackupIsSet_ = false;
}

std::string UpdateBackupOffsitePolicyInfo::getDestinationProjectId() const
{
    return destinationProjectId_;
}

void UpdateBackupOffsitePolicyInfo::setDestinationProjectId(const std::string& value)
{
    destinationProjectId_ = value;
    destinationProjectIdIsSet_ = true;
}

bool UpdateBackupOffsitePolicyInfo::destinationProjectIdIsSet() const
{
    return destinationProjectIdIsSet_;
}

void UpdateBackupOffsitePolicyInfo::unsetdestinationProjectId()
{
    destinationProjectIdIsSet_ = false;
}

std::string UpdateBackupOffsitePolicyInfo::getDestinationRegion() const
{
    return destinationRegion_;
}

void UpdateBackupOffsitePolicyInfo::setDestinationRegion(const std::string& value)
{
    destinationRegion_ = value;
    destinationRegionIsSet_ = true;
}

bool UpdateBackupOffsitePolicyInfo::destinationRegionIsSet() const
{
    return destinationRegionIsSet_;
}

void UpdateBackupOffsitePolicyInfo::unsetdestinationRegion()
{
    destinationRegionIsSet_ = false;
}

int32_t UpdateBackupOffsitePolicyInfo::getKeepDays() const
{
    return keepDays_;
}

void UpdateBackupOffsitePolicyInfo::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool UpdateBackupOffsitePolicyInfo::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void UpdateBackupOffsitePolicyInfo::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


