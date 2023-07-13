

#include "huaweicloud/cdn/v1/model/CacheConfig.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CacheConfig::CacheConfig()
{
    ignoreUrlParameter_ = false;
    ignoreUrlParameterIsSet_ = false;
    followOrigin_ = false;
    followOriginIsSet_ = false;
    compressIsSet_ = false;
    rulesIsSet_ = false;
}

CacheConfig::~CacheConfig() = default;

void CacheConfig::validate()
{
}

web::json::value CacheConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ignoreUrlParameterIsSet_) {
        val[utility::conversions::to_string_t("ignore_url_parameter")] = ModelBase::toJson(ignoreUrlParameter_);
    }
    if(followOriginIsSet_) {
        val[utility::conversions::to_string_t("follow_origin")] = ModelBase::toJson(followOrigin_);
    }
    if(compressIsSet_) {
        val[utility::conversions::to_string_t("compress")] = ModelBase::toJson(compress_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}

bool CacheConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ignore_url_parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignore_url_parameter"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreUrlParameter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("follow_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow_origin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollowOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress"));
        if(!fieldValue.is_null())
        {
            CompressResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<Rules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}

bool CacheConfig::isIgnoreUrlParameter() const
{
    return ignoreUrlParameter_;
}

void CacheConfig::setIgnoreUrlParameter(bool value)
{
    ignoreUrlParameter_ = value;
    ignoreUrlParameterIsSet_ = true;
}

bool CacheConfig::ignoreUrlParameterIsSet() const
{
    return ignoreUrlParameterIsSet_;
}

void CacheConfig::unsetignoreUrlParameter()
{
    ignoreUrlParameterIsSet_ = false;
}

bool CacheConfig::isFollowOrigin() const
{
    return followOrigin_;
}

void CacheConfig::setFollowOrigin(bool value)
{
    followOrigin_ = value;
    followOriginIsSet_ = true;
}

bool CacheConfig::followOriginIsSet() const
{
    return followOriginIsSet_;
}

void CacheConfig::unsetfollowOrigin()
{
    followOriginIsSet_ = false;
}

CompressResponse CacheConfig::getCompress() const
{
    return compress_;
}

void CacheConfig::setCompress(const CompressResponse& value)
{
    compress_ = value;
    compressIsSet_ = true;
}

bool CacheConfig::compressIsSet() const
{
    return compressIsSet_;
}

void CacheConfig::unsetcompress()
{
    compressIsSet_ = false;
}

std::vector<Rules>& CacheConfig::getRules()
{
    return rules_;
}

void CacheConfig::setRules(const std::vector<Rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool CacheConfig::rulesIsSet() const
{
    return rulesIsSet_;
}

void CacheConfig::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


