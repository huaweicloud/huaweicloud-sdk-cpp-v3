

#include "huaweicloud/cdn/v2/model/BrowserCacheRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BrowserCacheRules::BrowserCacheRules()
{
    conditionIsSet_ = false;
    cacheType_ = "";
    cacheTypeIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
    ttlUnit_ = "";
    ttlUnitIsSet_ = false;
}

BrowserCacheRules::~BrowserCacheRules() = default;

void BrowserCacheRules::validate()
{
}

web::json::value BrowserCacheRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(cacheTypeIsSet_) {
        val[utility::conversions::to_string_t("cache_type")] = ModelBase::toJson(cacheType_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(ttlUnitIsSet_) {
        val[utility::conversions::to_string_t("ttl_unit")] = ModelBase::toJson(ttlUnit_);
    }

    return val;
}
bool BrowserCacheRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            BrowserCacheRulesCondition refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlUnit(refVal);
        }
    }
    return ok;
}


BrowserCacheRulesCondition BrowserCacheRules::getCondition() const
{
    return condition_;
}

void BrowserCacheRules::setCondition(const BrowserCacheRulesCondition& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool BrowserCacheRules::conditionIsSet() const
{
    return conditionIsSet_;
}

void BrowserCacheRules::unsetcondition()
{
    conditionIsSet_ = false;
}

std::string BrowserCacheRules::getCacheType() const
{
    return cacheType_;
}

void BrowserCacheRules::setCacheType(const std::string& value)
{
    cacheType_ = value;
    cacheTypeIsSet_ = true;
}

bool BrowserCacheRules::cacheTypeIsSet() const
{
    return cacheTypeIsSet_;
}

void BrowserCacheRules::unsetcacheType()
{
    cacheTypeIsSet_ = false;
}

int32_t BrowserCacheRules::getTtl() const
{
    return ttl_;
}

void BrowserCacheRules::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool BrowserCacheRules::ttlIsSet() const
{
    return ttlIsSet_;
}

void BrowserCacheRules::unsetttl()
{
    ttlIsSet_ = false;
}

std::string BrowserCacheRules::getTtlUnit() const
{
    return ttlUnit_;
}

void BrowserCacheRules::setTtlUnit(const std::string& value)
{
    ttlUnit_ = value;
    ttlUnitIsSet_ = true;
}

bool BrowserCacheRules::ttlUnitIsSet() const
{
    return ttlUnitIsSet_;
}

void BrowserCacheRules::unsetttlUnit()
{
    ttlUnitIsSet_ = false;
}

}
}
}
}
}


