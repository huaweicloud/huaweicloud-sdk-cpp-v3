

#include "huaweicloud/metastudio/v1/model/OutputAssetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




OutputAssetInfo::OutputAssetInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    previewVideoUrl_ = "";
    previewVideoUrlIsSet_ = false;
}

OutputAssetInfo::~OutputAssetInfo() = default;

void OutputAssetInfo::validate()
{
}

web::json::value OutputAssetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(previewVideoUrlIsSet_) {
        val[utility::conversions::to_string_t("preview_video_url")] = ModelBase::toJson(previewVideoUrl_);
    }

    return val;
}
bool OutputAssetInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preview_video_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preview_video_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviewVideoUrl(refVal);
        }
    }
    return ok;
}


std::string OutputAssetInfo::getAssetId() const
{
    return assetId_;
}

void OutputAssetInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool OutputAssetInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void OutputAssetInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string OutputAssetInfo::getAssetName() const
{
    return assetName_;
}

void OutputAssetInfo::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool OutputAssetInfo::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void OutputAssetInfo::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string OutputAssetInfo::getCoverUrl() const
{
    return coverUrl_;
}

void OutputAssetInfo::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool OutputAssetInfo::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void OutputAssetInfo::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string OutputAssetInfo::getPreviewVideoUrl() const
{
    return previewVideoUrl_;
}

void OutputAssetInfo::setPreviewVideoUrl(const std::string& value)
{
    previewVideoUrl_ = value;
    previewVideoUrlIsSet_ = true;
}

bool OutputAssetInfo::previewVideoUrlIsSet() const
{
    return previewVideoUrlIsSet_;
}

void OutputAssetInfo::unsetpreviewVideoUrl()
{
    previewVideoUrlIsSet_ = false;
}

}
}
}
}
}


