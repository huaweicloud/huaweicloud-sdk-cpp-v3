

#include "huaweicloud/gaussdb/v3/model/RecycleBackupV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RecycleBackupV3::RecycleBackupV3()
{
    backupLevel_ = "";
    backupLevelIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

RecycleBackupV3::~RecycleBackupV3() = default;

void RecycleBackupV3::validate()
{
}

web::json::value RecycleBackupV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupLevelIsSet_) {
        val[utility::conversions::to_string_t("backup_level")] = ModelBase::toJson(backupLevel_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool RecycleBackupV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupLevel(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string RecycleBackupV3::getBackupLevel() const
{
    return backupLevel_;
}

void RecycleBackupV3::setBackupLevel(const std::string& value)
{
    backupLevel_ = value;
    backupLevelIsSet_ = true;
}

bool RecycleBackupV3::backupLevelIsSet() const
{
    return backupLevelIsSet_;
}

void RecycleBackupV3::unsetbackupLevel()
{
    backupLevelIsSet_ = false;
}

std::string RecycleBackupV3::getBackupId() const
{
    return backupId_;
}

void RecycleBackupV3::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RecycleBackupV3::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RecycleBackupV3::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string RecycleBackupV3::getBackupName() const
{
    return backupName_;
}

void RecycleBackupV3::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool RecycleBackupV3::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void RecycleBackupV3::unsetbackupName()
{
    backupNameIsSet_ = false;
}

int32_t RecycleBackupV3::getSize() const
{
    return size_;
}

void RecycleBackupV3::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool RecycleBackupV3::sizeIsSet() const
{
    return sizeIsSet_;
}

void RecycleBackupV3::unsetsize()
{
    sizeIsSet_ = false;
}

std::string RecycleBackupV3::getStatus() const
{
    return status_;
}

void RecycleBackupV3::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RecycleBackupV3::statusIsSet() const
{
    return statusIsSet_;
}

void RecycleBackupV3::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RecycleBackupV3::getBeginTime() const
{
    return beginTime_;
}

void RecycleBackupV3::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool RecycleBackupV3::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void RecycleBackupV3::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string RecycleBackupV3::getEndTime() const
{
    return endTime_;
}

void RecycleBackupV3::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RecycleBackupV3::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RecycleBackupV3::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


