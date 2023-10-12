

#include "huaweicloud/vod/v1/model/VideoTypeRef.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




VideoTypeRef::VideoTypeRef()
{
    videoType_ = "";
    videoTypeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    categoryId_ = 0;
    categoryIdIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    autoPublish_ = 0;
    autoPublishIsSet_ = false;
    templateGroupName_ = "";
    templateGroupNameIsSet_ = false;
    autoEncrypt_ = 0;
    autoEncryptIsSet_ = false;
    autoPreheat_ = 0;
    autoPreheatIsSet_ = false;
    thumbnailIsSet_ = false;
    reviewIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
}

VideoTypeRef::~VideoTypeRef() = default;

void VideoTypeRef::validate()
{
}

web::json::value VideoTypeRef::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoTypeIsSet_) {
        val[utility::conversions::to_string_t("video_type")] = ModelBase::toJson(videoType_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(autoPublishIsSet_) {
        val[utility::conversions::to_string_t("auto_publish")] = ModelBase::toJson(autoPublish_);
    }
    if(templateGroupNameIsSet_) {
        val[utility::conversions::to_string_t("template_group_name")] = ModelBase::toJson(templateGroupName_);
    }
    if(autoEncryptIsSet_) {
        val[utility::conversions::to_string_t("auto_encrypt")] = ModelBase::toJson(autoEncrypt_);
    }
    if(autoPreheatIsSet_) {
        val[utility::conversions::to_string_t("auto_preheat")] = ModelBase::toJson(autoPreheat_);
    }
    if(thumbnailIsSet_) {
        val[utility::conversions::to_string_t("thumbnail")] = ModelBase::toJson(thumbnail_);
    }
    if(reviewIsSet_) {
        val[utility::conversions::to_string_t("review")] = ModelBase::toJson(review_);
    }
    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }

    return val;
}
bool VideoTypeRef::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_publish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_publish"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPublish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_encrypt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoEncrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_preheat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_preheat"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPreheat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail"));
        if(!fieldValue.is_null())
        {
            Thumbnail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review"));
        if(!fieldValue.is_null())
        {
            Review refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
        }
    }
    return ok;
}


std::string VideoTypeRef::getVideoType() const
{
    return videoType_;
}

void VideoTypeRef::setVideoType(const std::string& value)
{
    videoType_ = value;
    videoTypeIsSet_ = true;
}

bool VideoTypeRef::videoTypeIsSet() const
{
    return videoTypeIsSet_;
}

void VideoTypeRef::unsetvideoType()
{
    videoTypeIsSet_ = false;
}

std::string VideoTypeRef::getTitle() const
{
    return title_;
}

void VideoTypeRef::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool VideoTypeRef::titleIsSet() const
{
    return titleIsSet_;
}

void VideoTypeRef::unsettitle()
{
    titleIsSet_ = false;
}

std::string VideoTypeRef::getDescription() const
{
    return description_;
}

void VideoTypeRef::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool VideoTypeRef::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void VideoTypeRef::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t VideoTypeRef::getCategoryId() const
{
    return categoryId_;
}

void VideoTypeRef::setCategoryId(int32_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool VideoTypeRef::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void VideoTypeRef::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string VideoTypeRef::getTags() const
{
    return tags_;
}

void VideoTypeRef::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool VideoTypeRef::tagsIsSet() const
{
    return tagsIsSet_;
}

void VideoTypeRef::unsettags()
{
    tagsIsSet_ = false;
}

int32_t VideoTypeRef::getAutoPublish() const
{
    return autoPublish_;
}

void VideoTypeRef::setAutoPublish(int32_t value)
{
    autoPublish_ = value;
    autoPublishIsSet_ = true;
}

bool VideoTypeRef::autoPublishIsSet() const
{
    return autoPublishIsSet_;
}

void VideoTypeRef::unsetautoPublish()
{
    autoPublishIsSet_ = false;
}

std::string VideoTypeRef::getTemplateGroupName() const
{
    return templateGroupName_;
}

void VideoTypeRef::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool VideoTypeRef::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void VideoTypeRef::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

int32_t VideoTypeRef::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void VideoTypeRef::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool VideoTypeRef::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void VideoTypeRef::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

int32_t VideoTypeRef::getAutoPreheat() const
{
    return autoPreheat_;
}

void VideoTypeRef::setAutoPreheat(int32_t value)
{
    autoPreheat_ = value;
    autoPreheatIsSet_ = true;
}

bool VideoTypeRef::autoPreheatIsSet() const
{
    return autoPreheatIsSet_;
}

void VideoTypeRef::unsetautoPreheat()
{
    autoPreheatIsSet_ = false;
}

Thumbnail VideoTypeRef::getThumbnail() const
{
    return thumbnail_;
}

void VideoTypeRef::setThumbnail(const Thumbnail& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool VideoTypeRef::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void VideoTypeRef::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

Review VideoTypeRef::getReview() const
{
    return review_;
}

void VideoTypeRef::setReview(const Review& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool VideoTypeRef::reviewIsSet() const
{
    return reviewIsSet_;
}

void VideoTypeRef::unsetreview()
{
    reviewIsSet_ = false;
}

std::string VideoTypeRef::getWorkflowName() const
{
    return workflowName_;
}

void VideoTypeRef::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool VideoTypeRef::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void VideoTypeRef::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

}
}
}
}
}


