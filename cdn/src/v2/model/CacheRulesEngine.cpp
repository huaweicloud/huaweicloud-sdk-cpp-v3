

#include "huaweicloud/cdn/v2/model/CacheRulesEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CacheRulesEngine::CacheRulesEngine()
{
    ttl_ = 0;
    ttlIsSet_ = false;
    ttlUnit_ = "";
    ttlUnitIsSet_ = false;
    followOrigin_ = "";
    followOriginIsSet_ = false;
    forceCache_ = "";
    forceCacheIsSet_ = false;
}

CacheRulesEngine::~CacheRulesEngine() = default;

void CacheRulesEngine::validate()
{
}

web::json::value CacheRulesEngine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(ttlUnitIsSet_) {
        val[utility::conversions::to_string_t("ttl_unit")] = ModelBase::toJson(ttlUnit_);
    }
    if(followOriginIsSet_) {
        val[utility::conversions::to_string_t("follow_origin")] = ModelBase::toJson(followOrigin_);
    }
    if(forceCacheIsSet_) {
        val[utility::conversions::to_string_t("force_cache")] = ModelBase::toJson(forceCache_);
    }

    return val;
}
bool CacheRulesEngine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("follow_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow_origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollowOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_cache"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceCache(refVal);
        }
    }
    return ok;
}


int32_t CacheRulesEngine::getTtl() const
{
    return ttl_;
}

void CacheRulesEngine::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool CacheRulesEngine::ttlIsSet() const
{
    return ttlIsSet_;
}

void CacheRulesEngine::unsetttl()
{
    ttlIsSet_ = false;
}

std::string CacheRulesEngine::getTtlUnit() const
{
    return ttlUnit_;
}

void CacheRulesEngine::setTtlUnit(const std::string& value)
{
    ttlUnit_ = value;
    ttlUnitIsSet_ = true;
}

bool CacheRulesEngine::ttlUnitIsSet() const
{
    return ttlUnitIsSet_;
}

void CacheRulesEngine::unsetttlUnit()
{
    ttlUnitIsSet_ = false;
}

std::string CacheRulesEngine::getFollowOrigin() const
{
    return followOrigin_;
}

void CacheRulesEngine::setFollowOrigin(const std::string& value)
{
    followOrigin_ = value;
    followOriginIsSet_ = true;
}

bool CacheRulesEngine::followOriginIsSet() const
{
    return followOriginIsSet_;
}

void CacheRulesEngine::unsetfollowOrigin()
{
    followOriginIsSet_ = false;
}

std::string CacheRulesEngine::getForceCache() const
{
    return forceCache_;
}

void CacheRulesEngine::setForceCache(const std::string& value)
{
    forceCache_ = value;
    forceCacheIsSet_ = true;
}

bool CacheRulesEngine::forceCacheIsSet() const
{
    return forceCacheIsSet_;
}

void CacheRulesEngine::unsetforceCache()
{
    forceCacheIsSet_ = false;
}

}
}
}
}
}


