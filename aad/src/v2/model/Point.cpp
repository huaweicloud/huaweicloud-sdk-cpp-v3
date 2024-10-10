

#include "huaweicloud/aad/v2/model/Point.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




Point::Point()
{
    time_ = 0;
    timeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    attack_ = 0;
    attackIsSet_ = false;
    basic_ = 0;
    basicIsSet_ = false;
    cc_ = 0;
    ccIsSet_ = false;
    customCustom_ = 0;
    customCustomIsSet_ = false;
}

Point::~Point() = default;

void Point::validate()
{
}

web::json::value Point::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(attackIsSet_) {
        val[utility::conversions::to_string_t("attack")] = ModelBase::toJson(attack_);
    }
    if(basicIsSet_) {
        val[utility::conversions::to_string_t("basic")] = ModelBase::toJson(basic_);
    }
    if(ccIsSet_) {
        val[utility::conversions::to_string_t("cc")] = ModelBase::toJson(cc_);
    }
    if(customCustomIsSet_) {
        val[utility::conversions::to_string_t("custom_custom")] = ModelBase::toJson(customCustom_);
    }

    return val;
}
bool Point::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cc"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_custom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_custom"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomCustom(refVal);
        }
    }
    return ok;
}


int32_t Point::getTime() const
{
    return time_;
}

void Point::setTime(int32_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool Point::timeIsSet() const
{
    return timeIsSet_;
}

void Point::unsettime()
{
    timeIsSet_ = false;
}

int32_t Point::getTotal() const
{
    return total_;
}

void Point::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool Point::totalIsSet() const
{
    return totalIsSet_;
}

void Point::unsettotal()
{
    totalIsSet_ = false;
}

int32_t Point::getAttack() const
{
    return attack_;
}

void Point::setAttack(int32_t value)
{
    attack_ = value;
    attackIsSet_ = true;
}

bool Point::attackIsSet() const
{
    return attackIsSet_;
}

void Point::unsetattack()
{
    attackIsSet_ = false;
}

int32_t Point::getBasic() const
{
    return basic_;
}

void Point::setBasic(int32_t value)
{
    basic_ = value;
    basicIsSet_ = true;
}

bool Point::basicIsSet() const
{
    return basicIsSet_;
}

void Point::unsetbasic()
{
    basicIsSet_ = false;
}

int32_t Point::getCc() const
{
    return cc_;
}

void Point::setCc(int32_t value)
{
    cc_ = value;
    ccIsSet_ = true;
}

bool Point::ccIsSet() const
{
    return ccIsSet_;
}

void Point::unsetcc()
{
    ccIsSet_ = false;
}

int32_t Point::getCustomCustom() const
{
    return customCustom_;
}

void Point::setCustomCustom(int32_t value)
{
    customCustom_ = value;
    customCustomIsSet_ = true;
}

bool Point::customCustomIsSet() const
{
    return customCustomIsSet_;
}

void Point::unsetcustomCustom()
{
    customCustomIsSet_ = false;
}

}
}
}
}
}


