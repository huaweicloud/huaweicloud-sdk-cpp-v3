

#include "huaweicloud/rds/v3/model/ProxyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ProxyInfo::ProxyInfo()
{
    poolId_ = "";
    poolIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    delayThresholdInSeconds_ = 0;
    delayThresholdInSecondsIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    nodesIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    flavorInfoIsSet_ = false;
    transactionSplit_ = "";
    transactionSplitIsSet_ = false;
    connectionPoolType_ = "";
    connectionPoolTypeIsSet_ = false;
    payMode_ = "";
    payModeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    proxyMode_ = "";
    proxyModeIsSet_ = false;
    dnsName_ = "";
    dnsNameIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    secondsLevelMonitorFunStatus_ = "";
    secondsLevelMonitorFunStatusIsSet_ = false;
    altFlag_ = false;
    altFlagIsSet_ = false;
    forceReadOnly_ = false;
    forceReadOnlyIsSet_ = false;
    routeMode_ = 0;
    routeModeIsSet_ = false;
    sslOption_ = false;
    sslOptionIsSet_ = false;
    supportBalanceRouteMode_ = false;
    supportBalanceRouteModeIsSet_ = false;
    supportProxySsl_ = false;
    supportProxySslIsSet_ = false;
    supportSwitchConnectionPoolType_ = false;
    supportSwitchConnectionPoolTypeIsSet_ = false;
    supportTransactionSplit_ = false;
    supportTransactionSplitIsSet_ = false;
}

ProxyInfo::~ProxyInfo() = default;

void ProxyInfo::validate()
{
}

