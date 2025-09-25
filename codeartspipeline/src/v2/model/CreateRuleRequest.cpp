

#include "huaweicloud/codeartspipeline/v2/model/CreateRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateRuleRequest::CreateRuleRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRuleRequest::~CreateRuleRequest() = default;

void CreateRuleRequest::validate()
{
}

web::json::value CreateRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRuleRequest::getDomainId() const
{
    return domainId_;
}

void CreateRuleRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateRuleRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateRuleRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

CreateRuleReq CreateRuleRequest::getBody() const
{
    return body_;
}

void CreateRuleRequest::setBody(const CreateRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


