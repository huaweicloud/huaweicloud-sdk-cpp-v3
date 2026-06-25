

#include "huaweicloud/rds/v3/model/ShowBackupUsageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupUsageResponse::ShowBackupUsageResponse()
{
    backupUseSpace_ = 0.0;
    backupUseSpaceIsSet_ = false;
    dbUseSpace_ = 0.0;
    dbUseSpaceIsSet_ = false;
    rdsSnapshotUseSpace_ = 0.0;
    rdsSnapshotUseSpaceIsSet_ = false;
    offsiteUseSpace_ = 0.0;
    offsiteUseSpaceIsSet_ = false;
}

ShowBackupUsageResponse::~ShowBackupUsageResponse() = default;

void ShowBackupUsageResponse::validate()
{
}

web::json::value ShowBackupUsageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupUseSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_use_space")] = ModelBase::toJson(backupUseSpace_);
    }
    if(dbUseSpaceIsSet_) {
        val[utility::conversions::to_string_t("db_use_space")] = ModelBase::toJson(dbUseSpace_);
    }
    if(rdsSnapshotUseSpaceIsSet_) {
        val[utility::conversions::to_string_t("rds_snapshot_use_space")] = ModelBase::toJson(rdsSnapshotUseSpace_);
    }
    if(offsiteUseSpaceIsSet_) {
        val[utility::conversions::to_string_t("offsite_use_space")] = ModelBase::toJson(offsiteUseSpace_);
    }

    return val;
}
bool ShowBackupUsageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_use_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_use_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUseSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_use_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_snapshot_use_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_snapshot_use_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsSnapshotUseSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offsite_use_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offsite_use_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffsiteUseSpace(refVal);
        }
    }
    return ok;
}


double ShowBackupUsageResponse::getBackupUseSpace() const
{
    return backupUseSpace_;
}

void ShowBackupUsageResponse::setBackupUseSpace(double value)
{
    backupUseSpace_ = value;
    backupUseSpaceIsSet_ = true;
}

bool ShowBackupUsageResponse::backupUseSpaceIsSet() const
{
    return backupUseSpaceIsSet_;
}

void ShowBackupUsageResponse::unsetbackupUseSpace()
{
    backupUseSpaceIsSet_ = false;
}

double ShowBackupUsageResponse::getDbUseSpace() const
{
    return dbUseSpace_;
}

void ShowBackupUsageResponse::setDbUseSpace(double value)
{
    dbUseSpace_ = value;
    dbUseSpaceIsSet_ = true;
}

bool ShowBackupUsageResponse::dbUseSpaceIsSet() const
{
    return dbUseSpaceIsSet_;
}

void ShowBackupUsageResponse::unsetdbUseSpace()
{
    dbUseSpaceIsSet_ = false;
}

double ShowBackupUsageResponse::getRdsSnapshotUseSpace() const
{
    return rdsSnapshotUseSpace_;
}

void ShowBackupUsageResponse::setRdsSnapshotUseSpace(double value)
{
    rdsSnapshotUseSpace_ = value;
    rdsSnapshotUseSpaceIsSet_ = true;
}

bool ShowBackupUsageResponse::rdsSnapshotUseSpaceIsSet() const
{
    return rdsSnapshotUseSpaceIsSet_;
}

void ShowBackupUsageResponse::unsetrdsSnapshotUseSpace()
{
    rdsSnapshotUseSpaceIsSet_ = false;
}

double ShowBackupUsageResponse::getOffsiteUseSpace() const
{
    return offsiteUseSpace_;
}

void ShowBackupUsageResponse::setOffsiteUseSpace(double value)
{
    offsiteUseSpace_ = value;
    offsiteUseSpaceIsSet_ = true;
}

bool ShowBackupUsageResponse::offsiteUseSpaceIsSet() const
{
    return offsiteUseSpaceIsSet_;
}

void ShowBackupUsageResponse::unsetoffsiteUseSpace()
{
    offsiteUseSpaceIsSet_ = false;
}

}
}
}
}
}


