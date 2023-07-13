

#include "huaweicloud/live/v1/model/UpdateDomainKeyChainRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateDomainKeyChainRequest::UpdateDomainKeyChainRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainKeyChainRequest::~UpdateDomainKeyChainRequest() = default;

void UpdateDomainKeyChainRequest::validate()
{
}

web::json::value UpdateDomainKeyChainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateDomainKeyChainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            KeyChainInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateDomainKeyChainRequest::getDomain() const
{
    return domain_;
}

void UpdateDomainKeyChainRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UpdateDomainKeyChainRequest::domainIsSet() const
{
    return domainIsSet_;
}

void UpdateDomainKeyChainRequest::unsetdomain()
{
    domainIsSet_ = false;
}

KeyChainInfo UpdateDomainKeyChainRequest::getBody() const
{
    return body_;
}

void UpdateDomainKeyChainRequest::setBody(const KeyChainInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainKeyChainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainKeyChainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


