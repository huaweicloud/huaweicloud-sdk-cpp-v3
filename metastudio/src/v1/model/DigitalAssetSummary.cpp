

#include "huaweicloud/metastudio/v1/model/DigitalAssetSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DigitalAssetSummary::DigitalAssetSummary()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetState_ = "";
    assetStateIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    thumbnailUrl_ = "";
    thumbnailUrlIsSet_ = false;
}

DigitalAssetSummary::~DigitalAssetSummary() = default;

void DigitalAssetSummary::validate()
{
}

web::json::value DigitalAssetSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetStateIsSet_) {
        val[utility::conversions::to_string_t("asset_state")] = ModelBase::toJson(assetState_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(thumbnailUrlIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_url")] = ModelBase::toJson(thumbnailUrl_);
    }

    return val;
}
bool DigitalAssetSummary::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailUrl(refVal);
        }
    }
    return ok;
}


std::string DigitalAssetSummary::getAssetId() const
{
    return assetId_;
}

void DigitalAssetSummary::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DigitalAssetSummary::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DigitalAssetSummary::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DigitalAssetSummary::getAssetName() const
{
    return assetName_;
}

void DigitalAssetSummary::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool DigitalAssetSummary::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void DigitalAssetSummary::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string DigitalAssetSummary::getAssetState() const
{
    return assetState_;
}

void DigitalAssetSummary::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool DigitalAssetSummary::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void DigitalAssetSummary::unsetassetState()
{
    assetStateIsSet_ = false;
}

std::string DigitalAssetSummary::getAssetType() const
{
    return assetType_;
}

void DigitalAssetSummary::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool DigitalAssetSummary::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void DigitalAssetSummary::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string DigitalAssetSummary::getCoverUrl() const
{
    return coverUrl_;
}

void DigitalAssetSummary::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool DigitalAssetSummary::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void DigitalAssetSummary::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string DigitalAssetSummary::getThumbnailUrl() const
{
    return thumbnailUrl_;
}

void DigitalAssetSummary::setThumbnailUrl(const std::string& value)
{
    thumbnailUrl_ = value;
    thumbnailUrlIsSet_ = true;
}

bool DigitalAssetSummary::thumbnailUrlIsSet() const
{
    return thumbnailUrlIsSet_;
}

void DigitalAssetSummary::unsetthumbnailUrl()
{
    thumbnailUrlIsSet_ = false;
}

}
}
}
}
}


