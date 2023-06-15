

#include "huaweicloud/live/v1/model/UpdateDomainHttpsCertRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateDomainHttpsCertRequest::UpdateDomainHttpsCertRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainHttpsCertRequest::~UpdateDomainHttpsCertRequest() = default;

void UpdateDomainHttpsCertRequest::validate()
{
}

web::json::value UpdateDomainHttpsCertRequest::toJson() const
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

bool UpdateDomainHttpsCertRequest::fromJson(const web::json::value& val)
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
            DomainHttpsCertInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainHttpsCertRequest::getDomain() const
{
    return domain_;
}

void UpdateDomainHttpsCertRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UpdateDomainHttpsCertRequest::domainIsSet() const
{
    return domainIsSet_;
}

void UpdateDomainHttpsCertRequest::unsetdomain()
{
    domainIsSet_ = false;
}

DomainHttpsCertInfo UpdateDomainHttpsCertRequest::getBody() const
{
    return body_;
}

void UpdateDomainHttpsCertRequest::setBody(const DomainHttpsCertInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainHttpsCertRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainHttpsCertRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


