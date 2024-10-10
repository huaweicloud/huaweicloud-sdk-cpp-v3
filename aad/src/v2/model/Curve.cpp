

#include "huaweicloud/aad/v2/model/Curve.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




Curve::Curve()
{
    in_ = 0.0f;
    inIsSet_ = false;
    out_ = 0.0f;
    outIsSet_ = false;
    time_ = 0;
    timeIsSet_ = false;
}

Curve::~Curve() = default;

void Curve::validate()
{
}

web::json::value Curve::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inIsSet_) {
        val[utility::conversions::to_string_t("in")] = ModelBase::toJson(in_);
    }
    if(outIsSet_) {
        val[utility::conversions::to_string_t("out")] = ModelBase::toJson(out_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool Curve::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


float Curve::getIn() const
{
    return in_;
}

void Curve::setIn(float value)
{
    in_ = value;
    inIsSet_ = true;
}

bool Curve::inIsSet() const
{
    return inIsSet_;
}

void Curve::unsetin()
{
    inIsSet_ = false;
}

float Curve::getOut() const
{
    return out_;
}

void Curve::setOut(float value)
{
    out_ = value;
    outIsSet_ = true;
}

bool Curve::outIsSet() const
{
    return outIsSet_;
}

void Curve::unsetout()
{
    outIsSet_ = false;
}

int32_t Curve::getTime() const
{
    return time_;
}

void Curve::setTime(int32_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool Curve::timeIsSet() const
{
    return timeIsSet_;
}

void Curve::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


