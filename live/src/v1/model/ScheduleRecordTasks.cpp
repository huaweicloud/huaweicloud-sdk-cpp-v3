

#include "huaweicloud/live/v1/model/ScheduleRecordTasks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ScheduleRecordTasks::ScheduleRecordTasks()
{
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    stopTime_ = 0L;
    stopTimeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ScheduleRecordTasks::~ScheduleRecordTasks() = default;

void ScheduleRecordTasks::validate()
{
}

web::json::value ScheduleRecordTasks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(stopTimeIsSet_) {
        val[utility::conversions::to_string_t("stop_time")] = ModelBase::toJson(stopTime_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ScheduleRecordTasks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stop_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stop_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStopTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string ScheduleRecordTasks::getDomain() const
{
    return domain_;
}

void ScheduleRecordTasks::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ScheduleRecordTasks::domainIsSet() const
{
    return domainIsSet_;
}

void ScheduleRecordTasks::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ScheduleRecordTasks::getApp() const
{
    return app_;
}

void ScheduleRecordTasks::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ScheduleRecordTasks::appIsSet() const
{
    return appIsSet_;
}

void ScheduleRecordTasks::unsetapp()
{
    appIsSet_ = false;
}

std::string ScheduleRecordTasks::getStream() const
{
    return stream_;
}

void ScheduleRecordTasks::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ScheduleRecordTasks::streamIsSet() const
{
    return streamIsSet_;
}

void ScheduleRecordTasks::unsetstream()
{
    streamIsSet_ = false;
}

int64_t ScheduleRecordTasks::getStartTime() const
{
    return startTime_;
}

void ScheduleRecordTasks::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleRecordTasks::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleRecordTasks::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ScheduleRecordTasks::getEndTime() const
{
    return endTime_;
}

void ScheduleRecordTasks::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleRecordTasks::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleRecordTasks::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ScheduleRecordTasks::getTemplateId() const
{
    return templateId_;
}

void ScheduleRecordTasks::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ScheduleRecordTasks::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ScheduleRecordTasks::unsettemplateId()
{
    templateIdIsSet_ = false;
}

int64_t ScheduleRecordTasks::getStopTime() const
{
    return stopTime_;
}

void ScheduleRecordTasks::setStopTime(int64_t value)
{
    stopTime_ = value;
    stopTimeIsSet_ = true;
}

bool ScheduleRecordTasks::stopTimeIsSet() const
{
    return stopTimeIsSet_;
}

void ScheduleRecordTasks::unsetstopTime()
{
    stopTimeIsSet_ = false;
}

std::string ScheduleRecordTasks::getTaskId() const
{
    return taskId_;
}

void ScheduleRecordTasks::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ScheduleRecordTasks::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ScheduleRecordTasks::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


