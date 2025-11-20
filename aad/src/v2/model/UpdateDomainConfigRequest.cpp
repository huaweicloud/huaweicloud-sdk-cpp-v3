

#include "huaweicloud/aad/v2/model/UpdateDomainConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpdateDomainConfigRequest::UpdateDomainConfigRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainConfigRequest::~UpdateDomainConfigRequest() = default;

void UpdateDomainConfigRequest::validate()
{
}

web::json::value UpdateDomainConfigRequest::toJson() const
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
bool UpdateDomainConfigRequest::fromJson(const web::json::value& val)
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
            UpdateDomainConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainConfigRequest::getDomainId() const
{
    return domainId_;
}

void UpdateDomainConfigRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateDomainConfigRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateDomainConfigRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

UpdateDomainConfigRequestBody UpdateDomainConfigRequest::getBody() const
{
    return body_;
}

void UpdateDomainConfigRequest::setBody(const UpdateDomainConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


