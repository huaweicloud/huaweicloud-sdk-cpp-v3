

#include "huaweicloud/cdn/v1/model/CacheConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CacheConfigRequest::CacheConfigRequest()
{
    ignoreUrlParameter_ = false;
    ignoreUrlParameterIsSet_ = false;
    followOrigin_ = false;
    followOriginIsSet_ = false;
    compressIsSet_ = false;
    rulesIsSet_ = false;
}

CacheConfigRequest::~CacheConfigRequest() = default;

void CacheConfigRequest::validate()
{
}

web::json::value CacheConfigRequest::toJson() const
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
bool CacheConfigRequest::fromJson(const web::json::value& val)
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
            CompressRequest refVal;
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


bool CacheConfigRequest::isIgnoreUrlParameter() const
{
    return ignoreUrlParameter_;
}

void CacheConfigRequest::setIgnoreUrlParameter(bool value)
{
    ignoreUrlParameter_ = value;
    ignoreUrlParameterIsSet_ = true;
}

bool CacheConfigRequest::ignoreUrlParameterIsSet() const
{
    return ignoreUrlParameterIsSet_;
}

void CacheConfigRequest::unsetignoreUrlParameter()
{
    ignoreUrlParameterIsSet_ = false;
}

bool CacheConfigRequest::isFollowOrigin() const
{
    return followOrigin_;
}

void CacheConfigRequest::setFollowOrigin(bool value)
{
    followOrigin_ = value;
    followOriginIsSet_ = true;
}

bool CacheConfigRequest::followOriginIsSet() const
{
    return followOriginIsSet_;
}

void CacheConfigRequest::unsetfollowOrigin()
{
    followOriginIsSet_ = false;
}

CompressRequest CacheConfigRequest::getCompress() const
{
    return compress_;
}

void CacheConfigRequest::setCompress(const CompressRequest& value)
{
    compress_ = value;
    compressIsSet_ = true;
}

bool CacheConfigRequest::compressIsSet() const
{
    return compressIsSet_;
}

void CacheConfigRequest::unsetcompress()
{
    compressIsSet_ = false;
}

std::vector<Rules>& CacheConfigRequest::getRules()
{
    return rules_;
}

void CacheConfigRequest::setRules(const std::vector<Rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool CacheConfigRequest::rulesIsSet() const
{
    return rulesIsSet_;
}

void CacheConfigRequest::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


