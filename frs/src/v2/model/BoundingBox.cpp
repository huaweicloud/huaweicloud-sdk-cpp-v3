

#include "huaweicloud/frs/v2/model/BoundingBox.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




BoundingBox::BoundingBox()
{
    width_ = 0;
    widthIsSet_ = false;
    topLeftY_ = 0;
    topLeftYIsSet_ = false;
    topLeftX_ = 0;
    topLeftXIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
}

BoundingBox::~BoundingBox() = default;

void BoundingBox::validate()
{
}

web::json::value BoundingBox::toJson() const
{
    web::json::value val = web::json::value::object();

    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(topLeftYIsSet_) {
        val[utility::conversions::to_string_t("top_left_y")] = ModelBase::toJson(topLeftY_);
    }
    if(topLeftXIsSet_) {
        val[utility::conversions::to_string_t("top_left_x")] = ModelBase::toJson(topLeftX_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }

    return val;
}

bool BoundingBox::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("top_left_y"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_left_y"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopLeftY(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_left_x"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_left_x"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopLeftX(refVal);
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

int32_t BoundingBox::getWidth() const
{
    return width_;
}

void BoundingBox::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool BoundingBox::widthIsSet() const
{
    return widthIsSet_;
}

void BoundingBox::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t BoundingBox::getTopLeftY() const
{
    return topLeftY_;
}

void BoundingBox::setTopLeftY(int32_t value)
{
    topLeftY_ = value;
    topLeftYIsSet_ = true;
}

bool BoundingBox::topLeftYIsSet() const
{
    return topLeftYIsSet_;
}

void BoundingBox::unsettopLeftY()
{
    topLeftYIsSet_ = false;
}

int32_t BoundingBox::getTopLeftX() const
{
    return topLeftX_;
}

void BoundingBox::setTopLeftX(int32_t value)
{
    topLeftX_ = value;
    topLeftXIsSet_ = true;
}

bool BoundingBox::topLeftXIsSet() const
{
    return topLeftXIsSet_;
}

void BoundingBox::unsettopLeftX()
{
    topLeftXIsSet_ = false;
}

int32_t BoundingBox::getHeight() const
{
    return height_;
}

void BoundingBox::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool BoundingBox::heightIsSet() const
{
    return heightIsSet_;
}

void BoundingBox::unsetheight()
{
    heightIsSet_ = false;
}

}
}
}
}
}


