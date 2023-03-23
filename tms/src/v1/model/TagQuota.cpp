

#include "huaweicloud/tms/v1/model/TagQuota.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




TagQuota::TagQuota()
{
    quotaKey_ = "";
    quotaKeyIsSet_ = false;
    quotaLimit_ = 0;
    quotaLimitIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

TagQuota::~TagQuota() = default;

void TagQuota::validate()
{
}

web::json::value TagQuota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(quotaKeyIsSet_) {
        val[utility::conversions::to_string_t("quota_key")] = ModelBase::toJson(quotaKey_);
    }
    if(quotaLimitIsSet_) {
        val[utility::conversions::to_string_t("quota_limit")] = ModelBase::toJson(quotaLimit_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}

bool TagQuota::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("quota_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota_limit"));
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
    return ok;
}


std::string TagQuota::getQuotaKey() const
{
    return quotaKey_;
}

void TagQuota::setQuotaKey(const std::string& value)
{
    quotaKey_ = value;
    quotaKeyIsSet_ = true;
}

bool TagQuota::quotaKeyIsSet() const
{
    return quotaKeyIsSet_;
}

void TagQuota::unsetquotaKey()
{
    quotaKeyIsSet_ = false;
}

int32_t TagQuota::getQuotaLimit() const
{
    return quotaLimit_;
}

void TagQuota::setQuotaLimit(int32_t value)
{
    quotaLimit_ = value;
    quotaLimitIsSet_ = true;
}

bool TagQuota::quotaLimitIsSet() const
{
    return quotaLimitIsSet_;
}

void TagQuota::unsetquotaLimit()
{
    quotaLimitIsSet_ = false;
}

int32_t TagQuota::getUsed() const
{
    return used_;
}

void TagQuota::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool TagQuota::usedIsSet() const
{
    return usedIsSet_;
}

void TagQuota::unsetused()
{
    usedIsSet_ = false;
}

std::string TagQuota::getUnit() const
{
    return unit_;
}

void TagQuota::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool TagQuota::unitIsSet() const
{
    return unitIsSet_;
}

void TagQuota::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


