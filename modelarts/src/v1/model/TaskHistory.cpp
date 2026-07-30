

#include "huaweicloud/modelarts/v1/model/TaskHistory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskHistory::TaskHistory()
{
    task_ = "";
    taskIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    hostIp_ = "";
    hostIpIsSet_ = false;
    scheduleCount_ = 0;
    scheduleCountIsSet_ = false;
}

TaskHistory::~TaskHistory() = default;

void TaskHistory::validate()
{
}

web::json::value TaskHistory::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(hostIpIsSet_) {
        val[utility::conversions::to_string_t("host_ip")] = ModelBase::toJson(hostIp_);
    }
    if(scheduleCountIsSet_) {
        val[utility::conversions::to_string_t("schedule_count")] = ModelBase::toJson(scheduleCount_);
    }

    return val;
}
bool TaskHistory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleCount(refVal);
        }
    }
    return ok;
}


std::string TaskHistory::getTask() const
{
    return task_;
}

void TaskHistory::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool TaskHistory::taskIsSet() const
{
    return taskIsSet_;
}

void TaskHistory::unsettask()
{
    taskIsSet_ = false;
}

std::string TaskHistory::getIp() const
{
    return ip_;
}

void TaskHistory::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool TaskHistory::ipIsSet() const
{
    return ipIsSet_;
}

void TaskHistory::unsetip()
{
    ipIsSet_ = false;
}

std::string TaskHistory::getHostIp() const
{
    return hostIp_;
}

void TaskHistory::setHostIp(const std::string& value)
{
    hostIp_ = value;
    hostIpIsSet_ = true;
}

bool TaskHistory::hostIpIsSet() const
{
    return hostIpIsSet_;
}

void TaskHistory::unsethostIp()
{
    hostIpIsSet_ = false;
}

int32_t TaskHistory::getScheduleCount() const
{
    return scheduleCount_;
}

void TaskHistory::setScheduleCount(int32_t value)
{
    scheduleCount_ = value;
    scheduleCountIsSet_ = true;
}

bool TaskHistory::scheduleCountIsSet() const
{
    return scheduleCountIsSet_;
}

void TaskHistory::unsetscheduleCount()
{
    scheduleCountIsSet_ = false;
}

}
}
}
}
}


