

#include "huaweicloud/mpc/v1/model/RemuxTask.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




RemuxTask::RemuxTask()
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
    outputParamIsSet_ = false;
    completeRatio_ = 0;
    completeRatioIsSet_ = false;
    outputMetadataIsSet_ = false;
}

RemuxTask::~RemuxTask() = default;

void RemuxTask::validate()
{
}

web::json::value RemuxTask::toJson() const
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
    if(outputParamIsSet_) {
        val[utility::conversions::to_string_t("output_param")] = ModelBase::toJson(outputParam_);
    }
    if(completeRatioIsSet_) {
        val[utility::conversions::to_string_t("complete_ratio")] = ModelBase::toJson(completeRatio_);
    }
    if(outputMetadataIsSet_) {
        val[utility::conversions::to_string_t("output_metadata")] = ModelBase::toJson(outputMetadata_);
    }

    return val;
}

bool RemuxTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("output_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_param"));
        if(!fieldValue.is_null())
        {
            RemuxOutputParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("complete_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_metadata"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputMetadata(refVal);
        }
    }
    return ok;
}

std::string RemuxTask::getTaskId() const
{
    return taskId_;
}

void RemuxTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RemuxTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RemuxTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string RemuxTask::getStatus() const
{
    return status_;
}

void RemuxTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RemuxTask::statusIsSet() const
{
    return statusIsSet_;
}

void RemuxTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RemuxTask::getCreateTime() const
{
    return createTime_;
}

void RemuxTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RemuxTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RemuxTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string RemuxTask::getStartTime() const
{
    return startTime_;
}

void RemuxTask::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RemuxTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RemuxTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string RemuxTask::getEndTime() const
{
    return endTime_;
}

void RemuxTask::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool RemuxTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void RemuxTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string RemuxTask::getErrorCode() const
{
    return errorCode_;
}

void RemuxTask::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool RemuxTask::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void RemuxTask::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string RemuxTask::getDescription() const
{
    return description_;
}

void RemuxTask::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RemuxTask::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RemuxTask::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RemuxTask::getUserData() const
{
    return userData_;
}

void RemuxTask::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool RemuxTask::userDataIsSet() const
{
    return userDataIsSet_;
}

void RemuxTask::unsetuserData()
{
    userDataIsSet_ = false;
}

ObsObjInfo RemuxTask::getInput() const
{
    return input_;
}

void RemuxTask::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool RemuxTask::inputIsSet() const
{
    return inputIsSet_;
}

void RemuxTask::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo RemuxTask::getOutput() const
{
    return output_;
}

void RemuxTask::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool RemuxTask::outputIsSet() const
{
    return outputIsSet_;
}

void RemuxTask::unsetoutput()
{
    outputIsSet_ = false;
}

RemuxOutputParam RemuxTask::getOutputParam() const
{
    return outputParam_;
}

void RemuxTask::setOutputParam(const RemuxOutputParam& value)
{
    outputParam_ = value;
    outputParamIsSet_ = true;
}

bool RemuxTask::outputParamIsSet() const
{
    return outputParamIsSet_;
}

void RemuxTask::unsetoutputParam()
{
    outputParamIsSet_ = false;
}

int32_t RemuxTask::getCompleteRatio() const
{
    return completeRatio_;
}

void RemuxTask::setCompleteRatio(int32_t value)
{
    completeRatio_ = value;
    completeRatioIsSet_ = true;
}

bool RemuxTask::completeRatioIsSet() const
{
    return completeRatioIsSet_;
}

void RemuxTask::unsetcompleteRatio()
{
    completeRatioIsSet_ = false;
}

MetaData RemuxTask::getOutputMetadata() const
{
    return outputMetadata_;
}

void RemuxTask::setOutputMetadata(const MetaData& value)
{
    outputMetadata_ = value;
    outputMetadataIsSet_ = true;
}

bool RemuxTask::outputMetadataIsSet() const
{
    return outputMetadataIsSet_;
}

void RemuxTask::unsetoutputMetadata()
{
    outputMetadataIsSet_ = false;
}

}
}
}
}
}


