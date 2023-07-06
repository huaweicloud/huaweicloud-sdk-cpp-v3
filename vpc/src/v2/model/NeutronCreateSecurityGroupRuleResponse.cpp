

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupRuleResponse::NeutronCreateSecurityGroupRuleResponse()
{
    securityGroupRuleIsSet_ = false;
}

NeutronCreateSecurityGroupRuleResponse::~NeutronCreateSecurityGroupRuleResponse() = default;

void NeutronCreateSecurityGroupRuleResponse::validate()
{
}

web::json::value NeutronCreateSecurityGroupRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule")] = ModelBase::toJson(securityGroupRule_);
    }

    return val;
}

bool NeutronCreateSecurityGroupRuleResponse::fromJson(const web::json::value& val)
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

NeutronSecurityGroupRule NeutronCreateSecurityGroupRuleResponse::getSecurityGroupRule() const
{
    return securityGroupRule_;
}

void NeutronCreateSecurityGroupRuleResponse::setSecurityGroupRule(const NeutronSecurityGroupRule& value)
{
    securityGroupRule_ = value;
    securityGroupRuleIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleResponse::securityGroupRuleIsSet() const
{
    return securityGroupRuleIsSet_;
}

void NeutronCreateSecurityGroupRuleResponse::unsetsecurityGroupRule()
{
    securityGroupRuleIsSet_ = false;
}

}
}
}
}
}


