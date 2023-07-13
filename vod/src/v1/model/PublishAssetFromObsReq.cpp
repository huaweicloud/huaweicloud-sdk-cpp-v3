

#include "huaweicloud/vod/v1/model/PublishAssetFromObsReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PublishAssetFromObsReq::PublishAssetFromObsReq()
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
    inputIsSet_ = false;
    storageMode_ = 0;
    storageModeIsSet_ = false;
    outputBucket_ = "";
    outputBucketIsSet_ = false;
    outputPath_ = "";
    outputPathIsSet_ = false;
}

PublishAssetFromObsReq::~PublishAssetFromObsReq() = default;

void PublishAssetFromObsReq::validate()
{
}

web::json::value PublishAssetFromObsReq::toJson() const
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
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(storageModeIsSet_) {
        val[utility::conversions::to_string_t("storage_mode")] = ModelBase::toJson(storageMode_);
    }
    if(outputBucketIsSet_) {
        val[utility::conversions::to_string_t("output_bucket")] = ModelBase::toJson(outputBucket_);
    }
    if(outputPathIsSet_) {
        val[utility::conversions::to_string_t("output_path")] = ModelBase::toJson(outputPath_);
    }

    return val;
}

bool PublishAssetFromObsReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            File_addr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPath(refVal);
        }
    }
    return ok;
}

std::string PublishAssetFromObsReq::getVideoType() const
{
    return videoType_;
}

void PublishAssetFromObsReq::setVideoType(const std::string& value)
{
    videoType_ = value;
    videoTypeIsSet_ = true;
}

bool PublishAssetFromObsReq::videoTypeIsSet() const
{
    return videoTypeIsSet_;
}

void PublishAssetFromObsReq::unsetvideoType()
{
    videoTypeIsSet_ = false;
}

std::string PublishAssetFromObsReq::getTitle() const
{
    return title_;
}

void PublishAssetFromObsReq::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PublishAssetFromObsReq::titleIsSet() const
{
    return titleIsSet_;
}

void PublishAssetFromObsReq::unsettitle()
{
    titleIsSet_ = false;
}

std::string PublishAssetFromObsReq::getDescription() const
{
    return description_;
}

void PublishAssetFromObsReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublishAssetFromObsReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublishAssetFromObsReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t PublishAssetFromObsReq::getCategoryId() const
{
    return categoryId_;
}

void PublishAssetFromObsReq::setCategoryId(int32_t value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool PublishAssetFromObsReq::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void PublishAssetFromObsReq::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

std::string PublishAssetFromObsReq::getTags() const
{
    return tags_;
}

void PublishAssetFromObsReq::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PublishAssetFromObsReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void PublishAssetFromObsReq::unsettags()
{
    tagsIsSet_ = false;
}

int32_t PublishAssetFromObsReq::getAutoPublish() const
{
    return autoPublish_;
}

void PublishAssetFromObsReq::setAutoPublish(int32_t value)
{
    autoPublish_ = value;
    autoPublishIsSet_ = true;
}

bool PublishAssetFromObsReq::autoPublishIsSet() const
{
    return autoPublishIsSet_;
}

void PublishAssetFromObsReq::unsetautoPublish()
{
    autoPublishIsSet_ = false;
}

std::string PublishAssetFromObsReq::getTemplateGroupName() const
{
    return templateGroupName_;
}

void PublishAssetFromObsReq::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool PublishAssetFromObsReq::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void PublishAssetFromObsReq::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

int32_t PublishAssetFromObsReq::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void PublishAssetFromObsReq::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool PublishAssetFromObsReq::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void PublishAssetFromObsReq::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

int32_t PublishAssetFromObsReq::getAutoPreheat() const
{
    return autoPreheat_;
}

void PublishAssetFromObsReq::setAutoPreheat(int32_t value)
{
    autoPreheat_ = value;
    autoPreheatIsSet_ = true;
}

bool PublishAssetFromObsReq::autoPreheatIsSet() const
{
    return autoPreheatIsSet_;
}

void PublishAssetFromObsReq::unsetautoPreheat()
{
    autoPreheatIsSet_ = false;
}

Thumbnail PublishAssetFromObsReq::getThumbnail() const
{
    return thumbnail_;
}

void PublishAssetFromObsReq::setThumbnail(const Thumbnail& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool PublishAssetFromObsReq::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void PublishAssetFromObsReq::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

Review PublishAssetFromObsReq::getReview() const
{
    return review_;
}

void PublishAssetFromObsReq::setReview(const Review& value)
{
    review_ = value;
    reviewIsSet_ = true;
}

bool PublishAssetFromObsReq::reviewIsSet() const
{
    return reviewIsSet_;
}

void PublishAssetFromObsReq::unsetreview()
{
    reviewIsSet_ = false;
}

std::string PublishAssetFromObsReq::getWorkflowName() const
{
    return workflowName_;
}

void PublishAssetFromObsReq::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool PublishAssetFromObsReq::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void PublishAssetFromObsReq::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

File_addr PublishAssetFromObsReq::getInput() const
{
    return input_;
}

void PublishAssetFromObsReq::setInput(const File_addr& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool PublishAssetFromObsReq::inputIsSet() const
{
    return inputIsSet_;
}

void PublishAssetFromObsReq::unsetinput()
{
    inputIsSet_ = false;
}

int32_t PublishAssetFromObsReq::getStorageMode() const
{
    return storageMode_;
}

void PublishAssetFromObsReq::setStorageMode(int32_t value)
{
    storageMode_ = value;
    storageModeIsSet_ = true;
}

bool PublishAssetFromObsReq::storageModeIsSet() const
{
    return storageModeIsSet_;
}

void PublishAssetFromObsReq::unsetstorageMode()
{
    storageModeIsSet_ = false;
}

std::string PublishAssetFromObsReq::getOutputBucket() const
{
    return outputBucket_;
}

void PublishAssetFromObsReq::setOutputBucket(const std::string& value)
{
    outputBucket_ = value;
    outputBucketIsSet_ = true;
}

bool PublishAssetFromObsReq::outputBucketIsSet() const
{
    return outputBucketIsSet_;
}

void PublishAssetFromObsReq::unsetoutputBucket()
{
    outputBucketIsSet_ = false;
}

std::string PublishAssetFromObsReq::getOutputPath() const
{
    return outputPath_;
}

void PublishAssetFromObsReq::setOutputPath(const std::string& value)
{
    outputPath_ = value;
    outputPathIsSet_ = true;
}

bool PublishAssetFromObsReq::outputPathIsSet() const
{
    return outputPathIsSet_;
}

void PublishAssetFromObsReq::unsetoutputPath()
{
    outputPathIsSet_ = false;
}

}
}
}
}
}


