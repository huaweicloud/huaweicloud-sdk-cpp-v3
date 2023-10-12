

#include "huaweicloud/gaussdb/v3/model/MysqlProxyV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyV3::MysqlProxyV3()
{
    poolId_ = "";
    poolIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    poolStatus_ = "";
    poolStatusIsSet_ = false;
    delayThresholdInSeconds_ = 0;
    delayThresholdInSecondsIsSet_ = false;
    elbVip_ = "";
    elbVipIsSet_ = false;
    eip_ = "";
    eipIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    nodesIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    transactionSplit_ = "";
    transactionSplitIsSet_ = false;
    connectionPoolType_ = "";
    connectionPoolTypeIsSet_ = false;
    switchConnectionPoolTypeEnabled_ = false;
    switchConnectionPoolTypeEnabledIsSet_ = false;
    routeMode_ = 0;
    routeModeIsSet_ = false;
    balanceRouteModeEnabled_ = false;
    balanceRouteModeEnabledIsSet_ = false;
    consistenceMode_ = "";
    consistenceModeIsSet_ = false;
}

MysqlProxyV3::~MysqlProxyV3() = default;

void MysqlProxyV3::validate()
{
}

web::json::value MysqlProxyV3::toJson() const
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
    if(poolStatusIsSet_) {
        val[utility::conversions::to_string_t("pool_status")] = ModelBase::toJson(poolStatus_);
    }
    if(delayThresholdInSecondsIsSet_) {
        val[utility::conversions::to_string_t("delay_threshold_in_seconds")] = ModelBase::toJson(delayThresholdInSeconds_);
    }
    if(elbVipIsSet_) {
        val[utility::conversions::to_string_t("elb_vip")] = ModelBase::toJson(elbVip_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(transactionSplitIsSet_) {
        val[utility::conversions::to_string_t("transaction_split")] = ModelBase::toJson(transactionSplit_);
    }
    if(connectionPoolTypeIsSet_) {
        val[utility::conversions::to_string_t("connection_pool_type")] = ModelBase::toJson(connectionPoolType_);
    }
    if(switchConnectionPoolTypeEnabledIsSet_) {
        val[utility::conversions::to_string_t("switch_connection_pool_type_enabled")] = ModelBase::toJson(switchConnectionPoolTypeEnabled_);
    }
    if(routeModeIsSet_) {
        val[utility::conversions::to_string_t("route_mode")] = ModelBase::toJson(routeMode_);
    }
    if(balanceRouteModeEnabledIsSet_) {
        val[utility::conversions::to_string_t("balance_route_mode_enabled")] = ModelBase::toJson(balanceRouteModeEnabled_);
    }
    if(consistenceModeIsSet_) {
        val[utility::conversions::to_string_t("consistence_mode")] = ModelBase::toJson(consistenceMode_);
    }

    return val;
}
bool MysqlProxyV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pool_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("elb_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyNodes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("switch_connection_pool_type_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_connection_pool_type_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchConnectionPoolTypeEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("balance_route_mode_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("balance_route_mode_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBalanceRouteModeEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistence_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistence_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistenceMode(refVal);
        }
    }
    return ok;
}


std::string MysqlProxyV3::getPoolId() const
{
    return poolId_;
}

void MysqlProxyV3::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool MysqlProxyV3::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void MysqlProxyV3::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string MysqlProxyV3::getStatus() const
{
    return status_;
}

void MysqlProxyV3::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlProxyV3::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlProxyV3::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MysqlProxyV3::getAddress() const
{
    return address_;
}

void MysqlProxyV3::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool MysqlProxyV3::addressIsSet() const
{
    return addressIsSet_;
}

void MysqlProxyV3::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t MysqlProxyV3::getPort() const
{
    return port_;
}

void MysqlProxyV3::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool MysqlProxyV3::portIsSet() const
{
    return portIsSet_;
}

void MysqlProxyV3::unsetport()
{
    portIsSet_ = false;
}

std::string MysqlProxyV3::getPoolStatus() const
{
    return poolStatus_;
}

void MysqlProxyV3::setPoolStatus(const std::string& value)
{
    poolStatus_ = value;
    poolStatusIsSet_ = true;
}

bool MysqlProxyV3::poolStatusIsSet() const
{
    return poolStatusIsSet_;
}

void MysqlProxyV3::unsetpoolStatus()
{
    poolStatusIsSet_ = false;
}

int32_t MysqlProxyV3::getDelayThresholdInSeconds() const
{
    return delayThresholdInSeconds_;
}

void MysqlProxyV3::setDelayThresholdInSeconds(int32_t value)
{
    delayThresholdInSeconds_ = value;
    delayThresholdInSecondsIsSet_ = true;
}

bool MysqlProxyV3::delayThresholdInSecondsIsSet() const
{
    return delayThresholdInSecondsIsSet_;
}

void MysqlProxyV3::unsetdelayThresholdInSeconds()
{
    delayThresholdInSecondsIsSet_ = false;
}

std::string MysqlProxyV3::getElbVip() const
{
    return elbVip_;
}

void MysqlProxyV3::setElbVip(const std::string& value)
{
    elbVip_ = value;
    elbVipIsSet_ = true;
}

