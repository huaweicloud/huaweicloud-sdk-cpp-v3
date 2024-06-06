

#include "huaweicloud/rds/v3/model/ListShareBackupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListShareBackupsRequest::ListShareBackupsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListShareBackupsRequest::~ListShareBackupsRequest() = default;

void ListShareBackupsRequest::validate()
{
}

web::json::value ListShareBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListShareBackupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListShareBackupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListShareBackupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListShareBackupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListShareBackupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListShareBackupsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListShareBackupsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListShareBackupsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListShareBackupsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ListShareBackupsRequest::getBackupName() const
{
    return backupName_;
}

void ListShareBackupsRequest::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool ListShareBackupsRequest::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void ListShareBackupsRequest::unsetbackupName()
{
    backupNameIsSet_ = false;
}

std::string ListShareBackupsRequest::getOffset() const
{
    return offset_;
}

void ListShareBackupsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListShareBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListShareBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListShareBackupsRequest::getLimit() const
{
    return limit_;
}

void ListShareBackupsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListShareBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListShareBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


