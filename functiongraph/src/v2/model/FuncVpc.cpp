

#include "huaweicloud/functiongraph/v2/model/FuncVpc.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncVpc::FuncVpc()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetName_ = "";
    subnetNameIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    gateway_ = "";
    gatewayIsSet_ = false;
    securityGroupsIsSet_ = false;
    isSafety_ = false;
    isSafetyIsSet_ = false;
}

FuncVpc::~FuncVpc() = default;

void FuncVpc::validate()
{
}

web::json::value FuncVpc::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetNameIsSet_) {
        val[utility::conversions::to_string_t("subnet_name")] = ModelBase::toJson(subnetName_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(gatewayIsSet_) {
        val[utility::conversions::to_string_t("gateway")] = ModelBase::toJson(gateway_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(isSafetyIsSet_) {
        val[utility::conversions::to_string_t("is_safety")] = ModelBase::toJson(isSafety_);
    }

    return val;
}
bool FuncVpc::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGateway(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_safety"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_safety"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSafety(refVal);
        }
    }
    return ok;
}


std::string FuncVpc::getDomainId() const
{
    return domainId_;
}

void FuncVpc::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool FuncVpc::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void FuncVpc::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string FuncVpc::getNamespace() const
{
    return namespace_;
}

void FuncVpc::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool FuncVpc::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void FuncVpc::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string FuncVpc::getVpcName() const
{
    return vpcName_;
}

void FuncVpc::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool FuncVpc::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void FuncVpc::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string FuncVpc::getVpcId() const
{
    return vpcId_;
}

void FuncVpc::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool FuncVpc::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void FuncVpc::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string FuncVpc::getSubnetName() const
{
    return subnetName_;
}

void FuncVpc::setSubnetName(const std::string& value)
{
    subnetName_ = value;
    subnetNameIsSet_ = true;
}

bool FuncVpc::subnetNameIsSet() const
{
    return subnetNameIsSet_;
}

void FuncVpc::unsetsubnetName()
{
    subnetNameIsSet_ = false;
}

std::string FuncVpc::getSubnetId() const
{
    return subnetId_;
}

void FuncVpc::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool FuncVpc::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void FuncVpc::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string FuncVpc::getCidr() const
{
    return cidr_;
}

void FuncVpc::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool FuncVpc::cidrIsSet() const
{
    return cidrIsSet_;
}

void FuncVpc::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string FuncVpc::getGateway() const
{
    return gateway_;
}

void FuncVpc::setGateway(const std::string& value)
{
    gateway_ = value;
    gatewayIsSet_ = true;
}

bool FuncVpc::gatewayIsSet() const
{
    return gatewayIsSet_;
}

void FuncVpc::unsetgateway()
{
    gatewayIsSet_ = false;
}

std::vector<std::string>& FuncVpc::getSecurityGroups()
{
    return securityGroups_;
}

void FuncVpc::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool FuncVpc::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void FuncVpc::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

bool FuncVpc::isIsSafety() const
{
    return isSafety_;
}

void FuncVpc::setIsSafety(bool value)
{
    isSafety_ = value;
    isSafetyIsSet_ = true;
}

bool FuncVpc::isSafetyIsSet() const
{
    return isSafetyIsSet_;
}

void FuncVpc::unsetisSafety()
{
    isSafetyIsSet_ = false;
}

}
}
}
}
}


