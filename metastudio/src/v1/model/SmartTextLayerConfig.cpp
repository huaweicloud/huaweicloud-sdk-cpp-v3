

#include "huaweicloud/metastudio/v1/model/SmartTextLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartTextLayerConfig::SmartTextLayerConfig()
{
    textType_ = "";
    textTypeIsSet_ = false;
    textContext_ = "";
    textContextIsSet_ = false;
    fontName_ = "";
    fontNameIsSet_ = false;
    fontSize_ = 0;
    fontSizeIsSet_ = false;
    fontColor_ = "";
    fontColorIsSet_ = false;
    displayDuration_ = 0;
    displayDurationIsSet_ = false;
}

SmartTextLayerConfig::~SmartTextLayerConfig() = default;

void SmartTextLayerConfig::validate()
{
}

web::json::value SmartTextLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textTypeIsSet_) {
        val[utility::conversions::to_string_t("text_type")] = ModelBase::toJson(textType_);
    }
    if(textContextIsSet_) {
        val[utility::conversions::to_string_t("text_context")] = ModelBase::toJson(textContext_);
    }
    if(fontNameIsSet_) {
        val[utility::conversions::to_string_t("font_name")] = ModelBase::toJson(fontName_);
    }
    if(fontSizeIsSet_) {
        val[utility::conversions::to_string_t("font_size")] = ModelBase::toJson(fontSize_);
    }
    if(fontColorIsSet_) {
        val[utility::conversions::to_string_t("font_color")] = ModelBase::toJson(fontColor_);
    }
    if(displayDurationIsSet_) {
        val[utility::conversions::to_string_t("display_duration")] = ModelBase::toJson(displayDuration_);
    }

    return val;
}
bool SmartTextLayerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextContext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayDuration(refVal);
        }
    }
    return ok;
}


std::string SmartTextLayerConfig::getTextType() const
{
    return textType_;
}

void SmartTextLayerConfig::setTextType(const std::string& value)
{
    textType_ = value;
    textTypeIsSet_ = true;
}

bool SmartTextLayerConfig::textTypeIsSet() const
{
    return textTypeIsSet_;
}

void SmartTextLayerConfig::unsettextType()
{
    textTypeIsSet_ = false;
}

std::string SmartTextLayerConfig::getTextContext() const
{
    return textContext_;
}

void SmartTextLayerConfig::setTextContext(const std::string& value)
{
    textContext_ = value;
    textContextIsSet_ = true;
}

bool SmartTextLayerConfig::textContextIsSet() const
{
    return textContextIsSet_;
}

void SmartTextLayerConfig::unsettextContext()
{
    textContextIsSet_ = false;
}

std::string SmartTextLayerConfig::getFontName() const
{
    return fontName_;
}

void SmartTextLayerConfig::setFontName(const std::string& value)
{
    fontName_ = value;
    fontNameIsSet_ = true;
}

bool SmartTextLayerConfig::fontNameIsSet() const
{
    return fontNameIsSet_;
}

void SmartTextLayerConfig::unsetfontName()
{
    fontNameIsSet_ = false;
}

int32_t SmartTextLayerConfig::getFontSize() const
{
    return fontSize_;
}

void SmartTextLayerConfig::setFontSize(int32_t value)
{
    fontSize_ = value;
    fontSizeIsSet_ = true;
}

bool SmartTextLayerConfig::fontSizeIsSet() const
{
    return fontSizeIsSet_;
}

void SmartTextLayerConfig::unsetfontSize()
{
    fontSizeIsSet_ = false;
}

std::string SmartTextLayerConfig::getFontColor() const
{
    return fontColor_;
}

void SmartTextLayerConfig::setFontColor(const std::string& value)
{
    fontColor_ = value;
    fontColorIsSet_ = true;
}

bool SmartTextLayerConfig::fontColorIsSet() const
{
    return fontColorIsSet_;
}

void SmartTextLayerConfig::unsetfontColor()
{
    fontColorIsSet_ = false;
}

int32_t SmartTextLayerConfig::getDisplayDuration() const
{
    return displayDuration_;
}

void SmartTextLayerConfig::setDisplayDuration(int32_t value)
{
    displayDuration_ = value;
    displayDurationIsSet_ = true;
}

bool SmartTextLayerConfig::displayDurationIsSet() const
{
    return displayDurationIsSet_;
}

void SmartTextLayerConfig::unsetdisplayDuration()
{
    displayDurationIsSet_ = false;
}

}
}
}
}
}


