

#include "huaweicloud/modelarts/v1/model/NodeNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeNetwork::NodeNetwork()
{
    vpc_ = "";
    vpcIsSet_ = false;
    subnet_ = "";
    subnetIsSet_ = false;
    securityGroupsIsSet_ = false;
}

NodeNetwork::~NodeNetwork() = default;

void NodeNetwork::validate()
{
}

web::json::value NodeNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }
    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("securityGroups")] = ModelBase::toJson(securityGroups_);
    }

    return val;
}
bool NodeNetwork::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("securityGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securityGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    return ok;
}


std::string NodeNetwork::getVpc() const
{
    return vpc_;
}

void NodeNetwork::setVpc(const std::string& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool NodeNetwork::vpcIsSet() const
{
    return vpcIsSet_;
}

void NodeNetwork::unsetvpc()
{
    vpcIsSet_ = false;
}

std::string NodeNetwork::getSubnet() const
{
    return subnet_;
}

void NodeNetwork::setSubnet(const std::string& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool NodeNetwork::subnetIsSet() const
{
    return subnetIsSet_;
}

void NodeNetwork::unsetsubnet()
{
    subnetIsSet_ = false;
}

std::vector<std::string>& NodeNetwork::getSecurityGroups()
{
    return securityGroups_;
}

void NodeNetwork::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NodeNetwork::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NodeNetwork::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

}
}
}
}
}


