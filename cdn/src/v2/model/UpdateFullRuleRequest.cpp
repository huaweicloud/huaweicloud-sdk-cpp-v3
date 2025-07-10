

#include "huaweicloud/cdn/v2/model/UpdateFullRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateFullRuleRequest::UpdateFullRuleRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateFullRuleRequest::~UpdateFullRuleRequest() = default;

void UpdateFullRuleRequest::validate()
{
}

web::json::value UpdateFullRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateFullRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FullUpdateRulesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateFullRuleRequest::getDomainName() const
{
    return domainName_;
}

void UpdateFullRuleRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateFullRuleRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateFullRuleRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

FullUpdateRulesRequest UpdateFullRuleRequest::getBody() const
{
    return body_;
}

void UpdateFullRuleRequest::setBody(const FullUpdateRulesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateFullRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateFullRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


