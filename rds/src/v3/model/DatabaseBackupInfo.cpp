

#include "huaweicloud/rds/v3/model/DatabaseBackupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DatabaseBackupInfo::DatabaseBackupInfo()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    backupFileName_ = "";
    backupFileNameIsSet_ = false;
    backupFileSize_ = 0L;
    backupFileSizeIsSet_ = false;
}

DatabaseBackupInfo::~DatabaseBackupInfo() = default;

void DatabaseBackupInfo::validate()
{
}

web::json::value DatabaseBackupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(backupFileNameIsSet_) {
        val[utility::conversions::to_string_t("backup_file_name")] = ModelBase::toJson(backupFileName_);
    }
    if(backupFileSizeIsSet_) {
        val[utility::conversions::to_string_t("backup_file_size")] = ModelBase::toJson(backupFileSize_);
    }

    return val;
}
bool DatabaseBackupInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_file_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupFileSize(refVal);
        }
    }
    return ok;
}


std::string DatabaseBackupInfo::getDatabaseName() const
{
    return databaseName_;
}

void DatabaseBackupInfo::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool DatabaseBackupInfo::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void DatabaseBackupInfo::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string DatabaseBackupInfo::getBackupFileName() const
{
    return backupFileName_;
}

void DatabaseBackupInfo::setBackupFileName(const std::string& value)
{
    backupFileName_ = value;
    backupFileNameIsSet_ = true;
}

bool DatabaseBackupInfo::backupFileNameIsSet() const
{
    return backupFileNameIsSet_;
}

void DatabaseBackupInfo::unsetbackupFileName()
{
    backupFileNameIsSet_ = false;
}

int64_t DatabaseBackupInfo::getBackupFileSize() const
{
    return backupFileSize_;
}

void DatabaseBackupInfo::setBackupFileSize(int64_t value)
{
    backupFileSize_ = value;
    backupFileSizeIsSet_ = true;
}

bool DatabaseBackupInfo::backupFileSizeIsSet() const
{
    return backupFileSizeIsSet_;
}

void DatabaseBackupInfo::unsetbackupFileSize()
{
    backupFileSizeIsSet_ = false;
}

}
}
}
}
}


