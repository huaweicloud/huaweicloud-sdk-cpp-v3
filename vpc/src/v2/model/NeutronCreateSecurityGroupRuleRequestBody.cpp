

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupRuleRequestBody::NeutronCreateSecurityGroupRuleRequestBody()
{
    securityGroupRuleIsSet_ = false;
}

NeutronCreateSecurityGroupRuleRequestBody::~NeutronCreateSecurityGroupRuleRequestBody() = default;

void NeutronCreateSecurityGroupRuleRequestBody::validate()
{
}

web::json::value NeutronCreateSecurityGroupRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule")] = ModelBase::toJson(securityGroupRule_);
    }

    return val;
}
bool NeutronCreateSecurityGroupRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rule"));
        if(!fieldValue.is_null())
        {
            NeutronCreateSecurityGroupRuleOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRule(refVal);
        }
    }
    return ok;
}


NeutronCreateSecurityGroupRuleOption NeutronCreateSecurityGroupRuleRequestBody::getSecurityGroupRule() const
{
    return securityGroupRule_;
}

void NeutronCreateSecurityGroupRuleRequestBody::setSecurityGroupRule(const NeutronCreateSecurityGroupRuleOption& value)
{
    securityGroupRule_ = value;
    securityGroupRuleIsSet_ = true;
}

bool NeutronCreateSecurityGroupRuleRequestBody::securityGroupRuleIsSet() const
{
    return securityGroupRuleIsSet_;
}

void NeutronCreateSecurityGroupRuleRequestBody::unsetsecurityGroupRule()
{
    securityGroupRuleIsSet_ = false;
}

}
}
}
}
}


