

#include "huaweicloud/antiddos/v1/model/WeeklyCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




WeeklyCount::WeeklyCount()
{
    ddosInterceptTimes_ = 0;
    ddosInterceptTimesIsSet_ = false;
    ddosBlackholeTimes_ = 0;
    ddosBlackholeTimesIsSet_ = false;
    maxAttackBps_ = 0;
    maxAttackBpsIsSet_ = false;
    maxAttackConns_ = 0;
    maxAttackConnsIsSet_ = false;
    periodStartDate_ = 0L;
    periodStartDateIsSet_ = false;
}

WeeklyCount::~WeeklyCount() = default;

void WeeklyCount::validate()
{
}

web::json::value WeeklyCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ddosInterceptTimesIsSet_) {
        val[utility::conversions::to_string_t("ddos_intercept_times")] = ModelBase::toJson(ddosInterceptTimes_);
    }
    if(ddosBlackholeTimesIsSet_) {
        val[utility::conversions::to_string_t("ddos_blackhole_times")] = ModelBase::toJson(ddosBlackholeTimes_);
    }
    if(maxAttackBpsIsSet_) {
        val[utility::conversions::to_string_t("max_attack_bps")] = ModelBase::toJson(maxAttackBps_);
    }
    if(maxAttackConnsIsSet_) {
        val[utility::conversions::to_string_t("max_attack_conns")] = ModelBase::toJson(maxAttackConns_);
    }
    if(periodStartDateIsSet_) {
        val[utility::conversions::to_string_t("period_start_date")] = ModelBase::toJson(periodStartDate_);
    }

    return val;
}
bool WeeklyCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ddos_intercept_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos_intercept_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosInterceptTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ddos_blackhole_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos_blackhole_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosBlackholeTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_attack_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_attack_bps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAttackBps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_attack_conns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_attack_conns"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAttackConns(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_start_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodStartDate(refVal);
        }
    }
    return ok;
}


int32_t WeeklyCount::getDdosInterceptTimes() const
{
    return ddosInterceptTimes_;
}

void WeeklyCount::setDdosInterceptTimes(int32_t value)
{
    ddosInterceptTimes_ = value;
    ddosInterceptTimesIsSet_ = true;
}

bool WeeklyCount::ddosInterceptTimesIsSet() const
{
    return ddosInterceptTimesIsSet_;
}

void WeeklyCount::unsetddosInterceptTimes()
{
    ddosInterceptTimesIsSet_ = false;
}

int32_t WeeklyCount::getDdosBlackholeTimes() const
{
    return ddosBlackholeTimes_;
}

void WeeklyCount::setDdosBlackholeTimes(int32_t value)
{
    ddosBlackholeTimes_ = value;
    ddosBlackholeTimesIsSet_ = true;
}

bool WeeklyCount::ddosBlackholeTimesIsSet() const
{
    return ddosBlackholeTimesIsSet_;
}

void WeeklyCount::unsetddosBlackholeTimes()
{
    ddosBlackholeTimesIsSet_ = false;
}

int32_t WeeklyCount::getMaxAttackBps() const
{
    return maxAttackBps_;
}

void WeeklyCount::setMaxAttackBps(int32_t value)
{
    maxAttackBps_ = value;
    maxAttackBpsIsSet_ = true;
}

bool WeeklyCount::maxAttackBpsIsSet() const
{
    return maxAttackBpsIsSet_;
}

void WeeklyCount::unsetmaxAttackBps()
{
    maxAttackBpsIsSet_ = false;
}

int32_t WeeklyCount::getMaxAttackConns() const
{
    return maxAttackConns_;
}

void WeeklyCount::setMaxAttackConns(int32_t value)
{
    maxAttackConns_ = value;
    maxAttackConnsIsSet_ = true;
}

bool WeeklyCount::maxAttackConnsIsSet() const
{
    return maxAttackConnsIsSet_;
}

void WeeklyCount::unsetmaxAttackConns()
{
    maxAttackConnsIsSet_ = false;
}

int64_t WeeklyCount::getPeriodStartDate() const
{
    return periodStartDate_;
}

void WeeklyCount::setPeriodStartDate(int64_t value)
{
    periodStartDate_ = value;
    periodStartDateIsSet_ = true;
}

bool WeeklyCount::periodStartDateIsSet() const
{
    return periodStartDateIsSet_;
}

void WeeklyCount::unsetperiodStartDate()
{
    periodStartDateIsSet_ = false;
}

}
}
}
}
}


