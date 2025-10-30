

#include "huaweicloud/live/v1/model/WatermarkLocation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




WatermarkLocation::WatermarkLocation()
{
    location_ = "";
    locationIsSet_ = false;
    xOffset_ = 0.0;
    xOffsetIsSet_ = false;
    yOffset_ = 0.0;
    yOffsetIsSet_ = false;
}

WatermarkLocation::~WatermarkLocation() = default;

void WatermarkLocation::validate()
{
}

web::json::value WatermarkLocation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(xOffsetIsSet_) {
        val[utility::conversions::to_string_t("x_offset")] = ModelBase::toJson(xOffset_);
    }
    if(yOffsetIsSet_) {
        val[utility::conversions::to_string_t("y_offset")] = ModelBase::toJson(yOffset_);
    }

    return val;
}
bool WatermarkLocation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x_offset"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("y_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("y_offset"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYOffset(refVal);
        }
    }
    return ok;
}


std::string WatermarkLocation::getLocation() const
{
    return location_;
}

void WatermarkLocation::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WatermarkLocation::locationIsSet() const
{
    return locationIsSet_;
}

void WatermarkLocation::unsetlocation()
{
    locationIsSet_ = false;
}

double WatermarkLocation::getXOffset() const
{
    return xOffset_;
}

void WatermarkLocation::setXOffset(double value)
{
    xOffset_ = value;
    xOffsetIsSet_ = true;
}

bool WatermarkLocation::xOffsetIsSet() const
{
    return xOffsetIsSet_;
}

void WatermarkLocation::unsetxOffset()
{
    xOffsetIsSet_ = false;
}

double WatermarkLocation::getYOffset() const
{
    return yOffset_;
}

void WatermarkLocation::setYOffset(double value)
{
    yOffset_ = value;
    yOffsetIsSet_ = true;
}

bool WatermarkLocation::yOffsetIsSet() const
{
    return yOffsetIsSet_;
}

void WatermarkLocation::unsetyOffset()
{
    yOffsetIsSet_ = false;
}

}
}
}
}
}


