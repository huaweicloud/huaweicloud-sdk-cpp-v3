

#include "huaweicloud/codeartspipeline/v2/model/UpdateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateRuleRequest::UpdateRuleRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRuleRequest::~UpdateRuleRequest() = default;

void UpdateRuleRequest::validate()
{
}

web::json::value UpdateRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleRequest::getDomainId() const
{
    return domainId_;
}

void UpdateRuleRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateRuleRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateRuleRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateRuleRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

UpdateRuleReq UpdateRuleRequest::getBody() const
{
    return body_;
}

void UpdateRuleRequest::setBody(const UpdateRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


