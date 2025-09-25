

#include "huaweicloud/codeartspipeline/v2/model/CreateStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateStrategyRequest::CreateStrategyRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateStrategyRequest::~CreateStrategyRequest() = default;

void CreateStrategyRequest::validate()
{
}

web::json::value CreateStrategyRequest::toJson() const
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
bool CreateStrategyRequest::fromJson(const web::json::value& val)
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
            CreateRuleSetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateStrategyRequest::getDomainId() const
{
    return domainId_;
}

void CreateStrategyRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateStrategyRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateStrategyRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

CreateRuleSetReq CreateStrategyRequest::getBody() const
{
    return body_;
}

void CreateStrategyRequest::setBody(const CreateRuleSetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStrategyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStrategyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


