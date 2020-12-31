

#include "huaweicloud/vpc/model/DeleteSecurityGroupRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteSecurityGroupRuleRequest::DeleteSecurityGroupRuleRequest()
{
    securityGroupRuleId_ = "";
    securityGroupRuleIdIsSet_ = false;
}

DeleteSecurityGroupRuleRequest::~DeleteSecurityGroupRuleRequest() = default;

void DeleteSecurityGroupRuleRequest::validate()
{
}

web::json::value DeleteSecurityGroupRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupRuleIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_rule_id")] = ModelBase::toJson(securityGroupRuleId_);
    }

    return val;
}

bool DeleteSecurityGroupRuleRequest::fromJson(const web::json::value& val)
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


std::string DeleteSecurityGroupRuleRequest::getSecurityGroupRuleId() const
{
    return securityGroupRuleId_;
}

void DeleteSecurityGroupRuleRequest::setSecurityGroupRuleId(const std::string& value)
{
    securityGroupRuleId_ = value;
    securityGroupRuleIdIsSet_ = true;
}

bool DeleteSecurityGroupRuleRequest::securityGroupRuleIdIsSet() const
{
    return securityGroupRuleIdIsSet_;
}

void DeleteSecurityGroupRuleRequest::unsetsecurityGroupRuleId()
{
    securityGroupRuleIdIsSet_ = false;
}

}
}
}
}
}


