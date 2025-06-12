

#include "huaweicloud/metastudio/v1/model/StartSmartLiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartSmartLiveResponse::StartSmartLiveResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    rtcRoomInfoIsSet_ = false;
    liveEventReportUrl_ = "";
    liveEventReportUrlIsSet_ = false;
    liveEventCallbackConfigIsSet_ = false;
    liveWarningInfoIsSet_ = false;
    limitDuration_ = 0;
    limitDurationIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

StartSmartLiveResponse::~StartSmartLiveResponse() = default;

void StartSmartLiveResponse::validate()
{
}

web::json::value StartSmartLiveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
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
    if(liveWarningInfoIsSet_) {
        val[utility::conversions::to_string_t("live_warning_info")] = ModelBase::toJson(liveWarningInfo_);
    }
    if(limitDurationIsSet_) {
        val[utility::conversions::to_string_t("limit_duration")] = ModelBase::toJson(limitDuration_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool StartSmartLiveResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("live_warning_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_warning_info"));
        if(!fieldValue.is_null())
        {
            std::vector<LiveWarningItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveWarningInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitDuration(refVal);
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


std::string StartSmartLiveResponse::getJobId() const
{
    return jobId_;
}

void StartSmartLiveResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartSmartLiveResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartSmartLiveResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

RTCRoomInfoList StartSmartLiveResponse::getRtcRoomInfo() const
{
    return rtcRoomInfo_;
}

void StartSmartLiveResponse::setRtcRoomInfo(const RTCRoomInfoList& value)
{
    rtcRoomInfo_ = value;
    rtcRoomInfoIsSet_ = true;
}

bool StartSmartLiveResponse::rtcRoomInfoIsSet() const
{
    return rtcRoomInfoIsSet_;
}

void StartSmartLiveResponse::unsetrtcRoomInfo()
{
    rtcRoomInfoIsSet_ = false;
}

std::string StartSmartLiveResponse::getLiveEventReportUrl() const
{
    return liveEventReportUrl_;
}

void StartSmartLiveResponse::setLiveEventReportUrl(const std::string& value)
{
    liveEventReportUrl_ = value;
    liveEventReportUrlIsSet_ = true;
}

bool StartSmartLiveResponse::liveEventReportUrlIsSet() const
{
    return liveEventReportUrlIsSet_;
}

void StartSmartLiveResponse::unsetliveEventReportUrl()
{
    liveEventReportUrlIsSet_ = false;
}

LiveEventCallBackConfig StartSmartLiveResponse::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void StartSmartLiveResponse::setLiveEventCallbackConfig(const LiveEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool StartSmartLiveResponse::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void StartSmartLiveResponse::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

std::vector<LiveWarningItem>& StartSmartLiveResponse::getLiveWarningInfo()
{
    return liveWarningInfo_;
}

void StartSmartLiveResponse::setLiveWarningInfo(const std::vector<LiveWarningItem>& value)
{
    liveWarningInfo_ = value;
    liveWarningInfoIsSet_ = true;
}

bool StartSmartLiveResponse::liveWarningInfoIsSet() const
{
    return liveWarningInfoIsSet_;
}

void StartSmartLiveResponse::unsetliveWarningInfo()
{
    liveWarningInfoIsSet_ = false;
}

int32_t StartSmartLiveResponse::getLimitDuration() const
{
    return limitDuration_;
}

void StartSmartLiveResponse::setLimitDuration(int32_t value)
{
    limitDuration_ = value;
    limitDurationIsSet_ = true;
}

bool StartSmartLiveResponse::limitDurationIsSet() const
{
    return limitDurationIsSet_;
}

void StartSmartLiveResponse::unsetlimitDuration()
{
    limitDurationIsSet_ = false;
}

std::string StartSmartLiveResponse::getXRequestId() const
{
    return xRequestId_;
}

void StartSmartLiveResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool StartSmartLiveResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void StartSmartLiveResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


