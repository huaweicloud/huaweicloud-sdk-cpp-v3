

#include "huaweicloud/vpc/v2/model/ListSecurityGroupRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSecurityGroupRulesResponse::ListSecurityGroupRulesResponse()
{
    securityGroupRulesIsSet_ = false;
}

ListSecurityGroupRulesResponse::~ListSecurityGroupRulesResponse() = default;

void ListSecurityGroupRulesResponse::validate()
{
}

web::json::value ListSecurityGroupRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRulesIsSet_) {
        val[utility::conversions::to_string_t("security_group_rules")] = ModelBase::toJson(securityGroupRules_);
    }

    return val;
}
bool ListSecurityGroupRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityGroupRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRules(refVal);
        }
    }
    return ok;
}


std::vector<SecurityGroupRule>& ListSecurityGroupRulesResponse::getSecurityGroupRules()
{
    return securityGroupRules_;
}

void ListSecurityGroupRulesResponse::setSecurityGroupRules(const std::vector<SecurityGroupRule>& value)
{
    securityGroupRules_ = value;
    securityGroupRulesIsSet_ = true;
}

bool ListSecurityGroupRulesResponse::securityGroupRulesIsSet() const
{
    return securityGroupRulesIsSet_;
}

void ListSecurityGroupRulesResponse::unsetsecurityGroupRules()
{
    securityGroupRulesIsSet_ = false;
}

}
}
}
}
}


