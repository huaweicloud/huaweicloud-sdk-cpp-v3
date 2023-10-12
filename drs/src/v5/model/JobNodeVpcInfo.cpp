

#include "huaweicloud/drs/v5/model/JobNodeVpcInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobNodeVpcInfo::JobNodeVpcInfo()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    customNodeIp_ = "";
    customNodeIpIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

JobNodeVpcInfo::~JobNodeVpcInfo() = default;

void JobNodeVpcInfo::validate()
{
}

web::json::value JobNodeVpcInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(customNodeIpIsSet_) {
        val[utility::conversions::to_string_t("custom_node_ip")] = ModelBase::toJson(customNodeIp_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool JobNodeVpcInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("custom_node_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_node_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomNodeIp(refVal);
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
    return ok;
}


std::string JobNodeVpcInfo::getVpcId() const
{
    return vpcId_;
}

void JobNodeVpcInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool JobNodeVpcInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void JobNodeVpcInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string JobNodeVpcInfo::getSubnetId() const
{
    return subnetId_;
}

void JobNodeVpcInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool JobNodeVpcInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void JobNodeVpcInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string JobNodeVpcInfo::getCustomNodeIp() const
{
    return customNodeIp_;
}

void JobNodeVpcInfo::setCustomNodeIp(const std::string& value)
{
    customNodeIp_ = value;
    customNodeIpIsSet_ = true;
}

bool JobNodeVpcInfo::customNodeIpIsSet() const
{
    return customNodeIpIsSet_;
}

void JobNodeVpcInfo::unsetcustomNodeIp()
{
    customNodeIpIsSet_ = false;
}

std::string JobNodeVpcInfo::getSecurityGroupId() const
{
    return securityGroupId_;
}

void JobNodeVpcInfo::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool JobNodeVpcInfo::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void JobNodeVpcInfo::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


