

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupRuleResponse::CreateSecurityGroupRuleResponse()
{
    securityGroupRuleIsSet_ = false;
}

CreateSecurityGroupRuleResponse::~CreateSecurityGroupRuleResponse() = default;

void CreateSecurityGroupRuleResponse::validate()
{
}

web::json::value CreateSecurityGroupRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule")] = ModelBase::toJson(securityGroupRule_);
    }

    return val;
}

bool CreateSecurityGroupRuleResponse::fromJson(const web::json::value& val)
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

SecurityGroupRule CreateSecurityGroupRuleResponse::getSecurityGroupRule() const
{
    return securityGroupRule_;
}

void CreateSecurityGroupRuleResponse::setSecurityGroupRule(const SecurityGroupRule& value)
{
    securityGroupRule_ = value;
    securityGroupRuleIsSet_ = true;
}

bool CreateSecurityGroupRuleResponse::securityGroupRuleIsSet() const
{
    return securityGroupRuleIsSet_;
}

void CreateSecurityGroupRuleResponse::unsetsecurityGroupRule()
{
    securityGroupRuleIsSet_ = false;
}

}
}
}
}
}


