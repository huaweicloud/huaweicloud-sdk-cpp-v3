

#include "huaweicloud/gaussdb/v3/model/MysqlRestorePoint.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlRestorePoint::MysqlRestorePoint()
{
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

MysqlRestorePoint::~MysqlRestorePoint() = default;

void MysqlRestorePoint::validate()
{
}

web::json::value MysqlRestorePoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool MysqlRestorePoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

int64_t MysqlRestorePoint::getRestoreTime() const
{
    return restoreTime_;
}

void MysqlRestorePoint::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool MysqlRestorePoint::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void MysqlRestorePoint::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string MysqlRestorePoint::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void MysqlRestorePoint::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool MysqlRestorePoint::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void MysqlRestorePoint::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string MysqlRestorePoint::getBackupId() const
{
    return backupId_;
}

void MysqlRestorePoint::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool MysqlRestorePoint::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void MysqlRestorePoint::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string MysqlRestorePoint::getType() const
{
    return type_;
}

void MysqlRestorePoint::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlRestorePoint::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlRestorePoint::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