web::json::value ProxyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(delayThresholdInSecondsIsSet_) {
        val[utility::conversions::to_string_t("delay_threshold_in_seconds")] = ModelBase::toJson(delayThresholdInSeconds_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(flavorInfoIsSet_) {
        val[utility::conversions::to_string_t("flavor_info")] = ModelBase::toJson(flavorInfo_);
    }
    if(transactionSplitIsSet_) {
        val[utility::conversions::to_string_t("transaction_split")] = ModelBase::toJson(transactionSplit_);
    }
    if(connectionPoolTypeIsSet_) {
        val[utility::conversions::to_string_t("connection_pool_type")] = ModelBase::toJson(connectionPoolType_);
    }
    if(payModeIsSet_) {
        val[utility::conversions::to_string_t("pay_mode")] = ModelBase::toJson(payMode_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(proxyModeIsSet_) {
        val[utility::conversions::to_string_t("proxy_mode")] = ModelBase::toJson(proxyMode_);
    }
    if(dnsNameIsSet_) {
        val[utility::conversions::to_string_t("dns_name")] = ModelBase::toJson(dnsName_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(secondsLevelMonitorFunStatusIsSet_) {
        val[utility::conversions::to_string_t("seconds_level_monitor_fun_status")] = ModelBase::toJson(secondsLevelMonitorFunStatus_);
    }
    if(altFlagIsSet_) {
        val[utility::conversions::to_string_t("alt_flag")] = ModelBase::toJson(altFlag_);
    }
    if(forceReadOnlyIsSet_) {
        val[utility::conversions::to_string_t("force_read_only")] = ModelBase::toJson(forceReadOnly_);
    }
    if(routeModeIsSet_) {
        val[utility::conversions::to_string_t("route_mode")] = ModelBase::toJson(routeMode_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }
    if(supportBalanceRouteModeIsSet_) {
        val[utility::conversions::to_string_t("support_balance_route_mode")] = ModelBase::toJson(supportBalanceRouteMode_);
    }
    if(supportProxySslIsSet_) {
        val[utility::conversions::to_string_t("support_proxy_ssl")] = ModelBase::toJson(supportProxySsl_);
    }
    if(supportSwitchConnectionPoolTypeIsSet_) {
        val[utility::conversions::to_string_t("support_switch_connection_pool_type")] = ModelBase::toJson(supportSwitchConnectionPoolType_);
    }
    if(supportTransactionSplitIsSet_) {
        val[utility::conversions::to_string_t("support_transaction_split")] = ModelBase::toJson(supportTransactionSplit_);
    }

    return val;
}
bool ProxyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay_threshold_in_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay_threshold_in_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayThresholdInSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyInfo_nodes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_info"));
        if(!fieldValue.is_null())
        {
            ProxyInfo_flavor_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_split"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_split"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionSplit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_pool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_pool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionPoolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dns_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dns_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seconds_level_monitor_fun_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seconds_level_monitor_fun_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondsLevelMonitorFunStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alt_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alt_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAltFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_read_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_read_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceReadOnly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("route_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_balance_route_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_balance_route_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportBalanceRouteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_proxy_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_proxy_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportProxySsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_switch_connection_pool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_switch_connection_pool_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportSwitchConnectionPoolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_transaction_split"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_transaction_split"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportTransactionSplit(refVal);
        }
    }
    return ok;
}


std::string ProxyInfo::getPoolId() const
{
    return poolId_;
}

void ProxyInfo::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ProxyInfo::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ProxyInfo::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ProxyInfo::getStatus() const
{
    return status_;
}

void ProxyInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProxyInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ProxyInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ProxyInfo::getAddress() const
{
    return address_;
}

void ProxyInfo::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ProxyInfo::addressIsSet() const
{
    return addressIsSet_;
}

void ProxyInfo::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t ProxyInfo::getPort() const
{
    return port_;
}

void ProxyInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ProxyInfo::portIsSet() const
{
    return portIsSet_;
}

void ProxyInfo::unsetport()
{
    portIsSet_ = false;
}

int32_t ProxyInfo::getDelayThresholdInSeconds() const
{
    return delayThresholdInSeconds_;
}

void ProxyInfo::setDelayThresholdInSeconds(int32_t value)
{
    delayThresholdInSeconds_ = value;
    delayThresholdInSecondsIsSet_ = true;
}

bool ProxyInfo::delayThresholdInSecondsIsSet() const
{
    return delayThresholdInSecondsIsSet_;
}

void ProxyInfo::unsetdelayThresholdInSeconds()
{
    delayThresholdInSecondsIsSet_ = false;
}

std::string ProxyInfo::getCpu() const
{
    return cpu_;
}

void ProxyInfo::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ProxyInfo::cpuIsSet() const
{
    return cpuIsSet_;
}

void ProxyInfo::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ProxyInfo::getMem() const
{
    return mem_;
}

void ProxyInfo::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool ProxyInfo::memIsSet() const
{
    return memIsSet_;
}

void ProxyInfo::unsetmem()
{
    memIsSet_ = false;
}

int32_t ProxyInfo::getNodeNum() const
{
    return nodeNum_;
}

void ProxyInfo::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool ProxyInfo::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void ProxyInfo::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::vector<ProxyInfo_nodes>& ProxyInfo::getNodes()
{
    return nodes_;
}

void ProxyInfo::setNodes(const std::vector<ProxyInfo_nodes>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ProxyInfo::nodesIsSet() const
{
    return nodesIsSet_;
}

void ProxyInfo::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string ProxyInfo::getMode() const
{
    return mode_;
}

void ProxyInfo::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ProxyInfo::modeIsSet() const
{
    return modeIsSet_;
}

void ProxyInfo::unsetmode()
{
    modeIsSet_ = false;
}

ProxyInfo_flavor_info ProxyInfo::getFlavorInfo() const
{
    return flavorInfo_;
}

void ProxyInfo::setFlavorInfo(const ProxyInfo_flavor_info& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool ProxyInfo::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void ProxyInfo::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

std::string ProxyInfo::getTransactionSplit() const
{
    return transactionSplit_;
}

void ProxyInfo::setTransactionSplit(const std::string& value)
{
    transactionSplit_ = value;
    transactionSplitIsSet_ = true;
}

bool ProxyInfo::transactionSplitIsSet() const
{
    return transactionSplitIsSet_;
}

void ProxyInfo::unsettransactionSplit()
{
    transactionSplitIsSet_ = false;
}

std::string ProxyInfo::getConnectionPoolType() const
{
    return connectionPoolType_;
}

void ProxyInfo::setConnectionPoolType(const std::string& value)
{
    connectionPoolType_ = value;
    connectionPoolTypeIsSet_ = true;
}

bool ProxyInfo::connectionPoolTypeIsSet() const
{
    return connectionPoolTypeIsSet_;
}

void ProxyInfo::unsetconnectionPoolType()
{
    connectionPoolTypeIsSet_ = false;
}

std::string ProxyInfo::getPayMode() const
{
    return payMode_;
}

void ProxyInfo::setPayMode(const std::string& value)
{
    payMode_ = value;
    payModeIsSet_ = true;
}

bool ProxyInfo::payModeIsSet() const
{
    return payModeIsSet_;
}

void ProxyInfo::unsetpayMode()
{
    payModeIsSet_ = false;
}

std::string ProxyInfo::getName() const
{
    return name_;
}

void ProxyInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProxyInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ProxyInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ProxyInfo::getProxyMode() const
{
    return proxyMode_;
}

void ProxyInfo::setProxyMode(const std::string& value)
{
    proxyMode_ = value;
    proxyModeIsSet_ = true;
}

bool ProxyInfo::proxyModeIsSet() const
{
    return proxyModeIsSet_;
}

void ProxyInfo::unsetproxyMode()
{
    proxyModeIsSet_ = false;
}

std::string ProxyInfo::getDnsName() const
{
    return dnsName_;
}

void ProxyInfo::setDnsName(const std::string& value)
{
    dnsName_ = value;
    dnsNameIsSet_ = true;
}

bool ProxyInfo::dnsNameIsSet() const
{
    return dnsNameIsSet_;
}

void ProxyInfo::unsetdnsName()
{
    dnsNameIsSet_ = false;
}

std::string ProxyInfo::getSubnetId() const
{
    return subnetId_;
}

void ProxyInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ProxyInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ProxyInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ProxyInfo::getSecondsLevelMonitorFunStatus() const
{
    return secondsLevelMonitorFunStatus_;
}

void ProxyInfo::setSecondsLevelMonitorFunStatus(const std::string& value)
{
    secondsLevelMonitorFunStatus_ = value;
    secondsLevelMonitorFunStatusIsSet_ = true;
}

bool ProxyInfo::secondsLevelMonitorFunStatusIsSet() const
{
    return secondsLevelMonitorFunStatusIsSet_;
}

void ProxyInfo::unsetsecondsLevelMonitorFunStatus()
{
    secondsLevelMonitorFunStatusIsSet_ = false;
}

bool ProxyInfo::isAltFlag() const
{
    return altFlag_;
}

void ProxyInfo::setAltFlag(bool value)
{
    altFlag_ = value;
    altFlagIsSet_ = true;
}

bool ProxyInfo::altFlagIsSet() const
{
    return altFlagIsSet_;
}

void ProxyInfo::unsetaltFlag()
{
    altFlagIsSet_ = false;
}

bool ProxyInfo::isForceReadOnly() const
{
    return forceReadOnly_;
}

void ProxyInfo::setForceReadOnly(bool value)
{
    forceReadOnly_ = value;
    forceReadOnlyIsSet_ = true;
}

bool ProxyInfo::forceReadOnlyIsSet() const
{
    return forceReadOnlyIsSet_;
}

void ProxyInfo::unsetforceReadOnly()
{
    forceReadOnlyIsSet_ = false;
}

int32_t ProxyInfo::getRouteMode() const
{
    return routeMode_;
}

void ProxyInfo::setRouteMode(int32_t value)
{
    routeMode_ = value;
    routeModeIsSet_ = true;
}

bool ProxyInfo::routeModeIsSet() const
{
    return routeModeIsSet_;
}

void ProxyInfo::unsetrouteMode()
{
    routeModeIsSet_ = false;
}

bool ProxyInfo::isSslOption() const
{
    return sslOption_;
}

void ProxyInfo::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool ProxyInfo::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void ProxyInfo::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

bool ProxyInfo::isSupportBalanceRouteMode() const
{
    return supportBalanceRouteMode_;
}

void ProxyInfo::setSupportBalanceRouteMode(bool value)
{
    supportBalanceRouteMode_ = value;
    supportBalanceRouteModeIsSet_ = true;
}

bool ProxyInfo::supportBalanceRouteModeIsSet() const
{
    return supportBalanceRouteModeIsSet_;
}

void ProxyInfo::unsetsupportBalanceRouteMode()
{
    supportBalanceRouteModeIsSet_ = false;
}

bool ProxyInfo::isSupportProxySsl() const
{
    return supportProxySsl_;
}

void ProxyInfo::setSupportProxySsl(bool value)
{
    supportProxySsl_ = value;
    supportProxySslIsSet_ = true;
}

bool ProxyInfo::supportProxySslIsSet() const
{
    return supportProxySslIsSet_;
}

void ProxyInfo::unsetsupportProxySsl()
{
    supportProxySslIsSet_ = false;
}

bool ProxyInfo::isSupportSwitchConnectionPoolType() const
{
    return supportSwitchConnectionPoolType_;
}

void ProxyInfo::setSupportSwitchConnectionPoolType(bool value)
{
    supportSwitchConnectionPoolType_ = value;
    supportSwitchConnectionPoolTypeIsSet_ = true;
}

bool ProxyInfo::supportSwitchConnectionPoolTypeIsSet() const
{
    return supportSwitchConnectionPoolTypeIsSet_;
}

void ProxyInfo::unsetsupportSwitchConnectionPoolType()
{
    supportSwitchConnectionPoolTypeIsSet_ = false;
}

bool ProxyInfo::isSupportTransactionSplit() const
{
    return supportTransactionSplit_;
}

void ProxyInfo::setSupportTransactionSplit(bool value)
{
    supportTransactionSplit_ = value;
    supportTransactionSplitIsSet_ = true;
}

bool ProxyInfo::supportTransactionSplitIsSet() const
{
    return supportTransactionSplitIsSet_;
}

void ProxyInfo::unsetsupportTransactionSplit()
{
    supportTransactionSplitIsSet_ = false;
}

}
}
}
}
}


