

#include "huaweicloud/codeartspipeline/v2/model/ExtensionParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionParameter::ExtensionParameter()
{
    name_ = "";
    nameIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    validationIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    helpMarkdown_ = "";
    helpMarkdownIsSet_ = false;
    displaySettingsIsSet_ = false;
}

ExtensionParameter::~ExtensionParameter() = default;

void ExtensionParameter::validate()
{
}

web::json::value ExtensionParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(validationIsSet_) {
        val[utility::conversions::to_string_t("validation")] = ModelBase::toJson(validation_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("defaultValue")] = ModelBase::toJson(defaultValue_);
    }
    if(helpMarkdownIsSet_) {
        val[utility::conversions::to_string_t("helpMarkdown")] = ModelBase::toJson(helpMarkdown_);
    }
    if(displaySettingsIsSet_) {
        val[utility::conversions::to_string_t("displaySettings")] = ModelBase::toJson(displaySettings_);
    }

    return val;
}
bool ExtensionParameter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validation"));
        if(!fieldValue.is_null())
        {
            ExtensionParameterValidation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultValue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("helpMarkdown"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("helpMarkdown"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHelpMarkdown(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displaySettings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displaySettings"));
        if(!fieldValue.is_null())
        {
            ExtensionParameterDisplaySettings refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplaySettings(refVal);
        }
    }
    return ok;
}


std::string ExtensionParameter::getName() const
{
    return name_;
}

void ExtensionParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExtensionParameter::nameIsSet() const
{
    return nameIsSet_;
}

void ExtensionParameter::unsetname()
{
    nameIsSet_ = false;
}

std::string ExtensionParameter::getLabel() const
{
    return label_;
}

void ExtensionParameter::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool ExtensionParameter::labelIsSet() const
{
    return labelIsSet_;
}

void ExtensionParameter::unsetlabel()
{
    labelIsSet_ = false;
}

ExtensionParameterValidation ExtensionParameter::getValidation() const
{
    return validation_;
}

void ExtensionParameter::setValidation(const ExtensionParameterValidation& value)
{
    validation_ = value;
    validationIsSet_ = true;
}

bool ExtensionParameter::validationIsSet() const
{
    return validationIsSet_;
}

void ExtensionParameter::unsetvalidation()
{
    validationIsSet_ = false;
}

std::string ExtensionParameter::getDefaultValue() const
{
    return defaultValue_;
}

void ExtensionParameter::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ExtensionParameter::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ExtensionParameter::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ExtensionParameter::getHelpMarkdown() const
{
    return helpMarkdown_;
}

void ExtensionParameter::setHelpMarkdown(const std::string& value)
{
    helpMarkdown_ = value;
    helpMarkdownIsSet_ = true;
}

bool ExtensionParameter::helpMarkdownIsSet() const
{
    return helpMarkdownIsSet_;
}

void ExtensionParameter::unsethelpMarkdown()
{
    helpMarkdownIsSet_ = false;
}

ExtensionParameterDisplaySettings ExtensionParameter::getDisplaySettings() const
{
    return displaySettings_;
}

void ExtensionParameter::setDisplaySettings(const ExtensionParameterDisplaySettings& value)
{
    displaySettings_ = value;
    displaySettingsIsSet_ = true;
}

bool ExtensionParameter::displaySettingsIsSet() const
{
    return displaySettingsIsSet_;
}

void ExtensionParameter::unsetdisplaySettings()
{
    displaySettingsIsSet_ = false;
}

}
}
}
}
}


