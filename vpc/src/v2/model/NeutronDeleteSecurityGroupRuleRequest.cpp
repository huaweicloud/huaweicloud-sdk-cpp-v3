

#include "huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronDeleteSecurityGroupRuleRequest::NeutronDeleteSecurityGroupRuleRequest()
{
    securityGroupRuleId_ = "";
    securityGroupRuleIdIsSet_ = false;
}

NeutronDeleteSecurityGroupRuleRequest::~NeutronDeleteSecurityGroupRuleRequest() = default;

void NeutronDeleteSecurityGroupRuleRequest::validate()
{
}

web::json::value NeutronDeleteSecurityGroupRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule_id")] = ModelBase::toJson(securityGroupRuleId_);
    }

    return val;
}

bool NeutronDeleteSecurityGroupRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_group_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRuleId(refVal);
        }
    }
    return ok;
}


std::string NeutronDeleteSecurityGroupRuleRequest::getSecurityGroupRuleId() const
{
    return securityGroupRuleId_;
}

void NeutronDeleteSecurityGroupRuleRequest::setSecurityGroupRuleId(const std::string& value)
{
    securityGroupRuleId_ = value;
    securityGroupRuleIdIsSet_ = true;
}

bool NeutronDeleteSecurityGroupRuleRequest::securityGroupRuleIdIsSet() const
{
    return securityGroupRuleIdIsSet_;
}

void NeutronDeleteSecurityGroupRuleRequest::unsetsecurityGroupRuleId()
{
    securityGroupRuleIdIsSet_ = false;
}

}
}
}
}
}


