

#include "huaweicloud/vpc/v2/model/ShowSecurityGroupRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSecurityGroupRuleRequest::ShowSecurityGroupRuleRequest()
{
    securityGroupRuleId_ = "";
    securityGroupRuleIdIsSet_ = false;
}

ShowSecurityGroupRuleRequest::~ShowSecurityGroupRuleRequest() = default;

void ShowSecurityGroupRuleRequest::validate()
{
}

web::json::value ShowSecurityGroupRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule_id")] = ModelBase::toJson(securityGroupRuleId_);
    }

    return val;
}

bool ShowSecurityGroupRuleRequest::fromJson(const web::json::value& val)
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

std::string ShowSecurityGroupRuleRequest::getSecurityGroupRuleId() const
{
    return securityGroupRuleId_;
}

void ShowSecurityGroupRuleRequest::setSecurityGroupRuleId(const std::string& value)
{
    securityGroupRuleId_ = value;
    securityGroupRuleIdIsSet_ = true;
}

bool ShowSecurityGroupRuleRequest::securityGroupRuleIdIsSet() const
{
    return securityGroupRuleIdIsSet_;
}

void ShowSecurityGroupRuleRequest::unsetsecurityGroupRuleId()
{
    securityGroupRuleIdIsSet_ = false;
}

}
}
}
}
}


