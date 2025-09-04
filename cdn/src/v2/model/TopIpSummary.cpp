

#include "huaweicloud/cdn/v2/model/TopIpSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TopIpSummary::TopIpSummary()
{
    ip_ = "";
    ipIsSet_ = false;
    value_ = 0L;
    valueIsSet_ = false;
    ratio_ = 0.0;
    ratioIsSet_ = false;
}

TopIpSummary::~TopIpSummary() = default;

void TopIpSummary::validate()
{
}

web::json::value TopIpSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(ratioIsSet_) {
        val[utility::conversions::to_string_t("ratio")] = ModelBase::toJson(ratio_);
    }

    return val;
}
bool TopIpSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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


std::string TopIpSummary::getIp() const
{
    return ip_;
}

void TopIpSummary::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool TopIpSummary::ipIsSet() const
{
    return ipIsSet_;
}

void TopIpSummary::unsetip()
{
    ipIsSet_ = false;
}

int64_t TopIpSummary::getValue() const
{
    return value_;
}

void TopIpSummary::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopIpSummary::valueIsSet() const
{
    return valueIsSet_;
}

void TopIpSummary::unsetvalue()
{
    valueIsSet_ = false;
}

double TopIpSummary::getRatio() const
{
    return ratio_;
}

void TopIpSummary::setRatio(double value)
{
    ratio_ = value;
    ratioIsSet_ = true;
}

bool TopIpSummary::ratioIsSet() const
{
    return ratioIsSet_;
}

void TopIpSummary::unsetratio()
{
    ratioIsSet_ = false;
}

}
}
}
}
}


