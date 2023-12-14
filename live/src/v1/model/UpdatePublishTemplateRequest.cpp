

#include "huaweicloud/live/v1/model/UpdatePublishTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdatePublishTemplateRequest::UpdatePublishTemplateRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePublishTemplateRequest::~UpdatePublishTemplateRequest() = default;

void UpdatePublishTemplateRequest::validate()
{
}

web::json::value UpdatePublishTemplateRequest::toJson() const
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
bool UpdatePublishTemplateRequest::fromJson(const web::json::value& val)
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
            CallbackUrl refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePublishTemplateRequest::getDomain() const
{
    return domain_;
}

void UpdatePublishTemplateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UpdatePublishTemplateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void UpdatePublishTemplateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

CallbackUrl UpdatePublishTemplateRequest::getBody() const
{
    return body_;
}

void UpdatePublishTemplateRequest::setBody(const CallbackUrl& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePublishTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePublishTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


