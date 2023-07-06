

#include "huaweicloud/drs/v5/model/JobProgressInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobProgressInfo::JobProgressInfo()
{
    progress_ = "";
    progressIsSet_ = false;
    incrTransDelay_ = "";
    incrTransDelayIsSet_ = false;
    incrTransDelayMillis_ = "";
    incrTransDelayMillisIsSet_ = false;
    taskMode_ = "";
    taskModeIsSet_ = false;
    transferStatus_ = "";
    transferStatusIsSet_ = false;
    processTime_ = "";
    processTimeIsSet_ = false;
    remainingTime_ = "";
    remainingTimeIsSet_ = false;
    progressMapIsSet_ = false;
}

JobProgressInfo::~JobProgressInfo() = default;

void JobProgressInfo::validate()
{
}

web::json::value JobProgressInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(incrTransDelayIsSet_) {
        val[utility::conversions::to_string_t("incr_trans_delay")] = ModelBase::toJson(incrTransDelay_);
    }
    if(incrTransDelayMillisIsSet_) {
        val[utility::conversions::to_string_t("incr_trans_delay_millis")] = ModelBase::toJson(incrTransDelayMillis_);
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

    return val;
}

bool JobProgressInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incr_trans_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incr_trans_delay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrTransDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incr_trans_delay_millis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incr_trans_delay_millis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrTransDelayMillis(refVal);
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
            std::map<std::string, ProgressCompleteInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgressMap(refVal);
        }
    }
    return ok;
}

std::string JobProgressInfo::getProgress() const
{
    return progress_;
}

void JobProgressInfo::setProgress(const std::string& value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool JobProgressInfo::progressIsSet() const
{
    return progressIsSet_;
}

void JobProgressInfo::unsetprogress()
{
    progressIsSet_ = false;
}

std::string JobProgressInfo::getIncrTransDelay() const
{
    return incrTransDelay_;
}

void JobProgressInfo::setIncrTransDelay(const std::string& value)
{
    incrTransDelay_ = value;
    incrTransDelayIsSet_ = true;
}

bool JobProgressInfo::incrTransDelayIsSet() const
{
    return incrTransDelayIsSet_;
}

void JobProgressInfo::unsetincrTransDelay()
{
    incrTransDelayIsSet_ = false;
}

std::string JobProgressInfo::getIncrTransDelayMillis() const
{
    return incrTransDelayMillis_;
}

void JobProgressInfo::setIncrTransDelayMillis(const std::string& value)
{
    incrTransDelayMillis_ = value;
    incrTransDelayMillisIsSet_ = true;
}

bool JobProgressInfo::incrTransDelayMillisIsSet() const
{
    return incrTransDelayMillisIsSet_;
}

void JobProgressInfo::unsetincrTransDelayMillis()
{
    incrTransDelayMillisIsSet_ = false;
}

std::string JobProgressInfo::getTaskMode() const
{
    return taskMode_;
}

void JobProgressInfo::setTaskMode(const std::string& value)
{
    taskMode_ = value;
    taskModeIsSet_ = true;
}

bool JobProgressInfo::taskModeIsSet() const
{
    return taskModeIsSet_;
}

void JobProgressInfo::unsettaskMode()
{
    taskModeIsSet_ = false;
}

std::string JobProgressInfo::getTransferStatus() const
{
    return transferStatus_;
}

void JobProgressInfo::setTransferStatus(const std::string& value)
{
    transferStatus_ = value;
    transferStatusIsSet_ = true;
}

bool JobProgressInfo::transferStatusIsSet() const
{
    return transferStatusIsSet_;
}

void JobProgressInfo::unsettransferStatus()
{
    transferStatusIsSet_ = false;
}

std::string JobProgressInfo::getProcessTime() const
{
    return processTime_;
}

void JobProgressInfo::setProcessTime(const std::string& value)
{
    processTime_ = value;
    processTimeIsSet_ = true;
}

bool JobProgressInfo::processTimeIsSet() const
{
    return processTimeIsSet_;
}

void JobProgressInfo::unsetprocessTime()
{
    processTimeIsSet_ = false;
}

std::string JobProgressInfo::getRemainingTime() const
{
    return remainingTime_;
}

void JobProgressInfo::setRemainingTime(const std::string& value)
{
    remainingTime_ = value;
    remainingTimeIsSet_ = true;
}

bool JobProgressInfo::remainingTimeIsSet() const
{
    return remainingTimeIsSet_;
}

void JobProgressInfo::unsetremainingTime()
{
    remainingTimeIsSet_ = false;
}

std::map<std::string, ProgressCompleteInfo>& JobProgressInfo::getProgressMap()
{
    return progressMap_;
}

void JobProgressInfo::setProgressMap(const std::map<std::string, ProgressCompleteInfo>& value)
{
    progressMap_ = value;
    progressMapIsSet_ = true;
}

bool JobProgressInfo::progressMapIsSet() const
{
    return progressMapIsSet_;
}

void JobProgressInfo::unsetprogressMap()
{
    progressMapIsSet_ = false;
}

}
}
}
}
}


