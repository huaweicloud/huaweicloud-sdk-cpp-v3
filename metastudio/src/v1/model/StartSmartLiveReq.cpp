

#include "huaweicloud/metastudio/v1/model/StartSmartLiveReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartSmartLiveReq::StartSmartLiveReq()
{
    videoConfigIsSet_ = false;
    playPolicyIsSet_ = false;
    outputUrlsIsSet_ = false;
    streamKeysIsSet_ = false;
    interactionCallbackUrl_ = "";
    interactionCallbackUrlIsSet_ = false;
    liveEventCallbackConfigIsSet_ = false;
    rtcCallbackConfigIsSet_ = false;
    viewMode_ = "";
    viewModeIsSet_ = false;
    coStreamerConfigIsSet_ = false;
    jobRunConfigIsSet_ = false;
}

StartSmartLiveReq::~StartSmartLiveReq() = default;

void StartSmartLiveReq::validate()
{
}

web::json::value StartSmartLiveReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(playPolicyIsSet_) {
        val[utility::conversions::to_string_t("play_policy")] = ModelBase::toJson(playPolicy_);
    }
    if(outputUrlsIsSet_) {
        val[utility::conversions::to_string_t("output_urls")] = ModelBase::toJson(outputUrls_);
    }
    if(streamKeysIsSet_) {
        val[utility::conversions::to_string_t("stream_keys")] = ModelBase::toJson(streamKeys_);
    }
    if(interactionCallbackUrlIsSet_) {
        val[utility::conversions::to_string_t("interaction_callback_url")] = ModelBase::toJson(interactionCallbackUrl_);
    }
    if(liveEventCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("live_event_callback_config")] = ModelBase::toJson(liveEventCallbackConfig_);
    }
    if(rtcCallbackConfigIsSet_) {
        val[utility::conversions::to_string_t("rtc_callback_config")] = ModelBase::toJson(rtcCallbackConfig_);
    }
    if(viewModeIsSet_) {
        val[utility::conversions::to_string_t("view_mode")] = ModelBase::toJson(viewMode_);
    }
    if(coStreamerConfigIsSet_) {
        val[utility::conversions::to_string_t("co_streamer_config")] = ModelBase::toJson(coStreamerConfig_);
    }
    if(jobRunConfigIsSet_) {
        val[utility::conversions::to_string_t("job_run_config")] = ModelBase::toJson(jobRunConfig_);
    }

    return val;
}
bool StartSmartLiveReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            VideoConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("play_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_policy"));
        if(!fieldValue.is_null())
        {
            PlayPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interaction_callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interaction_callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInteractionCallbackUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("view_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_run_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_run_config"));
        if(!fieldValue.is_null())
        {
            LiveJobRunConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobRunConfig(refVal);
        }
    }
    return ok;
}


VideoConfig StartSmartLiveReq::getVideoConfig() const
{
    return videoConfig_;
}

void StartSmartLiveReq::setVideoConfig(const VideoConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool StartSmartLiveReq::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void StartSmartLiveReq::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

PlayPolicy StartSmartLiveReq::getPlayPolicy() const
{
    return playPolicy_;
}

void StartSmartLiveReq::setPlayPolicy(const PlayPolicy& value)
{
    playPolicy_ = value;
    playPolicyIsSet_ = true;
}

bool StartSmartLiveReq::playPolicyIsSet() const
{
    return playPolicyIsSet_;
}

void StartSmartLiveReq::unsetplayPolicy()
{
    playPolicyIsSet_ = false;
}

std::vector<std::string>& StartSmartLiveReq::getOutputUrls()
{
    return outputUrls_;
}

void StartSmartLiveReq::setOutputUrls(const std::vector<std::string>& value)
{
    outputUrls_ = value;
    outputUrlsIsSet_ = true;
}

bool StartSmartLiveReq::outputUrlsIsSet() const
{
    return outputUrlsIsSet_;
}

void StartSmartLiveReq::unsetoutputUrls()
{
    outputUrlsIsSet_ = false;
}

std::vector<std::string>& StartSmartLiveReq::getStreamKeys()
{
    return streamKeys_;
}

void StartSmartLiveReq::setStreamKeys(const std::vector<std::string>& value)
{
    streamKeys_ = value;
    streamKeysIsSet_ = true;
}

bool StartSmartLiveReq::streamKeysIsSet() const
{
    return streamKeysIsSet_;
}

void StartSmartLiveReq::unsetstreamKeys()
{
    streamKeysIsSet_ = false;
}

std::string StartSmartLiveReq::getInteractionCallbackUrl() const
{
    return interactionCallbackUrl_;
}

void StartSmartLiveReq::setInteractionCallbackUrl(const std::string& value)
{
    interactionCallbackUrl_ = value;
    interactionCallbackUrlIsSet_ = true;
}

bool StartSmartLiveReq::interactionCallbackUrlIsSet() const
{
    return interactionCallbackUrlIsSet_;
}

void StartSmartLiveReq::unsetinteractionCallbackUrl()
{
    interactionCallbackUrlIsSet_ = false;
}

LiveEventCallBackConfig StartSmartLiveReq::getLiveEventCallbackConfig() const
{
    return liveEventCallbackConfig_;
}

void StartSmartLiveReq::setLiveEventCallbackConfig(const LiveEventCallBackConfig& value)
{
    liveEventCallbackConfig_ = value;
    liveEventCallbackConfigIsSet_ = true;
}

bool StartSmartLiveReq::liveEventCallbackConfigIsSet() const
{
    return liveEventCallbackConfigIsSet_;
}

void StartSmartLiveReq::unsetliveEventCallbackConfig()
{
    liveEventCallbackConfigIsSet_ = false;
}

RTCLiveEventCallBackConfig StartSmartLiveReq::getRtcCallbackConfig() const
{
    return rtcCallbackConfig_;
}

void StartSmartLiveReq::setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value)
{
    rtcCallbackConfig_ = value;
    rtcCallbackConfigIsSet_ = true;
}

bool StartSmartLiveReq::rtcCallbackConfigIsSet() const
{
    return rtcCallbackConfigIsSet_;
}

void StartSmartLiveReq::unsetrtcCallbackConfig()
{
    rtcCallbackConfigIsSet_ = false;
}

std::string StartSmartLiveReq::getViewMode() const
{
    return viewMode_;
}

void StartSmartLiveReq::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool StartSmartLiveReq::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void StartSmartLiveReq::unsetviewMode()
{
    viewModeIsSet_ = false;
}

CoStreamerConfig StartSmartLiveReq::getCoStreamerConfig() const
{
    return coStreamerConfig_;
}

void StartSmartLiveReq::setCoStreamerConfig(const CoStreamerConfig& value)
{
    coStreamerConfig_ = value;
    coStreamerConfigIsSet_ = true;
}

bool StartSmartLiveReq::coStreamerConfigIsSet() const
{
    return coStreamerConfigIsSet_;
}

void StartSmartLiveReq::unsetcoStreamerConfig()
{
    coStreamerConfigIsSet_ = false;
}

LiveJobRunConfig StartSmartLiveReq::getJobRunConfig() const
{
    return jobRunConfig_;
}

void StartSmartLiveReq::setJobRunConfig(const LiveJobRunConfig& value)
{
    jobRunConfig_ = value;
    jobRunConfigIsSet_ = true;
}

bool StartSmartLiveReq::jobRunConfigIsSet() const
{
    return jobRunConfigIsSet_;
}

void StartSmartLiveReq::unsetjobRunConfig()
{
    jobRunConfigIsSet_ = false;
}

}
}
}
}
}


