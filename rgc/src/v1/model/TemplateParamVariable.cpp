

#include "huaweicloud/rgc/v1/model/TemplateParamVariable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




TemplateParamVariable::TemplateParamVariable()
{
    defaultIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    nullable_ = false;
    nullableIsSet_ = false;
    sensitive_ = false;
    sensitiveIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    validationsIsSet_ = false;
}

TemplateParamVariable::~TemplateParamVariable() = default;

void TemplateParamVariable::validate()
{
}

web::json::value TemplateParamVariable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nullableIsSet_) {
        val[utility::conversions::to_string_t("nullable")] = ModelBase::toJson(nullable_);
    }
    if(sensitiveIsSet_) {
        val[utility::conversions::to_string_t("sensitive")] = ModelBase::toJson(sensitive_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(validationsIsSet_) {
        val[utility::conversions::to_string_t("validations")] = ModelBase::toJson(validations_);
    }

    return val;
}
bool TemplateParamVariable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nullable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nullable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNullable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sensitive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sensitive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSensitive(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("validations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validations"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateParamVariableValidation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidations(refVal);
        }
    }
    return ok;
}


Object TemplateParamVariable::getDefault() const
{
    return default_;
}

void TemplateParamVariable::setDefault(const Object& value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool TemplateParamVariable::defaultIsSet() const
{
    return defaultIsSet_;
}

void TemplateParamVariable::unsetdefault()
{
    defaultIsSet_ = false;
}

std::string TemplateParamVariable::getName() const
{
    return name_;
}

void TemplateParamVariable::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateParamVariable::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateParamVariable::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateParamVariable::getDescription() const
{
    return description_;
}

void TemplateParamVariable::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateParamVariable::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateParamVariable::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool TemplateParamVariable::isNullable() const
{
    return nullable_;
}

void TemplateParamVariable::setNullable(bool value)
{
    nullable_ = value;
    nullableIsSet_ = true;
}

bool TemplateParamVariable::nullableIsSet() const
{
    return nullableIsSet_;
}

void TemplateParamVariable::unsetnullable()
{
    nullableIsSet_ = false;
}

bool TemplateParamVariable::isSensitive() const
{
    return sensitive_;
}

void TemplateParamVariable::setSensitive(bool value)
{
    sensitive_ = value;
    sensitiveIsSet_ = true;
}

bool TemplateParamVariable::sensitiveIsSet() const
{
    return sensitiveIsSet_;
}

void TemplateParamVariable::unsetsensitive()
{
    sensitiveIsSet_ = false;
}

std::string TemplateParamVariable::getType() const
{
    return type_;
}

void TemplateParamVariable::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateParamVariable::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateParamVariable::unsettype()
{
    typeIsSet_ = false;
}

std::vector<TemplateParamVariableValidation>& TemplateParamVariable::getValidations()
{
    return validations_;
}

void TemplateParamVariable::setValidations(const std::vector<TemplateParamVariableValidation>& value)
{
    validations_ = value;
    validationsIsSet_ = true;
}

bool TemplateParamVariable::validationsIsSet() const
{
    return validationsIsSet_;
}

void TemplateParamVariable::unsetvalidations()
{
    validationsIsSet_ = false;
}

}
}
}
}
}


