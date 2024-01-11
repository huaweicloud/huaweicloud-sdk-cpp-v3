

#include "huaweicloud/mpc/v1/model/TaskDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TaskDetailInfo::TaskDetailInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    mediaDetailIsSet_ = false;
    xcodeErrorIsSet_ = false;
}

TaskDetailInfo::~TaskDetailInfo() = default;

void TaskDetailInfo::validate()
{
}

web::json::value TaskDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
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
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(mediaDetailIsSet_) {
        val[utility::conversions::to_string_t("media_detail")] = ModelBase::toJson(mediaDetail_);
    }
    if(xcodeErrorIsSet_) {
        val[utility::conversions::to_string_t("xcode_error")] = ModelBase::toJson(xcodeError_);
    }

    return val;
}
bool TaskDetailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("media_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media_detail"));
        if(!fieldValue.is_null())
        {
            MediaDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xcode_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xcode_error"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXcodeError(refVal);
        }
    }
    return ok;
}


std::string TaskDetailInfo::getTaskId() const
{
    return taskId_;
}

void TaskDetailInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool TaskDetailInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void TaskDetailInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string TaskDetailInfo::getStatus() const
{
    return status_;
}

void TaskDetailInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskDetailInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TaskDetailInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t TaskDetailInfo::getProgress() const
{
    return progress_;
}

void TaskDetailInfo::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool TaskDetailInfo::progressIsSet() const
{
    return progressIsSet_;
}

void TaskDetailInfo::unsetprogress()
{
    progressIsSet_ = false;
}

std::string TaskDetailInfo::getCreateTime() const
{
    return createTime_;
}

void TaskDetailInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskDetailInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskDetailInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskDetailInfo::getStartTime() const
{
    return startTime_;
}

void TaskDetailInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TaskDetailInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TaskDetailInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string TaskDetailInfo::getEndTime() const
{
    return endTime_;
}

void TaskDetailInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TaskDetailInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TaskDetailInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo TaskDetailInfo::getInput() const
{
    return input_;
}

void TaskDetailInfo::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool TaskDetailInfo::inputIsSet() const
{
    return inputIsSet_;
}

void TaskDetailInfo::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo TaskDetailInfo::getOutput() const
{
    return output_;
}

void TaskDetailInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TaskDetailInfo::outputIsSet() const
{
    return outputIsSet_;
}

void TaskDetailInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string TaskDetailInfo::getUserData() const
{
    return userData_;
}

void TaskDetailInfo::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool TaskDetailInfo::userDataIsSet() const
{
    return userDataIsSet_;
}

void TaskDetailInfo::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string TaskDetailInfo::getErrorCode() const
{
    return errorCode_;
}

void TaskDetailInfo::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool TaskDetailInfo::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void TaskDetailInfo::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string TaskDetailInfo::getDescription() const
{
    return description_;
}

void TaskDetailInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TaskDetailInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TaskDetailInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

MediaDetail TaskDetailInfo::getMediaDetail() const
{
    return mediaDetail_;
}

void TaskDetailInfo::setMediaDetail(const MediaDetail& value)
{
    mediaDetail_ = value;
    mediaDetailIsSet_ = true;
}

bool TaskDetailInfo::mediaDetailIsSet() const
{
    return mediaDetailIsSet_;
}

void TaskDetailInfo::unsetmediaDetail()
{
    mediaDetailIsSet_ = false;
}

ErrorResponse TaskDetailInfo::getXcodeError() const
{
    return xcodeError_;
}

void TaskDetailInfo::setXcodeError(const ErrorResponse& value)
{
    xcodeError_ = value;
    xcodeErrorIsSet_ = true;
}

bool TaskDetailInfo::xcodeErrorIsSet() const
{
    return xcodeErrorIsSet_;
}

void TaskDetailInfo::unsetxcodeError()
{
    xcodeErrorIsSet_ = false;
}

}
}
}
}
}


