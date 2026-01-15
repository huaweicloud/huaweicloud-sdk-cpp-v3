

#include "huaweicloud/cdn/v2/model/Actions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Actions::Actions()
{
    flexibleOriginIsSet_ = false;
    originRequestHeaderIsSet_ = false;
    httpResponseHeaderIsSet_ = false;
    accessControlIsSet_ = false;
    requestLimitRuleIsSet_ = false;
    originRequestUrlRewriteIsSet_ = false;
    cacheRuleIsSet_ = false;
    requestUrlRewriteIsSet_ = false;
    browserCacheRuleIsSet_ = false;
    errorCodeCacheIsSet_ = false;
}

Actions::~Actions() = default;

void Actions::validate()
{
}

web::json::value Actions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flexibleOriginIsSet_) {
        val[utility::conversions::to_string_t("flexible_origin")] = ModelBase::toJson(flexibleOrigin_);
    }
    if(originRequestHeaderIsSet_) {
        val[utility::conversions::to_string_t("origin_request_header")] = ModelBase::toJson(originRequestHeader_);
    }
    if(httpResponseHeaderIsSet_) {
        val[utility::conversions::to_string_t("http_response_header")] = ModelBase::toJson(httpResponseHeader_);
    }
    if(accessControlIsSet_) {
        val[utility::conversions::to_string_t("access_control")] = ModelBase::toJson(accessControl_);
    }
    if(requestLimitRuleIsSet_) {
        val[utility::conversions::to_string_t("request_limit_rule")] = ModelBase::toJson(requestLimitRule_);
    }
    if(originRequestUrlRewriteIsSet_) {
        val[utility::conversions::to_string_t("origin_request_url_rewrite")] = ModelBase::toJson(originRequestUrlRewrite_);
    }
    if(cacheRuleIsSet_) {
        val[utility::conversions::to_string_t("cache_rule")] = ModelBase::toJson(cacheRule_);
    }
    if(requestUrlRewriteIsSet_) {
        val[utility::conversions::to_string_t("request_url_rewrite")] = ModelBase::toJson(requestUrlRewrite_);
    }
    if(browserCacheRuleIsSet_) {
        val[utility::conversions::to_string_t("browser_cache_rule")] = ModelBase::toJson(browserCacheRule_);
    }
    if(errorCodeCacheIsSet_) {
        val[utility::conversions::to_string_t("error_code_cache")] = ModelBase::toJson(errorCodeCache_);
    }

    return val;
}
bool Actions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flexible_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexible_origin"));
        if(!fieldValue.is_null())
        {
            std::vector<FlexibleOriginsEngine> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexibleOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_request_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_request_header"));
        if(!fieldValue.is_null())
        {
            std::vector<OriginRequestHeader> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginRequestHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_response_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_response_header"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpResponseHeader> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpResponseHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_control"));
        if(!fieldValue.is_null())
        {
            AccessControl refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_limit_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_limit_rule"));
        if(!fieldValue.is_null())
        {
            RequestLimitRulesEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestLimitRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_request_url_rewrite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_request_url_rewrite"));
        if(!fieldValue.is_null())
        {
            OriginRequestUrlRewriteEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginRequestUrlRewrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_rule"));
        if(!fieldValue.is_null())
        {
            CacheRulesEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_url_rewrite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_url_rewrite"));
        if(!fieldValue.is_null())
        {
            RequestUrlRewriteEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestUrlRewrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("browser_cache_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("browser_cache_rule"));
        if(!fieldValue.is_null())
        {
            BrowserCacheRulesEngine refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBrowserCacheRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code_cache"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorCodeCacheEngine> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCodeCache(refVal);
        }
    }
    return ok;
}


std::vector<FlexibleOriginsEngine>& Actions::getFlexibleOrigin()
{
    return flexibleOrigin_;
}

void Actions::setFlexibleOrigin(const std::vector<FlexibleOriginsEngine>& value)
{
    flexibleOrigin_ = value;
    flexibleOriginIsSet_ = true;
}

bool Actions::flexibleOriginIsSet() const
{
    return flexibleOriginIsSet_;
}

void Actions::unsetflexibleOrigin()
{
    flexibleOriginIsSet_ = false;
}

std::vector<OriginRequestHeader>& Actions::getOriginRequestHeader()
{
    return originRequestHeader_;
}

void Actions::setOriginRequestHeader(const std::vector<OriginRequestHeader>& value)
{
    originRequestHeader_ = value;
    originRequestHeaderIsSet_ = true;
}

bool Actions::originRequestHeaderIsSet() const
{
    return originRequestHeaderIsSet_;
}

void Actions::unsetoriginRequestHeader()
{
    originRequestHeaderIsSet_ = false;
}

std::vector<HttpResponseHeader>& Actions::getHttpResponseHeader()
{
    return httpResponseHeader_;
}

void Actions::setHttpResponseHeader(const std::vector<HttpResponseHeader>& value)
{
    httpResponseHeader_ = value;
    httpResponseHeaderIsSet_ = true;
}

bool Actions::httpResponseHeaderIsSet() const
{
    return httpResponseHeaderIsSet_;
}

void Actions::unsethttpResponseHeader()
{
    httpResponseHeaderIsSet_ = false;
}

AccessControl Actions::getAccessControl() const
{
    return accessControl_;
}

void Actions::setAccessControl(const AccessControl& value)
{
    accessControl_ = value;
    accessControlIsSet_ = true;
}

bool Actions::accessControlIsSet() const
{
    return accessControlIsSet_;
}

void Actions::unsetaccessControl()
{
    accessControlIsSet_ = false;
}

RequestLimitRulesEngine Actions::getRequestLimitRule() const
{
    return requestLimitRule_;
}

void Actions::setRequestLimitRule(const RequestLimitRulesEngine& value)
{
    requestLimitRule_ = value;
    requestLimitRuleIsSet_ = true;
}

bool Actions::requestLimitRuleIsSet() const
{
    return requestLimitRuleIsSet_;
}

void Actions::unsetrequestLimitRule()
{
    requestLimitRuleIsSet_ = false;
}

OriginRequestUrlRewriteEngine Actions::getOriginRequestUrlRewrite() const
{
    return originRequestUrlRewrite_;
}

void Actions::setOriginRequestUrlRewrite(const OriginRequestUrlRewriteEngine& value)
{
    originRequestUrlRewrite_ = value;
    originRequestUrlRewriteIsSet_ = true;
}

bool Actions::originRequestUrlRewriteIsSet() const
{
    return originRequestUrlRewriteIsSet_;
}

void Actions::unsetoriginRequestUrlRewrite()
{
    originRequestUrlRewriteIsSet_ = false;
}

CacheRulesEngine Actions::getCacheRule() const
{
    return cacheRule_;
}

void Actions::setCacheRule(const CacheRulesEngine& value)
{
    cacheRule_ = value;
    cacheRuleIsSet_ = true;
}

bool Actions::cacheRuleIsSet() const
{
    return cacheRuleIsSet_;
}

void Actions::unsetcacheRule()
{
    cacheRuleIsSet_ = false;
}

RequestUrlRewriteEngine Actions::getRequestUrlRewrite() const
{
    return requestUrlRewrite_;
}

void Actions::setRequestUrlRewrite(const RequestUrlRewriteEngine& value)
{
    requestUrlRewrite_ = value;
    requestUrlRewriteIsSet_ = true;
}

bool Actions::requestUrlRewriteIsSet() const
{
    return requestUrlRewriteIsSet_;
}

void Actions::unsetrequestUrlRewrite()
{
    requestUrlRewriteIsSet_ = false;
}

BrowserCacheRulesEngine Actions::getBrowserCacheRule() const
{
    return browserCacheRule_;
}

void Actions::setBrowserCacheRule(const BrowserCacheRulesEngine& value)
{
    browserCacheRule_ = value;
    browserCacheRuleIsSet_ = true;
}

bool Actions::browserCacheRuleIsSet() const
{
    return browserCacheRuleIsSet_;
}

void Actions::unsetbrowserCacheRule()
{
    browserCacheRuleIsSet_ = false;
}

std::vector<ErrorCodeCacheEngine>& Actions::getErrorCodeCache()
{
    return errorCodeCache_;
}

void Actions::setErrorCodeCache(const std::vector<ErrorCodeCacheEngine>& value)
{
    errorCodeCache_ = value;
    errorCodeCacheIsSet_ = true;
}

bool Actions::errorCodeCacheIsSet() const
{
    return errorCodeCacheIsSet_;
}

void Actions::unseterrorCodeCache()
{
    errorCodeCacheIsSet_ = false;
}

}
}
}
}
}


