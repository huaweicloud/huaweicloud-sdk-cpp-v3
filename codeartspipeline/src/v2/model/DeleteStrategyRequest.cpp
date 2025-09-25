

#include "huaweicloud/codeartspipeline/v2/model/DeleteStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteStrategyRequest::DeleteStrategyRequest()
{
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

DeleteStrategyRequest::~DeleteStrategyRequest() = default;

void DeleteStrategyRequest::validate()
{
}

web::json::value DeleteStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("rule_set_id")] = ModelBase::toJson(ruleSetId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool DeleteStrategyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string DeleteStrategyRequest::getRuleSetId() const
{
    return ruleSetId_;
}

void DeleteStrategyRequest::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool DeleteStrategyRequest::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void DeleteStrategyRequest::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

std::string DeleteStrategyRequest::getDomainId() const
{
    return domainId_;
}

void DeleteStrategyRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteStrategyRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteStrategyRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


