

#include "huaweicloud/cdn/v2/model/Configs.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Configs::Configs()
{
    businessType_ = "";
    businessTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    originRequestHeaderIsSet_ = false;
    httpResponseHeaderIsSet_ = false;
    urlAuthIsSet_ = false;
    httpsIsSet_ = false;
    sourcesIsSet_ = false;
    originProtocol_ = "";
    originProtocolIsSet_ = false;
    originFollow302Status_ = "";
    originFollow302StatusIsSet_ = false;
    cacheRulesIsSet_ = false;
    ipFilterIsSet_ = false;
    refererIsSet_ = false;
    forceRedirectIsSet_ = false;
    compressIsSet_ = false;
    cacheUrlParameterFilterIsSet_ = false;
    ipv6Accelerate_ = 0;
    ipv6AccelerateIsSet_ = false;
    errorCodeCacheIsSet_ = false;
    originRangeStatus_ = "";
    originRangeStatusIsSet_ = false;
    userAgentFilterIsSet_ = false;
    originRequestUrlRewriteIsSet_ = false;
    flexibleOriginIsSet_ = false;
    sliceEtagStatus_ = "";
    sliceEtagStatusIsSet_ = false;
    originReceiveTimeout_ = 0;
    originReceiveTimeoutIsSet_ = false;
    remoteAuthIsSet_ = false;
    websocketIsSet_ = false;
    videoSeekIsSet_ = false;
    requestLimitRulesIsSet_ = false;
    ipFrequencyLimitIsSet_ = false;
    hstsIsSet_ = false;
    quicIsSet_ = false;
    errorCodeRedirectRulesIsSet_ = false;
}

Configs::~Configs() = default;

void Configs::validate()
{
}

