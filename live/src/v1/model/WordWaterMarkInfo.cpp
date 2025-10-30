

#include "huaweicloud/live/v1/model/WordWaterMarkInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




WordWaterMarkInfo::WordWaterMarkInfo()
{
    format_ = "";
    formatIsSet_ = false;
    fontColor_ = "";
    fontColorIsSet_ = false;
    fontSize_ = 0;
    fontSizeIsSet_ = false;
    font_ = "";
    fontIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    shadowColor_ = "";
    shadowColorIsSet_ = false;
    locationIsSet_ = false;
}

WordWaterMarkInfo::~WordWaterMarkInfo() = default;

void WordWaterMarkInfo::validate()
{
}

web::json::value WordWaterMarkInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(fontColorIsSet_) {
        val[utility::conversions::to_string_t("font_color")] = ModelBase::toJson(fontColor_);
    }
    if(fontSizeIsSet_) {
        val[utility::conversions::to_string_t("font_size")] = ModelBase::toJson(fontSize_);
    }
    if(fontIsSet_) {
        val[utility::conversions::to_string_t("font")] = ModelBase::toJson(font_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(shadowColorIsSet_) {
        val[utility::conversions::to_string_t("shadow_color")] = ModelBase::toJson(shadowColor_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool WordWaterMarkInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("font_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFontSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("font"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("font"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFont(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shadow_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shadow_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShadowColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            WatermarkLocation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string WordWaterMarkInfo::getFormat() const
{
    return format_;
}

void WordWaterMarkInfo::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool WordWaterMarkInfo::formatIsSet() const
{
    return formatIsSet_;
}

void WordWaterMarkInfo::unsetformat()
{
    formatIsSet_ = false;
}

std::string WordWaterMarkInfo::getFontColor() const
{
    return fontColor_;
}

void WordWaterMarkInfo::setFontColor(const std::string& value)
{
    fontColor_ = value;
    fontColorIsSet_ = true;
}

bool WordWaterMarkInfo::fontColorIsSet() const
{
    return fontColorIsSet_;
}

void WordWaterMarkInfo::unsetfontColor()
{
    fontColorIsSet_ = false;
}

int32_t WordWaterMarkInfo::getFontSize() const
{
    return fontSize_;
}

void WordWaterMarkInfo::setFontSize(int32_t value)
{
    fontSize_ = value;
    fontSizeIsSet_ = true;
}

bool WordWaterMarkInfo::fontSizeIsSet() const
{
    return fontSizeIsSet_;
}

void WordWaterMarkInfo::unsetfontSize()
{
    fontSizeIsSet_ = false;
}

std::string WordWaterMarkInfo::getFont() const
{
    return font_;
}

void WordWaterMarkInfo::setFont(const std::string& value)
{
    font_ = value;
    fontIsSet_ = true;
}

bool WordWaterMarkInfo::fontIsSet() const
{
    return fontIsSet_;
}

void WordWaterMarkInfo::unsetfont()
{
    fontIsSet_ = false;
}

std::string WordWaterMarkInfo::getTimeZone() const
{
    return timeZone_;
}

void WordWaterMarkInfo::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool WordWaterMarkInfo::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void WordWaterMarkInfo::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string WordWaterMarkInfo::getShadowColor() const
{
    return shadowColor_;
}

void WordWaterMarkInfo::setShadowColor(const std::string& value)
{
    shadowColor_ = value;
    shadowColorIsSet_ = true;
}

bool WordWaterMarkInfo::shadowColorIsSet() const
{
    return shadowColorIsSet_;
}

void WordWaterMarkInfo::unsetshadowColor()
{
    shadowColorIsSet_ = false;
}

WatermarkLocation WordWaterMarkInfo::getLocation() const
{
    return location_;
}

void WordWaterMarkInfo::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WordWaterMarkInfo::locationIsSet() const
{
    return locationIsSet_;
}

void WordWaterMarkInfo::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


