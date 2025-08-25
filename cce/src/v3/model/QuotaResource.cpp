

#include "huaweicloud/cce/v3/model/QuotaResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




QuotaResource::QuotaResource()
{
    quotaKey_ = "";
    quotaKeyIsSet_ = false;
    quotaLimit_ = 0;
    quotaLimitIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    availabilityZoneId_ = "";
    availabilityZoneIdIsSet_ = false;
}

QuotaResource::~QuotaResource() = default;

void QuotaResource::validate()
{
}

web::json::value QuotaResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaKeyIsSet_) {
        val[utility::conversions::to_string_t("quotaKey")] = ModelBase::toJson(quotaKey_);
    }
    if(quotaLimitIsSet_) {
        val[utility::conversions::to_string_t("quotaLimit")] = ModelBase::toJson(quotaLimit_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("regionId")] = ModelBase::toJson(regionId_);
    }
    if(availabilityZoneIdIsSet_) {
        val[utility::conversions::to_string_t("availabilityZoneId")] = ModelBase::toJson(availabilityZoneId_);
    }

    return val;
}
bool QuotaResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quotaKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotaKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quotaLimit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotaLimit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regionId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regionId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availabilityZoneId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availabilityZoneId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneId(refVal);
        }
    }
    return ok;
}


std::string QuotaResource::getQuotaKey() const
{
    return quotaKey_;
}

void QuotaResource::setQuotaKey(const std::string& value)
{
    quotaKey_ = value;
    quotaKeyIsSet_ = true;
}

bool QuotaResource::quotaKeyIsSet() const
{
    return quotaKeyIsSet_;
}

void QuotaResource::unsetquotaKey()
{
    quotaKeyIsSet_ = false;
}

int32_t QuotaResource::getQuotaLimit() const
{
    return quotaLimit_;
}

void QuotaResource::setQuotaLimit(int32_t value)
{
    quotaLimit_ = value;
    quotaLimitIsSet_ = true;
}

bool QuotaResource::quotaLimitIsSet() const
{
    return quotaLimitIsSet_;
}

void QuotaResource::unsetquotaLimit()
{
    quotaLimitIsSet_ = false;
}

int32_t QuotaResource::getUsed() const
{
    return used_;
}

void QuotaResource::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool QuotaResource::usedIsSet() const
{
    return usedIsSet_;
}

void QuotaResource::unsetused()
{
    usedIsSet_ = false;
}

std::string QuotaResource::getUnit() const
{
    return unit_;
}

void QuotaResource::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool QuotaResource::unitIsSet() const
{
    return unitIsSet_;
}

void QuotaResource::unsetunit()
{
    unitIsSet_ = false;
}

std::string QuotaResource::getRegionId() const
{
    return regionId_;
}

void QuotaResource::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool QuotaResource::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void QuotaResource::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string QuotaResource::getAvailabilityZoneId() const
{
    return availabilityZoneId_;
}

void QuotaResource::setAvailabilityZoneId(const std::string& value)
{
    availabilityZoneId_ = value;
    availabilityZoneIdIsSet_ = true;
}

bool QuotaResource::availabilityZoneIdIsSet() const
{
    return availabilityZoneIdIsSet_;
}

void QuotaResource::unsetavailabilityZoneId()
{
    availabilityZoneIdIsSet_ = false;
}

}
}
}
}
}


