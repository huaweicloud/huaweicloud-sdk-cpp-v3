

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAllInstancesBackupsNewRequest::ShowAllInstancesBackupsNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowAllInstancesBackupsNewRequest::~ShowAllInstancesBackupsNewRequest() = default;

void ShowAllInstancesBackupsNewRequest::validate()
{
}

web::json::value ShowAllInstancesBackupsNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowAllInstancesBackupsNewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::string ShowAllInstancesBackupsNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAllInstancesBackupsNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAllInstancesBackupsNewRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ShowAllInstancesBackupsNewRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ShowAllInstancesBackupsNewRequest::getBackupId() const
{
    return backupId_;
}

void ShowAllInstancesBackupsNewRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowAllInstancesBackupsNewRequest::getBackupType() const
{
    return backupType_;
}

void ShowAllInstancesBackupsNewRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string ShowAllInstancesBackupsNewRequest::getType() const
{
    return type_;
}

void ShowAllInstancesBackupsNewRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ShowAllInstancesBackupsNewRequest::getLimit() const
{
    return limit_;
}

void ShowAllInstancesBackupsNewRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAllInstancesBackupsNewRequest::getOffset() const
{
    return offset_;
}

void ShowAllInstancesBackupsNewRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowAllInstancesBackupsNewRequest::getBeginTime() const
{
    return beginTime_;
}

void ShowAllInstancesBackupsNewRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowAllInstancesBackupsNewRequest::getEndTime() const
{
    return endTime_;
}

void ShowAllInstancesBackupsNewRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowAllInstancesBackupsNewRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowAllInstancesBackupsNewRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


