

#include "huaweicloud/metastudio/v1/model/StyleAssetItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StyleAssetItem::StyleAssetItem()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
}

StyleAssetItem::~StyleAssetItem() = default;

void StyleAssetItem::validate()
{
}

web::json::value StyleAssetItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }

    return val;
}
bool StyleAssetItem::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StyleAssetItem::getAssetId() const
{
    return assetId_;
}

void StyleAssetItem::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool StyleAssetItem::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void StyleAssetItem::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string StyleAssetItem::getAssetType() const
{
    return assetType_;
}

void StyleAssetItem::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool StyleAssetItem::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void StyleAssetItem::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string StyleAssetItem::getCoverUrl() const
{
    return coverUrl_;
}

void StyleAssetItem::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool StyleAssetItem::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void StyleAssetItem::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

}
}
}
}
}


