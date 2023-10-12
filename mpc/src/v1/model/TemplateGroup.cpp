

#include "huaweicloud/mpc/v1/model/TemplateGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TemplateGroup::TemplateGroup()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    templateIdsIsSet_ = false;
    videosIsSet_ = false;
    audioIsSet_ = false;
    videoCommonIsSet_ = false;
    commonIsSet_ = false;
}

TemplateGroup::~TemplateGroup() = default;

void TemplateGroup::validate()
{
}

web::json::value TemplateGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(templateIdsIsSet_) {
        val[utility::conversions::to_string_t("template_ids")] = ModelBase::toJson(templateIds_);
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
bool TemplateGroup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("videos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("videos"));
        if(!fieldValue.is_null())
        {
            std::vector<VideoAndTemplate> refVal;
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


std::string TemplateGroup::getGroupId() const
{
    return groupId_;
}

void TemplateGroup::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TemplateGroup::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TemplateGroup::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TemplateGroup::getName() const
{
    return name_;
}

void TemplateGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateGroup::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateGroup::unsetname()
{
    nameIsSet_ = false;
}

std::vector<int32_t>& TemplateGroup::getTemplateIds()
{
    return templateIds_;
}

void TemplateGroup::setTemplateIds(std::vector<int32_t> value)
{
    templateIds_ = value;
    templateIdsIsSet_ = true;
}

bool TemplateGroup::templateIdsIsSet() const
{
    return templateIdsIsSet_;
}

void TemplateGroup::unsettemplateIds()
{
    templateIdsIsSet_ = false;
}

std::vector<VideoAndTemplate>& TemplateGroup::getVideos()
{
    return videos_;
}

void TemplateGroup::setVideos(const std::vector<VideoAndTemplate>& value)
{
    videos_ = value;
    videosIsSet_ = true;
}

bool TemplateGroup::videosIsSet() const
{
    return videosIsSet_;
}

void TemplateGroup::unsetvideos()
{
    videosIsSet_ = false;
}

Audio TemplateGroup::getAudio() const
{
    return audio_;
}

void TemplateGroup::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool TemplateGroup::audioIsSet() const
{
    return audioIsSet_;
}

void TemplateGroup::unsetaudio()
{
    audioIsSet_ = false;
}

VideoCommon TemplateGroup::getVideoCommon() const
{
    return videoCommon_;
}

void TemplateGroup::setVideoCommon(const VideoCommon& value)
{
    videoCommon_ = value;
    videoCommonIsSet_ = true;
}

bool TemplateGroup::videoCommonIsSet() const
{
    return videoCommonIsSet_;
}

void TemplateGroup::unsetvideoCommon()
{
    videoCommonIsSet_ = false;
}

Common TemplateGroup::getCommon() const
{
    return common_;
}

void TemplateGroup::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool TemplateGroup::commonIsSet() const
{
    return commonIsSet_;
}

void TemplateGroup::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


