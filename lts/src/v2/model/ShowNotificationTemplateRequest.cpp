

#include "huaweicloud/lts/v2/model/ShowNotificationTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowNotificationTemplateRequest::ShowNotificationTemplateRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowNotificationTemplateRequest::~ShowNotificationTemplateRequest() = default;

void ShowNotificationTemplateRequest::validate()
{
}

web::json::value ShowNotificationTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ShowNotificationTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    return ok;
}

std::string ShowNotificationTemplateRequest::getDomainId() const
{
    return domainId_;
}

void ShowNotificationTemplateRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowNotificationTemplateRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowNotificationTemplateRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowNotificationTemplateRequest::getTemplateName() const
{
    return templateName_;
}

void ShowNotificationTemplateRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowNotificationTemplateRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowNotificationTemplateRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowNotificationTemplateRequest::getContentType() const
{
    return contentType_;
}

void ShowNotificationTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowNotificationTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowNotificationTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


