

#include "huaweicloud/metastudio/v1/model/ShowSmartLiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSmartLiveResponse::ShowSmartLiveResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowSmartLiveResponse::~ShowSmartLiveResponse() = default;

void ShowSmartLiveResponse::validate()
{
}

web::json::value ShowSmartLiveResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowSmartLiveResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowSmartLiveResponse::getJobId() const
{
    return jobId_;
}

void ShowSmartLiveResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowSmartLiveResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowSmartLiveResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowSmartLiveResponse::getRoomId() const
{
    return roomId_;
}

void ShowSmartLiveResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ShowSmartLiveResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ShowSmartLiveResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ShowSmartLiveResponse::getRoomName() const
{
    return roomName_;
}

void ShowSmartLiveResponse::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool ShowSmartLiveResponse::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void ShowSmartLiveResponse::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string ShowSmartLiveResponse::getState() const
{
    return state_;
}

void ShowSmartLiveResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowSmartLiveResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowSmartLiveResponse::unsetstate()
{
    stateIsSet_ = false;
}

float ShowSmartLiveResponse::getDuration() const
{
    return duration_;
}

void ShowSmartLiveResponse::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowSmartLiveResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowSmartLiveResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::string ShowSmartLiveResponse::getStartTime() const
{
    return startTime_;
}

void ShowSmartLiveResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowSmartLiveResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowSmartLiveResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowSmartLiveResponse::getEndTime() const
{
    return endTime_;
}

void ShowSmartLiveResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowSmartLiveResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowSmartLiveResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

ErrorResponse ShowSmartLiveResponse::getErrorInfo() const
{
    return errorInfo_;
}

void ShowSmartLiveResponse::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool ShowSmartLiveResponse::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void ShowSmartLiveResponse::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string ShowSmartLiveResponse::getCreateTime() const
{
    return createTime_;
}

void ShowSmartLiveResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowSmartLiveResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowSmartLiveResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowSmartLiveResponse::getLastupdateTime() const
{
    return lastupdateTime_;
}

void ShowSmartLiveResponse::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool ShowSmartLiveResponse::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void ShowSmartLiveResponse::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

RTCRoomInfoList ShowSmartLiveResponse::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void ShowSmartLiveResponse::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool ShowSmartLiveResponse::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void ShowSmartLiveResponse::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

std::string ShowSmartLiveResponse::getLiveEventReportUrl() const
{
    return liveEventReportUrl_;
}

void ShowSmartLiveResponse::setLiveEventReportUrl(const std::string& value)
{
    liveEventReportUrl_ = value;
    liveEventReportUrlIsSet_ = true;
}

bool ShowSmartLiveResponse::liveEventReportUrlIsSet() const
{
    return liveEventReportUrlIsSet_;
}

void ShowSmartLiveResponse::unsetliveEventReportUrl()
{
    liveEventReportUrlIsSet_ = false;
}

LiveEventCallBackConfig ShowSmartLiveResponse::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void ShowSmartLiveResponse::setLiveEventCallbackConfig(const LiveEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool ShowSmartLiveResponse::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void ShowSmartLiveResponse::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig ShowSmartLiveResponse::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void ShowSmartLiveResponse::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool ShowSmartLiveResponse::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void ShowSmartLiveResponse::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

float ShowSmartLiveResponse::getStreamDuration() const
{
    return streamDuration_;
}

void ShowSmartLiveResponse::setStreamDuration(float value)
{
    streamDuration_ = value;
    streamDurationIsSet_ = true;
}

bool ShowSmartLiveResponse::streamDurationIsSet() const
{
    return streamDurationIsSet_;
}

void ShowSmartLiveResponse::unsetstreamDuration()
{
    streamDurationIsSet_ = false;
}

std::string ShowSmartLiveResponse::getBlockReason() const
{
    return blockReason_;
}

void ShowSmartLiveResponse::setBlockReason(const std::string& value)
{
    blockReason_ = value;
    blockReasonIsSet_ = true;
}

bool ShowSmartLiveResponse::blockReasonIsSet() const
{
    return blockReasonIsSet_;
}

void ShowSmartLiveResponse::unsetblockReason()
{
    blockReasonIsSet_ = false;
}

std::string ShowSmartLiveResponse::getCoverUrl() const
{
    return coverUrl_;
}

void ShowSmartLiveResponse::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool ShowSmartLiveResponse::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void ShowSmartLiveResponse::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

CoStreamerConfig ShowSmartLiveResponse::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void ShowSmartLiveResponse::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool ShowSmartLiveResponse::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void ShowSmartLiveResponse::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

LiveJobLog ShowSmartLiveResponse::getLiveJobLog() const
{
    return liveJobLog_;
}

void ShowSmartLiveResponse::setLiveJobLog(const LiveJobLog& value)
{
    liveJobLog_ = value;
    liveJobLogIsSet_ = true;
}

bool ShowSmartLiveResponse::liveJobLogIsSet() const
{
    return liveJobLogIsSet_;
}

void ShowSmartLiveResponse::unsetliveJobLog()
{
    liveJobLogIsSet_ = false;
}

PlatformLiveDetailInfo ShowSmartLiveResponse::getRelationLivePlatformInfo() const
{
    return relationLivePlatformInfo_;
}

void ShowSmartLiveResponse::setRelationLivePlatformInfo(const PlatformLiveDetailInfo& value)
{
    relationLivePlatformInfo_ = value;
    relationLivePlatformInfoIsSet_ = true;
}

bool ShowSmartLiveResponse::relationLivePlatformInfoIsSet() const
{
    return relationLivePlatformInfoIsSet_;
}

void ShowSmartLiveResponse::unsetrelationLivePlatformInfo()
{
    relationLivePlatformInfoIsSet_ = false;
}

std::string ShowSmartLiveResponse::getUsedResourceType() const
{
    return usedResourceType_;
}

void ShowSmartLiveResponse::setUsedResourceType(const std::string& value)
{
    usedResourceType_ = value;
    usedResourceTypeIsSet_ = true;
}

bool ShowSmartLiveResponse::usedResourceTypeIsSet() const
{
    return usedResourceTypeIsSet_;
}

void ShowSmartLiveResponse::unsetusedResourceType()
{
    usedResourceTypeIsSet_ = false;
}

std::string ShowSmartLiveResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowSmartLiveResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowSmartLiveResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowSmartLiveResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


