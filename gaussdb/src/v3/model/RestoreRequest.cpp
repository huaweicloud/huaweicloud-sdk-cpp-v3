

#include "huaweicloud/gaussdb/v3/model/RestoreRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestoreRequest::RestoreRequest()
{
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    restoreTime_ = 0L;
    restoreTimeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

RestoreRequest::~RestoreRequest() = default;

void RestoreRequest::validate()
{
}

web::json::value RestoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool RestoreRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
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

std::string RestoreRequest::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void RestoreRequest::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool RestoreRequest::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void RestoreRequest::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string RestoreRequest::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void RestoreRequest::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool RestoreRequest::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void RestoreRequest::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string RestoreRequest::getBackupId() const
{
    return backupId_;
}

void RestoreRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RestoreRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RestoreRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

int64_t RestoreRequest::getRestoreTime() const
{
    return restoreTime_;
}

void RestoreRequest::setRestoreTime(int64_t value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RestoreRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RestoreRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string RestoreRequest::getType() const
{
    return type_;
}

void RestoreRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RestoreRequest::typeIsSet() const
{
    return typeIsSet_;
}

void RestoreRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


