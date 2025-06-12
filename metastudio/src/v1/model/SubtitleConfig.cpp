

#include "huaweicloud/metastudio/v1/model/SubtitleConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SubtitleConfig::SubtitleConfig()
{
    dx_ = 0;
    dxIsSet_ = false;
    dy_ = 0;
    dyIsSet_ = false;
    h_ = 0;
    hIsSet_ = false;
    w_ = 0;
    wIsSet_ = false;
    fontName_ = "";
    fontNameIsSet_ = false;
    fontSize_ = 0;
    fontSizeIsSet_ = false;
    fontColor_ = "";
    fontColorIsSet_ = false;
    strokeColor_ = "";
    strokeColorIsSet_ = false;
    strokeThickness_ = 0.0f;
    strokeThicknessIsSet_ = false;
    opacity_ = 0.0f;
    opacityIsSet_ = false;
}

SubtitleConfig::~SubtitleConfig() = default;

void SubtitleConfig::validate()
{
}

web::json::value SubtitleConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(hIsSet_) {
        val[utility::conversions::to_string_t("h")] = ModelBase::toJson(h_);
    }
    if(wIsSet_) {
        val[utility::conversions::to_string_t("w")] = ModelBase::toJson(w_);
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
    if(strokeColorIsSet_) {
        val[utility::conversions::to_string_t("stroke_color")] = ModelBase::toJson(strokeColor_);
    }
    if(strokeThicknessIsSet_) {
        val[utility::conversions::to_string_t("stroke_thickness")] = ModelBase::toJson(strokeThickness_);
    }
    if(opacityIsSet_) {
        val[utility::conversions::to_string_t("opacity")] = ModelBase::toJson(opacity_);
    }

    return val;
}
bool SubtitleConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("h"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("h"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setH(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("w"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("w"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setW(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stroke_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stroke_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrokeColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stroke_thickness"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stroke_thickness"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrokeThickness(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opacity"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpacity(refVal);
        }
    }
    return ok;
}


int32_t SubtitleConfig::getDx() const
{
    return dx_;
}

void SubtitleConfig::setDx(int32_t value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool SubtitleConfig::dxIsSet() const
{
    return dxIsSet_;
}

void SubtitleConfig::unsetdx()
{
    dxIsSet_ = false;
}

int32_t SubtitleConfig::getDy() const
{
    return dy_;
}

void SubtitleConfig::setDy(int32_t value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool SubtitleConfig::dyIsSet() const
{
    return dyIsSet_;
}

void SubtitleConfig::unsetdy()
{
    dyIsSet_ = false;
}

int32_t SubtitleConfig::getH() const
{
    return h_;
}

void SubtitleConfig::setH(int32_t value)
{
    h_ = value;
    hIsSet_ = true;
}

bool SubtitleConfig::HIsSet() const
{
    return hIsSet_;
}

void SubtitleConfig::unseth()
{
    hIsSet_ = false;
}

int32_t SubtitleConfig::getW() const
{
    return w_;
}

void SubtitleConfig::setW(int32_t value)
{
    w_ = value;
    wIsSet_ = true;
}

bool SubtitleConfig::WIsSet() const
{
    return wIsSet_;
}

void SubtitleConfig::unsetw()
{
    wIsSet_ = false;
}

std::string SubtitleConfig::getFontName() const
{
    return fontName_;
}

void SubtitleConfig::setFontName(const std::string& value)
{
    fontName_ = value;
    fontNameIsSet_ = true;
}

bool SubtitleConfig::fontNameIsSet() const
{
    return fontNameIsSet_;
}

void SubtitleConfig::unsetfontName()
{
    fontNameIsSet_ = false;
}

int32_t SubtitleConfig::getFontSize() const
{
    return fontSize_;
}

void SubtitleConfig::setFontSize(int32_t value)
{
    fontSize_ = value;
    fontSizeIsSet_ = true;
}

bool SubtitleConfig::fontSizeIsSet() const
{
    return fontSizeIsSet_;
}

void SubtitleConfig::unsetfontSize()
{
    fontSizeIsSet_ = false;
}

std::string SubtitleConfig::getFontColor() const
{
    return fontColor_;
}

void SubtitleConfig::setFontColor(const std::string& value)
{
    fontColor_ = value;
    fontColorIsSet_ = true;
}

bool SubtitleConfig::fontColorIsSet() const
{
    return fontColorIsSet_;
}

void SubtitleConfig::unsetfontColor()
{
    fontColorIsSet_ = false;
}

std::string SubtitleConfig::getStrokeColor() const
{
    return strokeColor_;
}

void SubtitleConfig::setStrokeColor(const std::string& value)
{
    strokeColor_ = value;
    strokeColorIsSet_ = true;
}

bool SubtitleConfig::strokeColorIsSet() const
{
    return strokeColorIsSet_;
}

void SubtitleConfig::unsetstrokeColor()
{
    strokeColorIsSet_ = false;
}

float SubtitleConfig::getStrokeThickness() const
{
    return strokeThickness_;
}

void SubtitleConfig::setStrokeThickness(float value)
{
    strokeThickness_ = value;
    strokeThicknessIsSet_ = true;
}

bool SubtitleConfig::strokeThicknessIsSet() const
{
    return strokeThicknessIsSet_;
}

void SubtitleConfig::unsetstrokeThickness()
{
    strokeThicknessIsSet_ = false;
}

float SubtitleConfig::getOpacity() const
{
    return opacity_;
}

void SubtitleConfig::setOpacity(float value)
{
    opacity_ = value;
    opacityIsSet_ = true;
}

bool SubtitleConfig::opacityIsSet() const
{
    return opacityIsSet_;
}

void SubtitleConfig::unsetopacity()
{
    opacityIsSet_ = false;
}

}
}
}
}
}


