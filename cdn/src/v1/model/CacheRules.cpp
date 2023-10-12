

#include "huaweicloud/cdn/v1/model/CacheRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CacheRules::CacheRules()
{
    matchType_ = "";
    matchTypeIsSet_ = false;
    matchValue_ = "";
    matchValueIsSet_ = false;
    ttl_ = 0;
    ttlIsSet_ = false;
    ttlUnit_ = "";
    ttlUnitIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    followOrigin_ = "";
    followOriginIsSet_ = false;
    urlParameterType_ = "";
    urlParameterTypeIsSet_ = false;
    urlParameterValue_ = "";
    urlParameterValueIsSet_ = false;
}

CacheRules::~CacheRules() = default;

void CacheRules::validate()
{
}

web::json::value CacheRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(matchValueIsSet_) {
        val[utility::conversions::to_string_t("match_value")] = ModelBase::toJson(matchValue_);
    }
    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }
    if(ttlUnitIsSet_) {
        val[utility::conversions::to_string_t("ttl_unit")] = ModelBase::toJson(ttlUnit_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(followOriginIsSet_) {
        val[utility::conversions::to_string_t("follow_origin")] = ModelBase::toJson(followOrigin_);
    }
    if(urlParameterTypeIsSet_) {
        val[utility::conversions::to_string_t("url_parameter_type")] = ModelBase::toJson(urlParameterType_);
    }
    if(urlParameterValueIsSet_) {
        val[utility::conversions::to_string_t("url_parameter_value")] = ModelBase::toJson(urlParameterValue_);
    }

    return val;
}
bool CacheRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url_parameter_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url_parameter_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrlParameterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url_parameter_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url_parameter_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrlParameterValue(refVal);
        }
    }
    return ok;
}


std::string CacheRules::getMatchType() const
{
    return matchType_;
}

void CacheRules::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool CacheRules::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void CacheRules::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::string CacheRules::getMatchValue() const
{
    return matchValue_;
}

void CacheRules::setMatchValue(const std::string& value)
{
    matchValue_ = value;
    matchValueIsSet_ = true;
}

bool CacheRules::matchValueIsSet() const
{
    return matchValueIsSet_;
}

void CacheRules::unsetmatchValue()
{
    matchValueIsSet_ = false;
}

int32_t CacheRules::getTtl() const
{
    return ttl_;
}

void CacheRules::setTtl(int32_t value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool CacheRules::ttlIsSet() const
{
    return ttlIsSet_;
}

void CacheRules::unsetttl()
{
    ttlIsSet_ = false;
}

std::string CacheRules::getTtlUnit() const
{
    return ttlUnit_;
}

void CacheRules::setTtlUnit(const std::string& value)
{
    ttlUnit_ = value;
    ttlUnitIsSet_ = true;
}

bool CacheRules::ttlUnitIsSet() const
{
    return ttlUnitIsSet_;
}

void CacheRules::unsetttlUnit()
{
    ttlUnitIsSet_ = false;
}

int32_t CacheRules::getPriority() const
{
    return priority_;
}

void CacheRules::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CacheRules::priorityIsSet() const
{
    return priorityIsSet_;
}

void CacheRules::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string CacheRules::getFollowOrigin() const
{
    return followOrigin_;
}

void CacheRules::setFollowOrigin(const std::string& value)
{
    followOrigin_ = value;
    followOriginIsSet_ = true;
}

bool CacheRules::followOriginIsSet() const
{
    return followOriginIsSet_;
}

void CacheRules::unsetfollowOrigin()
{
    followOriginIsSet_ = false;
}

std::string CacheRules::getUrlParameterType() const
{
    return urlParameterType_;
}

void CacheRules::setUrlParameterType(const std::string& value)
{
    urlParameterType_ = value;
    urlParameterTypeIsSet_ = true;
}

bool CacheRules::urlParameterTypeIsSet() const
{
    return urlParameterTypeIsSet_;
}

void CacheRules::unseturlParameterType()
{
    urlParameterTypeIsSet_ = false;
}

std::string CacheRules::getUrlParameterValue() const
{
    return urlParameterValue_;
}

void CacheRules::setUrlParameterValue(const std::string& value)
{
    urlParameterValue_ = value;
    urlParameterValueIsSet_ = true;
}

bool CacheRules::urlParameterValueIsSet() const
{
    return urlParameterValueIsSet_;
}

void CacheRules::unseturlParameterValue()
{
    urlParameterValueIsSet_ = false;
}

}
}
}
}
}


