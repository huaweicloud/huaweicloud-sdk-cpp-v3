

#include "huaweicloud/vod/v1/model/CreateAssetByFileUploadReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetByFileUploadReq::CreateAssetByFileUploadReq()
{
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    videoName_ = "";
    videoNameIsSet_ = false;
    videoType_ = "";
    videoTypeIsSet_ = false;
    categoryId_ = "";
    categoryIdIsSet_ = false;
    videoMd5_ = "";
    videoMd5IsSet_ = false;
    coverType_ = "";
    coverTypeIsSet_ = false;
    coverMd5_ = "";
    coverMd5IsSet_ = false;
    subtitlesIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    autoPublish_ = 0;
    autoPublishIsSet_ = false;
    templateGroupName_ = "";
    templateGroupNameIsSet_ = false;
    autoEncrypt_ = 0;
    autoEncryptIsSet_ = false;
    autoPreheat_ = "";
    autoPreheatIsSet_ = false;
    thumbnailIsSet_ = false;
    reviewIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
}

CreateAssetByFileUploadReq::~CreateAssetByFileUploadReq() = default;

void CreateAssetByFileUploadReq::validate()
{
}

web::json::value CreateAssetByFileUploadReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(videoNameIsSet_) {
        val[utility::conversions::to_string_t("video_name")] = ModelBase::toJson(videoName_);
    }
    if(videoTypeIsSet_) {
        val[utility::conversions::to_string_t("video_type")] = ModelBase::toJson(videoType_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(videoMd5IsSet_) {
        val[utility::conversions::to_string_t("video_md5")] = ModelBase::toJson(videoMd5_);
    }
    if(coverTypeIsSet_) {
        val[utility::conversions::to_string_t("cover_type")] = ModelBase::toJson(coverType_);
    }
    if(coverMd5IsSet_) {
        val[utility::conversions::to_string_t("cover_md5")] = ModelBase::toJson(coverMd5_);
    }
    if(subtitlesIsSet_) {
        val[utility::conversions::to_string_t("subtitles")] = ModelBase::toJson(subtitles_);
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

bool CreateAssetByFileUploadReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("video_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitles"));
        if(!fieldValue.is_null())
        {
            std::vector<Subtitle> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitles(refVal);
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
            std::string refVal;
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


std::string CreateAssetByFileUploadReq::getTitle() const
{
    return title_;
}

void CreateAssetByFileUploadReq::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateAssetByFileUploadReq::titleIsSet() const
{
    return titleIsSet_;
}

void CreateAssetByFileUploadReq::unsettitle()
{
    titleIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getDescription() const
{
    return description_;
}

void CreateAssetByFileUploadReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAssetByFileUploadReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAssetByFileUploadReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getVideoName() const
{
    return videoName_;
}

void CreateAssetByFileUploadReq::setVideoName(const std::string& value)
{
    videoName_ = value;
    videoNameIsSet_ = true;
}

bool CreateAssetByFileUploadReq::videoNameIsSet() const
{
    return videoNameIsSet_;
}

void CreateAssetByFileUploadReq::unsetvideoName()
{
    videoNameIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getVideoType() const
{
    return videoType_;
}

void CreateAssetByFileUploadReq::setVideoType(const std::string& value)
{
    videoType_ = value;
    videoTypeIsSet_ = true;
}

bool CreateAssetByFileUploadReq::videoTypeIsSet() const
{
    return videoTypeIsSet_;
}

void CreateAssetByFileUploadReq::unsetvideoType()
{
    videoTypeIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getCategoryId() const
{
    return categoryId_;
}

void CreateAssetByFileUploadReq::setCategoryId(const std::string& value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool CreateAssetByFileUploadReq::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void CreateAssetByFileUploadReq::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getVideoMd5() const
{
    return videoMd5_;
}

void CreateAssetByFileUploadReq::setVideoMd5(const std::string& value)
{
    videoMd5_ = value;
    videoMd5IsSet_ = true;
}

bool CreateAssetByFileUploadReq::videoMd5IsSet() const
{
    return videoMd5IsSet_;
}

void CreateAssetByFileUploadReq::unsetvideoMd5()
{
    videoMd5IsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getCoverType() const
{
    return coverType_;
}

void CreateAssetByFileUploadReq::setCoverType(const std::string& value)
{
    coverType_ = value;
    coverTypeIsSet_ = true;
}

bool CreateAssetByFileUploadReq::coverTypeIsSet() const
{
    return coverTypeIsSet_;
}

void CreateAssetByFileUploadReq::unsetcoverType()
{
    coverTypeIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getCoverMd5() const
{
    return coverMd5_;
}

void CreateAssetByFileUploadReq::setCoverMd5(const std::string& value)
{
    coverMd5_ = value;
    coverMd5IsSet_ = true;
}

bool CreateAssetByFileUploadReq::coverMd5IsSet() const
{
    return coverMd5IsSet_;
}

void CreateAssetByFileUploadReq::unsetcoverMd5()
{
    coverMd5IsSet_ = false;
}

std::vector<Subtitle>& CreateAssetByFileUploadReq::getSubtitles()
{
    return subtitles_;
}

void CreateAssetByFileUploadReq::setSubtitles(const std::vector<Subtitle>& value)
{
    subtitles_ = value;
    subtitlesIsSet_ = true;
}

bool CreateAssetByFileUploadReq::subtitlesIsSet() const
{
    return subtitlesIsSet_;
}

void CreateAssetByFileUploadReq::unsetsubtitles()
{
    subtitlesIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getTags() const
{
    return tags_;
}

void CreateAssetByFileUploadReq::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateAssetByFileUploadReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateAssetByFileUploadReq::unsettags()
{
    tagsIsSet_ = false;
}

int32_t CreateAssetByFileUploadReq::getAutoPublish() const
{
    return autoPublish_;
}

void CreateAssetByFileUploadReq::setAutoPublish(int32_t value)
{
    autoPublish_ = value;
    autoPublishIsSet_ = true;
}

bool CreateAssetByFileUploadReq::autoPublishIsSet() const
{
    return autoPublishIsSet_;
}

void CreateAssetByFileUploadReq::unsetautoPublish()
{
    autoPublishIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getTemplateGroupName() const
{
    return templateGroupName_;
}

void CreateAssetByFileUploadReq::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool CreateAssetByFileUploadReq::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void CreateAssetByFileUploadReq::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

int32_t CreateAssetByFileUploadReq::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void CreateAssetByFileUploadReq::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool CreateAssetByFileUploadReq::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void CreateAssetByFileUploadReq::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getAutoPreheat() const
{
    return autoPreheat_;
}

void CreateAssetByFileUploadReq::setAutoPreheat(const std::string& value)
{
    autoPreheat_ = value;
    autoPreheatIsSet_ = true;
}

bool CreateAssetByFileUploadReq::autoPreheatIsSet() const
{
    return autoPreheatIsSet_;
}

void CreateAssetByFileUploadReq::unsetautoPreheat()
{
    autoPreheatIsSet_ = false;
}

Thumbnail CreateAssetByFileUploadReq::getThumbnail() const
{
    return thumbnail_;
}

void CreateAssetByFileUploadReq::setThumbnail(const Thumbnail& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool CreateAssetByFileUploadReq::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void CreateAssetByFileUploadReq::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

Review CreateAssetByFileUploadReq::getReview() const
{
    return review_;
}

void CreateAssetByFileUploadReq::setReview(const Review& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool CreateAssetByFileUploadReq::reviewIsSet() const
{
    return reviewIsSet_;
}

void CreateAssetByFileUploadReq::unsetreview()
{
    reviewIsSet_ = false;
}

std::string CreateAssetByFileUploadReq::getWorkflowName() const
{
    return workflowName_;
}

void CreateAssetByFileUploadReq::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool CreateAssetByFileUploadReq::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void CreateAssetByFileUploadReq::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

}
}
}
}
}


