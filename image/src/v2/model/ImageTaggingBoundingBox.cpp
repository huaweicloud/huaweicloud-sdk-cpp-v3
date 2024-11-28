

#include "huaweicloud/image/v2/model/ImageTaggingBoundingBox.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageTaggingBoundingBox::ImageTaggingBoundingBox()
{
    width_ = 0.0;
    widthIsSet_ = false;
    height_ = 0.0;
    heightIsSet_ = false;
    topLeftX_ = 0.0;
    topLeftXIsSet_ = false;
    topLeftY_ = 0.0;
    topLeftYIsSet_ = false;
}

ImageTaggingBoundingBox::~ImageTaggingBoundingBox() = default;

void ImageTaggingBoundingBox::validate()
{
}

web::json::value ImageTaggingBoundingBox::toJson() const
{
    web::json::value val = web::json::value::object();

    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(topLeftXIsSet_) {
        val[utility::conversions::to_string_t("top_left_x")] = ModelBase::toJson(topLeftX_);
    }
    if(topLeftYIsSet_) {
        val[utility::conversions::to_string_t("top_left_y")] = ModelBase::toJson(topLeftY_);
    }

    return val;
}
bool ImageTaggingBoundingBox::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_left_x"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_left_x"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopLeftX(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_left_y"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_left_y"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopLeftY(refVal);
        }
    }
    return ok;
}


double ImageTaggingBoundingBox::getWidth() const
{
    return width_;
}

void ImageTaggingBoundingBox::setWidth(double value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ImageTaggingBoundingBox::widthIsSet() const
{
    return widthIsSet_;
}

void ImageTaggingBoundingBox::unsetwidth()
{
    widthIsSet_ = false;
}

double ImageTaggingBoundingBox::getHeight() const
{
    return height_;
}

void ImageTaggingBoundingBox::setHeight(double value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ImageTaggingBoundingBox::heightIsSet() const
{
    return heightIsSet_;
}

void ImageTaggingBoundingBox::unsetheight()
{
    heightIsSet_ = false;
}

double ImageTaggingBoundingBox::getTopLeftX() const
{
    return topLeftX_;
}

void ImageTaggingBoundingBox::setTopLeftX(double value)
{
    topLeftX_ = value;
    topLeftXIsSet_ = true;
}

bool ImageTaggingBoundingBox::topLeftXIsSet() const
{
    return topLeftXIsSet_;
}

void ImageTaggingBoundingBox::unsettopLeftX()
{
    topLeftXIsSet_ = false;
}

double ImageTaggingBoundingBox::getTopLeftY() const
{
    return topLeftY_;
}

void ImageTaggingBoundingBox::setTopLeftY(double value)
{
    topLeftY_ = value;
    topLeftYIsSet_ = true;
}

bool ImageTaggingBoundingBox::topLeftYIsSet() const
{
    return topLeftYIsSet_;
}

void ImageTaggingBoundingBox::unsettopLeftY()
{
    topLeftYIsSet_ = false;
}

}
}
}
}
}


