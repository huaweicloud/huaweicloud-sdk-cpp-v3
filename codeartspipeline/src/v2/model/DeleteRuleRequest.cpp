

#include "huaweicloud/codeartspipeline/v2/model/DeleteRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteRuleRequest::DeleteRuleRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
}

DeleteRuleRequest::~DeleteRuleRequest() = default;

void DeleteRuleRequest::validate()
{
}

web::json::value DeleteRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }

    return val;
}
bool DeleteRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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


std::string DeleteRuleRequest::getDomainId() const
{
    return domainId_;
}

void DeleteRuleRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteRuleRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteRuleRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeleteRuleRequest::getRuleId() const
{
    return ruleId_;
}

void DeleteRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool DeleteRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void DeleteRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

}
}
}
}
}


