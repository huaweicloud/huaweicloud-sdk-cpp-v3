

#include "huaweicloud/metastudio/v1/model/LayerSizeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LayerSizeConfig::LayerSizeConfig()
{
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
}

LayerSizeConfig::~LayerSizeConfig() = default;

void LayerSizeConfig::validate()
{
}

web::json::value LayerSizeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }

    return val;
}
bool LayerSizeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    return ok;
}


int32_t LayerSizeConfig::getWidth() const
{
    return width_;
}

void LayerSizeConfig::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool LayerSizeConfig::widthIsSet() const
{
    return widthIsSet_;
}

void LayerSizeConfig::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t LayerSizeConfig::getHeight() const
{
    return height_;
}

void LayerSizeConfig::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool LayerSizeConfig::heightIsSet() const
{
    return heightIsSet_;
}

void LayerSizeConfig::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


