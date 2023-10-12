

#include "huaweicloud/lts/v2/model/UpdateNotificationTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateNotificationTemplateRequest::UpdateNotificationTemplateRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNotificationTemplateRequest::~UpdateNotificationTemplateRequest() = default;

void UpdateNotificationTemplateRequest::validate()
{
}

web::json::value UpdateNotificationTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNotificationTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateNotificationTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNotificationTemplateRequest::getDomainId() const
{
    return domainId_;
}

void UpdateNotificationTemplateRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateNotificationTemplateRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateNotificationTemplateRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateNotificationTemplateRequest::getContentType() const
{
    return contentType_;
}

void UpdateNotificationTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool UpdateNotificationTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void UpdateNotificationTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateNotificationTemplateRequestBody UpdateNotificationTemplateRequest::getBody() const
{
    return body_;
}

void UpdateNotificationTemplateRequest::setBody(const CreateNotificationTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNotificationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNotificationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


