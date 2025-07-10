

#include "huaweicloud/cdn/v2/model/UpdateRuleNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateRuleNewRequest::UpdateRuleNewRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRuleNewRequest::~UpdateRuleNewRequest() = default;

void UpdateRuleNewRequest::validate()
{
}

web::json::value UpdateRuleNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRuleNewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleNewRequest::getDomainName() const
{
    return domainName_;
}

void UpdateRuleNewRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateRuleNewRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateRuleNewRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UpdateRuleNewRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateRuleNewRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateRuleNewRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateRuleNewRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

UpdateRuleRequest UpdateRuleNewRequest::getBody() const
{
    return body_;
}

void UpdateRuleNewRequest::setBody(const UpdateRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRuleNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRuleNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


