

#include "huaweicloud/cfw/v1/model/TrafficTrendVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




TrafficTrendVO::TrafficTrendVO()
{
    aggTime_ = 0L;
    aggTimeIsSet_ = false;
    bps_ = 0.0;
    bpsIsSet_ = false;
    inBps_ = 0.0;
    inBpsIsSet_ = false;
    outBps_ = 0.0;
    outBpsIsSet_ = false;
}

TrafficTrendVO::~TrafficTrendVO() = default;

void TrafficTrendVO::validate()
{
}

web::json::value TrafficTrendVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aggTimeIsSet_) {
        val[utility::conversions::to_string_t("agg_time")] = ModelBase::toJson(aggTime_);
    }
    if(bpsIsSet_) {
        val[utility::conversions::to_string_t("bps")] = ModelBase::toJson(bps_);
    }
    if(inBpsIsSet_) {
        val[utility::conversions::to_string_t("in_bps")] = ModelBase::toJson(inBps_);
    }
    if(outBpsIsSet_) {
        val[utility::conversions::to_string_t("out_bps")] = ModelBase::toJson(outBps_);
    }

    return val;
}
bool TrafficTrendVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bps"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBps(refVal);
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


int64_t TrafficTrendVO::getAggTime() const
{
    return aggTime_;
}

void TrafficTrendVO::setAggTime(int64_t value)
{
    aggTime_ = value;
    aggTimeIsSet_ = true;
}

bool TrafficTrendVO::aggTimeIsSet() const
{
    return aggTimeIsSet_;
}

void TrafficTrendVO::unsetaggTime()
{
    aggTimeIsSet_ = false;
}

double TrafficTrendVO::getBps() const
{
    return bps_;
}

void TrafficTrendVO::setBps(double value)
{
    bps_ = value;
    bpsIsSet_ = true;
}

bool TrafficTrendVO::bpsIsSet() const
{
    return bpsIsSet_;
}

void TrafficTrendVO::unsetbps()
{
    bpsIsSet_ = false;
}

double TrafficTrendVO::getInBps() const
{
    return inBps_;
}

void TrafficTrendVO::setInBps(double value)
{
    inBps_ = value;
    inBpsIsSet_ = true;
}

bool TrafficTrendVO::inBpsIsSet() const
{
    return inBpsIsSet_;
}

void TrafficTrendVO::unsetinBps()
{
    inBpsIsSet_ = false;
}

double TrafficTrendVO::getOutBps() const
{
    return outBps_;
}

void TrafficTrendVO::setOutBps(double value)
{
    outBps_ = value;
    outBpsIsSet_ = true;
}

bool TrafficTrendVO::outBpsIsSet() const
{
    return outBpsIsSet_;
}

void TrafficTrendVO::unsetoutBps()
{
    outBpsIsSet_ = false;
}

}
}
}
}
}


