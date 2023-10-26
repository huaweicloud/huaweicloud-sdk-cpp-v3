

#include "huaweicloud/antiddos/v1/model/DailyData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




DailyData::DailyData()
{
    periodStart_ = 0L;
    periodStartIsSet_ = false;
    bpsIn_ = 0;
    bpsInIsSet_ = false;
    bpsAttack_ = 0L;
    bpsAttackIsSet_ = false;
    totalBps_ = 0L;
    totalBpsIsSet_ = false;
    ppsIn_ = 0L;
    ppsInIsSet_ = false;
    ppsAttack_ = 0L;
    ppsAttackIsSet_ = false;
    totalPps_ = 0L;
    totalPpsIsSet_ = false;
}

DailyData::~DailyData() = default;

void DailyData::validate()
{
}

web::json::value DailyData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodStartIsSet_) {
        val[utility::conversions::to_string_t("period_start")] = ModelBase::toJson(periodStart_);
    }
    if(bpsInIsSet_) {
        val[utility::conversions::to_string_t("bps_in")] = ModelBase::toJson(bpsIn_);
    }
    if(bpsAttackIsSet_) {
        val[utility::conversions::to_string_t("bps_attack")] = ModelBase::toJson(bpsAttack_);
    }
    if(totalBpsIsSet_) {
        val[utility::conversions::to_string_t("total_bps")] = ModelBase::toJson(totalBps_);
    }
    if(ppsInIsSet_) {
        val[utility::conversions::to_string_t("pps_in")] = ModelBase::toJson(ppsIn_);
    }
    if(ppsAttackIsSet_) {
        val[utility::conversions::to_string_t("pps_attack")] = ModelBase::toJson(ppsAttack_);
    }
    if(totalPpsIsSet_) {
        val[utility::conversions::to_string_t("total_pps")] = ModelBase::toJson(totalPps_);
    }

    return val;
}
bool DailyData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_start"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bps_in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bps_in"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpsIn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bps_attack"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bps_attack"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBpsAttack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_bps"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalBps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pps_in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pps_in"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPpsIn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pps_attack"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pps_attack"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPpsAttack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_pps"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPps(refVal);
        }
    }
    return ok;
}


int64_t DailyData::getPeriodStart() const
{
    return periodStart_;
}

void DailyData::setPeriodStart(int64_t value)
{
    periodStart_ = value;
    periodStartIsSet_ = true;
}

bool DailyData::periodStartIsSet() const
{
    return periodStartIsSet_;
}

void DailyData::unsetperiodStart()
{
    periodStartIsSet_ = false;
}

int32_t DailyData::getBpsIn() const
{
    return bpsIn_;
}

void DailyData::setBpsIn(int32_t value)
{
    bpsIn_ = value;
    bpsInIsSet_ = true;
}

bool DailyData::bpsInIsSet() const
{
    return bpsInIsSet_;
}

void DailyData::unsetbpsIn()
{
    bpsInIsSet_ = false;
}

int64_t DailyData::getBpsAttack() const
{
    return bpsAttack_;
}

void DailyData::setBpsAttack(int64_t value)
{
    bpsAttack_ = value;
    bpsAttackIsSet_ = true;
}

bool DailyData::bpsAttackIsSet() const
{
    return bpsAttackIsSet_;
}

void DailyData::unsetbpsAttack()
{
    bpsAttackIsSet_ = false;
}

int64_t DailyData::getTotalBps() const
{
    return totalBps_;
}

void DailyData::setTotalBps(int64_t value)
{
    totalBps_ = value;
    totalBpsIsSet_ = true;
}

bool DailyData::totalBpsIsSet() const
{
    return totalBpsIsSet_;
}

void DailyData::unsettotalBps()
{
    totalBpsIsSet_ = false;
}

int64_t DailyData::getPpsIn() const
{
    return ppsIn_;
}

void DailyData::setPpsIn(int64_t value)
{
    ppsIn_ = value;
    ppsInIsSet_ = true;
}

bool DailyData::ppsInIsSet() const
{
    return ppsInIsSet_;
}

void DailyData::unsetppsIn()
{
    ppsInIsSet_ = false;
}

int64_t DailyData::getPpsAttack() const
{
    return ppsAttack_;
}

void DailyData::setPpsAttack(int64_t value)
{
    ppsAttack_ = value;
    ppsAttackIsSet_ = true;
}

bool DailyData::ppsAttackIsSet() const
{
    return ppsAttackIsSet_;
}

void DailyData::unsetppsAttack()
{
    ppsAttackIsSet_ = false;
}

int64_t DailyData::getTotalPps() const
{
    return totalPps_;
}

void DailyData::setTotalPps(int64_t value)
{
    totalPps_ = value;
    totalPpsIsSet_ = true;
}

bool DailyData::totalPpsIsSet() const
{
    return totalPpsIsSet_;
}

void DailyData::unsettotalPps()
{
    totalPpsIsSet_ = false;
}

}
}
}
}
}


