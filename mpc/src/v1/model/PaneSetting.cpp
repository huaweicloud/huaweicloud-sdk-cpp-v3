

#include "huaweicloud/mpc/v1/model/PaneSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




PaneSetting::PaneSetting()
{
    paneId_ = "";
    paneIdIsSet_ = false;
    x_ = "";
    xIsSet_ = false;
    y_ = "";
    yIsSet_ = false;
    width_ = "";
    widthIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
}

PaneSetting::~PaneSetting() = default;

void PaneSetting::validate()
{
}

web::json::value PaneSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paneIdIsSet_) {
        val[utility::conversions::to_string_t("pane_id")] = ModelBase::toJson(paneId_);
    }
    if(xIsSet_) {
        val[utility::conversions::to_string_t("x")] = ModelBase::toJson(x_);
    }
    if(yIsSet_) {
        val[utility::conversions::to_string_t("y")] = ModelBase::toJson(y_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }

    return val;
}
bool PaneSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pane_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pane_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setX(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("y"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("y"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setY(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    return ok;
}


std::string PaneSetting::getPaneId() const
{
    return paneId_;
}

void PaneSetting::setPaneId(const std::string& value)
{
    paneId_ = value;
    paneIdIsSet_ = true;
}

bool PaneSetting::paneIdIsSet() const
{
    return paneIdIsSet_;
}

void PaneSetting::unsetpaneId()
{
    paneIdIsSet_ = false;
}

std::string PaneSetting::getX() const
{
    return x_;
}

void PaneSetting::setX(const std::string& value)
{
    x_ = value;
    xIsSet_ = true;
}

bool PaneSetting::XIsSet() const
{
    return xIsSet_;
}

void PaneSetting::unsetx()
{
    xIsSet_ = false;
}

std::string PaneSetting::getY() const
{
    return y_;
}

void PaneSetting::setY(const std::string& value)
{
    y_ = value;
    yIsSet_ = true;
}

bool PaneSetting::YIsSet() const
{
    return yIsSet_;
}

void PaneSetting::unsety()
{
    yIsSet_ = false;
}

std::string PaneSetting::getWidth() const
{
    return width_;
}

void PaneSetting::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool PaneSetting::widthIsSet() const
{
    return widthIsSet_;
}

void PaneSetting::unsetwidth()
{
    widthIsSet_ = false;
}

std::string PaneSetting::getHeight() const
{
    return height_;
}

void PaneSetting::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool PaneSetting::heightIsSet() const
{
    return heightIsSet_;
}

void PaneSetting::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


