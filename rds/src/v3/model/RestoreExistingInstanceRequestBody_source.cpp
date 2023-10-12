

#include "huaweicloud/rds/v3/model/RestoreExistingInstanceRequestBody_source.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreExistingInstanceRequestBody_source::RestoreExistingInstanceRequestBody_source()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    databaseNameIsSet_ = false;
    restoreAllDatabase_ = false;
    restoreAllDatabaseIsSet_ = false;
}

RestoreExistingInstanceRequestBody_source::~RestoreExistingInstanceRequestBody_source() = default;

void RestoreExistingInstanceRequestBody_source::validate()
{
}

web::json::value RestoreExistingInstanceRequestBody_source::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(restoreAllDatabaseIsSet_) {
        val[utility::conversions::to_string_t("restore_all_database")] = ModelBase::toJson(restoreAllDatabase_);
    }

    return val;
}
bool RestoreExistingInstanceRequestBody_source::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_all_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_all_database"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreAllDatabase(refVal);
        }
    }
    return ok;
}


std::string RestoreExistingInstanceRequestBody_source::getInstanceId() const
{
    return instanceId_;
}

void RestoreExistingInstanceRequestBody_source::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody_source::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreExistingInstanceRequestBody_source::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestoreExistingInstanceRequestBody_source::getType() const
{
    return type_;
}

void RestoreExistingInstanceRequestBody_source::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody_source::typeIsSet() const
{
    return typeIsSet_;
}

void RestoreExistingInstanceRequestBody_source::unsettype()
{
    typeIsSet_ = false;
}

std::string RestoreExistingInstanceRequestBody_source::getBackupId() const
{
    return backupId_;
}

void RestoreExistingInstanceRequestBody_source::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody_source::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestoreExistingInstanceRequestBody_source::unsetbackupId()
{
    backupIdIsSet_ = false;
}

int64_t RestoreExistingInstanceRequestBody_source::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreExistingInstanceRequestBody_source::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody_source::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreExistingInstanceRequestBody_source::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::map<std::string, std::string>& RestoreExistingInstanceRequestBody_source::getDatabaseName()
{
    return databaseName_;
}

void RestoreExistingInstanceRequestBody_source::setDatabaseName(const std::map<std::string, std::string>& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody_source::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void RestoreExistingInstanceRequestBody_source::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

bool RestoreExistingInstanceRequestBody_source::isRestoreAllDatabase() const
{
    return restoreAllDatabase_;
}

void RestoreExistingInstanceRequestBody_source::setRestoreAllDatabase(bool value)
{
    restoreAllDatabase_ = value;
    restoreAllDatabaseIsSet_ = true;
}

bool RestoreExistingInstanceRequestBody_source::restoreAllDatabaseIsSet() const
{
    return restoreAllDatabaseIsSet_;
}

void RestoreExistingInstanceRequestBody_source::unsetrestoreAllDatabase()
{
    restoreAllDatabaseIsSet_ = false;
}

}
}
}
}
}


