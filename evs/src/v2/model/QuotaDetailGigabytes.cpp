

#include "huaweicloud/evs/v2/model/QuotaDetailGigabytes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailGigabytes::QuotaDetailGigabytes()
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

QuotaDetailGigabytes::~QuotaDetailGigabytes() = default;

void QuotaDetailGigabytes::validate()
{
}

web::json::value QuotaDetailGigabytes::toJson() const
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

bool QuotaDetailGigabytes::fromJson(const web::json::value& val)
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


int32_t QuotaDetailGigabytes::getInUse() const
{
    return inUse_;
}

void QuotaDetailGigabytes::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailGigabytes::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailGigabytes::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailGigabytes::getLimit() const
{
    return limit_;
}

void QuotaDetailGigabytes::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailGigabytes::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailGigabytes::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailGigabytes::getReserved() const
{
    return reserved_;
}

void QuotaDetailGigabytes::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailGigabytes::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailGigabytes::unsetreserved()
{
    reservedIsSet_ = false;
}

int32_t QuotaDetailGigabytes::getAllocated() const
{
    return allocated_;
}

void QuotaDetailGigabytes::setAllocated(int32_t value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool QuotaDetailGigabytes::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void QuotaDetailGigabytes::unsetallocated()
{
    allocatedIsSet_ = false;
}

}
}
}
}
}


