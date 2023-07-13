

#include "huaweicloud/mpc/v1/model/EditingJob.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




EditingJob::EditingJob()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    editTypeIsSet_ = false;
    outputIsSet_ = false;
    editTaskReqIsSet_ = false;
    outputFileInfoIsSet_ = false;
}

EditingJob::~EditingJob() = default;

void EditingJob::validate()
{
}

web::json::value EditingJob::toJson() const
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(editTypeIsSet_) {
        val[utility::conversions::to_string_t("edit_type")] = ModelBase::toJson(editType_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(editTaskReqIsSet_) {
        val[utility::conversions::to_string_t("edit_task_req")] = ModelBase::toJson(editTaskReq_);
    }
    if(outputFileInfoIsSet_) {
        val[utility::conversions::to_string_t("output_file_info")] = ModelBase::toJson(outputFileInfo_);
    }

    return val;
}

bool EditingJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("edit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("edit_task_req"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_task_req"));
        if(!fieldValue.is_null())
        {
            CreateEditingJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditTaskReq(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_file_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file_info"));
        if(!fieldValue.is_null())
        {
            std::vector<OutputFileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFileInfo(refVal);
        }
    }
    return ok;
}

std::string EditingJob::getTaskId() const
{
    return taskId_;
}

void EditingJob::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool EditingJob::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void EditingJob::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string EditingJob::getStatus() const
{
    return status_;
}

void EditingJob::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EditingJob::statusIsSet() const
{
    return statusIsSet_;
}

void EditingJob::unsetstatus()
{
    statusIsSet_ = false;
}

std::string EditingJob::getCreateTime() const
{
    return createTime_;
}

void EditingJob::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool EditingJob::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void EditingJob::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string EditingJob::getStartTime() const
{
    return startTime_;
}

void EditingJob::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool EditingJob::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void EditingJob::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string EditingJob::getEndTime() const
{
    return endTime_;
}

void EditingJob::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool EditingJob::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void EditingJob::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string EditingJob::getErrorCode() const
{
    return errorCode_;
}

void EditingJob::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool EditingJob::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void EditingJob::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string EditingJob::getDescription() const
{
    return description_;
}

void EditingJob::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EditingJob::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EditingJob::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EditingJob::getUserData() const
{
    return userData_;
}

void EditingJob::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool EditingJob::userDataIsSet() const
{
    return userDataIsSet_;
}

void EditingJob::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string EditingJob::getJobId() const
{
    return jobId_;
}

void EditingJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool EditingJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void EditingJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<std::string>& EditingJob::getEditType()
{
    return editType_;
}

void EditingJob::setEditType(const std::vector<std::string>& value)
{
    editType_ = value;
    editTypeIsSet_ = true;
}

bool EditingJob::editTypeIsSet() const
{
    return editTypeIsSet_;
}

void EditingJob::unseteditType()
{
    editTypeIsSet_ = false;
}

ObsObjInfo EditingJob::getOutput() const
{
    return output_;
}

void EditingJob::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool EditingJob::outputIsSet() const
{
    return outputIsSet_;
}

void EditingJob::unsetoutput()
{
    outputIsSet_ = false;
}

CreateEditingJobReq EditingJob::getEditTaskReq() const
{
    return editTaskReq_;
}

void EditingJob::setEditTaskReq(const CreateEditingJobReq& value)
{
    editTaskReq_ = value;
    editTaskReqIsSet_ = true;
}

bool EditingJob::editTaskReqIsSet() const
{
    return editTaskReqIsSet_;
}

void EditingJob::unseteditTaskReq()
{
    editTaskReqIsSet_ = false;
}

std::vector<OutputFileInfo>& EditingJob::getOutputFileInfo()
{
    return outputFileInfo_;
}

void EditingJob::setOutputFileInfo(const std::vector<OutputFileInfo>& value)
{
    outputFileInfo_ = value;
    outputFileInfoIsSet_ = true;
}

bool EditingJob::outputFileInfoIsSet() const
{
    return outputFileInfoIsSet_;
}

void EditingJob::unsetoutputFileInfo()
{
    outputFileInfoIsSet_ = false;
}

}
}
}
}
}


