

#include "huaweicloud/aad/v1/model/UpdateDomainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateDomainRequest::UpdateDomainRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainRequest::~UpdateDomainRequest() = default;

void UpdateDomainRequest::validate()
{
}

web::json::value UpdateDomainRequest::toJson() const
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
bool UpdateDomainRequest::fromJson(const web::json::value& val)
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
            DomainRealServerInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainRequest::getDomainId() const
{
    return domainId_;
}

void UpdateDomainRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateDomainRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateDomainRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

DomainRealServerInfo UpdateDomainRequest::getBody() const
{
    return body_;
}

void UpdateDomainRequest::setBody(const DomainRealServerInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


