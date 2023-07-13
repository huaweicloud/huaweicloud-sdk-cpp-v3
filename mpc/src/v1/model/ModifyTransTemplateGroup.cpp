

#include "huaweicloud/mpc/v1/model/ModifyTransTemplateGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ModifyTransTemplateGroup::ModifyTransTemplateGroup()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    videosIsSet_ = false;
    audioIsSet_ = false;
    videoCommonIsSet_ = false;
    commonIsSet_ = false;
}

ModifyTransTemplateGroup::~ModifyTransTemplateGroup() = default;

void ModifyTransTemplateGroup::validate()
{
}

web::json::value ModifyTransTemplateGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
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

bool ModifyTransTemplateGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
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

std::string ModifyTransTemplateGroup::getGroupId() const
{
    return groupId_;
}

void ModifyTransTemplateGroup::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ModifyTransTemplateGroup::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ModifyTransTemplateGroup::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ModifyTransTemplateGroup::getName() const
{
    return name_;
}

void ModifyTransTemplateGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyTransTemplateGroup::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyTransTemplateGroup::unsetname()
{
    nameIsSet_ = false;
}

std::vector<VideoObj>& ModifyTransTemplateGroup::getVideos()
{
    return videos_;
}

void ModifyTransTemplateGroup::setVideos(const std::vector<VideoObj>& value)
{
    videos_ = value;
    videosIsSet_ = true;
}

bool ModifyTransTemplateGroup::videosIsSet() const
{
    return videosIsSet_;
}

void ModifyTransTemplateGroup::unsetvideos()
{
    videosIsSet_ = false;
}

Audio ModifyTransTemplateGroup::getAudio() const
{
    return audio_;
}

void ModifyTransTemplateGroup::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool ModifyTransTemplateGroup::audioIsSet() const
{
    return audioIsSet_;
}

void ModifyTransTemplateGroup::unsetaudio()
{
    audioIsSet_ = false;
}

VideoCommon ModifyTransTemplateGroup::getVideoCommon() const
{
    return videoCommon_;
}

void ModifyTransTemplateGroup::setVideoCommon(const VideoCommon& value)
{
    videoCommon_ = value;
    videoCommonIsSet_ = true;
}

bool ModifyTransTemplateGroup::videoCommonIsSet() const
{
    return videoCommonIsSet_;
}

void ModifyTransTemplateGroup::unsetvideoCommon()
{
    videoCommonIsSet_ = false;
}

Common ModifyTransTemplateGroup::getCommon() const
{
    return common_;
}

void ModifyTransTemplateGroup::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool ModifyTransTemplateGroup::commonIsSet() const
{
    return commonIsSet_;
}

void ModifyTransTemplateGroup::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


