

#include "huaweicloud/rds/v3/model/BackupTransferInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BackupTransferInfo::BackupTransferInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    backupBeginTime_ = 0L;
    backupBeginTimeIsSet_ = false;
    backupEndTime_ = 0L;
    backupEndTimeIsSet_ = false;
    transferType_ = "";
    transferTypeIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
}

BackupTransferInfo::~BackupTransferInfo() = default;

void BackupTransferInfo::validate()
{
}

web::json::value BackupTransferInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(backupBeginTimeIsSet_) {
        val[utility::conversions::to_string_t("backup_begin_time")] = ModelBase::toJson(backupBeginTime_);
    }
    if(backupEndTimeIsSet_) {
        val[utility::conversions::to_string_t("backup_end_time")] = ModelBase::toJson(backupEndTime_);
    }
    if(transferTypeIsSet_) {
        val[utility::conversions::to_string_t("transfer_type")] = ModelBase::toJson(transferType_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }

    return val;
}
bool BackupTransferInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    return ok;
}


std::string BackupTransferInfo::getId() const
{
    return id_;
}

void BackupTransferInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupTransferInfo::idIsSet() const
{
    return idIsSet_;
}

void BackupTransferInfo::unsetid()
{
    idIsSet_ = false;
}

std::string BackupTransferInfo::getName() const
{
    return name_;
}

void BackupTransferInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupTransferInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BackupTransferInfo::unsetname()
{
    nameIsSet_ = false;
}

int64_t BackupTransferInfo::getBeginTime() const
{
    return beginTime_;
}

void BackupTransferInfo::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool BackupTransferInfo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void BackupTransferInfo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t BackupTransferInfo::getEndTime() const
{
    return endTime_;
}

void BackupTransferInfo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BackupTransferInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BackupTransferInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string BackupTransferInfo::getStatus() const
{
    return status_;
}

void BackupTransferInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupTransferInfo::statusIsSet() const
{
    return statusIsSet_;
}

void BackupTransferInfo::unsetstatus()
{
    statusIsSet_ = false;
}

double BackupTransferInfo::getSize() const
{
    return size_;
}

void BackupTransferInfo::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BackupTransferInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void BackupTransferInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BackupTransferInfo::getInstanceId() const
{
    return instanceId_;
}

void BackupTransferInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BackupTransferInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BackupTransferInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BackupTransferInfo::getFileName() const
{
    return fileName_;
}

void BackupTransferInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool BackupTransferInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void BackupTransferInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string BackupTransferInfo::getDestination() const
{
    return destination_;
}

void BackupTransferInfo::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool BackupTransferInfo::destinationIsSet() const
{
    return destinationIsSet_;
}

void BackupTransferInfo::unsetdestination()
{
    destinationIsSet_ = false;
}

int64_t BackupTransferInfo::getBackupBeginTime() const
{
    return backupBeginTime_;
}

void BackupTransferInfo::setBackupBeginTime(int64_t value)
{
    backupBeginTime_ = value;
    backupBeginTimeIsSet_ = true;
}

bool BackupTransferInfo::backupBeginTimeIsSet() const
{
    return backupBeginTimeIsSet_;
}

void BackupTransferInfo::unsetbackupBeginTime()
{
    backupBeginTimeIsSet_ = false;
}

int64_t BackupTransferInfo::getBackupEndTime() const
{
    return backupEndTime_;
}

void BackupTransferInfo::setBackupEndTime(int64_t value)
{
    backupEndTime_ = value;
    backupEndTimeIsSet_ = true;
}

bool BackupTransferInfo::backupEndTimeIsSet() const
{
    return backupEndTimeIsSet_;
}

void BackupTransferInfo::unsetbackupEndTime()
{
    backupEndTimeIsSet_ = false;
}

std::string BackupTransferInfo::getTransferType() const
{
    return transferType_;
}

void BackupTransferInfo::setTransferType(const std::string& value)
{
    transferType_ = value;
    transferTypeIsSet_ = true;
}

bool BackupTransferInfo::transferTypeIsSet() const
{
    return transferTypeIsSet_;
}

void BackupTransferInfo::unsettransferType()
{
    transferTypeIsSet_ = false;
}

std::string BackupTransferInfo::getPrefix() const
{
    return prefix_;
}

void BackupTransferInfo::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool BackupTransferInfo::prefixIsSet() const
{
    return prefixIsSet_;
}

void BackupTransferInfo::unsetprefix()
{
    prefixIsSet_ = false;
}

}
}
}
}
}


