

#include "huaweicloud/lts/v2/model/DeleteNotificationTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteNotificationTemplateRequest::DeleteNotificationTemplateRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteNotificationTemplateRequest::~DeleteNotificationTemplateRequest() = default;

void DeleteNotificationTemplateRequest::validate()
{
}

web::json::value DeleteNotificationTemplateRequest::toJson() const
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

bool DeleteNotificationTemplateRequest::fromJson(const web::json::value& val)
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
            DeleteNotificationTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteNotificationTemplateRequest::getDomainId() const
{
    return domainId_;
}

void DeleteNotificationTemplateRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteNotificationTemplateRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteNotificationTemplateRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeleteNotificationTemplateRequest::getContentType() const
{
    return contentType_;
}

void DeleteNotificationTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteNotificationTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteNotificationTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

DeleteNotificationTemplateBody DeleteNotificationTemplateRequest::getBody() const
{
    return body_;
}

void DeleteNotificationTemplateRequest::setBody(const DeleteNotificationTemplateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteNotificationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteNotificationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


