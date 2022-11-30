

#include "huaweicloud/evs/v2/model/QuotaDetailVolumesGPSSD.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




QuotaDetailVolumesGPSSD::QuotaDetailVolumesGPSSD()
{
    inUse_ = 0;
    inUseIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    reserved_ = 0;
    reservedIsSet_ = false;
}

QuotaDetailVolumesGPSSD::~QuotaDetailVolumesGPSSD() = default;

void QuotaDetailVolumesGPSSD::validate()
{
}

web::json::value QuotaDetailVolumesGPSSD::toJson() const
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

    return val;
}

bool QuotaDetailVolumesGPSSD::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t QuotaDetailVolumesGPSSD::getInUse() const
{
    return inUse_;
}

void QuotaDetailVolumesGPSSD::setInUse(int32_t value)
{
    inUse_ = value;
    inUseIsSet_ = true;
}

bool QuotaDetailVolumesGPSSD::inUseIsSet() const
{
    return inUseIsSet_;
}

void QuotaDetailVolumesGPSSD::unsetinUse()
{
    inUseIsSet_ = false;
}

int32_t QuotaDetailVolumesGPSSD::getLimit() const
{
    return limit_;
}

void QuotaDetailVolumesGPSSD::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QuotaDetailVolumesGPSSD::limitIsSet() const
{
    return limitIsSet_;
}

void QuotaDetailVolumesGPSSD::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QuotaDetailVolumesGPSSD::getReserved() const
{
    return reserved_;
}

void QuotaDetailVolumesGPSSD::setReserved(int32_t value)
{
    reserved_ = value;
    reservedIsSet_ = true;
}

bool QuotaDetailVolumesGPSSD::reservedIsSet() const
{
    return reservedIsSet_;
}

void QuotaDetailVolumesGPSSD::unsetreserved()
{
    reservedIsSet_ = false;
}

}
}
}
}
}


