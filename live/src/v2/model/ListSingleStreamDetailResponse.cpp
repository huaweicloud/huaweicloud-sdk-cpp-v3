

#include "huaweicloud/live/v2/model/ListSingleStreamDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSingleStreamDetailResponse::ListSingleStreamDetailResponse()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    videoFramerateIsSet_ = false;
    videoBitrateIsSet_ = false;
    audioFramerateIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSingleStreamDetailResponse::~ListSingleStreamDetailResponse() = default;

void ListSingleStreamDetailResponse::validate()
{
}

web::json::value ListSingleStreamDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(videoFramerateIsSet_) {
        val[utility::conversions::to_string_t("video_framerate")] = ModelBase::toJson(videoFramerate_);
    }
    if(videoBitrateIsSet_) {
        val[utility::conversions::to_string_t("video_bitrate")] = ModelBase::toJson(videoBitrate_);
    }
    if(audioFramerateIsSet_) {
        val[utility::conversions::to_string_t("audio_framerate")] = ModelBase::toJson(audioFramerate_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSingleStreamDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_framerate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_framerate"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoFramerate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_bitrate"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_framerate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_framerate"));
        if(!fieldValue.is_null())
        {
            std::vector<StreamDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFramerate(refVal);
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


std::string ListSingleStreamDetailResponse::getPublishDomain() const
{
    return publishDomain_;
}

void ListSingleStreamDetailResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListSingleStreamDetailResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListSingleStreamDetailResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListSingleStreamDetailResponse::getApp() const
{
    return app_;
}

void ListSingleStreamDetailResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListSingleStreamDetailResponse::appIsSet() const
{
    return appIsSet_;
}

void ListSingleStreamDetailResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string ListSingleStreamDetailResponse::getStream() const
{
    return stream_;
}

void ListSingleStreamDetailResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListSingleStreamDetailResponse::streamIsSet() const
{
    return streamIsSet_;
}

void ListSingleStreamDetailResponse::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<StreamDetail>& ListSingleStreamDetailResponse::getVideoFramerate()
{
    return videoFramerate_;
}

void ListSingleStreamDetailResponse::setVideoFramerate(const std::vector<StreamDetail>& value)
{
    videoFramerate_ = value;
    videoFramerateIsSet_ = true;
}

bool ListSingleStreamDetailResponse::videoFramerateIsSet() const
{
    return videoFramerateIsSet_;
}

void ListSingleStreamDetailResponse::unsetvideoFramerate()
{
    videoFramerateIsSet_ = false;
}

std::vector<StreamDetail>& ListSingleStreamDetailResponse::getVideoBitrate()
{
    return videoBitrate_;
}

void ListSingleStreamDetailResponse::setVideoBitrate(const std::vector<StreamDetail>& value)
{
    videoBitrate_ = value;
    videoBitrateIsSet_ = true;
}

bool ListSingleStreamDetailResponse::videoBitrateIsSet() const
{
    return videoBitrateIsSet_;
}

void ListSingleStreamDetailResponse::unsetvideoBitrate()
{
    videoBitrateIsSet_ = false;
}

std::vector<StreamDetail>& ListSingleStreamDetailResponse::getAudioFramerate()
{
    return audioFramerate_;
}

void ListSingleStreamDetailResponse::setAudioFramerate(const std::vector<StreamDetail>& value)
{
    audioFramerate_ = value;
    audioFramerateIsSet_ = true;
}

bool ListSingleStreamDetailResponse::audioFramerateIsSet() const
{
    return audioFramerateIsSet_;
}

void ListSingleStreamDetailResponse::unsetaudioFramerate()
{
    audioFramerateIsSet_ = false;
}

std::string ListSingleStreamDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSingleStreamDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSingleStreamDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSingleStreamDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


