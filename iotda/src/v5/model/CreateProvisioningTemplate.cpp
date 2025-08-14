

#include "huaweicloud/iotda/v5/model/CreateProvisioningTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProvisioningTemplate::CreateProvisioningTemplate()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    templateBodyIsSet_ = false;
}

CreateProvisioningTemplate::~CreateProvisioningTemplate() = default;

void CreateProvisioningTemplate::validate()
{
}

web::json::value CreateProvisioningTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(templateBodyIsSet_) {
        val[utility::conversions::to_string_t("template_body")] = ModelBase::toJson(templateBody_);
    }

    return val;
}
bool CreateProvisioningTemplate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_body"));
        if(!fieldValue.is_null())
        {
            ProvisioningTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateBody(refVal);
        }
    }
    return ok;
}


std::string CreateProvisioningTemplate::getTemplateName() const
{
    return templateName_;
}

void CreateProvisioningTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool CreateProvisioningTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void CreateProvisioningTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string CreateProvisioningTemplate::getDescription() const
{
    return description_;
}

void CreateProvisioningTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProvisioningTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProvisioningTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

ProvisioningTemplateBody CreateProvisioningTemplate::getTemplateBody() const
{
    return templateBody_;
}

void CreateProvisioningTemplate::setTemplateBody(const ProvisioningTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool CreateProvisioningTemplate::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void CreateProvisioningTemplate::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


