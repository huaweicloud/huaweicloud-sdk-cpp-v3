

#include "huaweicloud/live/v2/model/PeakBandwidthData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




PeakBandwidthData::PeakBandwidthData()
{
    value_ = 0L;
    valueIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
}

PeakBandwidthData::~PeakBandwidthData() = default;

void PeakBandwidthData::validate()
{
}

web::json::value PeakBandwidthData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool PeakBandwidthData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    return ok;
}


int64_t PeakBandwidthData::getValue() const
{
    return value_;
}

void PeakBandwidthData::setValue(int64_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PeakBandwidthData::valueIsSet() const
{
    return valueIsSet_;
}

void PeakBandwidthData::unsetvalue()
{
    valueIsSet_ = false;
}

std::string PeakBandwidthData::getDomain() const
{
    return domain_;
}

void PeakBandwidthData::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool PeakBandwidthData::domainIsSet() const
{
    return domainIsSet_;
}

void PeakBandwidthData::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


