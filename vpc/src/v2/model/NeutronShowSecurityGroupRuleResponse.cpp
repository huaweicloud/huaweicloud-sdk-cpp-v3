

#include "huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowSecurityGroupRuleResponse::NeutronShowSecurityGroupRuleResponse()
{
    securityGroupRuleIsSet_ = false;
}

NeutronShowSecurityGroupRuleResponse::~NeutronShowSecurityGroupRuleResponse() = default;

void NeutronShowSecurityGroupRuleResponse::validate()
{
}

web::json::value NeutronShowSecurityGroupRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule")] = ModelBase::toJson(securityGroupRule_);
    }

    return val;
}
bool NeutronShowSecurityGroupRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rule"));
        if(!fieldValue.is_null())
        {
            NeutronSecurityGroupRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRule(refVal);
        }
    }
    return ok;
}


NeutronSecurityGroupRule NeutronShowSecurityGroupRuleResponse::getSecurityGroupRule() const
{
    return securityGroupRule_;
}

void NeutronShowSecurityGroupRuleResponse::setSecurityGroupRule(const NeutronSecurityGroupRule& value)
{
    securityGroupRule_ = value;
    securityGroupRuleIsSet_ = true;
}

bool NeutronShowSecurityGroupRuleResponse::securityGroupRuleIsSet() const
{
    return securityGroupRuleIsSet_;
}

void NeutronShowSecurityGroupRuleResponse::unsetsecurityGroupRule()
{
    securityGroupRuleIsSet_ = false;
}

}
}
}
}
}


