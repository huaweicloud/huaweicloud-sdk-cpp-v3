

#include "huaweicloud/live/v1/model/ModifyLivePullStreamTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyLivePullStreamTask::ModifyLivePullStreamTask()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sourceUrlsIsSet_ = false;
    vodLoopTime_ = "";
    vodLoopTimeIsSet_ = false;
    vodRefreshType_ = "";
    vodRefreshTypeIsSet_ = false;
    vodStartVideoIndex_ = 0;
    vodStartVideoIndexIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    vodStartVideoTime_ = 0;
    vodStartVideoTimeIsSet_ = false;
    callbackEventsIsSet_ = false;
}

ModifyLivePullStreamTask::~ModifyLivePullStreamTask() = default;

void ModifyLivePullStreamTask::validate()
{
}

web::json::value ModifyLivePullStreamTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sourceUrlsIsSet_) {
        val[utility::conversions::to_string_t("source_urls")] = ModelBase::toJson(sourceUrls_);
    }
    if(vodLoopTimeIsSet_) {
        val[utility::conversions::to_string_t("vod_loop_time")] = ModelBase::toJson(vodLoopTime_);
    }
    if(vodRefreshTypeIsSet_) {
        val[utility::conversions::to_string_t("vod_refresh_type")] = ModelBase::toJson(vodRefreshType_);
    }
    if(vodStartVideoIndexIsSet_) {
        val[utility::conversions::to_string_t("vod_start_video_index")] = ModelBase::toJson(vodStartVideoIndex_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(vodStartVideoTimeIsSet_) {
        val[utility::conversions::to_string_t("vod_start_video_time")] = ModelBase::toJson(vodStartVideoTime_);
    }
    if(callbackEventsIsSet_) {
        val[utility::conversions::to_string_t("callback_events")] = ModelBase::toJson(callbackEvents_);
    }

    return val;
}
bool ModifyLivePullStreamTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_loop_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_loop_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodLoopTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_refresh_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_refresh_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodRefreshType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_start_video_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_start_video_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodStartVideoIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_start_video_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_start_video_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodStartVideoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackEvents(refVal);
        }
    }
    return ok;
}


std::string ModifyLivePullStreamTask::getTaskId() const
{
    return taskId_;
}

void ModifyLivePullStreamTask::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ModifyLivePullStreamTask::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ModifyLivePullStreamTask::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ModifyLivePullStreamTask::getStatus() const
{
    return status_;
}

void ModifyLivePullStreamTask::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyLivePullStreamTask::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyLivePullStreamTask::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ModifyLivePullStreamTask::getSourceUrls()
{
    return sourceUrls_;
}

void ModifyLivePullStreamTask::setSourceUrls(const std::vector<std::string>& value)
{
    sourceUrls_ = value;
    sourceUrlsIsSet_ = true;
}

bool ModifyLivePullStreamTask::sourceUrlsIsSet() const
{
    return sourceUrlsIsSet_;
}

void ModifyLivePullStreamTask::unsetsourceUrls()
{
    sourceUrlsIsSet_ = false;
}

std::string ModifyLivePullStreamTask::getVodLoopTime() const
{
    return vodLoopTime_;
}

void ModifyLivePullStreamTask::setVodLoopTime(const std::string& value)
{
    vodLoopTime_ = value;
    vodLoopTimeIsSet_ = true;
}

bool ModifyLivePullStreamTask::vodLoopTimeIsSet() const
{
    return vodLoopTimeIsSet_;
}

void ModifyLivePullStreamTask::unsetvodLoopTime()
{
    vodLoopTimeIsSet_ = false;
}

std::string ModifyLivePullStreamTask::getVodRefreshType() const
{
    return vodRefreshType_;
}

void ModifyLivePullStreamTask::setVodRefreshType(const std::string& value)
{
    vodRefreshType_ = value;
    vodRefreshTypeIsSet_ = true;
}

bool ModifyLivePullStreamTask::vodRefreshTypeIsSet() const
{
    return vodRefreshTypeIsSet_;
}

void ModifyLivePullStreamTask::unsetvodRefreshType()
{
    vodRefreshTypeIsSet_ = false;
}

int32_t ModifyLivePullStreamTask::getVodStartVideoIndex() const
{
    return vodStartVideoIndex_;
}

void ModifyLivePullStreamTask::setVodStartVideoIndex(int32_t value)
{
    vodStartVideoIndex_ = value;
    vodStartVideoIndexIsSet_ = true;
}

bool ModifyLivePullStreamTask::vodStartVideoIndexIsSet() const
{
    return vodStartVideoIndexIsSet_;
}

void ModifyLivePullStreamTask::unsetvodStartVideoIndex()
{
    vodStartVideoIndexIsSet_ = false;
}

utility::datetime ModifyLivePullStreamTask::getStartTime() const
{
    return startTime_;
}

void ModifyLivePullStreamTask::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ModifyLivePullStreamTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ModifyLivePullStreamTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime ModifyLivePullStreamTask::getEndTime() const
{
    return endTime_;
}

void ModifyLivePullStreamTask::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ModifyLivePullStreamTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ModifyLivePullStreamTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ModifyLivePullStreamTask::getVodStartVideoTime() const
{
    return vodStartVideoTime_;
}

void ModifyLivePullStreamTask::setVodStartVideoTime(int32_t value)
{
    vodStartVideoTime_ = value;
    vodStartVideoTimeIsSet_ = true;
}

bool ModifyLivePullStreamTask::vodStartVideoTimeIsSet() const
{
    return vodStartVideoTimeIsSet_;
}

void ModifyLivePullStreamTask::unsetvodStartVideoTime()
{
    vodStartVideoTimeIsSet_ = false;
}

std::vector<std::string>& ModifyLivePullStreamTask::getCallbackEvents()
{
    return callbackEvents_;
}

void ModifyLivePullStreamTask::setCallbackEvents(const std::vector<std::string>& value)
{
    callbackEvents_ = value;
    callbackEventsIsSet_ = true;
}

bool ModifyLivePullStreamTask::callbackEventsIsSet() const
{
    return callbackEventsIsSet_;
}

void ModifyLivePullStreamTask::unsetcallbackEvents()
{
    callbackEventsIsSet_ = false;
}

}
}
}
}
}


