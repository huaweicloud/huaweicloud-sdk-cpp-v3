

#include "huaweicloud/vpc/v2/model/NeutronUpdatePortOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdatePortOption::NeutronUpdatePortOption()
{
    name_ = "";
    nameIsSet_ = false;
    securityGroupsIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
    portSecurityEnabled_ = false;
    portSecurityEnabledIsSet_ = false;
    bindingvnicType_ = "";
    bindingvnicTypeIsSet_ = false;
    bindingprofileIsSet_ = false;
}

NeutronUpdatePortOption::~NeutronUpdatePortOption() = default;

void NeutronUpdatePortOption::validate()
{
}

web::json::value NeutronUpdatePortOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(allowedAddressPairsIsSet_) {
        val[utility::conversions::to_string_t("allowed_address_pairs")] = ModelBase::toJson(allowedAddressPairs_);
    }
    if(extraDhcpOptsIsSet_) {
        val[utility::conversions::to_string_t("extra_dhcp_opts")] = ModelBase::toJson(extraDhcpOpts_);
    }
    if(portSecurityEnabledIsSet_) {
        val[utility::conversions::to_string_t("port_security_enabled")] = ModelBase::toJson(portSecurityEnabled_);
    }
    if(bindingvnicTypeIsSet_) {
        val[utility::conversions::to_string_t("binding:vnic_type")] = ModelBase::toJson(bindingvnicType_);
    }
    if(bindingprofileIsSet_) {
        val[utility::conversions::to_string_t("binding:profile")] = ModelBase::toJson(bindingprofile_);
    }

    return val;
}
bool NeutronUpdatePortOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allowed_address_pairs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_address_pairs"));
        if(!fieldValue.is_null())
        {
            std::vector<AllowedAddressPair> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedAddressPairs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_dhcp_opts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_dhcp_opts"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtraDhcpOpt> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraDhcpOpts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_security_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_security_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortSecurityEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binding:vnic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:vnic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingvnicType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binding:profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding:profile"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingprofile(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdatePortOption::getName() const
{
    return name_;
}

void NeutronUpdatePortOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdatePortOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdatePortOption::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& NeutronUpdatePortOption::getSecurityGroups()
{
    return securityGroups_;
}

void NeutronUpdatePortOption::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NeutronUpdatePortOption::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NeutronUpdatePortOption::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<AllowedAddressPair>& NeutronUpdatePortOption::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void NeutronUpdatePortOption::setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool NeutronUpdatePortOption::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void NeutronUpdatePortOption::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

std::vector<ExtraDhcpOpt>& NeutronUpdatePortOption::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void NeutronUpdatePortOption::setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool NeutronUpdatePortOption::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void NeutronUpdatePortOption::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

bool NeutronUpdatePortOption::isPortSecurityEnabled() const
{
    return portSecurityEnabled_;
}

void NeutronUpdatePortOption::setPortSecurityEnabled(bool value)
{
    portSecurityEnabled_ = value;
    portSecurityEnabledIsSet_ = true;
}

bool NeutronUpdatePortOption::portSecurityEnabledIsSet() const
{
    return portSecurityEnabledIsSet_;
}

void NeutronUpdatePortOption::unsetportSecurityEnabled()
{
    portSecurityEnabledIsSet_ = false;
}

std::string NeutronUpdatePortOption::getBindingvnicType() const
{
    return bindingvnicType_;
}

void NeutronUpdatePortOption::setBindingvnicType(const std::string& value)
{
    bindingvnicType_ = value;
    bindingvnicTypeIsSet_ = true;
}

bool NeutronUpdatePortOption::bindingvnicTypeIsSet() const
{
    return bindingvnicTypeIsSet_;
}

void NeutronUpdatePortOption::unsetbindingvnicType()
{
    bindingvnicTypeIsSet_ = false;
}

std::map<std::string, Object>& NeutronUpdatePortOption::getBindingprofile()
{
    return bindingprofile_;
}

void NeutronUpdatePortOption::setBindingprofile(const std::map<std::string, Object>& value)
{
    bindingprofile_ = value;
    bindingprofileIsSet_ = true;
}

bool NeutronUpdatePortOption::bindingprofileIsSet() const
{
    return bindingprofileIsSet_;
}

void NeutronUpdatePortOption::unsetbindingprofile()
{
    bindingprofileIsSet_ = false;
}

}
}
}
}
}


