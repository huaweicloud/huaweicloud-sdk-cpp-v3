

#include "huaweicloud/modelarts/v1/model/Parameters.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Parameters::Parameters()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    constraintIsSet_ = false;
    i18nDescriptionIsSet_ = false;
}

Parameters::~Parameters() = default;

void Parameters::validate()
{
}

web::json::value Parameters::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(constraintIsSet_) {
        val[utility::conversions::to_string_t("constraint")] = ModelBase::toJson(constraint_);
    }
    if(i18nDescriptionIsSet_) {
        val[utility::conversions::to_string_t("i18n_description")] = ModelBase::toJson(i18nDescription_);
    }

    return val;
}
bool Parameters::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("constraint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("constraint"));
        if(!fieldValue.is_null())
        {
            ParametersConstraint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConstraint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i18n_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i18n_description"));
        if(!fieldValue.is_null())
        {
            I18nDescription refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nDescription(refVal);
        }
    }
    return ok;
}


std::string Parameters::getName() const
{
    return name_;
}

void Parameters::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Parameters::nameIsSet() const
{
    return nameIsSet_;
}

void Parameters::unsetname()
{
    nameIsSet_ = false;
}

std::string Parameters::getValue() const
{
    return value_;
}

void Parameters::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Parameters::valueIsSet() const
{
    return valueIsSet_;
}

void Parameters::unsetvalue()
{
    valueIsSet_ = false;
}

std::string Parameters::getDescription() const
{
    return description_;
}

void Parameters::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Parameters::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Parameters::unsetdescription()
{
    descriptionIsSet_ = false;
}

ParametersConstraint Parameters::getConstraint() const
{
    return constraint_;
}

void Parameters::setConstraint(const ParametersConstraint& value)
{
    constraint_ = value;
    constraintIsSet_ = true;
}

bool Parameters::constraintIsSet() const
{
    return constraintIsSet_;
}

void Parameters::unsetconstraint()
{
    constraintIsSet_ = false;
}

I18nDescription Parameters::getI18nDescription() const
{
    return i18nDescription_;
}

void Parameters::setI18nDescription(const I18nDescription& value)
{
    i18nDescription_ = value;
    i18nDescriptionIsSet_ = true;
}

bool Parameters::i18nDescriptionIsSet() const
{
    return i18nDescriptionIsSet_;
}

void Parameters::unseti18nDescription()
{
    i18nDescriptionIsSet_ = false;
}

}
}
}
}
}


