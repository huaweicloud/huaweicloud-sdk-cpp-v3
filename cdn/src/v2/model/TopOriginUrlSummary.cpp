

#include "huaweicloud/cdn/v2/model/TopOriginUrlSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopOriginUrlSummary::TopOriginUrlSummary()
{
    originUrl_ = "";
    originUrlIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
    ratio_ = 0.0;
    ratioIsSet_ = false;
}

TopOriginUrlSummary::~TopOriginUrlSummary() = default;

void TopOriginUrlSummary::validate()
{
}

web::json::value TopOriginUrlSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(originUrlIsSet_) {
        val[utility::conversions::to_string_t("origin_url")] = ModelBase::toJson(originUrl_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(ratioIsSet_) {
        val[utility::conversions::to_string_t("ratio")] = ModelBase::toJson(ratio_);
    }

    return val;
}
bool TopOriginUrlSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("origin_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginUrl(refVal);
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


std::string TopOriginUrlSummary::getOriginUrl() const
{
    return originUrl_;
}

void TopOriginUrlSummary::setOriginUrl(const std::string& value)
{
    originUrl_ = value;
    originUrlIsSet_ = true;
}

bool TopOriginUrlSummary::originUrlIsSet() const
{
    return originUrlIsSet_;
}

void TopOriginUrlSummary::unsetoriginUrl()
{
    originUrlIsSet_ = false;
}

int64_t TopOriginUrlSummary::getValue() const
{
    return value_;
}

void TopOriginUrlSummary::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopOriginUrlSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TopOriginUrlSummary::unsetvalue()
{
    valueIsSet_ = false;
}

double TopOriginUrlSummary::getRatio() const
{
    return ratio_;
}

void TopOriginUrlSummary::setRatio(double value)
{
    ratio_ = value;
    ratioIsSet_ = true;
}

bool TopOriginUrlSummary::ratioIsSet() const
{
    return ratioIsSet_;
}

void TopOriginUrlSummary::unsetratio()
{
    ratioIsSet_ = false;
}

}
}
}
}
}


