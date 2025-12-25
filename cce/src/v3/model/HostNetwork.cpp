

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
    controlPlaneSecurityGroup_ = "";
    controlPlaneSecurityGroupIsSet_ = false;
    autoGenerateSecurityGroupHardeningConfigIsSet_ = false;
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
    if(controlPlaneSecurityGroupIsSet_) {
        val[utility::conversions::to_string_t("controlPlaneSecurityGroup")] = ModelBase::toJson(controlPlaneSecurityGroup_);
    }
    if(autoGenerateSecurityGroupHardeningConfigIsSet_) {
        val[utility::conversions::to_string_t("autoGenerateSecurityGroupHardeningConfig")] = ModelBase::toJson(autoGenerateSecurityGroupHardeningConfig_);
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
    if(val.has_field(utility::conversions::to_string_t("controlPlaneSecurityGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("controlPlaneSecurityGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlPlaneSecurityGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoGenerateSecurityGroupHardeningConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoGenerateSecurityGroupHardeningConfig"));
        if(!fieldValue.is_null())
        {
            AutoGenerateSecurityGroupHardeningConfigSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoGenerateSecurityGroupHardeningConfig(refVal);
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

std::string HostNetwork::getControlPlaneSecurityGroup() const
{
    return controlPlaneSecurityGroup_;
}

void HostNetwork::setControlPlaneSecurityGroup(const std::string& value)
{
    controlPlaneSecurityGroup_ = value;
    controlPlaneSecurityGroupIsSet_ = true;
}

bool HostNetwork::controlPlaneSecurityGroupIsSet() const
{
    return controlPlaneSecurityGroupIsSet_;
}

void HostNetwork::unsetcontrolPlaneSecurityGroup()
{
    controlPlaneSecurityGroupIsSet_ = false;
}

AutoGenerateSecurityGroupHardeningConfigSpec HostNetwork::getAutoGenerateSecurityGroupHardeningConfig() const
{
    return autoGenerateSecurityGroupHardeningConfig_;
}

void HostNetwork::setAutoGenerateSecurityGroupHardeningConfig(const AutoGenerateSecurityGroupHardeningConfigSpec& value)
{
    autoGenerateSecurityGroupHardeningConfig_ = value;
    autoGenerateSecurityGroupHardeningConfigIsSet_ = true;
}

bool HostNetwork::autoGenerateSecurityGroupHardeningConfigIsSet() const
{
    return autoGenerateSecurityGroupHardeningConfigIsSet_;
}

void HostNetwork::unsetautoGenerateSecurityGroupHardeningConfig()
{
    autoGenerateSecurityGroupHardeningConfigIsSet_ = false;
}

}
}
}
}
}


