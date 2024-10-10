

#include "huaweicloud/aad/v2/model/FlowBps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




FlowBps::FlowBps()
{
    utime_ = 0L;
    utimeIsSet_ = false;
    attackBps_ = 0;
    attackBpsIsSet_ = false;
    normalBps_ = 0;
    normalBpsIsSet_ = false;
}

FlowBps::~FlowBps() = default;

void FlowBps::validate()
{
}

web::json::value FlowBps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(utimeIsSet_) {
        val[utility::conversions::to_string_t("utime")] = ModelBase::toJson(utime_);
    }
    if(attackBpsIsSet_) {
        val[utility::conversions::to_string_t("attack_bps")] = ModelBase::toJson(attackBps_);
    }
    if(normalBpsIsSet_) {
        val[utility::conversions::to_string_t("normal_bps")] = ModelBase::toJson(normalBps_);
    }

    return val;
}
bool FlowBps::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("utime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("utime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUtime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_bps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackBps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normal_bps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal_bps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormalBps(refVal);
        }
    }
    return ok;
}


int64_t FlowBps::getUtime() const
{
    return utime_;
}

void FlowBps::setUtime(int64_t value)
{
    utime_ = value;
    utimeIsSet_ = true;
}

bool FlowBps::utimeIsSet() const
{
    return utimeIsSet_;
}

void FlowBps::unsetutime()
{
    utimeIsSet_ = false;
}

int32_t FlowBps::getAttackBps() const
{
    return attackBps_;
}

void FlowBps::setAttackBps(int32_t value)
{
    attackBps_ = value;
    attackBpsIsSet_ = true;
}

bool FlowBps::attackBpsIsSet() const
{
    return attackBpsIsSet_;
}

void FlowBps::unsetattackBps()
{
    attackBpsIsSet_ = false;
}

int32_t FlowBps::getNormalBps() const
{
    return normalBps_;
}

void FlowBps::setNormalBps(int32_t value)
{
    normalBps_ = value;
    normalBpsIsSet_ = true;
}

bool FlowBps::normalBpsIsSet() const
{
    return normalBpsIsSet_;
}

void FlowBps::unsetnormalBps()
{
    normalBpsIsSet_ = false;
}

}
}
}
}
}


