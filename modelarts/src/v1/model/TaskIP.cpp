

#include "huaweicloud/modelarts/v1/model/TaskIP.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskIP::TaskIP()
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

TaskIP::~TaskIP() = default;

void TaskIP::validate()
{
}

web::json::value TaskIP::toJson() const
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
bool TaskIP::fromJson(const web::json::value& val)
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


std::string TaskIP::getTask() const
{
    return task_;
}

void TaskIP::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool TaskIP::taskIsSet() const
{
    return taskIsSet_;
}

void TaskIP::unsettask()
{
    taskIsSet_ = false;
}

std::string TaskIP::getIp() const
{
    return ip_;
}

void TaskIP::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool TaskIP::ipIsSet() const
{
    return ipIsSet_;
}

void TaskIP::unsetip()
{
    ipIsSet_ = false;
}

std::string TaskIP::getHostIp() const
{
    return hostIp_;
}

void TaskIP::setHostIp(const std::string& value)
{
    hostIp_ = value;
    hostIpIsSet_ = true;
}

bool TaskIP::hostIpIsSet() const
{
    return hostIpIsSet_;
}

void TaskIP::unsethostIp()
{
    hostIpIsSet_ = false;
}

int32_t TaskIP::getScheduleCount() const
{
    return scheduleCount_;
}

void TaskIP::setScheduleCount(int32_t value)
{
    scheduleCount_ = value;
    scheduleCountIsSet_ = true;
}

bool TaskIP::scheduleCountIsSet() const
{
    return scheduleCountIsSet_;
}

void TaskIP::unsetscheduleCount()
{
    scheduleCountIsSet_ = false;
}

}
}
}
}
}


