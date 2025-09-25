

#include "huaweicloud/codeartspipeline/v2/model/SwitchStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




SwitchStrategyRequest::SwitchStrategyRequest()
{
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchStrategyRequest::~SwitchStrategyRequest() = default;

void SwitchStrategyRequest::validate()
{
}

web::json::value SwitchStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("rule_set_id")] = ModelBase::toJson(ruleSetId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchStrategyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRuleSetStatusReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchStrategyRequest::getRuleSetId() const
{
    return ruleSetId_;
}

void SwitchStrategyRequest::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool SwitchStrategyRequest::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void SwitchStrategyRequest::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

std::string SwitchStrategyRequest::getDomainId() const
{
    return domainId_;
}

void SwitchStrategyRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SwitchStrategyRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SwitchStrategyRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

UpdateRuleSetStatusReq SwitchStrategyRequest::getBody() const
{
    return body_;
}

void SwitchStrategyRequest::setBody(const UpdateRuleSetStatusReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchStrategyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchStrategyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


