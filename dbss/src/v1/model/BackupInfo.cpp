

#include "huaweicloud/dbss/v1/model/BackupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BackupInfo::BackupInfo()
{
    backupTaskFailReason_ = "";
    backupTaskFailReasonIsSet_ = false;
    backupTime_ = utility::datetime();
    backupTimeIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    fileSize_ = 0L;
    fileSizeIsSet_ = false;
    fileSizeUnit_ = "";
    fileSizeUnitIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    percentage_ = 0;
    percentageIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    restoreTaskFailReason_ = "";
    restoreTaskFailReasonIsSet_ = false;
    sha256_ = "";
    sha256IsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
}

BackupInfo::~BackupInfo() = default;

void BackupInfo::validate()
{
}

web::json::value BackupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupTaskFailReasonIsSet_) {
        val[utility::conversions::to_string_t("backup_task_fail_reason")] = ModelBase::toJson(backupTaskFailReason_);
    }
    if(backupTimeIsSet_) {
        val[utility::conversions::to_string_t("backup_time")] = ModelBase::toJson(backupTime_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(fileSizeUnitIsSet_) {
        val[utility::conversions::to_string_t("file_size_unit")] = ModelBase::toJson(fileSizeUnit_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(percentageIsSet_) {
        val[utility::conversions::to_string_t("percentage")] = ModelBase::toJson(percentage_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(restoreTaskFailReasonIsSet_) {
        val[utility::conversions::to_string_t("restore_task_fail_reason")] = ModelBase::toJson(restoreTaskFailReason_);
    }
    if(sha256IsSet_) {
        val[utility::conversions::to_string_t("sha256")] = ModelBase::toJson(sha256_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool BackupInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_task_fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_task_fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupTaskFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSizeUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_task_fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_task_fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTaskFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string BackupInfo::getBackupTaskFailReason() const
{
    return backupTaskFailReason_;
}

void BackupInfo::setBackupTaskFailReason(const std::string& value)
{
    backupTaskFailReason_ = value;
    backupTaskFailReasonIsSet_ = true;
}

bool BackupInfo::backupTaskFailReasonIsSet() const
{
    return backupTaskFailReasonIsSet_;
}

void BackupInfo::unsetbackupTaskFailReason()
{
    backupTaskFailReasonIsSet_ = false;
}

utility::datetime BackupInfo::getBackupTime() const
{
    return backupTime_;
}

void BackupInfo::setBackupTime(const utility::datetime& value)
{
    backupTime_ = value;
    backupTimeIsSet_ = true;
}

bool BackupInfo::backupTimeIsSet() const
{
    return backupTimeIsSet_;
}

void BackupInfo::unsetbackupTime()
{
    backupTimeIsSet_ = false;
}

bool BackupInfo::isDeleted() const
{
    return deleted_;
}

void BackupInfo::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool BackupInfo::deletedIsSet() const
{
    return deletedIsSet_;
}

void BackupInfo::unsetdeleted()
{
    deletedIsSet_ = false;
}

utility::datetime BackupInfo::getEndTime() const
{
    return endTime_;
}

void BackupInfo::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BackupInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BackupInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t BackupInfo::getFileSize() const
{
    return fileSize_;
}

void BackupInfo::setFileSize(int64_t value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool BackupInfo::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void BackupInfo::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string BackupInfo::getFileSizeUnit() const
{
    return fileSizeUnit_;
}

void BackupInfo::setFileSizeUnit(const std::string& value)
{
    fileSizeUnit_ = value;
    fileSizeUnitIsSet_ = true;
}

bool BackupInfo::fileSizeUnitIsSet() const
{
    return fileSizeUnitIsSet_;
}

void BackupInfo::unsetfileSizeUnit()
{
    fileSizeUnitIsSet_ = false;
}

std::string BackupInfo::getId() const
{
    return id_;
}

void BackupInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupInfo::idIsSet() const
{
    return idIsSet_;
}

void BackupInfo::unsetid()
{
    idIsSet_ = false;
}

std::string BackupInfo::getMode() const
{
    return mode_;
}

void BackupInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool BackupInfo::modeIsSet() const
{
    return modeIsSet_;
}

void BackupInfo::unsetmode()
{
    modeIsSet_ = false;
}

std::string BackupInfo::getName() const
{
    return name_;
}

void BackupInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BackupInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t BackupInfo::getPercentage() const
{
    return percentage_;
}

void BackupInfo::setPercentage(int32_t value)
{
    percentage_ = value;
    percentageIsSet_ = true;
}

bool BackupInfo::percentageIsSet() const
{
    return percentageIsSet_;
}

void BackupInfo::unsetpercentage()
{
    percentageIsSet_ = false;
}

std::string BackupInfo::getProgress() const
{
    return progress_;
}

void BackupInfo::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool BackupInfo::progressIsSet() const
{
    return progressIsSet_;
}

void BackupInfo::unsetprogress()
{
    progressIsSet_ = false;
}

std::string BackupInfo::getRestoreTaskFailReason() const
{
    return restoreTaskFailReason_;
}

void BackupInfo::setRestoreTaskFailReason(const std::string& value)
{
    restoreTaskFailReason_ = value;
    restoreTaskFailReasonIsSet_ = true;
}

bool BackupInfo::restoreTaskFailReasonIsSet() const
{
    return restoreTaskFailReasonIsSet_;
}

void BackupInfo::unsetrestoreTaskFailReason()
{
    restoreTaskFailReasonIsSet_ = false;
}

std::string BackupInfo::getSha256() const
{
    return sha256_;
}

void BackupInfo::setSha256(const std::string& value)
{
    sha256_ = value;
    sha256IsSet_ = true;
}

bool BackupInfo::sha256IsSet() const
{
    return sha256IsSet_;
}

void BackupInfo::unsetsha256()
{
    sha256IsSet_ = false;
}

utility::datetime BackupInfo::getStartTime() const
{
    return startTime_;
}

void BackupInfo::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool BackupInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void BackupInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


