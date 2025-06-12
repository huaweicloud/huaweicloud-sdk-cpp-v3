

#include "huaweicloud/metastudio/v1/model/SmartLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartLayerConfig::SmartLayerConfig()
{
    layerType_ = "";
    layerTypeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    positionIsSet_ = false;
    sizeIsSet_ = false;
    imageConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    textConfigIsSet_ = false;
}

SmartLayerConfig::~SmartLayerConfig() = default;

void SmartLayerConfig::validate()
{
}

web::json::value SmartLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(layerTypeIsSet_) {
        val[utility::conversions::to_string_t("layer_type")] = ModelBase::toJson(layerType_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(imageConfigIsSet_) {
        val[utility::conversions::to_string_t("image_config")] = ModelBase::toJson(imageConfig_);
    }
    if(videoConfigIsSet_) {
        val[utility::conversions::to_string_t("video_config")] = ModelBase::toJson(videoConfig_);
    }
    if(textConfigIsSet_) {
        val[utility::conversions::to_string_t("text_config")] = ModelBase::toJson(textConfig_);
    }

    return val;
}
bool SmartLayerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("layer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            LayerPositionConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            LayerSizeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_config"));
        if(!fieldValue.is_null())
        {
            SmartImageLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            SmartVideoLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_config"));
        if(!fieldValue.is_null())
        {
            SmartTextLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextConfig(refVal);
        }
    }
    return ok;
}


std::string SmartLayerConfig::getLayerType() const
{
    return layerType_;
}

void SmartLayerConfig::setLayerType(const std::string& value)
{
    layerType_ = value;
    layerTypeIsSet_ = true;
}

bool SmartLayerConfig::layerTypeIsSet() const
{
    return layerTypeIsSet_;
}

void SmartLayerConfig::unsetlayerType()
{
    layerTypeIsSet_ = false;
}

std::string SmartLayerConfig::getAssetId() const
{
    return assetId_;
}

void SmartLayerConfig::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool SmartLayerConfig::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void SmartLayerConfig::unsetassetId()
{
    assetIdIsSet_ = false;
}

LayerPositionConfig SmartLayerConfig::getPosition() const
{
    return position_;
}

void SmartLayerConfig::setPosition(const LayerPositionConfig& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool SmartLayerConfig::positionIsSet() const
{
    return positionIsSet_;
}

void SmartLayerConfig::unsetposition()
{
    positionIsSet_ = false;
}

LayerSizeConfig SmartLayerConfig::getSize() const
{
    return size_;
}

void SmartLayerConfig::setSize(const LayerSizeConfig& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SmartLayerConfig::sizeIsSet() const
{
    return sizeIsSet_;
}

void SmartLayerConfig::unsetsize()
{
    sizeIsSet_ = false;
}

SmartImageLayerConfig SmartLayerConfig::getImageConfig() const
{
    return imageConfig_;
}

void SmartLayerConfig::setImageConfig(const SmartImageLayerConfig& value)
{
    imageConfig_ = value;
    imageConfigIsSet_ = true;
}

bool SmartLayerConfig::imageConfigIsSet() const
{
    return imageConfigIsSet_;
}

void SmartLayerConfig::unsetimageConfig()
{
    imageConfigIsSet_ = false;
}

SmartVideoLayerConfig SmartLayerConfig::getVideoConfig() const
{
    return videoConfig_;
}

void SmartLayerConfig::setVideoConfig(const SmartVideoLayerConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool SmartLayerConfig::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void SmartLayerConfig::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

SmartTextLayerConfig SmartLayerConfig::getTextConfig() const
{
    return textConfig_;
}

void SmartLayerConfig::setTextConfig(const SmartTextLayerConfig& value)
{
    textConfig_ = value;
    textConfigIsSet_ = true;
}

bool SmartLayerConfig::textConfigIsSet() const
{
    return textConfigIsSet_;
}

void SmartLayerConfig::unsettextConfig()
{
    textConfigIsSet_ = false;
}

}
}
}
}
}


