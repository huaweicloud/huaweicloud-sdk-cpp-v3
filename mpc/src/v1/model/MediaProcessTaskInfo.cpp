

#include "huaweicloud/mpc/v1/model/MediaProcessTaskInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MediaProcessTaskInfo::MediaProcessTaskInfo()
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

MediaProcessTaskInfo::~MediaProcessTaskInfo() = default;

void MediaProcessTaskInfo::validate()
{
}

web::json::value MediaProcessTaskInfo::toJson() const
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

bool MediaProcessTaskInfo::fromJson(const web::json::value& val)
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


std::string MediaProcessTaskInfo::getTaskId() const
{
    return taskId_;
}

void MediaProcessTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool MediaProcessTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void MediaProcessTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string MediaProcessTaskInfo::getStatus() const
{
    return status_;
}

void MediaProcessTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MediaProcessTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void MediaProcessTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MediaProcessTaskInfo::getCreateTime() const
{
    return createTime_;
}

void MediaProcessTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool MediaProcessTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void MediaProcessTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string MediaProcessTaskInfo::getEndTime() const
{
    return endTime_;
}

void MediaProcessTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool MediaProcessTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void MediaProcessTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo MediaProcessTaskInfo::getOutput() const
{
    return output_;
}

void MediaProcessTaskInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool MediaProcessTaskInfo::outputIsSet() const
{
    return outputIsSet_;
}

void MediaProcessTaskInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string MediaProcessTaskInfo::getDescription() const
{
    return description_;
}

void MediaProcessTaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MediaProcessTaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MediaProcessTaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& MediaProcessTaskInfo::getOutputFileName()
{
    return outputFileName_;
}

void MediaProcessTaskInfo::setOutputFileName(const std::vector<std::string>& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool MediaProcessTaskInfo::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void MediaProcessTaskInfo::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

ObsObjInfo MediaProcessTaskInfo::getInput() const
{
    return input_;
}

void MediaProcessTaskInfo::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool MediaProcessTaskInfo::inputIsSet() const
{
    return inputIsSet_;
}

void MediaProcessTaskInfo::unsetinput()
{
    inputIsSet_ = false;
}

}
}
}
}
}


