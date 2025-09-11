

#include "huaweicloud/functiongraph/v2/model/StartSyncWorkflowExecutionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StartSyncWorkflowExecutionResponse::StartSyncWorkflowExecutionResponse()
{
    executionId_ = "";
    executionIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    outputIsSet_ = false;
    errorsIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

StartSyncWorkflowExecutionResponse::~StartSyncWorkflowExecutionResponse() = default;

void StartSyncWorkflowExecutionResponse::validate()
{
}

web::json::value StartSyncWorkflowExecutionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(errorsIsSet_) {
        val[utility::conversions::to_string_t("errors")] = ModelBase::toJson(errors_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool StartSyncWorkflowExecutionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errors"));
        if(!fieldValue.is_null())
        {
            std::vector<SyncExecutionNodeErrorDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    return ok;
}


std::string StartSyncWorkflowExecutionResponse::getExecutionId() const
{
    return executionId_;
}

void StartSyncWorkflowExecutionResponse::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool StartSyncWorkflowExecutionResponse::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void StartSyncWorkflowExecutionResponse::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string StartSyncWorkflowExecutionResponse::getStatus() const
{
    return status_;
}

void StartSyncWorkflowExecutionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StartSyncWorkflowExecutionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StartSyncWorkflowExecutionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object StartSyncWorkflowExecutionResponse::getOutput() const
{
    return output_;
}

void StartSyncWorkflowExecutionResponse::setOutput(const Object& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool StartSyncWorkflowExecutionResponse::outputIsSet() const
{
    return outputIsSet_;
}

void StartSyncWorkflowExecutionResponse::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<SyncExecutionNodeErrorDetail>& StartSyncWorkflowExecutionResponse::getErrors()
{
    return errors_;
}

void StartSyncWorkflowExecutionResponse::setErrors(const std::vector<SyncExecutionNodeErrorDetail>& value)
{
    errors_ = value;
    errorsIsSet_ = true;
}

bool StartSyncWorkflowExecutionResponse::errorsIsSet() const
{
    return errorsIsSet_;
}

void StartSyncWorkflowExecutionResponse::unseterrors()
{
    errorsIsSet_ = false;
}

std::string StartSyncWorkflowExecutionResponse::getBeginTime() const
{
    return beginTime_;
}

void StartSyncWorkflowExecutionResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool StartSyncWorkflowExecutionResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void StartSyncWorkflowExecutionResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string StartSyncWorkflowExecutionResponse::getEndTime() const
{
    return endTime_;
}

void StartSyncWorkflowExecutionResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StartSyncWorkflowExecutionResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StartSyncWorkflowExecutionResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


