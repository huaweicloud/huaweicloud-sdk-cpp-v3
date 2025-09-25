

#include "huaweicloud/codeartspipeline/v2/model/UpdateStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateStrategyRequest::UpdateStrategyRequest()
{
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStrategyRequest::~UpdateStrategyRequest() = default;

void UpdateStrategyRequest::validate()
{
}

web::json::value UpdateStrategyRequest::toJson() const
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
bool UpdateStrategyRequest::fromJson(const web::json::value& val)
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
            UpdateRuleSetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStrategyRequest::getRuleSetId() const
{
    return ruleSetId_;
}

void UpdateStrategyRequest::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool UpdateStrategyRequest::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void UpdateStrategyRequest::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

std::string UpdateStrategyRequest::getDomainId() const
{
    return domainId_;
}

void UpdateStrategyRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateStrategyRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateStrategyRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

UpdateRuleSetReq UpdateStrategyRequest::getBody() const
{
    return body_;
}

void UpdateStrategyRequest::setBody(const UpdateRuleSetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStrategyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStrategyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


