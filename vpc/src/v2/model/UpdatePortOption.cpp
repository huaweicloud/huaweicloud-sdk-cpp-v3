

#include "huaweicloud/vpc/v2/model/UpdatePortOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdatePortOption::UpdatePortOption()
{
    name_ = "";
    nameIsSet_ = false;
    securityGroupsIsSet_ = false;
    allowedAddressPairsIsSet_ = false;
    extraDhcpOptsIsSet_ = false;
}

UpdatePortOption::~UpdatePortOption() = default;

void UpdatePortOption::validate()
{
}

web::json::value UpdatePortOption::toJson() const
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

    return val;
}
bool UpdatePortOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdatePortOption::getName() const
{
    return name_;
}

void UpdatePortOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdatePortOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdatePortOption::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdatePortOption::getSecurityGroups()
{
    return securityGroups_;
}

void UpdatePortOption::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool UpdatePortOption::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void UpdatePortOption::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<AllowedAddressPair>& UpdatePortOption::getAllowedAddressPairs()
{
    return allowedAddressPairs_;
}

void UpdatePortOption::setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value)
{
    allowedAddressPairs_ = value;
    allowedAddressPairsIsSet_ = true;
}

bool UpdatePortOption::allowedAddressPairsIsSet() const
{
    return allowedAddressPairsIsSet_;
}

void UpdatePortOption::unsetallowedAddressPairs()
{
    allowedAddressPairsIsSet_ = false;
}

std::vector<ExtraDhcpOpt>& UpdatePortOption::getExtraDhcpOpts()
{
    return extraDhcpOpts_;
}

void UpdatePortOption::setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value)
{
    extraDhcpOpts_ = value;
    extraDhcpOptsIsSet_ = true;
}

bool UpdatePortOption::extraDhcpOptsIsSet() const
{
    return extraDhcpOptsIsSet_;
}

void UpdatePortOption::unsetextraDhcpOpts()
{
    extraDhcpOptsIsSet_ = false;
}

}
}
}
}
}


