

#include "huaweicloud/modelarts/v1/model/UserVpcResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UserVpcResponse::UserVpcResponse()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupIdsIsSet_ = false;
    connectCidrs_ = "";
    connectCidrsIsSet_ = false;
    portIdIsSet_ = false;
    portIp_ = "";
    portIpIsSet_ = false;
}

UserVpcResponse::~UserVpcResponse() = default;

void UserVpcResponse::validate()
{
}

web::json::value UserVpcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("security_group_ids")] = ModelBase::toJson(securityGroupIds_);
    }
    if(connectCidrsIsSet_) {
        val[utility::conversions::to_string_t("connect_cidrs")] = ModelBase::toJson(connectCidrs_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(portIpIsSet_) {
        val[utility::conversions::to_string_t("port_ip")] = ModelBase::toJson(portIp_);
    }

    return val;
}
bool UserVpcResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_cidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_cidrs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectCidrs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortIp(refVal);
        }
    }
    return ok;
}


std::string UserVpcResponse::getVpcId() const
{
    return vpcId_;
}

void UserVpcResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool UserVpcResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void UserVpcResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string UserVpcResponse::getSubnetId() const
{
    return subnetId_;
}

void UserVpcResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool UserVpcResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void UserVpcResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& UserVpcResponse::getSecurityGroupIds()
{
    return securityGroupIds_;
}

void UserVpcResponse::setSecurityGroupIds(const std::vector<std::string>& value)
{
    securityGroupIds_ = value;
    securityGroupIdsIsSet_ = true;
}

bool UserVpcResponse::securityGroupIdsIsSet() const
{
    return securityGroupIdsIsSet_;
}

void UserVpcResponse::unsetsecurityGroupIds()
{
    securityGroupIdsIsSet_ = false;
}

std::string UserVpcResponse::getConnectCidrs() const
{
    return connectCidrs_;
}

void UserVpcResponse::setConnectCidrs(const std::string& value)
{
    connectCidrs_ = value;
    connectCidrsIsSet_ = true;
}

bool UserVpcResponse::connectCidrsIsSet() const
{
    return connectCidrsIsSet_;
}

void UserVpcResponse::unsetconnectCidrs()
{
    connectCidrsIsSet_ = false;
}

std::vector<std::string>& UserVpcResponse::getPortId()
{
    return portId_;
}

void UserVpcResponse::setPortId(const std::vector<std::string>& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool UserVpcResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void UserVpcResponse::unsetportId()
{
    portIdIsSet_ = false;
}

std::string UserVpcResponse::getPortIp() const
{
    return portIp_;
}

void UserVpcResponse::setPortIp(const std::string& value)
{
    portIp_ = value;
    portIpIsSet_ = true;
}

bool UserVpcResponse::portIpIsSet() const
{
    return portIpIsSet_;
}

void UserVpcResponse::unsetportIp()
{
    portIpIsSet_ = false;
}

}
}
}
}
}


