

#include "huaweicloud/metastudio/v1/model/ChatSubtitleConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ChatSubtitleConfig::ChatSubtitleConfig()
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

ChatSubtitleConfig::~ChatSubtitleConfig() = default;

void ChatSubtitleConfig::validate()
{
}

web::json::value ChatSubtitleConfig::toJson() const
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
bool ChatSubtitleConfig::fromJson(const web::json::value& val)
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


int32_t ChatSubtitleConfig::getDx() const
{
    return dx_;
}

void ChatSubtitleConfig::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool ChatSubtitleConfig::dxIsSet() const
{
    return dxIsSet_;
}

void ChatSubtitleConfig::unsetdx()
{
    dxIsSet_ = false;
}

int32_t ChatSubtitleConfig::getDy() const
{
    return dy_;
}

void ChatSubtitleConfig::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool ChatSubtitleConfig::dyIsSet() const
{
    return dyIsSet_;
}

void ChatSubtitleConfig::unsetdy()
{
    dyIsSet_ = false;
}

int32_t ChatSubtitleConfig::getWidth() const
{
    return width_;
}

void ChatSubtitleConfig::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ChatSubtitleConfig::widthIsSet() const
{
    return widthIsSet_;
}

void ChatSubtitleConfig::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ChatSubtitleConfig::getHeight() const
{
    return height_;
}

void ChatSubtitleConfig::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ChatSubtitleConfig::heightIsSet() const
{
    return heightIsSet_;
}

void ChatSubtitleConfig::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


