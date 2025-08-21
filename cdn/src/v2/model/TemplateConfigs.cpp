

#include "huaweicloud/cdn/v2/model/TemplateConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




TemplateConfigs::TemplateConfigs()
{
    httpResponseHeaderIsSet_ = false;
    cacheRulesIsSet_ = false;
    originFollow302Status_ = "";
    originFollow302StatusIsSet_ = false;
    compressIsSet_ = false;
    originRangeStatus_ = "";
    originRangeStatusIsSet_ = false;
    ipFilterIsSet_ = false;
    refererIsSet_ = false;
    userAgentFilterIsSet_ = false;
    flowLimitStrategyIsSet_ = false;
}

TemplateConfigs::~TemplateConfigs() = default;

void TemplateConfigs::validate()
{
}

web::json::value TemplateConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpResponseHeaderIsSet_) {
        val[utility::conversions::to_string_t("http_response_header")] = ModelBase::toJson(httpResponseHeader_);
    }
    if(cacheRulesIsSet_) {
        val[utility::conversions::to_string_t("cache_rules")] = ModelBase::toJson(cacheRules_);
    }
    if(originFollow302StatusIsSet_) {
        val[utility::conversions::to_string_t("origin_follow302_status")] = ModelBase::toJson(originFollow302Status_);
    }
    if(compressIsSet_) {
        val[utility::conversions::to_string_t("compress")] = ModelBase::toJson(compress_);
    }
    if(originRangeStatusIsSet_) {
        val[utility::conversions::to_string_t("origin_range_status")] = ModelBase::toJson(originRangeStatus_);
    }
    if(ipFilterIsSet_) {
        val[utility::conversions::to_string_t("ip_filter")] = ModelBase::toJson(ipFilter_);
    }
    if(refererIsSet_) {
        val[utility::conversions::to_string_t("referer")] = ModelBase::toJson(referer_);
    }
    if(userAgentFilterIsSet_) {
        val[utility::conversions::to_string_t("user_agent_filter")] = ModelBase::toJson(userAgentFilter_);
    }
    if(flowLimitStrategyIsSet_) {
        val[utility::conversions::to_string_t("flow_limit_strategy")] = ModelBase::toJson(flowLimitStrategy_);
    }

    return val;
}
bool TemplateConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http_response_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_response_header"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpResponseHeader> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpResponseHeader(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("origin_follow302_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_follow302_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginFollow302Status(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("origin_range_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_range_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginRangeStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_agent_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_agent_filter"));
        if(!fieldValue.is_null())
        {
            UserAgentFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAgentFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_limit_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_limit_strategy"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowLimitStrategy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowLimitStrategy(refVal);
        }
    }
    return ok;
}


std::vector<HttpResponseHeader>& TemplateConfigs::getHttpResponseHeader()
{
    return httpResponseHeader_;
}

void TemplateConfigs::setHttpResponseHeader(const std::vector<HttpResponseHeader>& value)
{
    httpResponseHeader_ = value;
    httpResponseHeaderIsSet_ = true;
}

bool TemplateConfigs::httpResponseHeaderIsSet() const
{
    return httpResponseHeaderIsSet_;
}

void TemplateConfigs::unsethttpResponseHeader()
{
    httpResponseHeaderIsSet_ = false;
}

std::vector<CacheRules>& TemplateConfigs::getCacheRules()
{
    return cacheRules_;
}

void TemplateConfigs::setCacheRules(const std::vector<CacheRules>& value)
{
    cacheRules_ = value;
    cacheRulesIsSet_ = true;
}

bool TemplateConfigs::cacheRulesIsSet() const
{
    return cacheRulesIsSet_;
}

void TemplateConfigs::unsetcacheRules()
{
    cacheRulesIsSet_ = false;
}

std::string TemplateConfigs::getOriginFollow302Status() const
{
    return originFollow302Status_;
}

void TemplateConfigs::setOriginFollow302Status(const std::string& value)
{
    originFollow302Status_ = value;
    originFollow302StatusIsSet_ = true;
}

bool TemplateConfigs::originFollow302StatusIsSet() const
{
    return originFollow302StatusIsSet_;
}

void TemplateConfigs::unsetoriginFollow302Status()
{
    originFollow302StatusIsSet_ = false;
}

Compress TemplateConfigs::getCompress() const
{
    return compress_;
}

void TemplateConfigs::setCompress(const Compress& value)
{
    compress_ = value;
    compressIsSet_ = true;
}

bool TemplateConfigs::compressIsSet() const
{
    return compressIsSet_;
}

void TemplateConfigs::unsetcompress()
{
    compressIsSet_ = false;
}

std::string TemplateConfigs::getOriginRangeStatus() const
{
    return originRangeStatus_;
}

void TemplateConfigs::setOriginRangeStatus(const std::string& value)
{
    originRangeStatus_ = value;
    originRangeStatusIsSet_ = true;
}

bool TemplateConfigs::originRangeStatusIsSet() const
{
    return originRangeStatusIsSet_;
}

void TemplateConfigs::unsetoriginRangeStatus()
{
    originRangeStatusIsSet_ = false;
}

IpFilter TemplateConfigs::getIpFilter() const
{
    return ipFilter_;
}

void TemplateConfigs::setIpFilter(const IpFilter& value)
{
    ipFilter_ = value;
    ipFilterIsSet_ = true;
}

bool TemplateConfigs::ipFilterIsSet() const
{
    return ipFilterIsSet_;
}

void TemplateConfigs::unsetipFilter()
{
    ipFilterIsSet_ = false;
}

RefererConfig TemplateConfigs::getReferer() const
{
    return referer_;
}

void TemplateConfigs::setReferer(const RefererConfig& value)
{
    referer_ = value;
    refererIsSet_ = true;
}

bool TemplateConfigs::refererIsSet() const
{
    return refererIsSet_;
}

void TemplateConfigs::unsetreferer()
{
    refererIsSet_ = false;
}

UserAgentFilter TemplateConfigs::getUserAgentFilter() const
{
    return userAgentFilter_;
}

void TemplateConfigs::setUserAgentFilter(const UserAgentFilter& value)
{
    userAgentFilter_ = value;
    userAgentFilterIsSet_ = true;
}

bool TemplateConfigs::userAgentFilterIsSet() const
{
    return userAgentFilterIsSet_;
}

void TemplateConfigs::unsetuserAgentFilter()
{
    userAgentFilterIsSet_ = false;
}

std::vector<FlowLimitStrategy>& TemplateConfigs::getFlowLimitStrategy()
{
    return flowLimitStrategy_;
}

void TemplateConfigs::setFlowLimitStrategy(const std::vector<FlowLimitStrategy>& value)
{
    flowLimitStrategy_ = value;
    flowLimitStrategyIsSet_ = true;
}

bool TemplateConfigs::flowLimitStrategyIsSet() const
{
    return flowLimitStrategyIsSet_;
}

void TemplateConfigs::unsetflowLimitStrategy()
{
    flowLimitStrategyIsSet_ = false;
}

}
}
}
}
}


