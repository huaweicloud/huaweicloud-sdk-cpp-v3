

#include "huaweicloud/vod/v1/model/UploadMetaDataByUrl.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadMetaDataByUrl::UploadMetaDataByUrl()
{
    videoType_ = "";
    videoTypeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
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

UploadMetaDataByUrl::~UploadMetaDataByUrl() = default;

void UploadMetaDataByUrl::validate()
{
}

web::json::value UploadMetaDataByUrl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoTypeIsSet_) {
        val[utility::conversions::to_string_t("video_type")] = ModelBase::toJson(videoType_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
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

bool UploadMetaDataByUrl::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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

std::string UploadMetaDataByUrl::getVideoType() const
{
    return videoType_;
}

void UploadMetaDataByUrl::setVideoType(const std::string& value)
{
    videoType_ = value;
    videoTypeIsSet_ = true;
}

bool UploadMetaDataByUrl::videoTypeIsSet() const
{
    return videoTypeIsSet_;
}

void UploadMetaDataByUrl::unsetvideoType()
{
    videoTypeIsSet_ = false;
}

std::string UploadMetaDataByUrl::getTitle() const
{
    return title_;
}

void UploadMetaDataByUrl::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UploadMetaDataByUrl::titleIsSet() const
{
    return titleIsSet_;
}

void UploadMetaDataByUrl::unsettitle()
{
    titleIsSet_ = false;
}

std::string UploadMetaDataByUrl::getUrl() const
{
    return url_;
}

void UploadMetaDataByUrl::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UploadMetaDataByUrl::urlIsSet() const
{
    return urlIsSet_;
}

void UploadMetaDataByUrl::unseturl()
{
    urlIsSet_ = false;
}

std::string UploadMetaDataByUrl::getDescription() const
{
    return description_;
}

void UploadMetaDataByUrl::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UploadMetaDataByUrl::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UploadMetaDataByUrl::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UploadMetaDataByUrl::getCategoryId() const
{
    return categoryId_;
}

void UploadMetaDataByUrl::setCategoryId(int32_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool UploadMetaDataByUrl::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void UploadMetaDataByUrl::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string UploadMetaDataByUrl::getTags() const
{
    return tags_;
}

void UploadMetaDataByUrl::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UploadMetaDataByUrl::tagsIsSet() const
{
    return tagsIsSet_;
}

void UploadMetaDataByUrl::unsettags()
{
    tagsIsSet_ = false;
}

int32_t UploadMetaDataByUrl::getAutoPublish() const
{
    return autoPublish_;
}

void UploadMetaDataByUrl::setAutoPublish(int32_t value)
{
    autoPublish_ = value;
    autoPublishIsSet_ = true;
}

bool UploadMetaDataByUrl::autoPublishIsSet() const
{
    return autoPublishIsSet_;
}

void UploadMetaDataByUrl::unsetautoPublish()
{
    autoPublishIsSet_ = false;
}

std::string UploadMetaDataByUrl::getTemplateGroupName() const
{
    return templateGroupName_;
}

void UploadMetaDataByUrl::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool UploadMetaDataByUrl::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void UploadMetaDataByUrl::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

int32_t UploadMetaDataByUrl::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void UploadMetaDataByUrl::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool UploadMetaDataByUrl::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void UploadMetaDataByUrl::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

int32_t UploadMetaDataByUrl::getAutoPreheat() const
{
    return autoPreheat_;
}

void UploadMetaDataByUrl::setAutoPreheat(int32_t value)
{
    autoPreheat_ = value;
    autoPreheatIsSet_ = true;
}

bool UploadMetaDataByUrl::autoPreheatIsSet() const
{
    return autoPreheatIsSet_;
}

void UploadMetaDataByUrl::unsetautoPreheat()
{
    autoPreheatIsSet_ = false;
}

Thumbnail UploadMetaDataByUrl::getThumbnail() const
{
    return thumbnail_;
}

void UploadMetaDataByUrl::setThumbnail(const Thumbnail& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool UploadMetaDataByUrl::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void UploadMetaDataByUrl::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

Review UploadMetaDataByUrl::getReview() const
{
    return review_;
}

void UploadMetaDataByUrl::setReview(const Review& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool UploadMetaDataByUrl::reviewIsSet() const
{
    return reviewIsSet_;
}

void UploadMetaDataByUrl::unsetreview()
{
    reviewIsSet_ = false;
}

std::string UploadMetaDataByUrl::getWorkflowName() const
{
    return workflowName_;
}

void UploadMetaDataByUrl::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool UploadMetaDataByUrl::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void UploadMetaDataByUrl::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

}
}
}
}
}


