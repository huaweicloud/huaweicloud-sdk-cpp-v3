

#include "huaweicloud/cfw/v1/model/AttackEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackEvent::AttackEvent()
{
    changed_ = 0;
    changedIsSet_ = false;
    deny_ = 0;
    denyIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

AttackEvent::~AttackEvent() = default;

void AttackEvent::validate()
{
}

web::json::value AttackEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(changedIsSet_) {
        val[utility::conversions::to_string_t("changed")] = ModelBase::toJson(changed_);
    }
    if(denyIsSet_) {
        val[utility::conversions::to_string_t("deny")] = ModelBase::toJson(deny_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool AttackEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("changed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChanged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeny(refVal);
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
    return ok;
}


int32_t AttackEvent::getChanged() const
{
    return changed_;
}

void AttackEvent::setChanged(int32_t value)
{
    changed_ = value;
    changedIsSet_ = true;
}

bool AttackEvent::changedIsSet() const
{
    return changedIsSet_;
}

void AttackEvent::unsetchanged()
{
    changedIsSet_ = false;
}

int32_t AttackEvent::getDeny() const
{
    return deny_;
}

void AttackEvent::setDeny(int32_t value)
{
    deny_ = value;
    denyIsSet_ = true;
}

bool AttackEvent::denyIsSet() const
{
    return denyIsSet_;
}

void AttackEvent::unsetdeny()
{
    denyIsSet_ = false;
}

int32_t AttackEvent::getTotal() const
{
    return total_;
}

void AttackEvent::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AttackEvent::totalIsSet() const
{
    return totalIsSet_;
}

void AttackEvent::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


