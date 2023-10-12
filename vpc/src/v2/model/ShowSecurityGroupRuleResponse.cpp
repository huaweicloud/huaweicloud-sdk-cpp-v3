

#include "huaweicloud/vpc/v2/model/ShowSecurityGroupRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSecurityGroupRuleResponse::ShowSecurityGroupRuleResponse()
{
    securityGroupRuleIsSet_ = false;
}

ShowSecurityGroupRuleResponse::~ShowSecurityGroupRuleResponse() = default;

void ShowSecurityGroupRuleResponse::validate()
{
}

web::json::value ShowSecurityGroupRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule")] = ModelBase::toJson(securityGroupRule_);
    }

    return val;
}
bool ShowSecurityGroupRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rule"));
        if(!fieldValue.is_null())
        {
            SecurityGroupRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRule(refVal);
        }
    }
    return ok;
}


SecurityGroupRule ShowSecurityGroupRuleResponse::getSecurityGroupRule() const
{
    return securityGroupRule_;
}

void ShowSecurityGroupRuleResponse::setSecurityGroupRule(const SecurityGroupRule& value)
{
    securityGroupRule_ = value;
    securityGroupRuleIsSet_ = true;
}

bool ShowSecurityGroupRuleResponse::securityGroupRuleIsSet() const
{
    return securityGroupRuleIsSet_;
}

void ShowSecurityGroupRuleResponse::unsetsecurityGroupRule()
{
    securityGroupRuleIsSet_ = false;
}

}
}
}
}
}


