

#include "huaweicloud/live/v2/model/ListCarouselTaskDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListCarouselTaskDetailResponse::ListCarouselTaskDetailResponse()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    videoFramerateListIsSet_ = false;
    videoBitrateListIsSet_ = false;
    audioFramerateListIsSet_ = false;
    audioBitrateListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListCarouselTaskDetailResponse::~ListCarouselTaskDetailResponse() = default;

void ListCarouselTaskDetailResponse::validate()
{
}

web::json::value ListCarouselTaskDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(videoFramerateListIsSet_) {
        val[utility::conversions::to_string_t("video_framerate_list")] = ModelBase::toJson(videoFramerateList_);
    }
    if(videoBitrateListIsSet_) {
        val[utility::conversions::to_string_t("video_bitrate_list")] = ModelBase::toJson(videoBitrateList_);
    }
    if(audioFramerateListIsSet_) {
        val[utility::conversions::to_string_t("audio_framerate_list")] = ModelBase::toJson(audioFramerateList_);
    }
    if(audioBitrateListIsSet_) {
        val[utility::conversions::to_string_t("audio_bitrate_list")] = ModelBase::toJson(audioBitrateList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListCarouselTaskDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("video_framerate_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_framerate_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoFramerateList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_bitrate_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_bitrate_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoBitrateList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_framerate_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_framerate_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFramerateList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_bitrate_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_bitrate_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioBitrateList(refVal);
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


std::string ListCarouselTaskDetailResponse::getStartTime() const
{
    return startTime_;
}

void ListCarouselTaskDetailResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCarouselTaskDetailResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListCarouselTaskDetailResponse::getEndTime() const
{
    return endTime_;
}

void ListCarouselTaskDetailResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCarouselTaskDetailResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<int64_t>& ListCarouselTaskDetailResponse::getVideoFramerateList()
{
    return videoFramerateList_;
}

void ListCarouselTaskDetailResponse::setVideoFramerateList(std::vector<int64_t> value)
{
    videoFramerateList_ = value;
    videoFramerateListIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::videoFramerateListIsSet() const
{
    return videoFramerateListIsSet_;
}

void ListCarouselTaskDetailResponse::unsetvideoFramerateList()
{
    videoFramerateListIsSet_ = false;
}

std::vector<int64_t>& ListCarouselTaskDetailResponse::getVideoBitrateList()
{
    return videoBitrateList_;
}

void ListCarouselTaskDetailResponse::setVideoBitrateList(std::vector<int64_t> value)
{
    videoBitrateList_ = value;
    videoBitrateListIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::videoBitrateListIsSet() const
{
    return videoBitrateListIsSet_;
}

void ListCarouselTaskDetailResponse::unsetvideoBitrateList()
{
    videoBitrateListIsSet_ = false;
}

std::vector<int64_t>& ListCarouselTaskDetailResponse::getAudioFramerateList()
{
    return audioFramerateList_;
}

void ListCarouselTaskDetailResponse::setAudioFramerateList(std::vector<int64_t> value)
{
    audioFramerateList_ = value;
    audioFramerateListIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::audioFramerateListIsSet() const
{
    return audioFramerateListIsSet_;
}

void ListCarouselTaskDetailResponse::unsetaudioFramerateList()
{
    audioFramerateListIsSet_ = false;
}

std::vector<int64_t>& ListCarouselTaskDetailResponse::getAudioBitrateList()
{
    return audioBitrateList_;
}

void ListCarouselTaskDetailResponse::setAudioBitrateList(std::vector<int64_t> value)
{
    audioBitrateList_ = value;
    audioBitrateListIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::audioBitrateListIsSet() const
{
    return audioBitrateListIsSet_;
}

void ListCarouselTaskDetailResponse::unsetaudioBitrateList()
{
    audioBitrateListIsSet_ = false;
}

std::string ListCarouselTaskDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListCarouselTaskDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListCarouselTaskDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListCarouselTaskDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


