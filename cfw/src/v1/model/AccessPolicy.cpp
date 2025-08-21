

#include "huaweicloud/cfw/v1/model/AccessPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccessPolicy::AccessPolicy()
{
    changed_ = 0;
    changedIsSet_ = false;
    eip_ = 0;
    eipIsSet_ = false;
    nat_ = 0;
    natIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

AccessPolicy::~AccessPolicy() = default;

void AccessPolicy::validate()
{
}

web::json::value AccessPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(changedIsSet_) {
        val[utility::conversions::to_string_t("changed")] = ModelBase::toJson(changed_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(natIsSet_) {
        val[utility::conversions::to_string_t("nat")] = ModelBase::toJson(nat_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool AccessPolicy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNat(refVal);
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


int32_t AccessPolicy::getChanged() const
{
    return changed_;
}

void AccessPolicy::setChanged(int32_t value)
{
    changed_ = value;
    changedIsSet_ = true;
}

bool AccessPolicy::changedIsSet() const
{
    return changedIsSet_;
}

void AccessPolicy::unsetchanged()
{
    changedIsSet_ = false;
}

int32_t AccessPolicy::getEip() const
{
    return eip_;
}

void AccessPolicy::setEip(int32_t value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool AccessPolicy::eipIsSet() const
{
    return eipIsSet_;
}

void AccessPolicy::unseteip()
{
    eipIsSet_ = false;
}

int32_t AccessPolicy::getNat() const
{
    return nat_;
}

void AccessPolicy::setNat(int32_t value)
{
    nat_ = value;
    natIsSet_ = true;
}

bool AccessPolicy::natIsSet() const
{
    return natIsSet_;
}

void AccessPolicy::unsetnat()
{
    natIsSet_ = false;
}

int32_t AccessPolicy::getTotal() const
{
    return total_;
}

void AccessPolicy::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool AccessPolicy::totalIsSet() const
{
    return totalIsSet_;
}

void AccessPolicy::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


