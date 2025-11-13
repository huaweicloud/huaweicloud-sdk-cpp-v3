

#include "huaweicloud/gaussdb/v3/model/SubTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SubTaskInfo::SubTaskInfo()
{
    subTaskName_ = "";
    subTaskNameIsSet_ = false;
    percent_ = "";
    percentIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    remainingTime_ = "";
    remainingTimeIsSet_ = false;
}

SubTaskInfo::~SubTaskInfo() = default;

void SubTaskInfo::validate()
{
}

web::json::value SubTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subTaskNameIsSet_) {
        val[utility::conversions::to_string_t("sub_task_name")] = ModelBase::toJson(subTaskName_);
    }
    if(percentIsSet_) {
        val[utility::conversions::to_string_t("percent")] = ModelBase::toJson(percent_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(remainingTimeIsSet_) {
        val[utility::conversions::to_string_t("remaining_time")] = ModelBase::toJson(remainingTime_);
    }

    return val;
}
bool SubTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sub_task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("remaining_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingTime(refVal);
        }
    }
    return ok;
}


std::string SubTaskInfo::getSubTaskName() const
{
    return subTaskName_;
}

void SubTaskInfo::setSubTaskName(const std::string& value)
{
    subTaskName_ = value;
    subTaskNameIsSet_ = true;
}

bool SubTaskInfo::subTaskNameIsSet() const
{
    return subTaskNameIsSet_;
}

void SubTaskInfo::unsetsubTaskName()
{
    subTaskNameIsSet_ = false;
}

std::string SubTaskInfo::getPercent() const
{
    return percent_;
}

void SubTaskInfo::setPercent(const std::string& value)
{
    percent_ = value;
    percentIsSet_ = true;
}

bool SubTaskInfo::percentIsSet() const
{
    return percentIsSet_;
}

void SubTaskInfo::unsetpercent()
{
    percentIsSet_ = false;
}

std::string SubTaskInfo::getStatus() const
{
    return status_;
}

void SubTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void SubTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SubTaskInfo::getRemainingTime() const
{
    return remainingTime_;
}

void SubTaskInfo::setRemainingTime(const std::string& value)
{
    remainingTime_ = value;
    remainingTimeIsSet_ = true;
}

bool SubTaskInfo::remainingTimeIsSet() const
{
    return remainingTimeIsSet_;
}

void SubTaskInfo::unsetremainingTime()
{
    remainingTimeIsSet_ = false;
}

}
}
}
}
}


