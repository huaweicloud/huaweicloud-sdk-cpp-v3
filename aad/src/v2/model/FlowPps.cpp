

#include "huaweicloud/aad/v2/model/FlowPps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




FlowPps::FlowPps()
{
    utime_ = 0L;
    utimeIsSet_ = false;
    attackPps_ = 0;
    attackPpsIsSet_ = false;
    normalPps_ = 0;
    normalPpsIsSet_ = false;
}

FlowPps::~FlowPps() = default;

void FlowPps::validate()
{
}

web::json::value FlowPps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(utimeIsSet_) {
        val[utility::conversions::to_string_t("utime")] = ModelBase::toJson(utime_);
    }
    if(attackPpsIsSet_) {
        val[utility::conversions::to_string_t("attack_pps")] = ModelBase::toJson(attackPps_);
    }
    if(normalPpsIsSet_) {
        val[utility::conversions::to_string_t("normal_pps")] = ModelBase::toJson(normalPps_);
    }

    return val;
}
bool FlowPps::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attack_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_pps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackPps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normal_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal_pps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormalPps(refVal);
        }
    }
    return ok;
}


int64_t FlowPps::getUtime() const
{
    return utime_;
}

void FlowPps::setUtime(int64_t value)
{
    utime_ = value;
    utimeIsSet_ = true;
}

bool FlowPps::utimeIsSet() const
{
    return utimeIsSet_;
}

void FlowPps::unsetutime()
{
    utimeIsSet_ = false;
}

int32_t FlowPps::getAttackPps() const
{
    return attackPps_;
}

void FlowPps::setAttackPps(int32_t value)
{
    attackPps_ = value;
    attackPpsIsSet_ = true;
}

bool FlowPps::attackPpsIsSet() const
{
    return attackPpsIsSet_;
}

void FlowPps::unsetattackPps()
{
    attackPpsIsSet_ = false;
}

int32_t FlowPps::getNormalPps() const
{
    return normalPps_;
}

void FlowPps::setNormalPps(int32_t value)
{
    normalPps_ = value;
    normalPpsIsSet_ = true;
}

bool FlowPps::normalPpsIsSet() const
{
    return normalPpsIsSet_;
}

void FlowPps::unsetnormalPps()
{
    normalPpsIsSet_ = false;
}

}
}
}
}
}


