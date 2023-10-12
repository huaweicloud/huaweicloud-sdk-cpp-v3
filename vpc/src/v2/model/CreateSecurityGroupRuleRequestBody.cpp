

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupRuleRequestBody::CreateSecurityGroupRuleRequestBody()
{
    securityGroupRuleIsSet_ = false;
}

CreateSecurityGroupRuleRequestBody::~CreateSecurityGroupRuleRequestBody() = default;

void CreateSecurityGroupRuleRequestBody::validate()
{
}

web::json::value CreateSecurityGroupRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule")] = ModelBase::toJson(securityGroupRule_);
    }

    return val;
}
bool CreateSecurityGroupRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rule"));
        if(!fieldValue.is_null())
        {
            CreateSecurityGroupRuleOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRule(refVal);
        }
    }
    return ok;
}


CreateSecurityGroupRuleOption CreateSecurityGroupRuleRequestBody::getSecurityGroupRule() const
{
    return securityGroupRule_;
}

void CreateSecurityGroupRuleRequestBody::setSecurityGroupRule(const CreateSecurityGroupRuleOption& value)
{
    securityGroupRule_ = value;
    securityGroupRuleIsSet_ = true;
}

bool CreateSecurityGroupRuleRequestBody::securityGroupRuleIsSet() const
{
    return securityGroupRuleIsSet_;
}

void CreateSecurityGroupRuleRequestBody::unsetsecurityGroupRule()
{
    securityGroupRuleIsSet_ = false;
}

}
}
}
}
}


