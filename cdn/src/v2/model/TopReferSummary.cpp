

#include "huaweicloud/cdn/v2/model/TopReferSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopReferSummary::TopReferSummary()
{
    refer_ = "";
    referIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
    ratio_ = 0.0;
    ratioIsSet_ = false;
}

TopReferSummary::~TopReferSummary() = default;

void TopReferSummary::validate()
{
}

web::json::value TopReferSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(referIsSet_) {
        val[utility::conversions::to_string_t("refer")] = ModelBase::toJson(refer_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(ratioIsSet_) {
        val[utility::conversions::to_string_t("ratio")] = ModelBase::toJson(ratio_);
    }

    return val;
}
bool TopReferSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("refer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefer(refVal);
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


std::string TopReferSummary::getRefer() const
{
    return refer_;
}

void TopReferSummary::setRefer(const std::string& value)
{
    refer_ = value;
    referIsSet_ = true;
}

bool TopReferSummary::referIsSet() const
{
    return referIsSet_;
}

void TopReferSummary::unsetrefer()
{
    referIsSet_ = false;
}

int64_t TopReferSummary::getValue() const
{
    return value_;
}

void TopReferSummary::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopReferSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TopReferSummary::unsetvalue()
{
    valueIsSet_ = false;
}

double TopReferSummary::getRatio() const
{
    return ratio_;
}

void TopReferSummary::setRatio(double value)
{
    ratio_ = value;
    ratioIsSet_ = true;
}

bool TopReferSummary::ratioIsSet() const
{
    return ratioIsSet_;
}

void TopReferSummary::unsetratio()
{
    ratioIsSet_ = false;
}

}
}
}
}
}


