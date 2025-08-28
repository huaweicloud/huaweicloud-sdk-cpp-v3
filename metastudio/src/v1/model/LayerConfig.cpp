

#include "huaweicloud/metastudio/v1/model/LayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LayerConfig::LayerConfig()
{
    layerType_ = "";
    layerTypeIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    positionIsSet_ = false;
    sizeIsSet_ = false;
    rotationIsSet_ = false;
    imageConfigIsSet_ = false;
    videoConfigIsSet_ = false;
    textConfigIsSet_ = false;
}

LayerConfig::~LayerConfig() = default;

void LayerConfig::validate()
{
}

web::json::value LayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(layerTypeIsSet_) {
        val[utility::conversions::to_string_t("layer_type")] = ModelBase::toJson(layerType_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(rotationIsSet_) {
        val[utility::conversions::to_string_t("rotation")] = ModelBase::toJson(rotation_);
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
bool LayerConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rotation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation"));
        if(!fieldValue.is_null())
        {
            LayerRotationConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_config"));
        if(!fieldValue.is_null())
        {
            ImageLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_config"));
        if(!fieldValue.is_null())
        {
            VideoLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_config"));
        if(!fieldValue.is_null())
        {
            TextLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextConfig(refVal);
        }
    }
    return ok;
}


std::string LayerConfig::getLayerType() const
{
    return layerType_;
}

void LayerConfig::setLayerType(const std::string& value)
{
    layerType_ = value;
    layerTypeIsSet_ = true;
}

bool LayerConfig::layerTypeIsSet() const
{
    return layerTypeIsSet_;
}

void LayerConfig::unsetlayerType()
{
    layerTypeIsSet_ = false;
}

std::string LayerConfig::getAssetId() const
{
    return assetId_;
}

void LayerConfig::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool LayerConfig::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void LayerConfig::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string LayerConfig::getGroupId() const
{
    return groupId_;
}

void LayerConfig::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool LayerConfig::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void LayerConfig::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t LayerConfig::getSequenceNo() const
{
    return sequenceNo_;
}

void LayerConfig::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool LayerConfig::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void LayerConfig::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

LayerPositionConfig LayerConfig::getPosition() const
{
    return position_;
}

void LayerConfig::setPosition(const LayerPositionConfig& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool LayerConfig::positionIsSet() const
{
    return positionIsSet_;
}

void LayerConfig::unsetposition()
{
    positionIsSet_ = false;
}

LayerSizeConfig LayerConfig::getSize() const
{
    return size_;
}

void LayerConfig::setSize(const LayerSizeConfig& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool LayerConfig::sizeIsSet() const
{
    return sizeIsSet_;
}

void LayerConfig::unsetsize()
{
    sizeIsSet_ = false;
}

LayerRotationConfig LayerConfig::getRotation() const
{
    return rotation_;
}

void LayerConfig::setRotation(const LayerRotationConfig& value)
{
    rotation_ = value;
    rotationIsSet_ = true;
}

bool LayerConfig::rotationIsSet() const
{
    return rotationIsSet_;
}

void LayerConfig::unsetrotation()
{
    rotationIsSet_ = false;
}

ImageLayerConfig LayerConfig::getImageConfig() const
{
    return imageConfig_;
}

void LayerConfig::setImageConfig(const ImageLayerConfig& value)
{
    imageConfig_ = value;
    imageConfigIsSet_ = true;
}

bool LayerConfig::imageConfigIsSet() const
{
    return imageConfigIsSet_;
}

void LayerConfig::unsetimageConfig()
{
    imageConfigIsSet_ = false;
}

VideoLayerConfig LayerConfig::getVideoConfig() const
{
    return videoConfig_;
}

void LayerConfig::setVideoConfig(const VideoLayerConfig& value)
{
    videoConfig_ = value;
    videoConfigIsSet_ = true;
}

bool LayerConfig::videoConfigIsSet() const
{
    return videoConfigIsSet_;
}

void LayerConfig::unsetvideoConfig()
{
    videoConfigIsSet_ = false;
}

TextLayerConfig LayerConfig::getTextConfig() const
{
    return textConfig_;
}

void LayerConfig::setTextConfig(const TextLayerConfig& value)
{
    textConfig_ = value;
    textConfigIsSet_ = true;
}

bool LayerConfig::textConfigIsSet() const
{
    return textConfigIsSet_;
}

void LayerConfig::unsettextConfig()
{
    textConfigIsSet_ = false;
}

}
}
}
}
}


