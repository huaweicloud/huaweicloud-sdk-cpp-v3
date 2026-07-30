

#include "huaweicloud/modelarts/v1/model/ServerNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerNetwork::ServerNetwork()
{
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    roceId_ = "";
    roceIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    hyperClusterIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
}

ServerNetwork::~ServerNetwork() = default;

void ServerNetwork::validate()
{
}

web::json::value ServerNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }
    if(roceIdIsSet_) {
        val[utility::conversions::to_string_t("roce_id")] = ModelBase::toJson(roceId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(hyperClusterIsSet_) {
        val[utility::conversions::to_string_t("hyper_cluster")] = ModelBase::toJson(hyperCluster_);
    }
    if(allowedAddressPairsIsSet_) {
        val[utility::conversions::to_string_t("allowed_address_pairs")] = ModelBase::toJson(allowedAddressPairs_);
    }

    return val;
}
bool ServerNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ipv6_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roce_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roce_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hyper_cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyper_cluster"));
        if(!fieldValue.is_null())
        {
            ServerNetwork_hyper_cluster refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_address_pairs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_address_pairs"));
        if(!fieldValue.is_null())
        {
            std::vector<AllowedAddressPairs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedAddressPairs(refVal);
        }
    }
    return ok;
}


bool ServerNetwork::isIpv6Enable() const
{
    return ipv6Enable_;
}

void ServerNetwork::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool ServerNetwork::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void ServerNetwork::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

std::string ServerNetwork::getRoceId() const
{
    return roceId_;
}

void ServerNetwork::setRoceId(const std::string& value)
{
    roceId_ = value;
    roceIdIsSet_ = true;
}

bool ServerNetwork::roceIdIsSet() const
{
    return roceIdIsSet_;
}

void ServerNetwork::unsetroceId()
{
    roceIdIsSet_ = false;
}

std::string ServerNetwork::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ServerNetwork::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ServerNetwork::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ServerNetwork::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ServerNetwork::getSubnetId() const
{
    return subnetId_;
}

void ServerNetwork::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ServerNetwork::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ServerNetwork::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ServerNetwork::getVpcId() const
{
    return vpcId_;
}

void ServerNetwork::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ServerNetwork::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ServerNetwork::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

ServerNetwork_hyper_cluster ServerNetwork::getHyperCluster() const
{
    return hyperCluster_;
}

void ServerNetwork::setHyperCluster(const ServerNetwork_hyper_cluster& value)
{
    hyperCluster_ = value;
    hyperClusterIsSet_ = true;
}

bool ServerNetwork::hyperClusterIsSet() const
{
    return hyperClusterIsSet_;
}

void ServerNetwork::unsethyperCluster()
{
    hyperClusterIsSet_ = false;
}

std::vector<AllowedAddressPairs>& ServerNetwork::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void ServerNetwork::setAllowedAddressPairs(const std::vector<AllowedAddressPairs>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool ServerNetwork::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void ServerNetwork::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

}
}
}
}
}


