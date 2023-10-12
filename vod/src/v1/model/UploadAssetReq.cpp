

#include "huaweicloud/vod/v1/model/UploadAssetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadAssetReq::UploadAssetReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    videoMd5_ = "";
    videoMd5IsSet_ = false;
    videoName_ = "";
    videoNameIsSet_ = false;
    videoType_ = "";
    videoTypeIsSet_ = false;
    coverId_ = 0;
    coverIdIsSet_ = false;
    coverType_ = "";
    coverTypeIsSet_ = false;
    coverMd5_ = "";
    coverMd5IsSet_ = false;
    subtitlesIsSet_ = false;
}

UploadAssetReq::~UploadAssetReq() = default;

void UploadAssetReq::validate()
{
}

web::json::value UploadAssetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(videoMd5IsSet_) {
        val[utility::conversions::to_string_t("video_md5")] = ModelBase::toJson(videoMd5_);
    }
    if(videoNameIsSet_) {
        val[utility::conversions::to_string_t("video_name")] = ModelBase::toJson(videoName_);
    }
    if(videoTypeIsSet_) {
        val[utility::conversions::to_string_t("video_type")] = ModelBase::toJson(videoType_);
    }
    if(coverIdIsSet_) {
        val[utility::conversions::to_string_t("cover_id")] = ModelBase::toJson(coverId_);
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

    return val;
}
bool UploadAssetReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("video_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoMd5(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cover_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverId(refVal);
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
    return ok;
}


std::string UploadAssetReq::getAssetId() const
{
    return assetId_;
}

void UploadAssetReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UploadAssetReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UploadAssetReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string UploadAssetReq::getVideoMd5() const
{
    return videoMd5_;
}

void UploadAssetReq::setVideoMd5(const std::string& value)
{
    videoMd5_ = value;
    videoMd5IsSet_ = true;
}

bool UploadAssetReq::videoMd5IsSet() const
{
    return videoMd5IsSet_;
}

void UploadAssetReq::unsetvideoMd5()
{
    videoMd5IsSet_ = false;
}

std::string UploadAssetReq::getVideoName() const
{
    return videoName_;
}

void UploadAssetReq::setVideoName(const std::string& value)
{
    videoName_ = value;
    videoNameIsSet_ = true;
}

bool UploadAssetReq::videoNameIsSet() const
{
    return videoNameIsSet_;
}

void UploadAssetReq::unsetvideoName()
{
    videoNameIsSet_ = false;
}

std::string UploadAssetReq::getVideoType() const
{
    return videoType_;
}

void UploadAssetReq::setVideoType(const std::string& value)
{
    videoType_ = value;
    videoTypeIsSet_ = true;
}

bool UploadAssetReq::videoTypeIsSet() const
{
    return videoTypeIsSet_;
}

void UploadAssetReq::unsetvideoType()
{
    videoTypeIsSet_ = false;
}

int32_t UploadAssetReq::getCoverId() const
{
    return coverId_;
}

void UploadAssetReq::setCoverId(int32_t value)
{
    coverId_ = value;
    coverIdIsSet_ = true;
}

bool UploadAssetReq::coverIdIsSet() const
{
    return coverIdIsSet_;
}

void UploadAssetReq::unsetcoverId()
{
    coverIdIsSet_ = false;
}

std::string UploadAssetReq::getCoverType() const
{
    return coverType_;
}

void UploadAssetReq::setCoverType(const std::string& value)
{
    coverType_ = value;
    coverTypeIsSet_ = true;
}

bool UploadAssetReq::coverTypeIsSet() const
{
    return coverTypeIsSet_;
}

void UploadAssetReq::unsetcoverType()
{
    coverTypeIsSet_ = false;
}

std::string UploadAssetReq::getCoverMd5() const
{
    return coverMd5_;
}

void UploadAssetReq::setCoverMd5(const std::string& value)
{
    coverMd5_ = value;
    coverMd5IsSet_ = true;
}

bool UploadAssetReq::coverMd5IsSet() const
{
    return coverMd5IsSet_;
}

void UploadAssetReq::unsetcoverMd5()
{
    coverMd5IsSet_ = false;
}

std::vector<Subtitle>& UploadAssetReq::getSubtitles()
{
    return subtitles_;
}

void UploadAssetReq::setSubtitles(const std::vector<Subtitle>& value)
{
    subtitles_ = value;
    subtitlesIsSet_ = true;
}

bool UploadAssetReq::subtitlesIsSet() const
{
    return subtitlesIsSet_;
}

void UploadAssetReq::unsetsubtitles()
{
    subtitlesIsSet_ = false;
}

}
}
}
}
}


