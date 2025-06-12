

#include "huaweicloud/metastudio/v1/model/TextLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TextLayerConfig::TextLayerConfig()
{
    textContext_ = "";
    textContextIsSet_ = false;
    fontName_ = "";
    fontNameIsSet_ = false;
    fontSize_ = 0;
    fontSizeIsSet_ = false;
    fontColor_ = "";
    fontColorIsSet_ = false;
}

TextLayerConfig::~TextLayerConfig() = default;

void TextLayerConfig::validate()
{
}

web::json::value TextLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool TextLayerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string TextLayerConfig::getTextContext() const
{
    return textContext_;
}

void TextLayerConfig::setTextContext(const std::string& value)
{
    textContext_ = value;
    textContextIsSet_ = true;
}

bool TextLayerConfig::textContextIsSet() const
{
    return textContextIsSet_;
}

void TextLayerConfig::unsettextContext()
{
    textContextIsSet_ = false;
}

std::string TextLayerConfig::getFontName() const
{
    return fontName_;
}

void TextLayerConfig::setFontName(const std::string& value)
{
    fontName_ = value;
    fontNameIsSet_ = true;
}

bool TextLayerConfig::fontNameIsSet() const
{
    return fontNameIsSet_;
}

void TextLayerConfig::unsetfontName()
{
    fontNameIsSet_ = false;
}

int32_t TextLayerConfig::getFontSize() const
{
    return fontSize_;
}

void TextLayerConfig::setFontSize(int32_t value)
{
    fontSize_ = value;
    fontSizeIsSet_ = true;
}

bool TextLayerConfig::fontSizeIsSet() const
{
    return fontSizeIsSet_;
}

void TextLayerConfig::unsetfontSize()
{
    fontSizeIsSet_ = false;
}

std::string TextLayerConfig::getFontColor() const
{
    return fontColor_;
}

void TextLayerConfig::setFontColor(const std::string& value)
{
    fontColor_ = value;
    fontColorIsSet_ = true;
}

bool TextLayerConfig::fontColorIsSet() const
{
    return fontColorIsSet_;
}

void TextLayerConfig::unsetfontColor()
{
    fontColorIsSet_ = false;
}

}
}
}
}
}


