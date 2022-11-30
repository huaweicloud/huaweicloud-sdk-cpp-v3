

#include "huaweicloud/vod/v1/model/AssetSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AssetSummary::AssetSummary()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    originalUrl_ = "";
    originalUrlIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    coversIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    assetStatus_ = "";
    assetStatusIsSet_ = false;
    transcodeStatus_ = "";
    transcodeStatusIsSet_ = false;
    thumbnailStatus_ = "";
    thumbnailStatusIsSet_ = false;
    reviewStatus_ = "";
    reviewStatusIsSet_ = false;
    execDesc_ = "";
    execDescIsSet_ = false;
    mediaType_ = "";
    mediaTypeIsSet_ = false;
}

AssetSummary::~AssetSummary() = default;

void AssetSummary::validate()
{
}

web::json::value AssetSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(originalUrlIsSet_) {
        val[utility::conversions::to_string_t("original_url")] = ModelBase::toJson(originalUrl_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(coversIsSet_) {
        val[utility::conversions::to_string_t("covers")] = ModelBase::toJson(covers_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(assetStatusIsSet_) {
        val[utility::conversions::to_string_t("asset_status")] = ModelBase::toJson(assetStatus_);
    }
    if(transcodeStatusIsSet_) {
        val[utility::conversions::to_string_t("transcode_status")] = ModelBase::toJson(transcodeStatus_);
    }
    if(thumbnailStatusIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_status")] = ModelBase::toJson(thumbnailStatus_);
    }
    if(reviewStatusIsSet_) {
        val[utility::conversions::to_string_t("review_status")] = ModelBase::toJson(reviewStatus_);
    }
    if(execDescIsSet_) {
        val[utility::conversions::to_string_t("exec_desc")] = ModelBase::toJson(execDesc_);
    }
    if(mediaTypeIsSet_) {
        val[utility::conversions::to_string_t("media_type")] = ModelBase::toJson(mediaType_);
    }

    return val;
}

bool AssetSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("original_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("covers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("covers"));
        if(!fieldValue.is_null())
        {
            std::vector<CoverInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCovers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("media_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("media_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaType(refVal);
        }
    }
    return ok;
}


std::string AssetSummary::getAssetId() const
{
    return assetId_;
}

void AssetSummary::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetSummary::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetSummary::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetSummary::getTitle() const
{
    return title_;
}

void AssetSummary::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AssetSummary::titleIsSet() const
{
    return titleIsSet_;
}

void AssetSummary::unsettitle()
{
    titleIsSet_ = false;
}

std::string AssetSummary::getDescription() const
{
    return description_;
}

void AssetSummary::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AssetSummary::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AssetSummary::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AssetSummary::getDuration() const
{
    return duration_;
}

void AssetSummary::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool AssetSummary::durationIsSet() const
{
    return durationIsSet_;
}

void AssetSummary::unsetduration()
{
    durationIsSet_ = false;
}

int64_t AssetSummary::getSize() const
{
    return size_;
}

void AssetSummary::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AssetSummary::sizeIsSet() const
{
    return sizeIsSet_;
}

void AssetSummary::unsetsize()
{
    sizeIsSet_ = false;
}

std::string AssetSummary::getOriginalUrl() const
{
    return originalUrl_;
}

void AssetSummary::setOriginalUrl(const std::string& value)
{
    originalUrl_ = value;
    originalUrlIsSet_ = true;
}

bool AssetSummary::originalUrlIsSet() const
{
    return originalUrlIsSet_;
}

void AssetSummary::unsetoriginalUrl()
{
    originalUrlIsSet_ = false;
}

std::string AssetSummary::getCategory() const
{
    return category_;
}

void AssetSummary::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool AssetSummary::categoryIsSet() const
{
    return categoryIsSet_;
}

void AssetSummary::unsetcategory()
{
    categoryIsSet_ = false;
}

std::vector<CoverInfo>& AssetSummary::getCovers()
{
    return covers_;
}

void AssetSummary::setCovers(const std::vector<CoverInfo>& value)
{
    covers_ = value;
    coversIsSet_ = true;
}

bool AssetSummary::coversIsSet() const
{
    return coversIsSet_;
}

void AssetSummary::unsetcovers()
{
    coversIsSet_ = false;
}

std::string AssetSummary::getCreateTime() const
{
    return createTime_;
}

void AssetSummary::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AssetSummary::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AssetSummary::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string AssetSummary::getAssetStatus() const
{
    return assetStatus_;
}

void AssetSummary::setAssetStatus(const std::string& value)
{
    assetStatus_ = value;
    assetStatusIsSet_ = true;
}

bool AssetSummary::assetStatusIsSet() const
{
    return assetStatusIsSet_;
}

void AssetSummary::unsetassetStatus()
{
    assetStatusIsSet_ = false;
}

std::string AssetSummary::getTranscodeStatus() const
{
    return transcodeStatus_;
}

void AssetSummary::setTranscodeStatus(const std::string& value)
{
    transcodeStatus_ = value;
    transcodeStatusIsSet_ = true;
}

bool AssetSummary::transcodeStatusIsSet() const
{
    return transcodeStatusIsSet_;
}

void AssetSummary::unsettranscodeStatus()
{
    transcodeStatusIsSet_ = false;
}

std::string AssetSummary::getThumbnailStatus() const
{
    return thumbnailStatus_;
}

void AssetSummary::setThumbnailStatus(const std::string& value)
{
    thumbnailStatus_ = value;
    thumbnailStatusIsSet_ = true;
}

bool AssetSummary::thumbnailStatusIsSet() const
{
    return thumbnailStatusIsSet_;
}

void AssetSummary::unsetthumbnailStatus()
{
    thumbnailStatusIsSet_ = false;
}

std::string AssetSummary::getReviewStatus() const
{
    return reviewStatus_;
}

void AssetSummary::setReviewStatus(const std::string& value)
{
    reviewStatus_ = value;
    reviewStatusIsSet_ = true;
}

bool AssetSummary::reviewStatusIsSet() const
{
    return reviewStatusIsSet_;
}

void AssetSummary::unsetreviewStatus()
{
    reviewStatusIsSet_ = false;
}

std::string AssetSummary::getExecDesc() const
{
    return execDesc_;
}

void AssetSummary::setExecDesc(const std::string& value)
{
    execDesc_ = value;
    execDescIsSet_ = true;
}

bool AssetSummary::execDescIsSet() const
{
    return execDescIsSet_;
}

void AssetSummary::unsetexecDesc()
{
    execDescIsSet_ = false;
}

std::string AssetSummary::getMediaType() const
{
    return mediaType_;
}

void AssetSummary::setMediaType(const std::string& value)
{
    mediaType_ = value;
    mediaTypeIsSet_ = true;
}

bool AssetSummary::mediaTypeIsSet() const
{
    return mediaTypeIsSet_;
}

void AssetSummary::unsetmediaType()
{
    mediaTypeIsSet_ = false;
}

}
}
}
}
}


