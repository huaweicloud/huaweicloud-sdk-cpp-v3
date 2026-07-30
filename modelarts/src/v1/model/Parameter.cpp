

#include "huaweicloud/modelarts/v1/model/Parameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Parameter::Parameter()
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

Parameter::~Parameter() = default;

void Parameter::validate()
{
}

web::json::value Parameter::toJson() const
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
bool Parameter::fromJson(const web::json::value& val)
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
            Parameter_constraint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConstraint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i18n_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i18n_description"));
        if(!fieldValue.is_null())
        {
            Parameter_i18n_description refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nDescription(refVal);
        }
    }
    return ok;
}


std::string Parameter::getName() const
{
    return name_;
}

void Parameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Parameter::nameIsSet() const
{
    return nameIsSet_;
}

void Parameter::unsetname()
{
    nameIsSet_ = false;
}

std::string Parameter::getValue() const
{
    return value_;
}

void Parameter::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Parameter::valueIsSet() const
{
    return valueIsSet_;
}

void Parameter::unsetvalue()
{
    valueIsSet_ = false;
}

std::string Parameter::getDescription() const
{
    return description_;
}

void Parameter::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Parameter::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Parameter::unsetdescription()
{
    descriptionIsSet_ = false;
}

Parameter_constraint Parameter::getConstraint() const
{
    return constraint_;
}

void Parameter::setConstraint(const Parameter_constraint& value)
{
    constraint_ = value;
    constraintIsSet_ = true;
}

bool Parameter::constraintIsSet() const
{
    return constraintIsSet_;
}

void Parameter::unsetconstraint()
{
    constraintIsSet_ = false;
}

Parameter_i18n_description Parameter::getI18nDescription() const
{
    return i18nDescription_;
}

void Parameter::setI18nDescription(const Parameter_i18n_description& value)
{
    i18nDescription_ = value;
    i18nDescriptionIsSet_ = true;
}

bool Parameter::i18nDescriptionIsSet() const
{
    return i18nDescriptionIsSet_;
}

void Parameter::unseti18nDescription()
{
    i18nDescriptionIsSet_ = false;
}

}
}
}
}
}


