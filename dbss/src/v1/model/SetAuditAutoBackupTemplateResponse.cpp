

#include "huaweicloud/dbss/v1/model/SetAuditAutoBackupTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditAutoBackupTemplateResponse::SetAuditAutoBackupTemplateResponse()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    bucketRootPath_ = "";
    bucketRootPathIsSet_ = false;
    cycle_ = "";
    cycleIsSet_ = false;
    latestBackupTime_ = utility::datetime();
    latestBackupTimeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    triggerTime_ = utility::datetime();
    triggerTimeIsSet_ = false;
    triggered_ = false;
    triggeredIsSet_ = false;
}

SetAuditAutoBackupTemplateResponse::~SetAuditAutoBackupTemplateResponse() = default;

void SetAuditAutoBackupTemplateResponse::validate()
{
}

web::json::value SetAuditAutoBackupTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(bucketRootPathIsSet_) {
        val[utility::conversions::to_string_t("bucket_root_path")] = ModelBase::toJson(bucketRootPath_);
    }
    if(cycleIsSet_) {
        val[utility::conversions::to_string_t("cycle")] = ModelBase::toJson(cycle_);
    }
    if(latestBackupTimeIsSet_) {
        val[utility::conversions::to_string_t("latest_backup_time")] = ModelBase::toJson(latestBackupTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(triggerTimeIsSet_) {
        val[utility::conversions::to_string_t("trigger_time")] = ModelBase::toJson(triggerTime_);
    }
    if(triggeredIsSet_) {
        val[utility::conversions::to_string_t("triggered")] = ModelBase::toJson(triggered_);
    }

    return val;
}
bool SetAuditAutoBackupTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_root_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_root_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketRootPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_backup_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_backup_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestBackupTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggered"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggered"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggered(refVal);
        }
    }
    return ok;
}


std::string SetAuditAutoBackupTemplateResponse::getBucketName() const
{
    return bucketName_;
}

void SetAuditAutoBackupTemplateResponse::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string SetAuditAutoBackupTemplateResponse::getBucketRootPath() const
{
    return bucketRootPath_;
}

void SetAuditAutoBackupTemplateResponse::setBucketRootPath(const std::string& value)
{
    bucketRootPath_ = value;
    bucketRootPathIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::bucketRootPathIsSet() const
{
    return bucketRootPathIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsetbucketRootPath()
{
    bucketRootPathIsSet_ = false;
}

std::string SetAuditAutoBackupTemplateResponse::getCycle() const
{
    return cycle_;
}

void SetAuditAutoBackupTemplateResponse::setCycle(const std::string& value)
{
    cycle_ = value;
    cycleIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::cycleIsSet() const
{
    return cycleIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsetcycle()
{
    cycleIsSet_ = false;
}

utility::datetime SetAuditAutoBackupTemplateResponse::getLatestBackupTime() const
{
    return latestBackupTime_;
}

void SetAuditAutoBackupTemplateResponse::setLatestBackupTime(const utility::datetime& value)
{
    latestBackupTime_ = value;
    latestBackupTimeIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::latestBackupTimeIsSet() const
{
    return latestBackupTimeIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsetlatestBackupTime()
{
    latestBackupTimeIsSet_ = false;
}

int32_t SetAuditAutoBackupTemplateResponse::getStatus() const
{
    return status_;
}

void SetAuditAutoBackupTemplateResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime SetAuditAutoBackupTemplateResponse::getTriggerTime() const
{
    return triggerTime_;
}

void SetAuditAutoBackupTemplateResponse::setTriggerTime(const utility::datetime& value)
{
    triggerTime_ = value;
    triggerTimeIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::triggerTimeIsSet() const
{
    return triggerTimeIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsettriggerTime()
{
    triggerTimeIsSet_ = false;
}

bool SetAuditAutoBackupTemplateResponse::isTriggered() const
{
    return triggered_;
}

void SetAuditAutoBackupTemplateResponse::setTriggered(bool value)
{
    triggered_ = value;
    triggeredIsSet_ = true;
}

bool SetAuditAutoBackupTemplateResponse::triggeredIsSet() const
{
    return triggeredIsSet_;
}

void SetAuditAutoBackupTemplateResponse::unsettriggered()
{
    triggeredIsSet_ = false;
}

}
}
}
}
}


