

#include "huaweicloud/mpc/v1/model/TextWatermark.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TextWatermark::TextWatermark()
{
    dx_ = "";
    dxIsSet_ = false;
    dy_ = "";
    dyIsSet_ = false;
    referpos_ = "";
    referposIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
    fontName_ = "";
    fontNameIsSet_ = false;
    fontSize_ = 0;
    fontSizeIsSet_ = false;
    fontColor_ = "";
    fontColorIsSet_ = false;
    base_ = "";
    baseIsSet_ = false;
}

TextWatermark::~TextWatermark() = default;

void TextWatermark::validate()
{
}

web::json::value TextWatermark::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(referposIsSet_) {
        val[utility::conversions::to_string_t("referpos")] = ModelBase::toJson(referpos_);
    }
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineDurationIsSet_) {
        val[utility::conversions::to_string_t("timeline_duration")] = ModelBase::toJson(timelineDuration_);
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
    if(baseIsSet_) {
        val[utility::conversions::to_string_t("base")] = ModelBase::toJson(base_);
    }

    return val;
}
bool TextWatermark::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dx"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dx"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDx(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referpos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referpos"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferpos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("base"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBase(refVal);
        }
    }
    return ok;
}


std::string TextWatermark::getDx() const
{
    return dx_;
}

void TextWatermark::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool TextWatermark::dxIsSet() const
{
    return dxIsSet_;
}

void TextWatermark::unsetdx()
{
    dxIsSet_ = false;
}

std::string TextWatermark::getDy() const
{
    return dy_;
}

void TextWatermark::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool TextWatermark::dyIsSet() const
{
    return dyIsSet_;
}

void TextWatermark::unsetdy()
{
    dyIsSet_ = false;
}

std::string TextWatermark::getReferpos() const
{
    return referpos_;
}

void TextWatermark::setReferpos(const std::string& value)
{
    referpos_ = value;
    referposIsSet_ = true;
}

bool TextWatermark::referposIsSet() const
{
    return referposIsSet_;
}

void TextWatermark::unsetreferpos()
{
    referposIsSet_ = false;
}

std::string TextWatermark::getTimelineStart() const
{
    return timelineStart_;
}

void TextWatermark::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool TextWatermark::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void TextWatermark::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string TextWatermark::getTimelineDuration() const
{
    return timelineDuration_;
}

void TextWatermark::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool TextWatermark::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void TextWatermark::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

std::string TextWatermark::getFontName() const
{
    return fontName_;
}

void TextWatermark::setFontName(const std::string& value)
{
    fontName_ = value;
    fontNameIsSet_ = true;
}

bool TextWatermark::fontNameIsSet() const
{
    return fontNameIsSet_;
}

void TextWatermark::unsetfontName()
{
    fontNameIsSet_ = false;
}

int32_t TextWatermark::getFontSize() const
{
    return fontSize_;
}

void TextWatermark::setFontSize(int32_t value)
{
    fontSize_ = value;
    fontSizeIsSet_ = true;
}

bool TextWatermark::fontSizeIsSet() const
{
    return fontSizeIsSet_;
}

void TextWatermark::unsetfontSize()
{
    fontSizeIsSet_ = false;
}

std::string TextWatermark::getFontColor() const
{
    return fontColor_;
}

void TextWatermark::setFontColor(const std::string& value)
{
    fontColor_ = value;
    fontColorIsSet_ = true;
}

bool TextWatermark::fontColorIsSet() const
{
    return fontColorIsSet_;
}

void TextWatermark::unsetfontColor()
{
    fontColorIsSet_ = false;
}

std::string TextWatermark::getBase() const
{
    return base_;
}

void TextWatermark::setBase(const std::string& value)
{
    base_ = value;
    baseIsSet_ = true;
}

bool TextWatermark::baseIsSet() const
{
    return baseIsSet_;
}

void TextWatermark::unsetbase()
{
    baseIsSet_ = false;
}

}
}
}
}
}


