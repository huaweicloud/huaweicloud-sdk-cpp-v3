

#include "huaweicloud/cdn/v2/model/CreateRuleNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateRuleNewRequest::CreateRuleNewRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRuleNewRequest::~CreateRuleNewRequest() = default;

void CreateRuleNewRequest::validate()
{
}

web::json::value CreateRuleNewRequest::toJson() const
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
bool CreateRuleNewRequest::fromJson(const web::json::value& val)
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
            CreateRuleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRuleNewRequest::getDomainName() const
{
    return domainName_;
}

void CreateRuleNewRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateRuleNewRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateRuleNewRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

CreateRuleRequest CreateRuleNewRequest::getBody() const
{
    return body_;
}

void CreateRuleNewRequest::setBody(const CreateRuleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRuleNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRuleNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


