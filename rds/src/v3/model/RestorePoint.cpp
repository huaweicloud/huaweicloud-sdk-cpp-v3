

#include "huaweicloud/rds/v3/model/RestorePoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestorePoint::RestorePoint()
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
}

RestorePoint::~RestorePoint() = default;

void RestorePoint::validate()
{
}

web::json::value RestorePoint::toJson() const
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

    return val;
}

bool RestorePoint::fromJson(const web::json::value& val)
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
    return ok;
}

std::string RestorePoint::getInstanceId() const
{
    return instanceId_;
}

void RestorePoint::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestorePoint::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestorePoint::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestorePoint::getType() const
{
    return type_;
}

void RestorePoint::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RestorePoint::typeIsSet() const
{
    return typeIsSet_;
}

void RestorePoint::unsettype()
{
    typeIsSet_ = false;
}

std::string RestorePoint::getBackupId() const
{
    return backupId_;
}

void RestorePoint::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestorePoint::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestorePoint::unsetbackupId()
{
    backupIdIsSet_ = false;
}

int64_t RestorePoint::getRestoreTime() const
{
    return restoreTime_;
}

void RestorePoint::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestorePoint::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestorePoint::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::map<std::string, std::string>& RestorePoint::getDatabaseName()
{
    return databaseName_;
}

void RestorePoint::setDatabaseName(const std::map<std::string, std::string>& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool RestorePoint::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void RestorePoint::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

}
}
}
}
}


