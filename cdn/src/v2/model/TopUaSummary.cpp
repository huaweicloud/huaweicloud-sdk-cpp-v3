

#include "huaweicloud/cdn/v2/model/TopUaSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopUaSummary::TopUaSummary()
{
    ua_ = "";
    uaIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
    ratio_ = 0.0;
    ratioIsSet_ = false;
}

TopUaSummary::~TopUaSummary() = default;

void TopUaSummary::validate()
{
}

web::json::value TopUaSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uaIsSet_) {
        val[utility::conversions::to_string_t("ua")] = ModelBase::toJson(ua_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(ratioIsSet_) {
        val[utility::conversions::to_string_t("ratio")] = ModelBase::toJson(ratio_);
    }

    return val;
}
bool TopUaSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ua"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ua"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ratio"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRatio(refVal);
        }
    }
    return ok;
}


std::string TopUaSummary::getUa() const
{
    return ua_;
}

void TopUaSummary::setUa(const std::string& value)
{
    ua_ = value;
    uaIsSet_ = true;
}

bool TopUaSummary::uaIsSet() const
{
    return uaIsSet_;
}

void TopUaSummary::unsetua()
{
    uaIsSet_ = false;
}

int64_t TopUaSummary::getValue() const
{
    return value_;
}

void TopUaSummary::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopUaSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TopUaSummary::unsetvalue()
{
    valueIsSet_ = false;
}

double TopUaSummary::getRatio() const
{
    return ratio_;
}

void TopUaSummary::setRatio(double value)
{
    ratio_ = value;
    ratioIsSet_ = true;
}

bool TopUaSummary::ratioIsSet() const
{
    return ratioIsSet_;
}

void TopUaSummary::unsetratio()
{
    ratioIsSet_ = false;
}

}
}
}
}
}


