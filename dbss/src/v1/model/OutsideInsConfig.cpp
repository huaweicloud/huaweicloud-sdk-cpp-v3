

#include "huaweicloud/dbss/v1/model/OutsideInsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




OutsideInsConfig::OutsideInsConfig()
{
    masterNodeIp_ = "";
    masterNodeIpIsSet_ = false;
    slaveNodeIp_ = "";
    slaveNodeIpIsSet_ = false;
    virtualIp_ = "";
    virtualIpIsSet_ = false;
}

OutsideInsConfig::~OutsideInsConfig() = default;

void OutsideInsConfig::validate()
{
}

web::json::value OutsideInsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(masterNodeIpIsSet_) {
        val[utility::conversions::to_string_t("master_node_ip")] = ModelBase::toJson(masterNodeIp_);
    }
    if(slaveNodeIpIsSet_) {
        val[utility::conversions::to_string_t("slave_node_ip")] = ModelBase::toJson(slaveNodeIp_);
    }
    if(virtualIpIsSet_) {
        val[utility::conversions::to_string_t("virtual_ip")] = ModelBase::toJson(virtualIp_);
    }

    return val;
}
bool OutsideInsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("master_node_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_node_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterNodeIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_node_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_node_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveNodeIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtual_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualIp(refVal);
        }
    }
    return ok;
}


std::string OutsideInsConfig::getMasterNodeIp() const
{
    return masterNodeIp_;
}

void OutsideInsConfig::setMasterNodeIp(const std::string& value)
{
    masterNodeIp_ = value;
    masterNodeIpIsSet_ = true;
}

bool OutsideInsConfig::masterNodeIpIsSet() const
{
    return masterNodeIpIsSet_;
}

void OutsideInsConfig::unsetmasterNodeIp()
{
    masterNodeIpIsSet_ = false;
}

std::string OutsideInsConfig::getSlaveNodeIp() const
{
    return slaveNodeIp_;
}

void OutsideInsConfig::setSlaveNodeIp(const std::string& value)
{
    slaveNodeIp_ = value;
    slaveNodeIpIsSet_ = true;
}

bool OutsideInsConfig::slaveNodeIpIsSet() const
{
    return slaveNodeIpIsSet_;
}

void OutsideInsConfig::unsetslaveNodeIp()
{
    slaveNodeIpIsSet_ = false;
}

std::string OutsideInsConfig::getVirtualIp() const
{
    return virtualIp_;
}

void OutsideInsConfig::setVirtualIp(const std::string& value)
{
    virtualIp_ = value;
    virtualIpIsSet_ = true;
}

bool OutsideInsConfig::virtualIpIsSet() const
{
    return virtualIpIsSet_;
}

void OutsideInsConfig::unsetvirtualIp()
{
    virtualIpIsSet_ = false;
}

}
}
}
}
}


