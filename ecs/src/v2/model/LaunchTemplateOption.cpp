

#include "huaweicloud/ecs/v2/model/LaunchTemplateOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




LaunchTemplateOption::LaunchTemplateOption()
{
    templateDataIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
}

LaunchTemplateOption::~LaunchTemplateOption() = default;

void LaunchTemplateOption::validate()
{
}

web::json::value LaunchTemplateOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateDataIsSet_) {
        val[utility::conversions::to_string_t("template_data")] = ModelBase::toJson(templateData_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }

    return val;
}
bool LaunchTemplateOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_data"));
        if(!fieldValue.is_null())
        {
            TemplateData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
        }
    }
    return ok;
}


TemplateData LaunchTemplateOption::getTemplateData() const
{
    return templateData_;
}

void LaunchTemplateOption::setTemplateData(const TemplateData& value)
{
    templateData_ = value;
    templateDataIsSet_ = true;
}

bool LaunchTemplateOption::templateDataIsSet() const
{
    return templateDataIsSet_;
}

void LaunchTemplateOption::unsettemplateData()
{
    templateDataIsSet_ = false;
}

std::string LaunchTemplateOption::getName() const
{
    return name_;
}

void LaunchTemplateOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LaunchTemplateOption::nameIsSet() const
{
    return nameIsSet_;
}

void LaunchTemplateOption::unsetname()
{
    nameIsSet_ = false;
}

std::string LaunchTemplateOption::getDescription() const
{
    return description_;
}

void LaunchTemplateOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LaunchTemplateOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LaunchTemplateOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LaunchTemplateOption::getVersionDescription() const
{
    return versionDescription_;
}

void LaunchTemplateOption::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool LaunchTemplateOption::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void LaunchTemplateOption::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

}
}
}
}
}


