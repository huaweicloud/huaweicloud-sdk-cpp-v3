

#include "huaweicloud/vod/v1/model/CreateAssetByFileUploadResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetByFileUploadResponse::CreateAssetByFileUploadResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    videoUploadUrl_ = "";
    videoUploadUrlIsSet_ = false;
    coverUploadUrl_ = "";
    coverUploadUrlIsSet_ = false;
    subtitleUploadUrlsIsSet_ = false;
    targetIsSet_ = false;
}

CreateAssetByFileUploadResponse::~CreateAssetByFileUploadResponse() = default;

void CreateAssetByFileUploadResponse::validate()
{
}

web::json::value CreateAssetByFileUploadResponse::toJson() const
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
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }

    return val;
}

bool CreateAssetByFileUploadResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            File_addr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    return ok;
}


std::string CreateAssetByFileUploadResponse::getAssetId() const
{
    return assetId_;
}

void CreateAssetByFileUploadResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetByFileUploadResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetByFileUploadResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string CreateAssetByFileUploadResponse::getVideoUploadUrl() const
{
    return videoUploadUrl_;
}

void CreateAssetByFileUploadResponse::setVideoUploadUrl(const std::string& value)
{
    videoUploadUrl_ = value;
    videoUploadUrlIsSet_ = true;
}

bool CreateAssetByFileUploadResponse::videoUploadUrlIsSet() const
{
    return videoUploadUrlIsSet_;
}

void CreateAssetByFileUploadResponse::unsetvideoUploadUrl()
{
    videoUploadUrlIsSet_ = false;
}

std::string CreateAssetByFileUploadResponse::getCoverUploadUrl() const
{
    return coverUploadUrl_;
}

void CreateAssetByFileUploadResponse::setCoverUploadUrl(const std::string& value)
{
    coverUploadUrl_ = value;
    coverUploadUrlIsSet_ = true;
}

bool CreateAssetByFileUploadResponse::coverUploadUrlIsSet() const
{
    return coverUploadUrlIsSet_;
}

void CreateAssetByFileUploadResponse::unsetcoverUploadUrl()
{
    coverUploadUrlIsSet_ = false;
}

std::vector<std::string>& CreateAssetByFileUploadResponse::getSubtitleUploadUrls()
{
    return subtitleUploadUrls_;
}

void CreateAssetByFileUploadResponse::setSubtitleUploadUrls(const std::vector<std::string>& value)
{
    subtitleUploadUrls_ = value;
    subtitleUploadUrlsIsSet_ = true;
}

bool CreateAssetByFileUploadResponse::subtitleUploadUrlsIsSet() const
{
    return subtitleUploadUrlsIsSet_;
}

void CreateAssetByFileUploadResponse::unsetsubtitleUploadUrls()
{
    subtitleUploadUrlsIsSet_ = false;
}

File_addr CreateAssetByFileUploadResponse::getTarget() const
{
    return target_;
}

void CreateAssetByFileUploadResponse::setTarget(const File_addr& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool CreateAssetByFileUploadResponse::targetIsSet() const
{
    return targetIsSet_;
}

void CreateAssetByFileUploadResponse::unsettarget()
{
    targetIsSet_ = false;
}

}
}
}
}
}


