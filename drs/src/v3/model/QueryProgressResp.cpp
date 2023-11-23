

#include "huaweicloud/drs/v3/model/QueryProgressResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryProgressResp::QueryProgressResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    progress_ = "";
    progressIsSet_ = false;
    increTransDelay_ = "";
    increTransDelayIsSet_ = false;
    increTransDelayMillis_ = "";
    increTransDelayMillisIsSet_ = false;
    taskMode_ = "";
    taskModeIsSet_ = false;
    transferStatus_ = "";
    transferStatusIsSet_ = false;
    processTime_ = "";
    processTimeIsSet_ = false;
    remainingTime_ = "";
    remainingTimeIsSet_ = false;
    progressMapIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

QueryProgressResp::~QueryProgressResp() = default;

void QueryProgressResp::validate()
{
}

web::json::value QueryProgressResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(increTransDelayIsSet_) {
        val[utility::conversions::to_string_t("incre_trans_delay")] = ModelBase::toJson(increTransDelay_);
    }
    if(increTransDelayMillisIsSet_) {
        val[utility::conversions::to_string_t("incre_trans_delay_millis")] = ModelBase::toJson(increTransDelayMillis_);
    }
    if(taskModeIsSet_) {
        val[utility::conversions::to_string_t("task_mode")] = ModelBase::toJson(taskMode_);
    }
    if(transferStatusIsSet_) {
        val[utility::conversions::to_string_t("transfer_status")] = ModelBase::toJson(transferStatus_);
    }
    if(processTimeIsSet_) {
        val[utility::conversions::to_string_t("process_time")] = ModelBase::toJson(processTime_);
    }
    if(remainingTimeIsSet_) {
        val[utility::conversions::to_string_t("remaining_time")] = ModelBase::toJson(remainingTime_);
    }
    if(progressMapIsSet_) {
        val[utility::conversions::to_string_t("progress_map")] = ModelBase::toJson(progressMap_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool QueryProgressResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_trans_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_trans_delay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreTransDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incre_trans_delay_millis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incre_trans_delay_millis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncreTransDelayMillis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ProgressInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgressMap(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string QueryProgressResp::getJobId() const
{
    return jobId_;
}

void QueryProgressResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryProgressResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryProgressResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryProgressResp::getProgress() const
{
    return progress_;
}

void QueryProgressResp::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool QueryProgressResp::progressIsSet() const
{
    return progressIsSet_;
}

void QueryProgressResp::unsetprogress()
{
    progressIsSet_ = false;
}

std::string QueryProgressResp::getIncreTransDelay() const
{
    return increTransDelay_;
}

void QueryProgressResp::setIncreTransDelay(const std::string& value)
{
    increTransDelay_ = value;
    increTransDelayIsSet_ = true;
}

bool QueryProgressResp::increTransDelayIsSet() const
{
    return increTransDelayIsSet_;
}

void QueryProgressResp::unsetincreTransDelay()
{
    increTransDelayIsSet_ = false;
}

std::string QueryProgressResp::getIncreTransDelayMillis() const
{
    return increTransDelayMillis_;
}

void QueryProgressResp::setIncreTransDelayMillis(const std::string& value)
{
    increTransDelayMillis_ = value;
    increTransDelayMillisIsSet_ = true;
}

bool QueryProgressResp::increTransDelayMillisIsSet() const
{
    return increTransDelayMillisIsSet_;
}

void QueryProgressResp::unsetincreTransDelayMillis()
{
    increTransDelayMillisIsSet_ = false;
}

std::string QueryProgressResp::getTaskMode() const
{
    return taskMode_;
}

void QueryProgressResp::setTaskMode(const std::string& value)
{
    taskMode_ = value;
    taskModeIsSet_ = true;
}

bool QueryProgressResp::taskModeIsSet() const
{
    return taskModeIsSet_;
}

void QueryProgressResp::unsettaskMode()
{
    taskModeIsSet_ = false;
}

std::string QueryProgressResp::getTransferStatus() const
{
    return transferStatus_;
}

void QueryProgressResp::setTransferStatus(const std::string& value)
{
    transferStatus_ = value;
    transferStatusIsSet_ = true;
}

bool QueryProgressResp::transferStatusIsSet() const
{
    return transferStatusIsSet_;
}

void QueryProgressResp::unsettransferStatus()
{
    transferStatusIsSet_ = false;
}

std::string QueryProgressResp::getProcessTime() const
{
    return processTime_;
}

void QueryProgressResp::setProcessTime(const std::string& value)
{
    processTime_ = value;
    processTimeIsSet_ = true;
}

bool QueryProgressResp::processTimeIsSet() const
{
    return processTimeIsSet_;
}

void QueryProgressResp::unsetprocessTime()
{
    processTimeIsSet_ = false;
}

std::string QueryProgressResp::getRemainingTime() const
{
    return remainingTime_;
}

void QueryProgressResp::setRemainingTime(const std::string& value)
{
    remainingTime_ = value;
    remainingTimeIsSet_ = true;
}

bool QueryProgressResp::remainingTimeIsSet() const
{
    return remainingTimeIsSet_;
}

void QueryProgressResp::unsetremainingTime()
{
    remainingTimeIsSet_ = false;
}

std::map<std::string, ProgressInfo>& QueryProgressResp::getProgressMap()
{
    return progressMap_;
}

void QueryProgressResp::setProgressMap(const std::map<std::string, ProgressInfo>& value)
{
    progressMap_ = value;
    progressMapIsSet_ = true;
}

bool QueryProgressResp::progressMapIsSet() const
{
    return progressMapIsSet_;
}

void QueryProgressResp::unsetprogressMap()
{
    progressMapIsSet_ = false;
}

std::string QueryProgressResp::getErrorCode() const
{
    return errorCode_;
}

void QueryProgressResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryProgressResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryProgressResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryProgressResp::getErrorMsg() const
{
    return errorMsg_;
}

void QueryProgressResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool QueryProgressResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void QueryProgressResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


