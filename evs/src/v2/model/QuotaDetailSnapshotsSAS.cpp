

#include "huaweicloud/evs/v2/model/QuotaDetailSnapshotsSAS.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailSnapshotsSAS::QuotaDetailSnapshotsSAS()
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

QuotaDetailSnapshotsSAS::~QuotaDetailSnapshotsSAS() = default;

void QuotaDetailSnapshotsSAS::validate()
{
}

web::json::value QuotaDetailSnapshotsSAS::toJson() const
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

bool QuotaDetailSnapshotsSAS::fromJson(const web::json::value& val)
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


int32_t QuotaDetailSnapshotsSAS::getInUse() const
{
    return inUse_;
}

void QuotaDetailSnapshotsSAS::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailSnapshotsSAS::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailSnapshotsSAS::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailSnapshotsSAS::getLimit() const
{
    return limit_;
}

void QuotaDetailSnapshotsSAS::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailSnapshotsSAS::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailSnapshotsSAS::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailSnapshotsSAS::getReserved() const
{
    return reserved_;
}

void QuotaDetailSnapshotsSAS::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailSnapshotsSAS::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailSnapshotsSAS::unsetreserved()
{
    reservedIsSet_ = false;
}

int32_t QuotaDetailSnapshotsSAS::getAllocated() const
{
    return allocated_;
}

void QuotaDetailSnapshotsSAS::setAllocated(int32_t value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool QuotaDetailSnapshotsSAS::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void QuotaDetailSnapshotsSAS::unsetallocated()
{
    allocatedIsSet_ = false;
}

}
}
}
}
}


