

#include "huaweicloud/metastudio/v1/model/ProductCoverDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductCoverDetailInfo::ProductCoverDetailInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    thumbnailUrl_ = "";
    thumbnailUrlIsSet_ = false;
}

ProductCoverDetailInfo::~ProductCoverDetailInfo() = default;

void ProductCoverDetailInfo::validate()
{
}

web::json::value ProductCoverDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(thumbnailUrlIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_url")] = ModelBase::toJson(thumbnailUrl_);
    }

    return val;
}
bool ProductCoverDetailInfo::fromJson(const web::json::value& val)
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


std::string ProductCoverDetailInfo::getAssetId() const
{
    return assetId_;
}

void ProductCoverDetailInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ProductCoverDetailInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ProductCoverDetailInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ProductCoverDetailInfo::getCoverUrl() const
{
    return coverUrl_;
}

void ProductCoverDetailInfo::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool ProductCoverDetailInfo::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void ProductCoverDetailInfo::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string ProductCoverDetailInfo::getThumbnailUrl() const
{
    return thumbnailUrl_;
}

void ProductCoverDetailInfo::setThumbnailUrl(const std::string& value)
{
    thumbnailUrl_ = value;
    thumbnailUrlIsSet_ = true;
}

bool ProductCoverDetailInfo::thumbnailUrlIsSet() const
{
    return thumbnailUrlIsSet_;
}

void ProductCoverDetailInfo::unsetthumbnailUrl()
{
    thumbnailUrlIsSet_ = false;
}

}
}
}
}
}


