

#include "huaweicloud/vod/v1/model/ShowAssetDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetDetailResponse::ShowAssetDetailResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    baseInfoIsSet_ = false;
    transcodeInfoIsSet_ = false;
    thumbnailInfoIsSet_ = false;
    reviewInfoIsSet_ = false;
}

ShowAssetDetailResponse::~ShowAssetDetailResponse() = default;

void ShowAssetDetailResponse::validate()
{
}

web::json::value ShowAssetDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(transcodeInfoIsSet_) {
        val[utility::conversions::to_string_t("transcode_info")] = ModelBase::toJson(transcodeInfo_);
    }
    if(thumbnailInfoIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_info")] = ModelBase::toJson(thumbnailInfo_);
    }
    if(reviewInfoIsSet_) {
        val[utility::conversions::to_string_t("review_info")] = ModelBase::toJson(reviewInfo_);
    }

    return val;
}

bool ShowAssetDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_info"));
        if(!fieldValue.is_null())
        {
            BaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_info"));
        if(!fieldValue.is_null())
        {
            TranscodeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_info"));
        if(!fieldValue.is_null())
        {
            ThumbnailInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_info"));
        if(!fieldValue.is_null())
        {
            ReviewInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewInfo(refVal);
        }
    }
    return ok;
}


std::string ShowAssetDetailResponse::getAssetId() const
{
    return assetId_;
}

void ShowAssetDetailResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetDetailResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetDetailResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

BaseInfo ShowAssetDetailResponse::getBaseInfo() const
{
    return baseInfo_;
}

void ShowAssetDetailResponse::setBaseInfo(const BaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool ShowAssetDetailResponse::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void ShowAssetDetailResponse::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

TranscodeInfo ShowAssetDetailResponse::getTranscodeInfo() const
{
    return transcodeInfo_;
}

void ShowAssetDetailResponse::setTranscodeInfo(const TranscodeInfo& value)
{
    transcodeInfo_ = value;
    transcodeInfoIsSet_ = true;
}

bool ShowAssetDetailResponse::transcodeInfoIsSet() const
{
    return transcodeInfoIsSet_;
}

void ShowAssetDetailResponse::unsettranscodeInfo()
{
    transcodeInfoIsSet_ = false;
}

ThumbnailInfo ShowAssetDetailResponse::getThumbnailInfo() const
{
    return thumbnailInfo_;
}

void ShowAssetDetailResponse::setThumbnailInfo(const ThumbnailInfo& value)
{
    thumbnailInfo_ = value;
    thumbnailInfoIsSet_ = true;
}

bool ShowAssetDetailResponse::thumbnailInfoIsSet() const
{
    return thumbnailInfoIsSet_;
}

void ShowAssetDetailResponse::unsetthumbnailInfo()
{
    thumbnailInfoIsSet_ = false;
}

ReviewInfo ShowAssetDetailResponse::getReviewInfo() const
{
    return reviewInfo_;
}

void ShowAssetDetailResponse::setReviewInfo(const ReviewInfo& value)
{
    reviewInfo_ = value;
    reviewInfoIsSet_ = true;
}

bool ShowAssetDetailResponse::reviewInfoIsSet() const
{
    return reviewInfoIsSet_;
}

void ShowAssetDetailResponse::unsetreviewInfo()
{
    reviewInfoIsSet_ = false;
}

}
}
}
}
}


