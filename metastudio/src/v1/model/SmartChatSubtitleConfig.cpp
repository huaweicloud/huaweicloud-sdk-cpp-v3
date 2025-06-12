

#include "huaweicloud/metastudio/v1/model/SmartChatSubtitleConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartChatSubtitleConfig::SmartChatSubtitleConfig()
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

SmartChatSubtitleConfig::~SmartChatSubtitleConfig() = default;

void SmartChatSubtitleConfig::validate()
{
}

web::json::value SmartChatSubtitleConfig::toJson() const
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
bool SmartChatSubtitleConfig::fromJson(const web::json::value& val)
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


int32_t SmartChatSubtitleConfig::getDx() const
{
    return dx_;
}

void SmartChatSubtitleConfig::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool SmartChatSubtitleConfig::dxIsSet() const
{
    return dxIsSet_;
}

void SmartChatSubtitleConfig::unsetdx()
{
    dxIsSet_ = false;
}

int32_t SmartChatSubtitleConfig::getDy() const
{
    return dy_;
}

void SmartChatSubtitleConfig::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool SmartChatSubtitleConfig::dyIsSet() const
{
    return dyIsSet_;
}

void SmartChatSubtitleConfig::unsetdy()
{
    dyIsSet_ = false;
}

int32_t SmartChatSubtitleConfig::getWidth() const
{
    return width_;
}

void SmartChatSubtitleConfig::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool SmartChatSubtitleConfig::widthIsSet() const
{
    return widthIsSet_;
}

void SmartChatSubtitleConfig::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t SmartChatSubtitleConfig::getHeight() const
{
    return height_;
}

void SmartChatSubtitleConfig::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool SmartChatSubtitleConfig::heightIsSet() const
{
    return heightIsSet_;
}

void SmartChatSubtitleConfig::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


