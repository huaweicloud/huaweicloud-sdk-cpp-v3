

#include "huaweicloud/mpc/v1/model/TaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TaskInfo::TaskInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    outputIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    outputFileNameIsSet_ = false;
    inputIsSet_ = false;
}

TaskInfo::~TaskInfo() = default;

void TaskInfo::validate()
{
}

web::json::value TaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(outputFileNameIsSet_) {
        val[utility::conversions::to_string_t("output_file_name")] = ModelBase::toJson(outputFileName_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }

    return val;
}
bool TaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    return ok;
}


std::string TaskInfo::getTaskId() const
{
    return taskId_;
}

void TaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TaskInfo::getStatus() const
{
    return status_;
}

void TaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TaskInfo::getCreateTime() const
{
    return createTime_;
}

void TaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskInfo::getEndTime() const
{
    return endTime_;
}

void TaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo TaskInfo::getOutput() const
{
    return output_;
}

void TaskInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TaskInfo::outputIsSet() const
{
    return outputIsSet_;
}

void TaskInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string TaskInfo::getDescription() const
{
    return description_;
}

void TaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& TaskInfo::getOutputFileName()
{
    return outputFileName_;
}

void TaskInfo::setOutputFileName(const std::vector<std::string>& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool TaskInfo::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void TaskInfo::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

ObsObjInfo TaskInfo::getInput() const
{
    return input_;
}

void TaskInfo::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool TaskInfo::inputIsSet() const
{
    return inputIsSet_;
}

void TaskInfo::unsetinput()
{
    inputIsSet_ = false;
}

}
}
}
}
}


