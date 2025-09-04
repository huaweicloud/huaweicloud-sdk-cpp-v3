

#include "huaweicloud/iotda/v5/model/UpdateAuthenticationTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateAuthenticationTemplate::UpdateAuthenticationTemplate()
{
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    templateBodyIsSet_ = false;
}

UpdateAuthenticationTemplate::~UpdateAuthenticationTemplate() = default;

void UpdateAuthenticationTemplate::validate()
{
}

web::json::value UpdateAuthenticationTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool UpdateAuthenticationTemplate::fromJson(const web::json::value& val)
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
            UpdateAuthenticationTemplateBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuthenticationTemplate::getDescription() const
{
    return description_;
}

void UpdateAuthenticationTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAuthenticationTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAuthenticationTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateAuthenticationTemplate::getStatus() const
{
    return status_;
}

void UpdateAuthenticationTemplate::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAuthenticationTemplate::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAuthenticationTemplate::unsetstatus()
{
    statusIsSet_ = false;
}

UpdateAuthenticationTemplateBody UpdateAuthenticationTemplate::getTemplateBody() const
{
    return templateBody_;
}

void UpdateAuthenticationTemplate::setTemplateBody(const UpdateAuthenticationTemplateBody& value)
{
    templateBody_ = value;
    templateBodyIsSet_ = true;
}

bool UpdateAuthenticationTemplate::templateBodyIsSet() const
{
    return templateBodyIsSet_;
}

void UpdateAuthenticationTemplate::unsettemplateBody()
{
    templateBodyIsSet_ = false;
}

}
}
}
}
}


