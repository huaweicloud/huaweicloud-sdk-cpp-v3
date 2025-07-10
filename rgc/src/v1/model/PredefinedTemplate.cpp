

#include "huaweicloud/rgc/v1/model/PredefinedTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




PredefinedTemplate::PredefinedTemplate()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    templateDescription_ = "";
    templateDescriptionIsSet_ = false;
    templateCategory_ = "";
    templateCategoryIsSet_ = false;
}

PredefinedTemplate::~PredefinedTemplate() = default;

void PredefinedTemplate::validate()
{
}

web::json::value PredefinedTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateDescriptionIsSet_) {
        val[utility::conversions::to_string_t("template_description")] = ModelBase::toJson(templateDescription_);
    }
    if(templateCategoryIsSet_) {
        val[utility::conversions::to_string_t("template_category")] = ModelBase::toJson(templateCategory_);
    }

    return val;
}
bool PredefinedTemplate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateCategory(refVal);
        }
    }
    return ok;
}


std::string PredefinedTemplate::getTemplateName() const
{
    return templateName_;
}

void PredefinedTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool PredefinedTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void PredefinedTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string PredefinedTemplate::getTemplateDescription() const
{
    return templateDescription_;
}

void PredefinedTemplate::setTemplateDescription(const std::string& value)
{
    templateDescription_ = value;
    templateDescriptionIsSet_ = true;
}

bool PredefinedTemplate::templateDescriptionIsSet() const
{
    return templateDescriptionIsSet_;
}

void PredefinedTemplate::unsettemplateDescription()
{
    templateDescriptionIsSet_ = false;
}

std::string PredefinedTemplate::getTemplateCategory() const
{
    return templateCategory_;
}

void PredefinedTemplate::setTemplateCategory(const std::string& value)
{
    templateCategory_ = value;
    templateCategoryIsSet_ = true;
}

bool PredefinedTemplate::templateCategoryIsSet() const
{
    return templateCategoryIsSet_;
}

void PredefinedTemplate::unsettemplateCategory()
{
    templateCategoryIsSet_ = false;
}

}
}
}
}
}


