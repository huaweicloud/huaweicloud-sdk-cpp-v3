

#include "huaweicloud/cfw/v1/model/TrendVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




TrendVO::TrendVO()
{
    aggTime_ = 0L;
    aggTimeIsSet_ = false;
    bps_ = 0.0;
    bpsIsSet_ = false;
    deny_ = 0L;
    denyIsSet_ = false;
    inBps_ = 0.0;
    inBpsIsSet_ = false;
    outBps_ = 0.0;
    outBpsIsSet_ = false;
    permit_ = 0L;
    permitIsSet_ = false;
}

TrendVO::~TrendVO() = default;

void TrendVO::validate()
{
}

web::json::value TrendVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aggTimeIsSet_) {
        val[utility::conversions::to_string_t("agg_time")] = ModelBase::toJson(aggTime_);
    }
    if(bpsIsSet_) {
        val[utility::conversions::to_string_t("bps")] = ModelBase::toJson(bps_);
    }
    if(denyIsSet_) {
        val[utility::conversions::to_string_t("deny")] = ModelBase::toJson(deny_);
    }
    if(inBpsIsSet_) {
        val[utility::conversions::to_string_t("in_bps")] = ModelBase::toJson(inBps_);
    }
    if(outBpsIsSet_) {
        val[utility::conversions::to_string_t("out_bps")] = ModelBase::toJson(outBps_);
    }
    if(permitIsSet_) {
        val[utility::conversions::to_string_t("permit")] = ModelBase::toJson(permit_);
    }

    return val;
}
bool TrendVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deny"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeny(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermit(refVal);
        }
    }
    return ok;
}


int64_t TrendVO::getAggTime() const
{
    return aggTime_;
}

void TrendVO::setAggTime(int64_t value)
{
    aggTime_ = value;
    aggTimeIsSet_ = true;
}

bool TrendVO::aggTimeIsSet() const
{
    return aggTimeIsSet_;
}

void TrendVO::unsetaggTime()
{
    aggTimeIsSet_ = false;
}

double TrendVO::getBps() const
{
    return bps_;
}

void TrendVO::setBps(double value)
{
    bps_ = value;
    bpsIsSet_ = true;
}

bool TrendVO::bpsIsSet() const
{
    return bpsIsSet_;
}

void TrendVO::unsetbps()
{
    bpsIsSet_ = false;
}

int64_t TrendVO::getDeny() const
{
    return deny_;
}

void TrendVO::setDeny(int64_t value)
{
    deny_ = value;
    denyIsSet_ = true;
}

bool TrendVO::denyIsSet() const
{
    return denyIsSet_;
}

void TrendVO::unsetdeny()
{
    denyIsSet_ = false;
}

double TrendVO::getInBps() const
{
    return inBps_;
}

void TrendVO::setInBps(double value)
{
    inBps_ = value;
    inBpsIsSet_ = true;
}

bool TrendVO::inBpsIsSet() const
{
    return inBpsIsSet_;
}

void TrendVO::unsetinBps()
{
    inBpsIsSet_ = false;
}

double TrendVO::getOutBps() const
{
    return outBps_;
}

void TrendVO::setOutBps(double value)
{
    outBps_ = value;
    outBpsIsSet_ = true;
}

bool TrendVO::outBpsIsSet() const
{
    return outBpsIsSet_;
}

void TrendVO::unsetoutBps()
{
    outBpsIsSet_ = false;
}

int64_t TrendVO::getPermit() const
{
    return permit_;
}

void TrendVO::setPermit(int64_t value)
{
    permit_ = value;
    permitIsSet_ = true;
}

bool TrendVO::permitIsSet() const
{
    return permitIsSet_;
}

void TrendVO::unsetpermit()
{
    permitIsSet_ = false;
}

}
}
}
}
}


