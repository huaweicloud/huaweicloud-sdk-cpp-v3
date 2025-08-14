

#include "huaweicloud/iotda/v5/model/UpdateProvisioningTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProvisioningTemplate::UpdateProvisioningTemplate()
{
    description_ = "";
    descriptionIsSet_ = false;
    templateBodyIsSet_ = false;
}

UpdateProvisioningTemplate::~UpdateProvisioningTemplate() = default;

void UpdateProvisioningTemplate::validate()
{
}

web::json::value UpdateProvisioningTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(templateBodyIsSet_) {
        val[utility::conversions::to_string_t("template_body")] = ModelBase::toJson(templateBody_);
    }

    return val;
}
bool UpdateProvisioningTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdateProvisioningTemplate::getDescription() const
{
    return description_;
}

void UpdateProvisioningTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateProvisioningTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateProvisioningTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

ProvisioningTemplateBody UpdateProvisioningTemplate::getTemplateBody() const
{
    return templateBody_;
}

void UpdateProvisioningTemplate::setTemplateBody(const ProvisioningTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool UpdateProvisioningTemplate::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void UpdateProvisioningTemplate::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


