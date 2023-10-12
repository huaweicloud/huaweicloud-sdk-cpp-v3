

#include "huaweicloud/rds/v3/model/Proxy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Proxy::Proxy()
{
    poolId_ = "";
    poolIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    elbVip_ = "";
    elbVipIsSet_ = false;
    eip_ = "";
    eipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    poolStatus_ = "";
    poolStatusIsSet_ = false;
    delayThresholdInKilobytes_ = 0;
    delayThresholdInKilobytesIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    nodesIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

Proxy::~Proxy() = default;

void Proxy::validate()
{
}

web::json::value Proxy::toJson() const
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
    if(elbVipIsSet_) {
        val[utility::conversions::to_string_t("elb_vip")] = ModelBase::toJson(elbVip_);
    }
    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(poolStatusIsSet_) {
        val[utility::conversions::to_string_t("pool_status")] = ModelBase::toJson(poolStatus_);
    }
    if(delayThresholdInKilobytesIsSet_) {
        val[utility::conversions::to_string_t("delay_threshold_in_kilobytes")] = ModelBase::toJson(delayThresholdInKilobytes_);
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

    return val;
}
bool Proxy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("delay_threshold_in_kilobytes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay_threshold_in_kilobytes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelayThresholdInKilobytes(refVal);
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
            std::vector<ProxyNode> refVal;
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
    return ok;
}


std::string Proxy::getPoolId() const
{
    return poolId_;
}

void Proxy::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool Proxy::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void Proxy::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string Proxy::getStatus() const
{
    return status_;
}

void Proxy::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Proxy::statusIsSet() const
{
    return statusIsSet_;
}

void Proxy::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Proxy::getAddress() const
{
    return address_;
}

void Proxy::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool Proxy::addressIsSet() const
{
    return addressIsSet_;
}

void Proxy::unsetaddress()
{
    addressIsSet_ = false;
}

std::string Proxy::getElbVip() const
{
    return elbVip_;
}

void Proxy::setElbVip(const std::string& value)
{
    elbVip_ = value;
    elbVipIsSet_ = true;
}

bool Proxy::elbVipIsSet() const
{
    return elbVipIsSet_;
}

void Proxy::unsetelbVip()
{
    elbVipIsSet_ = false;
}

std::string Proxy::getEip() const
{
    return eip_;
}

void Proxy::setEip(const std::string& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool Proxy::eipIsSet() const
{
    return eipIsSet_;
}

void Proxy::unseteip()
{
    eipIsSet_ = false;
}

int32_t Proxy::getPort() const
{
    return port_;
}

void Proxy::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool Proxy::portIsSet() const
{
    return portIsSet_;
}

void Proxy::unsetport()
{
    portIsSet_ = false;
}

std::string Proxy::getPoolStatus() const
{
    return poolStatus_;
}

void Proxy::setPoolStatus(const std::string& value)
{
    poolStatus_ = value;
    poolStatusIsSet_ = true;
}

bool Proxy::poolStatusIsSet() const
{
    return poolStatusIsSet_;
}

void Proxy::unsetpoolStatus()
{
    poolStatusIsSet_ = false;
}

int32_t Proxy::getDelayThresholdInKilobytes() const
{
    return delayThresholdInKilobytes_;
}

void Proxy::setDelayThresholdInKilobytes(int32_t value)
{
    delayThresholdInKilobytes_ = value;
    delayThresholdInKilobytesIsSet_ = true;
}

bool Proxy::delayThresholdInKilobytesIsSet() const
{
    return delayThresholdInKilobytesIsSet_;
}

void Proxy::unsetdelayThresholdInKilobytes()
{
    delayThresholdInKilobytesIsSet_ = false;
}

std::string Proxy::getCpu() const
{
    return cpu_;
}

void Proxy::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool Proxy::cpuIsSet() const
{
    return cpuIsSet_;
}

void Proxy::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string Proxy::getMem() const
{
    return mem_;
}

void Proxy::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool Proxy::memIsSet() const
{
    return memIsSet_;
}

void Proxy::unsetmem()
{
    memIsSet_ = false;
}

int32_t Proxy::getNodeNum() const
{
    return nodeNum_;
}

void Proxy::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool Proxy::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void Proxy::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::vector<ProxyNode>& Proxy::getNodes()
{
    return nodes_;
}

void Proxy::setNodes(const std::vector<ProxyNode>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool Proxy::nodesIsSet() const
{
    return nodesIsSet_;
}

void Proxy::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string Proxy::getMode() const
{
    return mode_;
}

void Proxy::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool Proxy::modeIsSet() const
{
    return modeIsSet_;
}

void Proxy::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


