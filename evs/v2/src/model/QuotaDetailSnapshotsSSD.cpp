

#include "huaweicloud/evs/model/QuotaDetailSnapshotsSSD.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailSnapshotsSSD::QuotaDetailSnapshotsSSD()
{
    inUse_ = 0;
    inUseIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    reserved_ = 0;
    reservedIsSet_ = false;
    allocated_ = "";
    allocatedIsSet_ = false;
}

QuotaDetailSnapshotsSSD::~QuotaDetailSnapshotsSSD() = default;

void QuotaDetailSnapshotsSSD::validate()
{
}

web::json::value QuotaDetailSnapshotsSSD::toJson() const
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

bool QuotaDetailSnapshotsSSD::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocated(refVal);
        }
    }
    return ok;
}


int32_t QuotaDetailSnapshotsSSD::getInUse() const
{
    return inUse_;
}

void QuotaDetailSnapshotsSSD::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailSnapshotsSSD::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailSnapshotsSSD::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailSnapshotsSSD::getLimit() const
{
    return limit_;
}

void QuotaDetailSnapshotsSSD::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailSnapshotsSSD::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailSnapshotsSSD::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailSnapshotsSSD::getReserved() const
{
    return reserved_;
}

void QuotaDetailSnapshotsSSD::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailSnapshotsSSD::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailSnapshotsSSD::unsetreserved()
{
    reservedIsSet_ = false;
}

std::string QuotaDetailSnapshotsSSD::getAllocated() const
{
    return allocated_;
}

void QuotaDetailSnapshotsSSD::setAllocated(const std::string& value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool QuotaDetailSnapshotsSSD::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void QuotaDetailSnapshotsSSD::unsetallocated()
{
    allocatedIsSet_ = false;
}

}
}
}
}
}


