

#include "huaweicloud/metastudio/v1/model/BackgroundImageConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BackgroundImageConfig::BackgroundImageConfig()
{
    dx_ = 0;
    dxIsSet_ = false;
    dy_ = 0;
    dyIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
}

BackgroundImageConfig::~BackgroundImageConfig() = default;

void BackgroundImageConfig::validate()
{
}

web::json::value BackgroundImageConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }

    return val;
}
bool BackgroundImageConfig::fromJson(const web::json::value& val)
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


int32_t BackgroundImageConfig::getDx() const
{
    return dx_;
}

void BackgroundImageConfig::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool BackgroundImageConfig::dxIsSet() const
{
    return dxIsSet_;
}

void BackgroundImageConfig::unsetdx()
{
    dxIsSet_ = false;
}

int32_t BackgroundImageConfig::getDy() const
{
    return dy_;
}

void BackgroundImageConfig::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool BackgroundImageConfig::dyIsSet() const
{
    return dyIsSet_;
}

void BackgroundImageConfig::unsetdy()
{
    dyIsSet_ = false;
}

int32_t BackgroundImageConfig::getWidth() const
{
    return width_;
}

void BackgroundImageConfig::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool BackgroundImageConfig::widthIsSet() const
{
    return widthIsSet_;
}

void BackgroundImageConfig::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t BackgroundImageConfig::getHeight() const
{
    return height_;
}

void BackgroundImageConfig::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool BackgroundImageConfig::heightIsSet() const
{
    return heightIsSet_;
}

void BackgroundImageConfig::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


