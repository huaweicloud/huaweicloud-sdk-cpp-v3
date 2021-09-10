

#include "huaweicloud/vod/v1/model/UpdateAssetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateAssetResponse::UpdateAssetResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    videoUploadUrl_ = "";
    videoUploadUrlIsSet_ = false;
    coverUploadUrl_ = "";
    coverUploadUrlIsSet_ = false;
    subtitleUploadUrlsIsSet_ = false;
}

UpdateAssetResponse::~UpdateAssetResponse() = default;

void UpdateAssetResponse::validate()
{
}

web::json::value UpdateAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(videoUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("video_upload_url")] = ModelBase::toJson(videoUploadUrl_);
    }
    if(coverUploadUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_upload_url")] = ModelBase::toJson(coverUploadUrl_);
    }
    if(subtitleUploadUrlsIsSet_) {
        val[utility::conversions::to_string_t("subtitle_upload_urls")] = ModelBase::toJson(subtitleUploadUrls_);
    }

    return val;
}

bool UpdateAssetResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("video_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_upload_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_upload_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUploadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_upload_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_upload_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleUploadUrls(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetResponse::getAssetId() const
{
    return assetId_;
}

void UpdateAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UpdateAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UpdateAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string UpdateAssetResponse::getVideoUploadUrl() const
{
    return videoUploadUrl_;
}

void UpdateAssetResponse::setVideoUploadUrl(const std::string& value)
{
    videoUploadUrl_ = value;
    videoUploadUrlIsSet_ = true;
}

bool UpdateAssetResponse::videoUploadUrlIsSet() const
{
    return videoUploadUrlIsSet_;
}

void UpdateAssetResponse::unsetvideoUploadUrl()
{
    videoUploadUrlIsSet_ = false;
}

std::string UpdateAssetResponse::getCoverUploadUrl() const
{
    return coverUploadUrl_;
}

void UpdateAssetResponse::setCoverUploadUrl(const std::string& value)
{
    coverUploadUrl_ = value;
    coverUploadUrlIsSet_ = true;
}

bool UpdateAssetResponse::coverUploadUrlIsSet() const
{
    return coverUploadUrlIsSet_;
}

void UpdateAssetResponse::unsetcoverUploadUrl()
{
    coverUploadUrlIsSet_ = false;
}

std::vector<std::string>& UpdateAssetResponse::getSubtitleUploadUrls()
{
    return subtitleUploadUrls_;
}

void UpdateAssetResponse::setSubtitleUploadUrls(const std::vector<std::string>& value)
{
    subtitleUploadUrls_ = value;
    subtitleUploadUrlsIsSet_ = true;
}

bool UpdateAssetResponse::subtitleUploadUrlsIsSet() const
{
    return subtitleUploadUrlsIsSet_;
}

void UpdateAssetResponse::unsetsubtitleUploadUrls()
{
    subtitleUploadUrlsIsSet_ = false;
}

}
}
}
}
}


