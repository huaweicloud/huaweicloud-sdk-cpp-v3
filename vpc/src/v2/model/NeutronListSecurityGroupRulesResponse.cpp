

#include "huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSecurityGroupRulesResponse::NeutronListSecurityGroupRulesResponse()
{
    securityGroupRulesIsSet_ = false;
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

}
}
}
}
}


