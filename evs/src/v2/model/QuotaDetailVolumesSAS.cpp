

#include "huaweicloud/evs/v2/model/QuotaDetailVolumesSAS.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailVolumesSAS::QuotaDetailVolumesSAS()
{
    inUse_ = 0;
    inUseIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    reserved_ = 0;
    reservedIsSet_ = false;
    allocated_ = 0;
    allocatedIsSet_ = false;
}

QuotaDetailVolumesSAS::~QuotaDetailVolumesSAS() = default;

void QuotaDetailVolumesSAS::validate()
{
}

web::json::value QuotaDetailVolumesSAS::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inUseIsSet_) {
        val[utility::conversions::to_string_t("in_use")] = ModelBase::toJson(inUse_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(reservedIsSet_) {
        val[utility::conversions::to_string_t("reserved")] = ModelBase::toJson(reserved_);
    }
    if(allocatedIsSet_) {
        val[utility::conversions::to_string_t("allocated")] = ModelBase::toJson(allocated_);
    }

    return val;
}

bool QuotaDetailVolumesSAS::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("in_use"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_use"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInUse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allocated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocated(refVal);
        }
    }
    return ok;
}


int32_t QuotaDetailVolumesSAS::getInUse() const
{
    return inUse_;
}

void QuotaDetailVolumesSAS::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailVolumesSAS::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailVolumesSAS::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailVolumesSAS::getLimit() const
{
    return limit_;
}

void QuotaDetailVolumesSAS::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailVolumesSAS::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailVolumesSAS::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailVolumesSAS::getReserved() const
{
    return reserved_;
}

void QuotaDetailVolumesSAS::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailVolumesSAS::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailVolumesSAS::unsetreserved()
{
    reservedIsSet_ = false;
}

int32_t QuotaDetailVolumesSAS::getAllocated() const
{
    return allocated_;
}

void QuotaDetailVolumesSAS::setAllocated(int32_t value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool QuotaDetailVolumesSAS::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void QuotaDetailVolumesSAS::unsetallocated()
{
    allocatedIsSet_ = false;
}

}
}
}
}
}


