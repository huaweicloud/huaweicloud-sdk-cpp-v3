

#include "huaweicloud/codeartspipeline/v2/model/NewExtension_inputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




NewExtension_inputs::NewExtension_inputs()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    extendPropIsSet_ = false;
    validationIsSet_ = false;
}

NewExtension_inputs::~NewExtension_inputs() = default;

void NewExtension_inputs::validate()
{
}

web::json::value NewExtension_inputs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(extendPropIsSet_) {
        val[utility::conversions::to_string_t("extend_prop")] = ModelBase::toJson(extendProp_);
    }
    if(validationIsSet_) {
        val[utility::conversions::to_string_t("validation")] = ModelBase::toJson(validation_);
    }

    return val;
}
bool NewExtension_inputs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_prop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_prop"));
        if(!fieldValue.is_null())
        {
            ExtensionExtendProp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendProp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validation"));
        if(!fieldValue.is_null())
        {
            ExtensionValidation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidation(refVal);
        }
    }
    return ok;
}


std::string NewExtension_inputs::getName() const
{
    return name_;
}

void NewExtension_inputs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NewExtension_inputs::nameIsSet() const
{
    return nameIsSet_;
}

void NewExtension_inputs::unsetname()
{
    nameIsSet_ = false;
}

std::string NewExtension_inputs::getType() const
{
    return type_;
}

void NewExtension_inputs::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NewExtension_inputs::typeIsSet() const
{
    return typeIsSet_;
}

void NewExtension_inputs::unsettype()
{
    typeIsSet_ = false;
}

std::string NewExtension_inputs::getLabel() const
{
    return label_;
}

void NewExtension_inputs::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool NewExtension_inputs::labelIsSet() const
{
    return labelIsSet_;
}

void NewExtension_inputs::unsetlabel()
{
    labelIsSet_ = false;
}

std::string NewExtension_inputs::getDescription() const
{
    return description_;
}

void NewExtension_inputs::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NewExtension_inputs::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NewExtension_inputs::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NewExtension_inputs::getDefaultValue() const
{
    return defaultValue_;
}

void NewExtension_inputs::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool NewExtension_inputs::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void NewExtension_inputs::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

bool NewExtension_inputs::isRequired() const
{
    return required_;
}

void NewExtension_inputs::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool NewExtension_inputs::requiredIsSet() const
{
    return requiredIsSet_;
}

void NewExtension_inputs::unsetrequired()
{
    requiredIsSet_ = false;
}

ExtensionExtendProp NewExtension_inputs::getExtendProp() const
{
    return extendProp_;
}

void NewExtension_inputs::setExtendProp(const ExtensionExtendProp& value)
{
    extendProp_ = value;
    extendPropIsSet_ = true;
}

bool NewExtension_inputs::extendPropIsSet() const
{
    return extendPropIsSet_;
}

void NewExtension_inputs::unsetextendProp()
{
    extendPropIsSet_ = false;
}

ExtensionValidation NewExtension_inputs::getValidation() const
{
    return validation_;
}

void NewExtension_inputs::setValidation(const ExtensionValidation& value)
{
    validation_ = value;
    validationIsSet_ = true;
}

bool NewExtension_inputs::validationIsSet() const
{
    return validationIsSet_;
}

void NewExtension_inputs::unsetvalidation()
{
    validationIsSet_ = false;
}

}
}
}
}
}


