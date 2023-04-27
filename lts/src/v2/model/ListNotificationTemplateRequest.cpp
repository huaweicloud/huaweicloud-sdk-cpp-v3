

#include "huaweicloud/lts/v2/model/ListNotificationTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListNotificationTemplateRequest::ListNotificationTemplateRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListNotificationTemplateRequest::~ListNotificationTemplateRequest() = default;

void ListNotificationTemplateRequest::validate()
{
}

web::json::value ListNotificationTemplateRequest::toJson() const
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

bool ListNotificationTemplateRequest::fromJson(const web::json::value& val)
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
            PreviewTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListNotificationTemplateRequest::getDomainId() const
{
    return domainId_;
}

void ListNotificationTemplateRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListNotificationTemplateRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListNotificationTemplateRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListNotificationTemplateRequest::getContentType() const
{
    return contentType_;
}

void ListNotificationTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListNotificationTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListNotificationTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

PreviewTemplateBody ListNotificationTemplateRequest::getBody() const
{
    return body_;
}

void ListNotificationTemplateRequest::setBody(const PreviewTemplateBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListNotificationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListNotificationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


