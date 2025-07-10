

#include "huaweicloud/cdn/v2/model/BrowserCacheRulesEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BrowserCacheRulesEngine::BrowserCacheRulesEngine()
{
    cacheType_ = "";
    cacheTypeIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
    ttlUnit_ = "";
    ttlUnitIsSet_ = false;
}

BrowserCacheRulesEngine::~BrowserCacheRulesEngine() = default;

void BrowserCacheRulesEngine::validate()
{
}

web::json::value BrowserCacheRulesEngine::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool BrowserCacheRulesEngine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string BrowserCacheRulesEngine::getCacheType() const
{
    return cacheType_;
}

void BrowserCacheRulesEngine::setCacheType(const std::string& value)
{
    cacheType_ = value;
    cacheTypeIsSet_ = true;
}

bool BrowserCacheRulesEngine::cacheTypeIsSet() const
{
    return cacheTypeIsSet_;
}

void BrowserCacheRulesEngine::unsetcacheType()
{
    cacheTypeIsSet_ = false;
}

int32_t BrowserCacheRulesEngine::getTtl() const
{
    return ttl_;
}

void BrowserCacheRulesEngine::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool BrowserCacheRulesEngine::ttlIsSet() const
{
    return ttlIsSet_;
}

void BrowserCacheRulesEngine::unsetttl()
{
    ttlIsSet_ = false;
}

std::string BrowserCacheRulesEngine::getTtlUnit() const
{
    return ttlUnit_;
}

void BrowserCacheRulesEngine::setTtlUnit(const std::string& value)
{
    ttlUnit_ = value;
    ttlUnitIsSet_ = true;
}

bool BrowserCacheRulesEngine::ttlUnitIsSet() const
{
    return ttlUnitIsSet_;
}

void BrowserCacheRulesEngine::unsetttlUnit()
{
    ttlUnitIsSet_ = false;
}

}
}
}
}
}


