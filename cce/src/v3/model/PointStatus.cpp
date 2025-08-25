

#include "huaweicloud/cce/v3/model/PointStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PointStatus::PointStatus()
{
    taskTypeIsSet_ = false;
    taskID_ = "";
    taskIDIsSet_ = false;
    statusIsSet_ = false;
    startTimeStamp_ = "";
    startTimeStampIsSet_ = false;
    endTimeStamp_ = "";
    endTimeStampIsSet_ = false;
    expireTimeStamp_ = "";
    expireTimeStampIsSet_ = false;
}

PointStatus::~PointStatus() = default;

void PointStatus::validate()
{
}

web::json::value PointStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("taskType")] = ModelBase::toJson(taskType_);
    }
    if(taskIDIsSet_) {
        val[utility::conversions::to_string_t("taskID")] = ModelBase::toJson(taskID_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeStampIsSet_) {
        val[utility::conversions::to_string_t("startTimeStamp")] = ModelBase::toJson(startTimeStamp_);
    }
    if(endTimeStampIsSet_) {
        val[utility::conversions::to_string_t("endTimeStamp")] = ModelBase::toJson(endTimeStamp_);
    }
    if(expireTimeStampIsSet_) {
        val[utility::conversions::to_string_t("expireTimeStamp")] = ModelBase::toJson(expireTimeStamp_);
    }

    return val;
}
bool PointStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("taskType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskType"));
        if(!fieldValue.is_null())
        {
            TaskType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradeWorkflowTaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTimeStamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTimeStamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTimeStamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTimeStamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireTimeStamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireTimeStamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTimeStamp(refVal);
        }
    }
    return ok;
}


TaskType PointStatus::getTaskType() const
{
    return taskType_;
}

void PointStatus::setTaskType(const TaskType& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool PointStatus::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void PointStatus::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string PointStatus::getTaskID() const
{
    return taskID_;
}

void PointStatus::setTaskID(const std::string& value)
{
    taskID_ = value;
    taskIDIsSet_ = true;
}

bool PointStatus::taskIDIsSet() const
{
    return taskIDIsSet_;
}

void PointStatus::unsettaskID()
{
    taskIDIsSet_ = false;
}

UpgradeWorkflowTaskStatus PointStatus::getStatus() const
{
    return status_;
}

void PointStatus::setStatus(const UpgradeWorkflowTaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PointStatus::statusIsSet() const
{
    return statusIsSet_;
}

void PointStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PointStatus::getStartTimeStamp() const
{
    return startTimeStamp_;
}

void PointStatus::setStartTimeStamp(const std::string& value)
{
    startTimeStamp_ = value;
    startTimeStampIsSet_ = true;
}

bool PointStatus::startTimeStampIsSet() const
{
    return startTimeStampIsSet_;
}

void PointStatus::unsetstartTimeStamp()
{
    startTimeStampIsSet_ = false;
}

std::string PointStatus::getEndTimeStamp() const
{
    return endTimeStamp_;
}

void PointStatus::setEndTimeStamp(const std::string& value)
{
    endTimeStamp_ = value;
    endTimeStampIsSet_ = true;
}

bool PointStatus::endTimeStampIsSet() const
{
    return endTimeStampIsSet_;
}

void PointStatus::unsetendTimeStamp()
{
    endTimeStampIsSet_ = false;
}

std::string PointStatus::getExpireTimeStamp() const
{
    return expireTimeStamp_;
}

void PointStatus::setExpireTimeStamp(const std::string& value)
{
    expireTimeStamp_ = value;
    expireTimeStampIsSet_ = true;
}

bool PointStatus::expireTimeStampIsSet() const
{
    return expireTimeStampIsSet_;
}

void PointStatus::unsetexpireTimeStamp()
{
    expireTimeStampIsSet_ = false;
}

}
}
}
}
}


