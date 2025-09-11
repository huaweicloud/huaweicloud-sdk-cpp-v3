

#include "huaweicloud/dbss/v1/model/InstanceActivateInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




InstanceActivateInfo::InstanceActivateInfo()
{
    dscProxyDomainName_ = "";
    dscProxyDomainNameIsSet_ = false;
    dscProxyIp_ = "";
    dscProxyIpIsSet_ = false;
    dscProxyPort_ = 0;
    dscProxyPortIsSet_ = false;
    masterNodeId_ = "";
    masterNodeIdIsSet_ = false;
    slaveNodeId_ = "";
    slaveNodeIdIsSet_ = false;
}

InstanceActivateInfo::~InstanceActivateInfo() = default;

void InstanceActivateInfo::validate()
{
}

web::json::value InstanceActivateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dscProxyDomainNameIsSet_) {
        val[utility::conversions::to_string_t("dsc_proxy_domain_name")] = ModelBase::toJson(dscProxyDomainName_);
    }
    if(dscProxyIpIsSet_) {
        val[utility::conversions::to_string_t("dsc_proxy_ip")] = ModelBase::toJson(dscProxyIp_);
    }
    if(dscProxyPortIsSet_) {
        val[utility::conversions::to_string_t("dsc_proxy_port")] = ModelBase::toJson(dscProxyPort_);
    }
    if(masterNodeIdIsSet_) {
        val[utility::conversions::to_string_t("master_node_id")] = ModelBase::toJson(masterNodeId_);
    }
    if(slaveNodeIdIsSet_) {
        val[utility::conversions::to_string_t("slave_node_id")] = ModelBase::toJson(slaveNodeId_);
    }

    return val;
}
bool InstanceActivateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dsc_proxy_domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsc_proxy_domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDscProxyDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsc_proxy_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsc_proxy_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDscProxyIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dsc_proxy_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsc_proxy_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDscProxyPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveNodeId(refVal);
        }
    }
    return ok;
}


std::string InstanceActivateInfo::getDscProxyDomainName() const
{
    return dscProxyDomainName_;
}

void InstanceActivateInfo::setDscProxyDomainName(const std::string& value)
{
    dscProxyDomainName_ = value;
    dscProxyDomainNameIsSet_ = true;
}

bool InstanceActivateInfo::dscProxyDomainNameIsSet() const
{
    return dscProxyDomainNameIsSet_;
}

void InstanceActivateInfo::unsetdscProxyDomainName()
{
    dscProxyDomainNameIsSet_ = false;
}

std::string InstanceActivateInfo::getDscProxyIp() const
{
    return dscProxyIp_;
}

void InstanceActivateInfo::setDscProxyIp(const std::string& value)
{
    dscProxyIp_ = value;
    dscProxyIpIsSet_ = true;
}

bool InstanceActivateInfo::dscProxyIpIsSet() const
{
    return dscProxyIpIsSet_;
}

void InstanceActivateInfo::unsetdscProxyIp()
{
    dscProxyIpIsSet_ = false;
}

int32_t InstanceActivateInfo::getDscProxyPort() const
{
    return dscProxyPort_;
}

void InstanceActivateInfo::setDscProxyPort(int32_t value)
{
    dscProxyPort_ = value;
    dscProxyPortIsSet_ = true;
}

bool InstanceActivateInfo::dscProxyPortIsSet() const
{
    return dscProxyPortIsSet_;
}

void InstanceActivateInfo::unsetdscProxyPort()
{
    dscProxyPortIsSet_ = false;
}

std::string InstanceActivateInfo::getMasterNodeId() const
{
    return masterNodeId_;
}

void InstanceActivateInfo::setMasterNodeId(const std::string& value)
{
    masterNodeId_ = value;
    masterNodeIdIsSet_ = true;
}

bool InstanceActivateInfo::masterNodeIdIsSet() const
{
    return masterNodeIdIsSet_;
}

void InstanceActivateInfo::unsetmasterNodeId()
{
    masterNodeIdIsSet_ = false;
}

std::string InstanceActivateInfo::getSlaveNodeId() const
{
    return slaveNodeId_;
}

void InstanceActivateInfo::setSlaveNodeId(const std::string& value)
{
    slaveNodeId_ = value;
    slaveNodeIdIsSet_ = true;
}

bool InstanceActivateInfo::slaveNodeIdIsSet() const
{
    return slaveNodeIdIsSet_;
}

void InstanceActivateInfo::unsetslaveNodeId()
{
    slaveNodeIdIsSet_ = false;
}

}
}
}
}
}


