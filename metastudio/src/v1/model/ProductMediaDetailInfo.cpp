

#include "huaweicloud/metastudio/v1/model/ProductMediaDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ProductMediaDetailInfo::ProductMediaDetailInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    order_ = 0;
    orderIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetState_ = "";
    assetStateIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    thumbnailUrl_ = "";
    thumbnailUrlIsSet_ = false;
    mainUrl_ = "";
    mainUrlIsSet_ = false;
}

ProductMediaDetailInfo::~ProductMediaDetailInfo() = default;

void ProductMediaDetailInfo::validate()
{
}

web::json::value ProductMediaDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetStateIsSet_) {
        val[utility::conversions::to_string_t("asset_state")] = ModelBase::toJson(assetState_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(thumbnailUrlIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_url")] = ModelBase::toJson(thumbnailUrl_);
    }
    if(mainUrlIsSet_) {
        val[utility::conversions::to_string_t("main_url")] = ModelBase::toJson(mainUrl_);
    }

    return val;
}
bool ProductMediaDetailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("main_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainUrl(refVal);
        }
    }
    return ok;
}


std::string ProductMediaDetailInfo::getAssetId() const
{
    return assetId_;
}

void ProductMediaDetailInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ProductMediaDetailInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ProductMediaDetailInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ProductMediaDetailInfo::getAssetType() const
{
    return assetType_;
}

void ProductMediaDetailInfo::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ProductMediaDetailInfo::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ProductMediaDetailInfo::unsetassetType()
{
    assetTypeIsSet_ = false;
}

int32_t ProductMediaDetailInfo::getOrder() const
{
    return order_;
}

void ProductMediaDetailInfo::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ProductMediaDetailInfo::orderIsSet() const
{
    return orderIsSet_;
}

void ProductMediaDetailInfo::unsetorder()
{
    orderIsSet_ = false;
}

std::string ProductMediaDetailInfo::getAssetName() const
{
    return assetName_;
}

void ProductMediaDetailInfo::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ProductMediaDetailInfo::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ProductMediaDetailInfo::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ProductMediaDetailInfo::getAssetState() const
{
    return assetState_;
}

void ProductMediaDetailInfo::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool ProductMediaDetailInfo::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void ProductMediaDetailInfo::unsetassetState()
{
    assetStateIsSet_ = false;
}

std::string ProductMediaDetailInfo::getCoverUrl() const
{
    return coverUrl_;
}

void ProductMediaDetailInfo::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool ProductMediaDetailInfo::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void ProductMediaDetailInfo::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string ProductMediaDetailInfo::getThumbnailUrl() const
{
    return thumbnailUrl_;
}

void ProductMediaDetailInfo::setThumbnailUrl(const std::string& value)
{
    thumbnailUrl_ = value;
    thumbnailUrlIsSet_ = true;
}

bool ProductMediaDetailInfo::thumbnailUrlIsSet() const
{
    return thumbnailUrlIsSet_;
}

void ProductMediaDetailInfo::unsetthumbnailUrl()
{
    thumbnailUrlIsSet_ = false;
}

std::string ProductMediaDetailInfo::getMainUrl() const
{
    return mainUrl_;
}

void ProductMediaDetailInfo::setMainUrl(const std::string& value)
{
    mainUrl_ = value;
    mainUrlIsSet_ = true;
}

bool ProductMediaDetailInfo::mainUrlIsSet() const
{
    return mainUrlIsSet_;
}

void ProductMediaDetailInfo::unsetmainUrl()
{
    mainUrlIsSet_ = false;
}

}
}
}
}
}


