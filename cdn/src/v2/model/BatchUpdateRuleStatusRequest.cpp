

#include "huaweicloud/cdn/v2/model/BatchUpdateRuleStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




BatchUpdateRuleStatusRequest::BatchUpdateRuleStatusRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateRuleStatusRequest::~BatchUpdateRuleStatusRequest() = default;

void BatchUpdateRuleStatusRequest::validate()
{
}

web::json::value BatchUpdateRuleStatusRequest::toJson() const
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
bool BatchUpdateRuleStatusRequest::fromJson(const web::json::value& val)
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
            BatchUpdateRulesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateRuleStatusRequest::getDomainName() const
{
    return domainName_;
}

void BatchUpdateRuleStatusRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool BatchUpdateRuleStatusRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void BatchUpdateRuleStatusRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

BatchUpdateRulesRequest BatchUpdateRuleStatusRequest::getBody() const
{
    return body_;
}

void BatchUpdateRuleStatusRequest::setBody(const BatchUpdateRulesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateRuleStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateRuleStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


