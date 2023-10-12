

#include "huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSecurityGroupRulesResponse::NeutronListSecurityGroupRulesResponse()
{
    securityGroupRulesIsSet_ = false;
    securityGroupRulesLinksIsSet_ = false;
}

NeutronListSecurityGroupRulesResponse::~NeutronListSecurityGroupRulesResponse() = default;

void NeutronListSecurityGroupRulesResponse::validate()
{
}

web::json::value NeutronListSecurityGroupRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRulesIsSet_) {
        val[utility::conversions::to_string_t("security_group_rules")] = ModelBase::toJson(securityGroupRules_);
    }
    if(securityGroupRulesLinksIsSet_) {
        val[utility::conversions::to_string_t("security_group_rules_links")] = ModelBase::toJson(securityGroupRulesLinks_);
    }

    return val;
}
bool NeutronListSecurityGroupRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronSecurityGroupRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_rules_links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rules_links"));
        if(!fieldValue.is_null())
        {
            std::vector<NeutronPageLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRulesLinks(refVal);
        }
    }
    return ok;
}


std::vector<NeutronSecurityGroupRule>& NeutronListSecurityGroupRulesResponse::getSecurityGroupRules()
{
    return securityGroupRules_;
}

void NeutronListSecurityGroupRulesResponse::setSecurityGroupRules(const std::vector<NeutronSecurityGroupRule>& value)
{
    securityGroupRules_ = value;
    securityGroupRulesIsSet_ = true;
}

bool NeutronListSecurityGroupRulesResponse::securityGroupRulesIsSet() const
{
    return securityGroupRulesIsSet_;
}

void NeutronListSecurityGroupRulesResponse::unsetsecurityGroupRules()
{
    securityGroupRulesIsSet_ = false;
}

std::vector<NeutronPageLink>& NeutronListSecurityGroupRulesResponse::getSecurityGroupRulesLinks()
{
    return securityGroupRulesLinks_;
}

void NeutronListSecurityGroupRulesResponse::setSecurityGroupRulesLinks(const std::vector<NeutronPageLink>& value)
{
    securityGroupRulesLinks_ = value;
    securityGroupRulesLinksIsSet_ = true;
}

bool NeutronListSecurityGroupRulesResponse::securityGroupRulesLinksIsSet() const
{
    return securityGroupRulesLinksIsSet_;
}

void NeutronListSecurityGroupRulesResponse::unsetsecurityGroupRulesLinks()
{
    securityGroupRulesLinksIsSet_ = false;
}

}
}
}
}
}


