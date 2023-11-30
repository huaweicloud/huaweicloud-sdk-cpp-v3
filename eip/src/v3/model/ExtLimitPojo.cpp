

#include "huaweicloud/eip/v3/model/ExtLimitPojo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ExtLimitPojo::ExtLimitPojo()
{
    minIngressSize_ = 0;
    minIngressSizeIsSet_ = false;
    maxIngressSize_ = 0;
    maxIngressSizeIsSet_ = false;
    ratio95peak_ = 0;
    ratio95peakIsSet_ = false;
}

ExtLimitPojo::~ExtLimitPojo() = default;

void ExtLimitPojo::validate()
{
}

web::json::value ExtLimitPojo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(minIngressSizeIsSet_) {
        val[utility::conversions::to_string_t("min_ingress_size")] = ModelBase::toJson(minIngressSize_);
    }
    if(maxIngressSizeIsSet_) {
        val[utility::conversions::to_string_t("max_ingress_size")] = ModelBase::toJson(maxIngressSize_);
    }
    if(ratio95peakIsSet_) {
        val[utility::conversions::to_string_t("ratio_95peak")] = ModelBase::toJson(ratio95peak_);
    }

    return val;
}
bool ExtLimitPojo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("min_ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinIngressSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxIngressSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ratio_95peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ratio_95peak"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRatio95peak(refVal);
        }
    }
    return ok;
}


int32_t ExtLimitPojo::getMinIngressSize() const
{
    return minIngressSize_;
}

void ExtLimitPojo::setMinIngressSize(int32_t value)
{
    minIngressSize_ = value;
    minIngressSizeIsSet_ = true;
}

bool ExtLimitPojo::minIngressSizeIsSet() const
{
    return minIngressSizeIsSet_;
}

void ExtLimitPojo::unsetminIngressSize()
{
    minIngressSizeIsSet_ = false;
}

int32_t ExtLimitPojo::getMaxIngressSize() const
{
    return maxIngressSize_;
}

void ExtLimitPojo::setMaxIngressSize(int32_t value)
{
    maxIngressSize_ = value;
    maxIngressSizeIsSet_ = true;
}

bool ExtLimitPojo::maxIngressSizeIsSet() const
{
    return maxIngressSizeIsSet_;
}

void ExtLimitPojo::unsetmaxIngressSize()
{
    maxIngressSizeIsSet_ = false;
}

int32_t ExtLimitPojo::getRatio95peak() const
{
    return ratio95peak_;
}

void ExtLimitPojo::setRatio95peak(int32_t value)
{
    ratio95peak_ = value;
    ratio95peakIsSet_ = true;
}

bool ExtLimitPojo::ratio95peakIsSet() const
{
    return ratio95peakIsSet_;
}

void ExtLimitPojo::unsetratio95peak()
{
    ratio95peakIsSet_ = false;
}

}
}
}
}
}


