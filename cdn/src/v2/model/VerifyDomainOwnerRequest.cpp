

#include "huaweicloud/cdn/v2/model/VerifyDomainOwnerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




VerifyDomainOwnerRequest::VerifyDomainOwnerRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    bodyIsSet_ = false;
}

VerifyDomainOwnerRequest::~VerifyDomainOwnerRequest() = default;

void VerifyDomainOwnerRequest::validate()
{
}

web::json::value VerifyDomainOwnerRequest::toJson() const
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
bool VerifyDomainOwnerRequest::fromJson(const web::json::value& val)
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
            VerifyDomainOwnerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string VerifyDomainOwnerRequest::getDomainName() const
{
    return domainName_;
}

void VerifyDomainOwnerRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool VerifyDomainOwnerRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void VerifyDomainOwnerRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

VerifyDomainOwnerRequestBody VerifyDomainOwnerRequest::getBody() const
{
    return body_;
}

void VerifyDomainOwnerRequest::setBody(const VerifyDomainOwnerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool VerifyDomainOwnerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void VerifyDomainOwnerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


