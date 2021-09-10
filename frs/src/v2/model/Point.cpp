

#include "huaweicloud/frs/v2/model/Point.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




Point::Point()
{
    x_ = 0.0;
    xIsSet_ = false;
    y_ = 0.0;
    yIsSet_ = false;
}

Point::~Point() = default;

void Point::validate()
{
}

web::json::value Point::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xIsSet_) {
        val[utility::conversions::to_string_t("x")] = ModelBase::toJson(x_);
    }
    if(yIsSet_) {
        val[utility::conversions::to_string_t("y")] = ModelBase::toJson(y_);
    }

    return val;
}

bool Point::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("x"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setX(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("y"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("y"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setY(refVal);
        }
    }
    return ok;
}


double Point::getX() const
{
    return x_;
}

void Point::setX(double value)
{
    x_ = value;
    xIsSet_ = true;
}

bool Point::XIsSet() const
{
    return xIsSet_;
}

void Point::unsetx()
{
    xIsSet_ = false;
}

double Point::getY() const
{
    return y_;
}

void Point::setY(double value)
{
    y_ = value;
    yIsSet_ = true;
}

bool Point::YIsSet() const
{
    return yIsSet_;
}

void Point::unsety()
{
    yIsSet_ = false;
}

}
}
}
}
}


