

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAllInstancesBackupsRequest::ShowAllInstancesBackupsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowAllInstancesBackupsRequest::~ShowAllInstancesBackupsRequest() = default;

void ShowAllInstancesBackupsRequest::validate()
{
}

web::json::value ShowAllInstancesBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ShowAllInstancesBackupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
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

int32_t ShowAllInstancesBackupsRequest::getOffset() const
{
    return offset_;
}

void ShowAllInstancesBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowAllInstancesBackupsRequest::getLimit() const
{
    return limit_;
}

void ShowAllInstancesBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowAllInstancesBackupsRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ShowAllInstancesBackupsRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ShowAllInstancesBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAllInstancesBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAllInstancesBackupsRequest::getBackupId() const
{
    return backupId_;
}

void ShowAllInstancesBackupsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowAllInstancesBackupsRequest::getBackupType() const
{
    return backupType_;
}

void ShowAllInstancesBackupsRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string ShowAllInstancesBackupsRequest::getBeginTime() const
{
    return beginTime_;
}

void ShowAllInstancesBackupsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowAllInstancesBackupsRequest::getEndTime() const
{
    return endTime_;
}

void ShowAllInstancesBackupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAllInstancesBackupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAllInstancesBackupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


