

#include "huaweicloud/gaussdb/v3/model/RetainedBackupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RetainedBackupInfo::RetainedBackupInfo()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    backupLevel_ = "";
    backupLevelIsSet_ = false;
}

RetainedBackupInfo::~RetainedBackupInfo() = default;

void RetainedBackupInfo::validate()
{
}

web::json::value RetainedBackupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(backupLevelIsSet_) {
        val[utility::conversions::to_string_t("backup_level")] = ModelBase::toJson(backupLevel_);
    }

    return val;
}
bool RetainedBackupInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupLevel(refVal);
        }
    }
    return ok;
}


std::string RetainedBackupInfo::getBackupId() const
{
    return backupId_;
}

void RetainedBackupInfo::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RetainedBackupInfo::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RetainedBackupInfo::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string RetainedBackupInfo::getInstanceId() const
{
    return instanceId_;
}

void RetainedBackupInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RetainedBackupInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RetainedBackupInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RetainedBackupInfo::getStatus() const
{
    return status_;
}

void RetainedBackupInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RetainedBackupInfo::statusIsSet() const
{
    return statusIsSet_;
}

void RetainedBackupInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RetainedBackupInfo::getBackupName() const
{
    return backupName_;
}

void RetainedBackupInfo::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool RetainedBackupInfo::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void RetainedBackupInfo::unsetbackupName()
{
    backupNameIsSet_ = false;
}

int32_t RetainedBackupInfo::getSize() const
{
    return size_;
}

void RetainedBackupInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RetainedBackupInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void RetainedBackupInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string RetainedBackupInfo::getBeginTime() const
{
    return beginTime_;
}

void RetainedBackupInfo::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool RetainedBackupInfo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void RetainedBackupInfo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string RetainedBackupInfo::getEndTime() const
{
    return endTime_;
}

void RetainedBackupInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RetainedBackupInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RetainedBackupInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string RetainedBackupInfo::getBackupType() const
{
    return backupType_;
}

void RetainedBackupInfo::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool RetainedBackupInfo::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void RetainedBackupInfo::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string RetainedBackupInfo::getBackupLevel() const
{
    return backupLevel_;
}

void RetainedBackupInfo::setBackupLevel(const std::string& value)
{
    backupLevel_ = value;
    backupLevelIsSet_ = true;
}

bool RetainedBackupInfo::backupLevelIsSet() const
{
    return backupLevelIsSet_;
}

void RetainedBackupInfo::unsetbackupLevel()
{
    backupLevelIsSet_ = false;
}

}
}
}
}
}


