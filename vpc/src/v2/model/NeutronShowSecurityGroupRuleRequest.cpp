

#include "huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowSecurityGroupRuleRequest::NeutronShowSecurityGroupRuleRequest()
{
    securityGroupRuleId_ = "";
    securityGroupRuleIdIsSet_ = false;
}

NeutronShowSecurityGroupRuleRequest::~NeutronShowSecurityGroupRuleRequest() = default;

void NeutronShowSecurityGroupRuleRequest::validate()
{
}

web::json::value NeutronShowSecurityGroupRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule_id")] = ModelBase::toJson(securityGroupRuleId_);
    }

    return val;
}

bool NeutronShowSecurityGroupRuleRequest::fromJson(const web::json::value& val)
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


std::string NeutronShowSecurityGroupRuleRequest::getSecurityGroupRuleId() const
{
    return securityGroupRuleId_;
}

void NeutronShowSecurityGroupRuleRequest::setSecurityGroupRuleId(const std::string& value)
{
    securityGroupRuleId_ = value;
    securityGroupRuleIdIsSet_ = true;
}

bool NeutronShowSecurityGroupRuleRequest::securityGroupRuleIdIsSet() const
{
    return securityGroupRuleIdIsSet_;
}

void NeutronShowSecurityGroupRuleRequest::unsetsecurityGroupRuleId()
{
    securityGroupRuleIdIsSet_ = false;
}

}
}
}
}
}


