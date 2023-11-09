

#include "huaweicloud/tics/v1/model/ProcessorVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ProcessorVo::ProcessorVo()
{
    endTime_ = 0L;
    endTimeIsSet_ = false;
    execDurationNano_ = 0L;
    execDurationNanoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    lastStepTaskInsIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    taskInRecordCnt_ = 0L;
    taskInRecordCntIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskOutRecordCnt_ = 0L;
    taskOutRecordCntIsSet_ = false;
    taskShowInfoIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
}

ProcessorVo::~ProcessorVo() = default;

void ProcessorVo::validate()
{
}

web::json::value ProcessorVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(execDurationNanoIsSet_) {
        val[utility::conversions::to_string_t("exec_duration_nano")] = ModelBase::toJson(execDurationNano_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastStepTaskInsIdIsSet_) {
        val[utility::conversions::to_string_t("last_step_task_ins_id")] = ModelBase::toJson(lastStepTaskInsId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(taskInRecordCntIsSet_) {
        val[utility::conversions::to_string_t("task_in_record_cnt")] = ModelBase::toJson(taskInRecordCnt_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskOutRecordCntIsSet_) {
        val[utility::conversions::to_string_t("task_out_record_cnt")] = ModelBase::toJson(taskOutRecordCnt_);
    }
    if(taskShowInfoIsSet_) {
        val[utility::conversions::to_string_t("task_show_info")] = ModelBase::toJson(taskShowInfo_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }

    return val;
}
bool ProcessorVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_duration_nano"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_duration_nano"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecDurationNano(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_step_task_ins_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_step_task_ins_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastStepTaskInsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_in_record_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_in_record_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskInRecordCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_out_record_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_out_record_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskOutRecordCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_show_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_show_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskShowInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    return ok;
}


int64_t ProcessorVo::getEndTime() const
{
    return endTime_;
}

void ProcessorVo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ProcessorVo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ProcessorVo::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t ProcessorVo::getExecDurationNano() const
{
    return execDurationNano_;
}

void ProcessorVo::setExecDurationNano(int64_t value)
{
    execDurationNano_ = value;
    execDurationNanoIsSet_ = true;
}

bool ProcessorVo::execDurationNanoIsSet() const
{
    return execDurationNanoIsSet_;
}

void ProcessorVo::unsetexecDurationNano()
{
    execDurationNanoIsSet_ = false;
}

std::string ProcessorVo::getId() const
{
    return id_;
}

void ProcessorVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProcessorVo::idIsSet() const
{
    return idIsSet_;
}

void ProcessorVo::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ProcessorVo::getLastStepTaskInsId()
{
    return lastStepTaskInsId_;
}

void ProcessorVo::setLastStepTaskInsId(const std::vector<std::string>& value)
{
    lastStepTaskInsId_ = value;
    lastStepTaskInsIdIsSet_ = true;
}

bool ProcessorVo::lastStepTaskInsIdIsSet() const
{
    return lastStepTaskInsIdIsSet_;
}

void ProcessorVo::unsetlastStepTaskInsId()
{
    lastStepTaskInsIdIsSet_ = false;
}

int64_t ProcessorVo::getStartTime() const
{
    return startTime_;
}

void ProcessorVo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ProcessorVo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ProcessorVo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ProcessorVo::getTaskInRecordCnt() const
{
    return taskInRecordCnt_;
}

void ProcessorVo::setTaskInRecordCnt(int64_t value)
{
    taskInRecordCnt_ = value;
    taskInRecordCntIsSet_ = true;
}

bool ProcessorVo::taskInRecordCntIsSet() const
{
    return taskInRecordCntIsSet_;
}

void ProcessorVo::unsettaskInRecordCnt()
{
    taskInRecordCntIsSet_ = false;
}

std::string ProcessorVo::getTaskName() const
{
    return taskName_;
}

void ProcessorVo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ProcessorVo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ProcessorVo::unsettaskName()
{
    taskNameIsSet_ = false;
}

int64_t ProcessorVo::getTaskOutRecordCnt() const
{
    return taskOutRecordCnt_;
}

void ProcessorVo::setTaskOutRecordCnt(int64_t value)
{
    taskOutRecordCnt_ = value;
    taskOutRecordCntIsSet_ = true;
}

bool ProcessorVo::taskOutRecordCntIsSet() const
{
    return taskOutRecordCntIsSet_;
}

void ProcessorVo::unsettaskOutRecordCnt()
{
    taskOutRecordCntIsSet_ = false;
}

Object ProcessorVo::getTaskShowInfo() const
{
    return taskShowInfo_;
}

void ProcessorVo::setTaskShowInfo(const Object& value)
{
    taskShowInfo_ = value;
    taskShowInfoIsSet_ = true;
}

bool ProcessorVo::taskShowInfoIsSet() const
{
    return taskShowInfoIsSet_;
}

void ProcessorVo::unsettaskShowInfo()
{
    taskShowInfoIsSet_ = false;
}

std::string ProcessorVo::getTaskStatus() const
{
    return taskStatus_;
}

void ProcessorVo::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ProcessorVo::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ProcessorVo::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

}
}
}
}
}


