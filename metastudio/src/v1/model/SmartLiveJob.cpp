

#include "huaweicloud/metastudio/v1/model/SmartLiveJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartLiveJob::SmartLiveJob()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    roomName_ = "";
    roomNameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    duration_ = 0.0f;
    durationIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastupdateTime_ = "";
    lastupdateTimeIsSet_ = false;
    rtcRoomInfoIsSet_ = false;
    liveEventReportUrl_ = "";
    liveEventReportUrlIsSet_ = false;
    liveEventCallbackConfigIsSet_ = false;
    rtcCallbackConfigIsSet_ = false;
    streamDuration_ = 0.0f;
    streamDurationIsSet_ = false;
    blockReason_ = "";
    blockReasonIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    coStreamerConfigIsSet_ = false;
    liveJobLogIsSet_ = false;
    relationLivePlatformInfoIsSet_ = false;
    usedResourceType_ = "";
    usedResourceTypeIsSet_ = false;
    isAiMarkOn_ = false;
    isAiMarkOnIsSet_ = false;
}

SmartLiveJob::~SmartLiveJob() = default;

void SmartLiveJob::validate()
{
}

web::json::value SmartLiveJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastupdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastupdate_time")] = ModelBase::toJson(lastupdateTime_);
    }
    if(rtcRoomInfoIsSet_) {
        val[utility::conversions::to_string_t("rtc_room_info")] = ModelBase::toJson(rtcRoomInfo_);
    }
    if(liveEventReportUrlIsSet_) {
        val[utility::conversions::to_string_t("live_event_report_url")] = ModelBase::toJson(liveEventReportUrl_);
    }
    if(liveEventCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("live_event_callback_config")] = ModelBase::toJson(liveEventCallbackConfig_);
    }
    if(rtcCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("rtc_callback_config")] = ModelBase::toJson(rtcCallbackConfig_);
    }
    if(streamDurationIsSet_) {
        val[utility::conversions::to_string_t("stream_duration")] = ModelBase::toJson(streamDuration_);
    }
    if(blockReasonIsSet_) {
        val[utility::conversions::to_string_t("block_reason")] = ModelBase::toJson(blockReason_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(coStreamerConfigIsSet_) {
        val[utility::conversions::to_string_t("co_streamer_config")] = ModelBase::toJson(coStreamerConfig_);
    }
    if(liveJobLogIsSet_) {
        val[utility::conversions::to_string_t("live_job_log")] = ModelBase::toJson(liveJobLog_);
    }
    if(relationLivePlatformInfoIsSet_) {
        val[utility::conversions::to_string_t("relation_live_platform_info")] = ModelBase::toJson(relationLivePlatformInfo_);
    }
    if(usedResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("used_resource_type")] = ModelBase::toJson(usedResourceType_);
    }
    if(isAiMarkOnIsSet_) {
        val[utility::conversions::to_string_t("is_ai_mark_on")] = ModelBase::toJson(isAiMarkOn_);
    }

    return val;
}
bool SmartLiveJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lastupdate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastupdate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastupdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rtc_room_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_room_info"));
        if(!fieldValue.is_null())
        {
            RTCRoomInfoList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcRoomInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_event_report_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_event_report_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveEventReportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_event_callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_event_callback_config"));
        if(!fieldValue.is_null())
        {
            LiveEventCallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveEventCallbackConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rtc_callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rtc_callback_config"));
        if(!fieldValue.is_null())
        {
            RTCLiveEventCallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtcCallbackConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("co_streamer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("co_streamer_config"));
        if(!fieldValue.is_null())
        {
            CoStreamerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoStreamerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_job_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_job_log"));
        if(!fieldValue.is_null())
        {
            LiveJobLog refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveJobLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation_live_platform_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation_live_platform_info"));
        if(!fieldValue.is_null())
        {
            PlatformLiveDetailInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelationLivePlatformInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ai_mark_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ai_mark_on"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAiMarkOn(refVal);
        }
    }
    return ok;
}


std::string SmartLiveJob::getJobId() const
{
    return jobId_;
}

void SmartLiveJob::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SmartLiveJob::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SmartLiveJob::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SmartLiveJob::getRoomId() const
{
    return roomId_;
}

void SmartLiveJob::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool SmartLiveJob::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void SmartLiveJob::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string SmartLiveJob::getRoomName() const
{
    return roomName_;
}

void SmartLiveJob::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool SmartLiveJob::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void SmartLiveJob::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string SmartLiveJob::getState() const
{
    return state_;
}

void SmartLiveJob::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SmartLiveJob::stateIsSet() const
{
    return stateIsSet_;
}

void SmartLiveJob::unsetstate()
{
    stateIsSet_ = false;
}

float SmartLiveJob::getDuration() const
{
    return duration_;
}

void SmartLiveJob::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool SmartLiveJob::durationIsSet() const
{
    return durationIsSet_;
}

void SmartLiveJob::unsetduration()
{
    durationIsSet_ = false;
}

std::string SmartLiveJob::getStartTime() const
{
    return startTime_;
}

void SmartLiveJob::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SmartLiveJob::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SmartLiveJob::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SmartLiveJob::getEndTime() const
{
    return endTime_;
}

void SmartLiveJob::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SmartLiveJob::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SmartLiveJob::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse SmartLiveJob::getErrorInfo() const
{
    return errorInfo_;
}

void SmartLiveJob::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool SmartLiveJob::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void SmartLiveJob::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string SmartLiveJob::getCreateTime() const
{
    return createTime_;
}

void SmartLiveJob::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SmartLiveJob::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SmartLiveJob::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SmartLiveJob::getLastupdateTime() const
{
    return lastupdateTime_;
}

void SmartLiveJob::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool SmartLiveJob::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void SmartLiveJob::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

RTCRoomInfoList SmartLiveJob::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void SmartLiveJob::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool SmartLiveJob::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void SmartLiveJob::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

std::string SmartLiveJob::getLiveEventReportUrl() const
{
    return liveEventReportUrl_;
}

void SmartLiveJob::setLiveEventReportUrl(const std::string& value)
{
    liveEventReportUrl_ = value;
    liveEventReportUrlIsSet_ = true;
}

bool SmartLiveJob::liveEventReportUrlIsSet() const
{
    return liveEventReportUrlIsSet_;
}

void SmartLiveJob::unsetliveEventReportUrl()
{
    liveEventReportUrlIsSet_ = false;
}

LiveEventCallBackConfig SmartLiveJob::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void SmartLiveJob::setLiveEventCallbackConfig(const LiveEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool SmartLiveJob::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void SmartLiveJob::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig SmartLiveJob::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void SmartLiveJob::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool SmartLiveJob::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void SmartLiveJob::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

float SmartLiveJob::getStreamDuration() const
{
    return streamDuration_;
}

void SmartLiveJob::setStreamDuration(float value)
{
    streamDuration_ = value;
    streamDurationIsSet_ = true;
}

bool SmartLiveJob::streamDurationIsSet() const
{
    return streamDurationIsSet_;
}

void SmartLiveJob::unsetstreamDuration()
{
    streamDurationIsSet_ = false;
}

std::string SmartLiveJob::getBlockReason() const
{
    return blockReason_;
}

void SmartLiveJob::setBlockReason(const std::string& value)
{
    blockReason_ = value;
    blockReasonIsSet_ = true;
}

bool SmartLiveJob::blockReasonIsSet() const
{
    return blockReasonIsSet_;
}

void SmartLiveJob::unsetblockReason()
{
    blockReasonIsSet_ = false;
}

std::string SmartLiveJob::getCoverUrl() const
{
    return coverUrl_;
}

void SmartLiveJob::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool SmartLiveJob::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void SmartLiveJob::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

CoStreamerConfig SmartLiveJob::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void SmartLiveJob::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool SmartLiveJob::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void SmartLiveJob::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

LiveJobLog SmartLiveJob::getLiveJobLog() const
{
    return liveJobLog_;
}

void SmartLiveJob::setLiveJobLog(const LiveJobLog& value)
{
    liveJobLog_ = value;
    liveJobLogIsSet_ = true;
}

bool SmartLiveJob::liveJobLogIsSet() const
{
    return liveJobLogIsSet_;
}

void SmartLiveJob::unsetliveJobLog()
{
    liveJobLogIsSet_ = false;
}

PlatformLiveDetailInfo SmartLiveJob::getRelationLivePlatformInfo() const
{
    return relationLivePlatformInfo_;
}

void SmartLiveJob::setRelationLivePlatformInfo(const PlatformLiveDetailInfo& value)
{
    relationLivePlatformInfo_ = value;
    relationLivePlatformInfoIsSet_ = true;
}

bool SmartLiveJob::relationLivePlatformInfoIsSet() const
{
    return relationLivePlatformInfoIsSet_;
}

void SmartLiveJob::unsetrelationLivePlatformInfo()
{
    relationLivePlatformInfoIsSet_ = false;
}

std::string SmartLiveJob::getUsedResourceType() const
{
    return usedResourceType_;
}

void SmartLiveJob::setUsedResourceType(const std::string& value)
{
    usedResourceType_ = value;
    usedResourceTypeIsSet_ = true;
}

bool SmartLiveJob::usedResourceTypeIsSet() const
{
    return usedResourceTypeIsSet_;
}

void SmartLiveJob::unsetusedResourceType()
{
    usedResourceTypeIsSet_ = false;
}

bool SmartLiveJob::isIsAiMarkOn() const
{
    return isAiMarkOn_;
}

void SmartLiveJob::setIsAiMarkOn(bool value)
{
    isAiMarkOn_ = value;
    isAiMarkOnIsSet_ = true;
}

bool SmartLiveJob::isAiMarkOnIsSet() const
{
    return isAiMarkOnIsSet_;
}

void SmartLiveJob::unsetisAiMarkOn()
{
    isAiMarkOnIsSet_ = false;
}

}
}
}
}
}


