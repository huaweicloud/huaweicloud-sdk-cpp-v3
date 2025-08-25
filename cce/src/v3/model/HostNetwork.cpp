

#include "huaweicloud/cce/v3/model/HostNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HostNetwork::HostNetwork()
{
    vpc_ = "";
    vpcIsSet_ = false;
    subnet_ = "";
    subnetIsSet_ = false;
    securityGroup_ = "";
    securityGroupIsSet_ = false;
}

HostNetwork::~HostNetwork() = default;

void HostNetwork::validate()
{
}

web::json::value HostNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }
    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }
    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("SecurityGroup")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}
bool HostNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("SecurityGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("SecurityGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}


std::string HostNetwork::getVpc() const
{
    return vpc_;
}

void HostNetwork::setVpc(const std::string& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool HostNetwork::vpcIsSet() const
{
    return vpcIsSet_;
}

void HostNetwork::unsetvpc()
{
    vpcIsSet_ = false;
}

std::string HostNetwork::getSubnet() const
{
    return subnet_;
}

void HostNetwork::setSubnet(const std::string& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool HostNetwork::subnetIsSet() const
{
    return subnetIsSet_;
}

void HostNetwork::unsetsubnet()
{
    subnetIsSet_ = false;
}

std::string HostNetwork::getSecurityGroup() const
{
    return securityGroup_;
}

void HostNetwork::setSecurityGroup(const std::string& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool HostNetwork::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void HostNetwork::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}


