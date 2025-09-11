

#include "huaweicloud/dbss/v1/model/BackupSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BackupSwitchRequest::BackupSwitchRequest()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    bucketRootPath_ = "";
    bucketRootPathIsSet_ = false;
    cycle_ = "";
    cycleIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    triggerTime_ = utility::datetime();
    triggerTimeIsSet_ = false;
}

BackupSwitchRequest::~BackupSwitchRequest() = default;

void BackupSwitchRequest::validate()
{
}

web::json::value BackupSwitchRequest::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(triggerTimeIsSet_) {
        val[utility::conversions::to_string_t("trigger_time")] = ModelBase::toJson(triggerTime_);
    }

    return val;
}
bool BackupSwitchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
    return ok;
}


std::string BackupSwitchRequest::getBucketName() const
{
    return bucketName_;
}

void BackupSwitchRequest::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool BackupSwitchRequest::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void BackupSwitchRequest::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string BackupSwitchRequest::getBucketRootPath() const
{
    return bucketRootPath_;
}

void BackupSwitchRequest::setBucketRootPath(const std::string& value)
{
    bucketRootPath_ = value;
    bucketRootPathIsSet_ = true;
}

bool BackupSwitchRequest::bucketRootPathIsSet() const
{
    return bucketRootPathIsSet_;
}

void BackupSwitchRequest::unsetbucketRootPath()
{
    bucketRootPathIsSet_ = false;
}

std::string BackupSwitchRequest::getCycle() const
{
    return cycle_;
}

void BackupSwitchRequest::setCycle(const std::string& value)
{
    cycle_ = value;
    cycleIsSet_ = true;
}

bool BackupSwitchRequest::cycleIsSet() const
{
    return cycleIsSet_;
}

void BackupSwitchRequest::unsetcycle()
{
    cycleIsSet_ = false;
}

std::string BackupSwitchRequest::getMode() const
{
    return mode_;
}

void BackupSwitchRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool BackupSwitchRequest::modeIsSet() const
{
    return modeIsSet_;
}

void BackupSwitchRequest::unsetmode()
{
    modeIsSet_ = false;
}

int32_t BackupSwitchRequest::getStatus() const
{
    return status_;
}

void BackupSwitchRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupSwitchRequest::statusIsSet() const
{
    return statusIsSet_;
}

void BackupSwitchRequest::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime BackupSwitchRequest::getTriggerTime() const
{
    return triggerTime_;
}

void BackupSwitchRequest::setTriggerTime(const utility::datetime& value)
{
    triggerTime_ = value;
    triggerTimeIsSet_ = true;
}

bool BackupSwitchRequest::triggerTimeIsSet() const
{
    return triggerTimeIsSet_;
}

void BackupSwitchRequest::unsettriggerTime()
{
    triggerTimeIsSet_ = false;
}

}
}
}
}
}


