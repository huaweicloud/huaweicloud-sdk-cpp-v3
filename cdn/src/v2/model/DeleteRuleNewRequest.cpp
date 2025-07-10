

#include "huaweicloud/cdn/v2/model/DeleteRuleNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DeleteRuleNewRequest::DeleteRuleNewRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

DeleteRuleNewRequest::~DeleteRuleNewRequest() = default;

void DeleteRuleNewRequest::validate()
{
}

web::json::value DeleteRuleNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }

    return val;
}
bool DeleteRuleNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    return ok;
}


std::string DeleteRuleNewRequest::getDomainName() const
{
    return domainName_;
}

void DeleteRuleNewRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DeleteRuleNewRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DeleteRuleNewRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DeleteRuleNewRequest::getRuleId() const
{
    return ruleId_;
}

void DeleteRuleNewRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool DeleteRuleNewRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void DeleteRuleNewRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


