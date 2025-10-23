

#include "huaweicloud/gaussdbfornosql/v3/model/ListBackupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListBackupsRequest::ListBackupsRequest()
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

ListBackupsRequest::~ListBackupsRequest() = default;

void ListBackupsRequest::validate()
{
}

web::json::value ListBackupsRequest::toJson() const
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
bool ListBackupsRequest::fromJson(const web::json::value& val)
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


std::string ListBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListBackupsRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ListBackupsRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ListBackupsRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ListBackupsRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ListBackupsRequest::getBackupId() const
{
    return backupId_;
}

void ListBackupsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListBackupsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListBackupsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListBackupsRequest::getBackupType() const
{
    return backupType_;
}

void ListBackupsRequest::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool ListBackupsRequest::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void ListBackupsRequest::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string ListBackupsRequest::getType() const
{
    return type_;
}

void ListBackupsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListBackupsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListBackupsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListBackupsRequest::getLimit() const
{
    return limit_;
}

void ListBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListBackupsRequest::getOffset() const
{
    return offset_;
}

void ListBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListBackupsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListBackupsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListBackupsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListBackupsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListBackupsRequest::getEndTime() const
{
    return endTime_;
}

void ListBackupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBackupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBackupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


