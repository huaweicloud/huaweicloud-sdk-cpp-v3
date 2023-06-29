

#include "huaweicloud/mpc/v1/model/TransTemplateGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TransTemplateGroup::TransTemplateGroup()
{
    name_ = "";
    nameIsSet_ = false;
    videosIsSet_ = false;
    audioIsSet_ = false;
    videoCommonIsSet_ = false;
    commonIsSet_ = false;
}

TransTemplateGroup::~TransTemplateGroup() = default;

void TransTemplateGroup::validate()
{
}

web::json::value TransTemplateGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(videosIsSet_) {
        val[utility::conversions::to_string_t("videos")] = ModelBase::toJson(videos_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(videoCommonIsSet_) {
        val[utility::conversions::to_string_t("video_common")] = ModelBase::toJson(videoCommon_);
    }
    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }

    return val;
}

bool TransTemplateGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("videos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("videos"));
        if(!fieldValue.is_null())
        {
            std::vector<VideoObj> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            Audio refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_common"));
        if(!fieldValue.is_null())
        {
            VideoCommon refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoCommon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            Common refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
        }
    }
    return ok;
}


std::string TransTemplateGroup::getName() const
{
    return name_;
}

void TransTemplateGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TransTemplateGroup::nameIsSet() const
{
    return nameIsSet_;
}

void TransTemplateGroup::unsetname()
{
    nameIsSet_ = false;
}

std::vector<VideoObj>& TransTemplateGroup::getVideos()
{
    return videos_;
}

void TransTemplateGroup::setVideos(const std::vector<VideoObj>& value)
{
    videos_ = value;
    videosIsSet_ = true;
}

bool TransTemplateGroup::videosIsSet() const
{
    return videosIsSet_;
}

void TransTemplateGroup::unsetvideos()
{
    videosIsSet_ = false;
}

Audio TransTemplateGroup::getAudio() const
{
    return audio_;
}

void TransTemplateGroup::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool TransTemplateGroup::audioIsSet() const
{
    return audioIsSet_;
}

void TransTemplateGroup::unsetaudio()
{
    audioIsSet_ = false;
}

VideoCommon TransTemplateGroup::getVideoCommon() const
{
    return videoCommon_;
}

void TransTemplateGroup::setVideoCommon(const VideoCommon& value)
{
    videoCommon_ = value;
    videoCommonIsSet_ = true;
}

bool TransTemplateGroup::videoCommonIsSet() const
{
    return videoCommonIsSet_;
}

void TransTemplateGroup::unsetvideoCommon()
{
    videoCommonIsSet_ = false;
}

Common TransTemplateGroup::getCommon() const
{
    return common_;
}

void TransTemplateGroup::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool TransTemplateGroup::commonIsSet() const
{
    return commonIsSet_;
}

void TransTemplateGroup::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


