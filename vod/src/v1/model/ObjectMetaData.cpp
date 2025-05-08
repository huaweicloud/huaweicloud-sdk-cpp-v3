

#include "huaweicloud/vod/v1/model/ObjectMetaData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectMetaData::ObjectMetaData()
{
    bitrate_ = 0L;
    bitrateIsSet_ = false;
    container_ = "";
    containerIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    videoDuration_ = 0.0f;
    videoDurationIsSet_ = false;
    audioDuration_ = 0.0f;
    audioDurationIsSet_ = false;
    floatDuration_ = 0.0f;
    floatDurationIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
    rotate_ = 0.0f;
    rotateIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    videoStreamListIsSet_ = false;
    audioStreamListIsSet_ = false;
}

ObjectMetaData::~ObjectMetaData() = default;

void ObjectMetaData::validate()
{
}

web::json::value ObjectMetaData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(containerIsSet_) {
        val[utility::conversions::to_string_t("container")] = ModelBase::toJson(container_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(videoDurationIsSet_) {
        val[utility::conversions::to_string_t("video_duration")] = ModelBase::toJson(videoDuration_);
    }
    if(audioDurationIsSet_) {
        val[utility::conversions::to_string_t("audio_duration")] = ModelBase::toJson(audioDuration_);
    }
    if(floatDurationIsSet_) {
        val[utility::conversions::to_string_t("float_duration")] = ModelBase::toJson(floatDuration_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }
    if(rotateIsSet_) {
        val[utility::conversions::to_string_t("rotate")] = ModelBase::toJson(rotate_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(videoStreamListIsSet_) {
        val[utility::conversions::to_string_t("video_stream_list")] = ModelBase::toJson(videoStreamList_);
    }
    if(audioStreamListIsSet_) {
        val[utility::conversions::to_string_t("audio_stream_list")] = ModelBase::toJson(audioStreamList_);
    }

    return val;
}
bool ObjectMetaData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("float_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("float_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotate"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_stream_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_stream_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MetaVideoInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoStreamList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_stream_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_stream_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MetaAudioInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioStreamList(refVal);
        }
    }
    return ok;
}


int64_t ObjectMetaData::getBitrate() const
{
    return bitrate_;
}

void ObjectMetaData::setBitrate(int64_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool ObjectMetaData::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void ObjectMetaData::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::string ObjectMetaData::getContainer() const
{
    return container_;
}

void ObjectMetaData::setContainer(const std::string& value)
{
    container_ = value;
    containerIsSet_ = true;
}

bool ObjectMetaData::containerIsSet() const
{
    return containerIsSet_;
}

void ObjectMetaData::unsetcontainer()
{
    containerIsSet_ = false;
}

int32_t ObjectMetaData::getDuration() const
{
    return duration_;
}

void ObjectMetaData::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ObjectMetaData::durationIsSet() const
{
    return durationIsSet_;
}

void ObjectMetaData::unsetduration()
{
    durationIsSet_ = false;
}

float ObjectMetaData::getVideoDuration() const
{
    return videoDuration_;
}

void ObjectMetaData::setVideoDuration(float value)
{
    videoDuration_ = value;
    videoDurationIsSet_ = true;
}

bool ObjectMetaData::videoDurationIsSet() const
{
    return videoDurationIsSet_;
}

void ObjectMetaData::unsetvideoDuration()
{
    videoDurationIsSet_ = false;
}

float ObjectMetaData::getAudioDuration() const
{
    return audioDuration_;
}

void ObjectMetaData::setAudioDuration(float value)
{
    audioDuration_ = value;
    audioDurationIsSet_ = true;
}

bool ObjectMetaData::audioDurationIsSet() const
{
    return audioDurationIsSet_;
}

void ObjectMetaData::unsetaudioDuration()
{
    audioDurationIsSet_ = false;
}

float ObjectMetaData::getFloatDuration() const
{
    return floatDuration_;
}

void ObjectMetaData::setFloatDuration(float value)
{
    floatDuration_ = value;
    floatDurationIsSet_ = true;
}

bool ObjectMetaData::floatDurationIsSet() const
{
    return floatDurationIsSet_;
}

void ObjectMetaData::unsetfloatDuration()
{
    floatDurationIsSet_ = false;
}

int32_t ObjectMetaData::getHeight() const
{
    return height_;
}

void ObjectMetaData::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ObjectMetaData::heightIsSet() const
{
    return heightIsSet_;
}

void ObjectMetaData::unsetheight()
{
    heightIsSet_ = false;
}

int32_t ObjectMetaData::getWidth() const
{
    return width_;
}

void ObjectMetaData::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ObjectMetaData::widthIsSet() const
{
    return widthIsSet_;
}

void ObjectMetaData::unsetwidth()
{
    widthIsSet_ = false;
}

std::string ObjectMetaData::getMd5() const
{
    return md5_;
}

void ObjectMetaData::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool ObjectMetaData::md5IsSet() const
{
    return md5IsSet_;
}

void ObjectMetaData::unsetmd5()
{
    md5IsSet_ = false;
}

float ObjectMetaData::getRotate() const
{
    return rotate_;
}

void ObjectMetaData::setRotate(float value)
{
    rotate_ = value;
    rotateIsSet_ = true;
}

bool ObjectMetaData::rotateIsSet() const
{
    return rotateIsSet_;
}

void ObjectMetaData::unsetrotate()
{
    rotateIsSet_ = false;
}

int64_t ObjectMetaData::getSize() const
{
    return size_;
}

void ObjectMetaData::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ObjectMetaData::sizeIsSet() const
{
    return sizeIsSet_;
}

void ObjectMetaData::unsetsize()
{
    sizeIsSet_ = false;
}

std::vector<MetaVideoInfo>& ObjectMetaData::getVideoStreamList()
{
    return videoStreamList_;
}

void ObjectMetaData::setVideoStreamList(const std::vector<MetaVideoInfo>& value)
{
    videoStreamList_ = value;
    videoStreamListIsSet_ = true;
}

bool ObjectMetaData::videoStreamListIsSet() const
{
    return videoStreamListIsSet_;
}

void ObjectMetaData::unsetvideoStreamList()
{
    videoStreamListIsSet_ = false;
}

std::vector<MetaAudioInfo>& ObjectMetaData::getAudioStreamList()
{
    return audioStreamList_;
}

void ObjectMetaData::setAudioStreamList(const std::vector<MetaAudioInfo>& value)
{
    audioStreamList_ = value;
    audioStreamListIsSet_ = true;
}

bool ObjectMetaData::audioStreamListIsSet() const
{
    return audioStreamListIsSet_;
}

void ObjectMetaData::unsetaudioStreamList()
{
    audioStreamListIsSet_ = false;
}

}
}
}
}
}