bool MysqlProxyV3::elbVipIsSet() const
{
    return elbVipIsSet_;
}

void MysqlProxyV3::unsetelbVip()
{
    elbVipIsSet_ = false;
}

std::string MysqlProxyV3::getEip() const
{
    return eip_;
}

void MysqlProxyV3::setEip(const std::string& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool MysqlProxyV3::eipIsSet() const
{
    return eipIsSet_;
}

void MysqlProxyV3::unseteip()
{
    eipIsSet_ = false;
}

std::string MysqlProxyV3::getVcpus() const
{
    return vcpus_;
}

void MysqlProxyV3::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool MysqlProxyV3::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void MysqlProxyV3::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string MysqlProxyV3::getRam() const
{
    return ram_;
}

void MysqlProxyV3::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool MysqlProxyV3::ramIsSet() const
{
    return ramIsSet_;
}

void MysqlProxyV3::unsetram()
{
    ramIsSet_ = false;
}

int32_t MysqlProxyV3::getNodeNum() const
{
    return nodeNum_;
}

void MysqlProxyV3::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool MysqlProxyV3::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void MysqlProxyV3::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string MysqlProxyV3::getMode() const
{
    return mode_;
}

void MysqlProxyV3::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool MysqlProxyV3::modeIsSet() const
{
    return modeIsSet_;
}

void MysqlProxyV3::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<MysqlProxyNodes>& MysqlProxyV3::getNodes()
{
    return nodes_;
}

void MysqlProxyV3::setNodes(const std::vector<MysqlProxyNodes>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool MysqlProxyV3::nodesIsSet() const
{
    return nodesIsSet_;
}

void MysqlProxyV3::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string MysqlProxyV3::getFlavorRef() const
{
    return flavorRef_;
}

void MysqlProxyV3::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool MysqlProxyV3::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void MysqlProxyV3::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string MysqlProxyV3::getName() const
{
    return name_;
}

void MysqlProxyV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlProxyV3::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlProxyV3::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlProxyV3::getTransactionSplit() const
{
    return transactionSplit_;
}

void MysqlProxyV3::setTransactionSplit(const std::string& value)
{
    transactionSplit_ = value;
    transactionSplitIsSet_ = true;
}

bool MysqlProxyV3::transactionSplitIsSet() const
{
    return transactionSplitIsSet_;
}

void MysqlProxyV3::unsettransactionSplit()
{
    transactionSplitIsSet_ = false;
}

std::string MysqlProxyV3::getConnectionPoolType() const
{
    return connectionPoolType_;
}

void MysqlProxyV3::setConnectionPoolType(const std::string& value)
{
    connectionPoolType_ = value;
    connectionPoolTypeIsSet_ = true;
}

bool MysqlProxyV3::connectionPoolTypeIsSet() const
{
    return connectionPoolTypeIsSet_;
}

void MysqlProxyV3::unsetconnectionPoolType()
{
    connectionPoolTypeIsSet_ = false;
}

bool MysqlProxyV3::isSwitchConnectionPoolTypeEnabled() const
{
    return switchConnectionPoolTypeEnabled_;
}

void MysqlProxyV3::setSwitchConnectionPoolTypeEnabled(bool value)
{
    switchConnectionPoolTypeEnabled_ = value;
    switchConnectionPoolTypeEnabledIsSet_ = true;
}

bool MysqlProxyV3::switchConnectionPoolTypeEnabledIsSet() const
{
    return switchConnectionPoolTypeEnabledIsSet_;
}

void MysqlProxyV3::unsetswitchConnectionPoolTypeEnabled()
{
    switchConnectionPoolTypeEnabledIsSet_ = false;
}

int32_t MysqlProxyV3::getRouteMode() const
{
    return routeMode_;
}

void MysqlProxyV3::setRouteMode(int32_t value)
{
    routeMode_ = value;
    routeModeIsSet_ = true;
}

bool MysqlProxyV3::routeModeIsSet() const
{
    return routeModeIsSet_;
}

void MysqlProxyV3::unsetrouteMode()
{
    routeModeIsSet_ = false;
}

bool MysqlProxyV3::isBalanceRouteModeEnabled() const
{
    return balanceRouteModeEnabled_;
}

void MysqlProxyV3::setBalanceRouteModeEnabled(bool value)
{
    balanceRouteModeEnabled_ = value;
    balanceRouteModeEnabledIsSet_ = true;
}

bool MysqlProxyV3::balanceRouteModeEnabledIsSet() const
{
    return balanceRouteModeEnabledIsSet_;
}

void MysqlProxyV3::unsetbalanceRouteModeEnabled()
{
    balanceRouteModeEnabledIsSet_ = false;
}

std::string MysqlProxyV3::getConsistenceMode() const
{
    return consistenceMode_;
}

void MysqlProxyV3::setConsistenceMode(const std::string& value)
{
    consistenceMode_ = value;
    consistenceModeIsSet_ = true;
}

bool MysqlProxyV3::consistenceModeIsSet() const
{
    return consistenceModeIsSet_;
}

void MysqlProxyV3::unsetconsistenceMode()
{
    consistenceModeIsSet_ = false;
}

}
}
}
}
}


