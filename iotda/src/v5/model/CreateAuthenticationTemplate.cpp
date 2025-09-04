

#include "huaweicloud/iotda/v5/model/CreateAuthenticationTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateAuthenticationTemplate::CreateAuthenticationTemplate()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    templateBodyIsSet_ = false;
}

CreateAuthenticationTemplate::~CreateAuthenticationTemplate() = default;

void CreateAuthenticationTemplate::validate()
{
}

web::json::value CreateAuthenticationTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(templateBodyIsSet_) {
        val[utility::conversions::to_string_t("template_body")] = ModelBase::toJson(templateBody_);
    }

    return val;
}
bool CreateAuthenticationTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_body"));
        if(!fieldValue.is_null())
        {
            AuthenticationTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateBody(refVal);
        }
    }
    return ok;
}


std::string CreateAuthenticationTemplate::getTemplateName() const
{
    return templateName_;
}

void CreateAuthenticationTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateAuthenticationTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateAuthenticationTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateAuthenticationTemplate::getDescription() const
{
    return description_;
}

void CreateAuthenticationTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAuthenticationTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAuthenticationTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateAuthenticationTemplate::getStatus() const
{
    return status_;
}

void CreateAuthenticationTemplate::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAuthenticationTemplate::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAuthenticationTemplate::unsetstatus()
{
    statusIsSet_ = false;
}

AuthenticationTemplateBody CreateAuthenticationTemplate::getTemplateBody() const
{
    return templateBody_;
}

void CreateAuthenticationTemplate::setTemplateBody(const AuthenticationTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool CreateAuthenticationTemplate::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void CreateAuthenticationTemplate::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


