

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreInfo::RestoreInfo()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
}

RestoreInfo::~RestoreInfo() = default;

void RestoreInfo::validate()
{
}

web::json::value RestoreInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }

    return val;
}
bool RestoreInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    return ok;
}


std::string RestoreInfo::getBackupId() const
{
    return backupId_;
}

void RestoreInfo::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestoreInfo::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestoreInfo::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string RestoreInfo::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void RestoreInfo::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool RestoreInfo::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void RestoreInfo::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

int64_t RestoreInfo::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreInfo::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreInfo::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreInfo::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

}
}
}
}
}


