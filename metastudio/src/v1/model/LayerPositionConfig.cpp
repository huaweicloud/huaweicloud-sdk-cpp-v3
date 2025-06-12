

#include "huaweicloud/metastudio/v1/model/LayerPositionConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LayerPositionConfig::LayerPositionConfig()
{
    dx_ = 0;
    dxIsSet_ = false;
    dy_ = 0;
    dyIsSet_ = false;
    layerIndex_ = 0;
    layerIndexIsSet_ = false;
}

LayerPositionConfig::~LayerPositionConfig() = default;

void LayerPositionConfig::validate()
{
}

web::json::value LayerPositionConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(layerIndexIsSet_) {
        val[utility::conversions::to_string_t("layer_index")] = ModelBase::toJson(layerIndex_);
    }

    return val;
}
bool LayerPositionConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dx"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dx"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDx(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layer_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerIndex(refVal);
        }
    }
    return ok;
}


int32_t LayerPositionConfig::getDx() const
{
    return dx_;
}

void LayerPositionConfig::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool LayerPositionConfig::dxIsSet() const
{
    return dxIsSet_;
}

void LayerPositionConfig::unsetdx()
{
    dxIsSet_ = false;
}

int32_t LayerPositionConfig::getDy() const
{
    return dy_;
}

void LayerPositionConfig::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool LayerPositionConfig::dyIsSet() const
{
    return dyIsSet_;
}

void LayerPositionConfig::unsetdy()
{
    dyIsSet_ = false;
}

int32_t LayerPositionConfig::getLayerIndex() const
{
    return layerIndex_;
}

void LayerPositionConfig::setLayerIndex(int32_t value)
{
    layerIndex_ = value;
    layerIndexIsSet_ = true;
}

bool LayerPositionConfig::layerIndexIsSet() const
{
    return layerIndexIsSet_;
}

void LayerPositionConfig::unsetlayerIndex()
{
    layerIndexIsSet_ = false;
}

}
}
}
}
}