web::json::value Configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(originRequestHeaderIsSet_) {
        val[utility::conversions::to_string_t("origin_request_header")] = ModelBase::toJson(originRequestHeader_);
    }
    if(httpResponseHeaderIsSet_) {
        val[utility::conversions::to_string_t("http_response_header")] = ModelBase::toJson(httpResponseHeader_);
    }
    if(urlAuthIsSet_) {
        val[utility::conversions::to_string_t("url_auth")] = ModelBase::toJson(urlAuth_);
    }
    if(httpsIsSet_) {
        val[utility::conversions::to_string_t("https")] = ModelBase::toJson(https_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(originProtocolIsSet_) {
        val[utility::conversions::to_string_t("origin_protocol")] = ModelBase::toJson(originProtocol_);
    }
    if(originFollow302StatusIsSet_) {
        val[utility::conversions::to_string_t("origin_follow302_status")] = ModelBase::toJson(originFollow302Status_);
    }
    if(cacheRulesIsSet_) {
        val[utility::conversions::to_string_t("cache_rules")] = ModelBase::toJson(cacheRules_);
    }
    if(ipFilterIsSet_) {
        val[utility::conversions::to_string_t("ip_filter")] = ModelBase::toJson(ipFilter_);
    }
    if(refererIsSet_) {
        val[utility::conversions::to_string_t("referer")] = ModelBase::toJson(referer_);
    }
    if(forceRedirectIsSet_) {
        val[utility::conversions::to_string_t("force_redirect")] = ModelBase::toJson(forceRedirect_);
    }
    if(compressIsSet_) {
        val[utility::conversions::to_string_t("compress")] = ModelBase::toJson(compress_);
    }
    if(cacheUrlParameterFilterIsSet_) {
        val[utility::conversions::to_string_t("cache_url_parameter_filter")] = ModelBase::toJson(cacheUrlParameterFilter_);
    }
    if(ipv6AccelerateIsSet_) {
        val[utility::conversions::to_string_t("ipv6_accelerate")] = ModelBase::toJson(ipv6Accelerate_);
    }
    if(errorCodeCacheIsSet_) {
        val[utility::conversions::to_string_t("error_code_cache")] = ModelBase::toJson(errorCodeCache_);
    }
    if(originRangeStatusIsSet_) {
        val[utility::conversions::to_string_t("origin_range_status")] = ModelBase::toJson(originRangeStatus_);
    }
    if(userAgentFilterIsSet_) {
        val[utility::conversions::to_string_t("user_agent_filter")] = ModelBase::toJson(userAgentFilter_);
    }
    if(originRequestUrlRewriteIsSet_) {
        val[utility::conversions::to_string_t("origin_request_url_rewrite")] = ModelBase::toJson(originRequestUrlRewrite_);
    }
    if(flexibleOriginIsSet_) {
        val[utility::conversions::to_string_t("flexible_origin")] = ModelBase::toJson(flexibleOrigin_);
    }
    if(sliceEtagStatusIsSet_) {
        val[utility::conversions::to_string_t("slice_etag_status")] = ModelBase::toJson(sliceEtagStatus_);
    }
    if(originReceiveTimeoutIsSet_) {
        val[utility::conversions::to_string_t("origin_receive_timeout")] = ModelBase::toJson(originReceiveTimeout_);
    }
    if(remoteAuthIsSet_) {
        val[utility::conversions::to_string_t("remote_auth")] = ModelBase::toJson(remoteAuth_);
    }
    if(websocketIsSet_) {
        val[utility::conversions::to_string_t("websocket")] = ModelBase::toJson(websocket_);
    }
    if(videoSeekIsSet_) {
        val[utility::conversions::to_string_t("video_seek")] = ModelBase::toJson(videoSeek_);
    }
    if(requestLimitRulesIsSet_) {
        val[utility::conversions::to_string_t("request_limit_rules")] = ModelBase::toJson(requestLimitRules_);
    }
    if(ipFrequencyLimitIsSet_) {
        val[utility::conversions::to_string_t("ip_frequency_limit")] = ModelBase::toJson(ipFrequencyLimit_);
    }
    if(hstsIsSet_) {
        val[utility::conversions::to_string_t("hsts")] = ModelBase::toJson(hsts_);
    }
    if(quicIsSet_) {
        val[utility::conversions::to_string_t("quic")] = ModelBase::toJson(quic_);
    }
    if(errorCodeRedirectRulesIsSet_) {
        val[utility::conversions::to_string_t("error_code_redirect_rules")] = ModelBase::toJson(errorCodeRedirectRules_);
    }

    return val;
}

bool Configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("url_auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url_auth"));
        if(!fieldValue.is_null())
        {
            UrlAuth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrlAuth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https"));
        if(!fieldValue.is_null())
        {
            HttpPutBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SourcesConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_follow302_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_follow302_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginFollow302Status(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<CacheRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_filter"));
        if(!fieldValue.is_null())
        {
            IpFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer"));
        if(!fieldValue.is_null())
        {
            RefererConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_redirect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_redirect"));
        if(!fieldValue.is_null())
        {
            ForceRedirectConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceRedirect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress"));
        if(!fieldValue.is_null())
        {
            Compress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache_url_parameter_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_url_parameter_filter"));
        if(!fieldValue.is_null())
        {
            CacheUrlParameterFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheUrlParameterFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_accelerate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_accelerate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Accelerate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code_cache"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorCodeCache> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCodeCache(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_range_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_range_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginRangeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_agent_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_agent_filter"));
        if(!fieldValue.is_null())
        {
            UserAgentFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAgentFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_request_url_rewrite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_request_url_rewrite"));
        if(!fieldValue.is_null())
        {
            std::vector<OriginRequestUrlRewrite> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginRequestUrlRewrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flexible_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexible_origin"));
        if(!fieldValue.is_null())
        {
            std::vector<FlexibleOrigins> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexibleOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slice_etag_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slice_etag_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSliceEtagStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_receive_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_receive_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginReceiveTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_auth"));
        if(!fieldValue.is_null())
        {
            CommonRemoteAuth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAuth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("websocket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("websocket"));
        if(!fieldValue.is_null())
        {
            WebSocketSeek refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebsocket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_seek"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_seek"));
        if(!fieldValue.is_null())
        {
            VideoSeek refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoSeek(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_limit_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_limit_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<RequestLimitRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestLimitRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_frequency_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_frequency_limit"));
        if(!fieldValue.is_null())
        {
            IpFrequencyLimit refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpFrequencyLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hsts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hsts"));
        if(!fieldValue.is_null())
        {
            Hsts refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHsts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quic"));
        if(!fieldValue.is_null())
        {
            Quic refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code_redirect_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code_redirect_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorCodeRedirectRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCodeRedirectRules(refVal);
        }
    }
    return ok;
}

std::string Configs::getBusinessType() const
{
    return businessType_;
}

void Configs::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool Configs::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void Configs::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string Configs::getServiceArea() const
{
    return serviceArea_;
}

void Configs::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool Configs::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void Configs::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string Configs::getRemark() const
{
    return remark_;
}

void Configs::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool Configs::remarkIsSet() const
{
    return remarkIsSet_;
}

void Configs::unsetremark()
{
    remarkIsSet_ = false;
}

std::vector<OriginRequestHeader>& Configs::getOriginRequestHeader()
{
    return originRequestHeader_;
}

void Configs::setOriginRequestHeader(const std::vector<OriginRequestHeader>& value)
{
    originRequestHeader_ = value;
    originRequestHeaderIsSet_ = true;
}

bool Configs::originRequestHeaderIsSet() const
{
    return originRequestHeaderIsSet_;
}

void Configs::unsetoriginRequestHeader()
{
    originRequestHeaderIsSet_ = false;
}

std::vector<HttpResponseHeader>& Configs::getHttpResponseHeader()
{
    return httpResponseHeader_;
}

void Configs::setHttpResponseHeader(const std::vector<HttpResponseHeader>& value)
{
    httpResponseHeader_ = value;
    httpResponseHeaderIsSet_ = true;
}

bool Configs::httpResponseHeaderIsSet() const
{
    return httpResponseHeaderIsSet_;
}

void Configs::unsethttpResponseHeader()
{
    httpResponseHeaderIsSet_ = false;
}

UrlAuth Configs::getUrlAuth() const
{
    return urlAuth_;
}

void Configs::setUrlAuth(const UrlAuth& value)
{
    urlAuth_ = value;
    urlAuthIsSet_ = true;
}

bool Configs::urlAuthIsSet() const
{
    return urlAuthIsSet_;
}

void Configs::unseturlAuth()
{
    urlAuthIsSet_ = false;
}

HttpPutBody Configs::getHttps() const
{
    return https_;
}

void Configs::setHttps(const HttpPutBody& value)
{
    https_ = value;
    httpsIsSet_ = true;
}

bool Configs::httpsIsSet() const
{
    return httpsIsSet_;
}

void Configs::unsethttps()
{
    httpsIsSet_ = false;
}

std::vector<SourcesConfig>& Configs::getSources()
{
    return sources_;
}

void Configs::setSources(const std::vector<SourcesConfig>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool Configs::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void Configs::unsetsources()
{
    sourcesIsSet_ = false;
}

std::string Configs::getOriginProtocol() const
{
    return originProtocol_;
}

void Configs::setOriginProtocol(const std::string& value)
{
    originProtocol_ = value;
    originProtocolIsSet_ = true;
}

bool Configs::originProtocolIsSet() const
{
    return originProtocolIsSet_;
}

void Configs::unsetoriginProtocol()
{
    originProtocolIsSet_ = false;
}

std::string Configs::getOriginFollow302Status() const
{
    return originFollow302Status_;
}

void Configs::setOriginFollow302Status(const std::string& value)
{
    originFollow302Status_ = value;
    originFollow302StatusIsSet_ = true;
}

bool Configs::originFollow302StatusIsSet() const
{
    return originFollow302StatusIsSet_;
}

void Configs::unsetoriginFollow302Status()
{
    originFollow302StatusIsSet_ = false;
}

std::vector<CacheRules>& Configs::getCacheRules()
{
    return cacheRules_;
}

void Configs::setCacheRules(const std::vector<CacheRules>& value)
{
    cacheRules_ = value;
    cacheRulesIsSet_ = true;
}

bool Configs::cacheRulesIsSet() const
{
    return cacheRulesIsSet_;
}

void Configs::unsetcacheRules()
{
    cacheRulesIsSet_ = false;
}

IpFilter Configs::getIpFilter() const
{
    return ipFilter_;
}

void Configs::setIpFilter(const IpFilter& value)
{
    ipFilter_ = value;
    ipFilterIsSet_ = true;
}

bool Configs::ipFilterIsSet() const
{
    return ipFilterIsSet_;
}

void Configs::unsetipFilter()
{
    ipFilterIsSet_ = false;
}

RefererConfig Configs::getReferer() const
{
    return referer_;
}

void Configs::setReferer(const RefererConfig& value)
{
    referer_ = value;
    refererIsSet_ = true;
}

bool Configs::refererIsSet() const
{
    return refererIsSet_;
}

void Configs::unsetreferer()
{
    refererIsSet_ = false;
}

ForceRedirectConfig Configs::getForceRedirect() const
{
    return forceRedirect_;
}

void Configs::setForceRedirect(const ForceRedirectConfig& value)
{
    forceRedirect_ = value;
    forceRedirectIsSet_ = true;
}

bool Configs::forceRedirectIsSet() const
{
    return forceRedirectIsSet_;
}

void Configs::unsetforceRedirect()
{
    forceRedirectIsSet_ = false;
}

Compress Configs::getCompress() const
{
    return compress_;
}

void Configs::setCompress(const Compress& value)
{
    compress_ = value;
    compressIsSet_ = true;
}

bool Configs::compressIsSet() const
{
    return compressIsSet_;
}

void Configs::unsetcompress()
{
    compressIsSet_ = false;
}

CacheUrlParameterFilter Configs::getCacheUrlParameterFilter() const
{
    return cacheUrlParameterFilter_;
}

void Configs::setCacheUrlParameterFilter(const CacheUrlParameterFilter& value)
{
    cacheUrlParameterFilter_ = value;
    cacheUrlParameterFilterIsSet_ = true;
}

bool Configs::cacheUrlParameterFilterIsSet() const
{
    return cacheUrlParameterFilterIsSet_;
}

void Configs::unsetcacheUrlParameterFilter()
{
    cacheUrlParameterFilterIsSet_ = false;
}

int32_t Configs::getIpv6Accelerate() const
{
    return ipv6Accelerate_;
}

void Configs::setIpv6Accelerate(int32_t value)
{
    ipv6Accelerate_ = value;
    ipv6AccelerateIsSet_ = true;
}

bool Configs::ipv6AccelerateIsSet() const
{
    return ipv6AccelerateIsSet_;
}

void Configs::unsetipv6Accelerate()
{
    ipv6AccelerateIsSet_ = false;
}

std::vector<ErrorCodeCache>& Configs::getErrorCodeCache()
{
    return errorCodeCache_;
}

void Configs::setErrorCodeCache(const std::vector<ErrorCodeCache>& value)
{
    errorCodeCache_ = value;
    errorCodeCacheIsSet_ = true;
}

bool Configs::errorCodeCacheIsSet() const
{
    return errorCodeCacheIsSet_;
}

void Configs::unseterrorCodeCache()
{
    errorCodeCacheIsSet_ = false;
}

std::string Configs::getOriginRangeStatus() const
{
    return originRangeStatus_;
}

void Configs::setOriginRangeStatus(const std::string& value)
{
    originRangeStatus_ = value;
    originRangeStatusIsSet_ = true;
}

bool Configs::originRangeStatusIsSet() const
{
    return originRangeStatusIsSet_;
}

void Configs::unsetoriginRangeStatus()
{
    originRangeStatusIsSet_ = false;
}

UserAgentFilter Configs::getUserAgentFilter() const
{
    return userAgentFilter_;
}

void Configs::setUserAgentFilter(const UserAgentFilter& value)
{
    userAgentFilter_ = value;
    userAgentFilterIsSet_ = true;
}

bool Configs::userAgentFilterIsSet() const
{
    return userAgentFilterIsSet_;
}

void Configs::unsetuserAgentFilter()
{
    userAgentFilterIsSet_ = false;
}

std::vector<OriginRequestUrlRewrite>& Configs::getOriginRequestUrlRewrite()
{
    return originRequestUrlRewrite_;
}

void Configs::setOriginRequestUrlRewrite(const std::vector<OriginRequestUrlRewrite>& value)
{
    originRequestUrlRewrite_ = value;
    originRequestUrlRewriteIsSet_ = true;
}

bool Configs::originRequestUrlRewriteIsSet() const
{
    return originRequestUrlRewriteIsSet_;
}

void Configs::unsetoriginRequestUrlRewrite()
{
    originRequestUrlRewriteIsSet_ = false;
}

std::vector<FlexibleOrigins>& Configs::getFlexibleOrigin()
{
    return flexibleOrigin_;
}

void Configs::setFlexibleOrigin(const std::vector<FlexibleOrigins>& value)
{
    flexibleOrigin_ = value;
    flexibleOriginIsSet_ = true;
}

bool Configs::flexibleOriginIsSet() const
{
    return flexibleOriginIsSet_;
}

void Configs::unsetflexibleOrigin()
{
    flexibleOriginIsSet_ = false;
}

std::string Configs::getSliceEtagStatus() const
{
    return sliceEtagStatus_;
}

void Configs::setSliceEtagStatus(const std::string& value)
{
    sliceEtagStatus_ = value;
    sliceEtagStatusIsSet_ = true;
}

bool Configs::sliceEtagStatusIsSet() const
{
    return sliceEtagStatusIsSet_;
}

void Configs::unsetsliceEtagStatus()
{
    sliceEtagStatusIsSet_ = false;
}

int32_t Configs::getOriginReceiveTimeout() const
{
    return originReceiveTimeout_;
}

void Configs::setOriginReceiveTimeout(int32_t value)
{
    originReceiveTimeout_ = value;
    originReceiveTimeoutIsSet_ = true;
}

bool Configs::originReceiveTimeoutIsSet() const
{
    return originReceiveTimeoutIsSet_;
}

void Configs::unsetoriginReceiveTimeout()
{
    originReceiveTimeoutIsSet_ = false;
}

CommonRemoteAuth Configs::getRemoteAuth() const
{
    return remoteAuth_;
}

void Configs::setRemoteAuth(const CommonRemoteAuth& value)
{
    remoteAuth_ = value;
    remoteAuthIsSet_ = true;
}

bool Configs::remoteAuthIsSet() const
{
    return remoteAuthIsSet_;
}

void Configs::unsetremoteAuth()
{
    remoteAuthIsSet_ = false;
}

WebSocketSeek Configs::getWebsocket() const
{
    return websocket_;
}

void Configs::setWebsocket(const WebSocketSeek& value)
{
    websocket_ = value;
    websocketIsSet_ = true;
}

bool Configs::websocketIsSet() const
{
    return websocketIsSet_;
}

void Configs::unsetwebsocket()
{
    websocketIsSet_ = false;
}

VideoSeek Configs::getVideoSeek() const
{
    return videoSeek_;
}

void Configs::setVideoSeek(const VideoSeek& value)
{
    videoSeek_ = value;
    videoSeekIsSet_ = true;
}

bool Configs::videoSeekIsSet() const
{
    return videoSeekIsSet_;
}

void Configs::unsetvideoSeek()
{
    videoSeekIsSet_ = false;
}

std::vector<RequestLimitRules>& Configs::getRequestLimitRules()
{
    return requestLimitRules_;
}

void Configs::setRequestLimitRules(const std::vector<RequestLimitRules>& value)
{
    requestLimitRules_ = value;
    requestLimitRulesIsSet_ = true;
}

bool Configs::requestLimitRulesIsSet() const
{
    return requestLimitRulesIsSet_;
}

void Configs::unsetrequestLimitRules()
{
    requestLimitRulesIsSet_ = false;
}

IpFrequencyLimit Configs::getIpFrequencyLimit() const
{
    return ipFrequencyLimit_;
}

void Configs::setIpFrequencyLimit(const IpFrequencyLimit& value)
{
    ipFrequencyLimit_ = value;
    ipFrequencyLimitIsSet_ = true;
}

bool Configs::ipFrequencyLimitIsSet() const
{
    return ipFrequencyLimitIsSet_;
}

void Configs::unsetipFrequencyLimit()
{
    ipFrequencyLimitIsSet_ = false;
}

Hsts Configs::getHsts() const
{
    return hsts_;
}

void Configs::setHsts(const Hsts& value)
{
    hsts_ = value;
    hstsIsSet_ = true;
}

bool Configs::hstsIsSet() const
{
    return hstsIsSet_;
}

void Configs::unsethsts()
{
    hstsIsSet_ = false;
}

Quic Configs::getQuic() const
{
    return quic_;
}

void Configs::setQuic(const Quic& value)
{
    quic_ = value;
    quicIsSet_ = true;
}

bool Configs::quicIsSet() const
{
    return quicIsSet_;
}

void Configs::unsetquic()
{
    quicIsSet_ = false;
}

std::vector<ErrorCodeRedirectRules>& Configs::getErrorCodeRedirectRules()
{
    return errorCodeRedirectRules_;
}

void Configs::setErrorCodeRedirectRules(const std::vector<ErrorCodeRedirectRules>& value)
{
    errorCodeRedirectRules_ = value;
    errorCodeRedirectRulesIsSet_ = true;
}

bool Configs::errorCodeRedirectRulesIsSet() const
{
    return errorCodeRedirectRulesIsSet_;
}

void Configs::unseterrorCodeRedirectRules()
{
    errorCodeRedirectRulesIsSet_ = false;
}

}
}
}
}
}


