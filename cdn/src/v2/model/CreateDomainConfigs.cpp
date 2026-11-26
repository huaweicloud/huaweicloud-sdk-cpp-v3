

#include "huaweicloud/cdn/v2/model/CreateDomainConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateDomainConfigs::CreateDomainConfigs()
{
    errorCodeCacheIsSet_ = false;
    ipFilterIsSet_ = false;
    flowLimitStrategyIsSet_ = false;
    bandwidthAlarmStrategyIsSet_ = false;
}

CreateDomainConfigs::~CreateDomainConfigs() = default;

void CreateDomainConfigs::validate()
{
}

web::json::value CreateDomainConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeCacheIsSet_) {
        val[utility::conversions::to_string_t("error_code_cache")] = ModelBase::toJson(errorCodeCache_);
    }
    if(ipFilterIsSet_) {
        val[utility::conversions::to_string_t("ip_filter")] = ModelBase::toJson(ipFilter_);
    }
    if(flowLimitStrategyIsSet_) {
        val[utility::conversions::to_string_t("flow_limit_strategy")] = ModelBase::toJson(flowLimitStrategy_);
    }
    if(bandwidthAlarmStrategyIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_alarm_strategy")] = ModelBase::toJson(bandwidthAlarmStrategy_);
    }

    return val;
}
bool CreateDomainConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_code_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code_cache"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorCodeCache> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCodeCache(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flow_limit_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_limit_strategy"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowLimitStrategy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowLimitStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_alarm_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_alarm_strategy"));
        if(!fieldValue.is_null())
        {
            BandwidthAlarmStrategy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthAlarmStrategy(refVal);
        }
    }
    return ok;
}


std::vector<ErrorCodeCache>& CreateDomainConfigs::getErrorCodeCache()
{
    return errorCodeCache_;
}

void CreateDomainConfigs::setErrorCodeCache(const std::vector<ErrorCodeCache>& value)
{
    errorCodeCache_ = value;
    errorCodeCacheIsSet_ = true;
}

bool CreateDomainConfigs::errorCodeCacheIsSet() const
{
    return errorCodeCacheIsSet_;
}

void CreateDomainConfigs::unseterrorCodeCache()
{
    errorCodeCacheIsSet_ = false;
}

IpFilter CreateDomainConfigs::getIpFilter() const
{
    return ipFilter_;
}

void CreateDomainConfigs::setIpFilter(const IpFilter& value)
{
    ipFilter_ = value;
    ipFilterIsSet_ = true;
}

bool CreateDomainConfigs::ipFilterIsSet() const
{
    return ipFilterIsSet_;
}

void CreateDomainConfigs::unsetipFilter()
{
    ipFilterIsSet_ = false;
}

std::vector<FlowLimitStrategy>& CreateDomainConfigs::getFlowLimitStrategy()
{
    return flowLimitStrategy_;
}

void CreateDomainConfigs::setFlowLimitStrategy(const std::vector<FlowLimitStrategy>& value)
{
    flowLimitStrategy_ = value;
    flowLimitStrategyIsSet_ = true;
}

bool CreateDomainConfigs::flowLimitStrategyIsSet() const
{
    return flowLimitStrategyIsSet_;
}

void CreateDomainConfigs::unsetflowLimitStrategy()
{
    flowLimitStrategyIsSet_ = false;
}

BandwidthAlarmStrategy CreateDomainConfigs::getBandwidthAlarmStrategy() const
{
    return bandwidthAlarmStrategy_;
}

void CreateDomainConfigs::setBandwidthAlarmStrategy(const BandwidthAlarmStrategy& value)
{
    bandwidthAlarmStrategy_ = value;
    bandwidthAlarmStrategyIsSet_ = true;
}

bool CreateDomainConfigs::bandwidthAlarmStrategyIsSet() const
{
    return bandwidthAlarmStrategyIsSet_;
}

void CreateDomainConfigs::unsetbandwidthAlarmStrategy()
{
    bandwidthAlarmStrategyIsSet_ = false;
}

}
}
}
}
}


