

#include "huaweicloud/mpc/v1/model/ExtractTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ExtractTask::ExtractTask()
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
    inputIsSet_ = false;
    outputIsSet_ = false;
    metadataIsSet_ = false;
}

ExtractTask::~ExtractTask() = default;

void ExtractTask::validate()
{
}

web::json::value ExtractTask::toJson() const
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
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool ExtractTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string ExtractTask::getTaskId() const
{
    return taskId_;
}

void ExtractTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ExtractTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ExtractTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ExtractTask::getStatus() const
{
    return status_;
}

void ExtractTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExtractTask::statusIsSet() const
{
    return statusIsSet_;
}

void ExtractTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ExtractTask::getCreateTime() const
{
    return createTime_;
}

void ExtractTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ExtractTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ExtractTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ExtractTask::getStartTime() const
{
    return startTime_;
}

void ExtractTask::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExtractTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExtractTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ExtractTask::getEndTime() const
{
    return endTime_;
}

void ExtractTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExtractTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExtractTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ExtractTask::getErrorCode() const
{
    return errorCode_;
}

void ExtractTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ExtractTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ExtractTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ExtractTask::getDescription() const
{
    return description_;
}

void ExtractTask::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ExtractTask::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ExtractTask::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ExtractTask::getUserData() const
{
    return userData_;
}

void ExtractTask::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ExtractTask::userDataIsSet() const
{
    return userDataIsSet_;
}

void ExtractTask::unsetuserData()
{
    userDataIsSet_ = false;
}

ObsObjInfo ExtractTask::getInput() const
{
    return input_;
}

void ExtractTask::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ExtractTask::inputIsSet() const
{
    return inputIsSet_;
}

void ExtractTask::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo ExtractTask::getOutput() const
{
    return output_;
}

void ExtractTask::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ExtractTask::outputIsSet() const
{
    return outputIsSet_;
}

void ExtractTask::unsetoutput()
{
    outputIsSet_ = false;
}

MetaData ExtractTask::getMetadata() const
{
    return metadata_;
}

void ExtractTask::setMetadata(const MetaData& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ExtractTask::metadataIsSet() const
{
    return metadataIsSet_;
}

void ExtractTask::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


