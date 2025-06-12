

#include "huaweicloud/metastudio/v1/model/SmartChatVideoConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartChatVideoConfig::SmartChatVideoConfig()
{
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
}

SmartChatVideoConfig::~SmartChatVideoConfig() = default;

void SmartChatVideoConfig::validate()
{
}

web::json::value SmartChatVideoConfig::toJson() const
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
bool SmartChatVideoConfig::fromJson(const web::json::value& val)
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


int32_t SmartChatVideoConfig::getWidth() const
{
    return width_;
}

void SmartChatVideoConfig::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool SmartChatVideoConfig::widthIsSet() const
{
    return widthIsSet_;
}

void SmartChatVideoConfig::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t SmartChatVideoConfig::getHeight() const
{
    return height_;
}

void SmartChatVideoConfig::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool SmartChatVideoConfig::heightIsSet() const
{
    return heightIsSet_;
}

void SmartChatVideoConfig::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


