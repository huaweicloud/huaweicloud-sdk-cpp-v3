

#include "huaweicloud/cfw/v1/model/FlowTrendVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FlowTrendVO::FlowTrendVO()
{
    aggTime_ = 0L;
    aggTimeIsSet_ = false;
    inBps_ = 0.0;
    inBpsIsSet_ = false;
    outBps_ = 0.0;
    outBpsIsSet_ = false;
}

FlowTrendVO::~FlowTrendVO() = default;

void FlowTrendVO::validate()
{
}

web::json::value FlowTrendVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aggTimeIsSet_) {
        val[utility::conversions::to_string_t("agg_time")] = ModelBase::toJson(aggTime_);
    }
    if(inBpsIsSet_) {
        val[utility::conversions::to_string_t("in_bps")] = ModelBase::toJson(inBps_);
    }
    if(outBpsIsSet_) {
        val[utility::conversions::to_string_t("out_bps")] = ModelBase::toJson(outBps_);
    }

    return val;
}
bool FlowTrendVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agg_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agg_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAggTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_bps"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInBps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out_bps"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutBps(refVal);
        }
    }
    return ok;
}


int64_t FlowTrendVO::getAggTime() const
{
    return aggTime_;
}

void FlowTrendVO::setAggTime(int64_t value)
{
    aggTime_ = value;
    aggTimeIsSet_ = true;
}

bool FlowTrendVO::aggTimeIsSet() const
{
    return aggTimeIsSet_;
}

void FlowTrendVO::unsetaggTime()
{
    aggTimeIsSet_ = false;
}

double FlowTrendVO::getInBps() const
{
    return inBps_;
}

void FlowTrendVO::setInBps(double value)
{
    inBps_ = value;
    inBpsIsSet_ = true;
}

bool FlowTrendVO::inBpsIsSet() const
{
    return inBpsIsSet_;
}

void FlowTrendVO::unsetinBps()
{
    inBpsIsSet_ = false;
}

double FlowTrendVO::getOutBps() const
{
    return outBps_;
}

void FlowTrendVO::setOutBps(double value)
{
    outBps_ = value;
    outBpsIsSet_ = true;
}

bool FlowTrendVO::outBpsIsSet() const
{
    return outBpsIsSet_;
}

void FlowTrendVO::unsetoutBps()
{
    outBpsIsSet_ = false;
}

}
}
}
}
}


