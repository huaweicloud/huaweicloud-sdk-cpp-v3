

#include "huaweicloud/modelarts/v1/model/WorkflowParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowParameter::WorkflowParameter()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    exampleIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
    defaultIsSet_ = false;
    valueIsSet_ = false;
    enumIsSet_ = false;
    usedStepsIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    constraintIsSet_ = false;
}

WorkflowParameter::~WorkflowParameter() = default;

void WorkflowParameter::validate()
{
}

web::json::value WorkflowParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(exampleIsSet_) {
        val[utility::conversions::to_string_t("example")] = ModelBase::toJson(example_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(enumIsSet_) {
        val[utility::conversions::to_string_t("enum")] = ModelBase::toJson(enum_);
    }
    if(usedStepsIsSet_) {
        val[utility::conversions::to_string_t("used_steps")] = ModelBase::toJson(usedSteps_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(constraintIsSet_) {
        val[utility::conversions::to_string_t("constraint")] = ModelBase::toJson(constraint_);
    }

    return val;
}
bool WorkflowParameter::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("example"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("example"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enum"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("constraint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("constraint"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConstraint(refVal);
        }
    }
    return ok;
}


std::string WorkflowParameter::getName() const
{
    return name_;
}

void WorkflowParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowParameter::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowParameter::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowParameter::getType() const
{
    return type_;
}

void WorkflowParameter::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowParameter::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowParameter::unsettype()
{
    typeIsSet_ = false;
}

std::string WorkflowParameter::getDescription() const
{
    return description_;
}

void WorkflowParameter::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowParameter::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowParameter::unsetdescription()
{
    descriptionIsSet_ = false;
}

Object WorkflowParameter::getExample() const
{
    return example_;
}

void WorkflowParameter::setExample(const Object& value)
{
    example_ = value;
    exampleIsSet_ = true;
}

bool WorkflowParameter::exampleIsSet() const
{
    return exampleIsSet_;
}

void WorkflowParameter::unsetexample()
{
    exampleIsSet_ = false;
}

bool WorkflowParameter::isDelay() const
{
    return delay_;
}

void WorkflowParameter::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool WorkflowParameter::delayIsSet() const
{
    return delayIsSet_;
}

void WorkflowParameter::unsetdelay()
{
    delayIsSet_ = false;
}

Object WorkflowParameter::getDefault() const
{
    return default_;
}

void WorkflowParameter::setDefault(const Object& value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool WorkflowParameter::defaultIsSet() const
{
    return defaultIsSet_;
}

void WorkflowParameter::unsetdefault()
{
    defaultIsSet_ = false;
}

Object WorkflowParameter::getValue() const
{
    return value_;
}

void WorkflowParameter::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool WorkflowParameter::valueIsSet() const
{
    return valueIsSet_;
}

void WorkflowParameter::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<Object>& WorkflowParameter::getEnum()
{
    return enum_;
}

void WorkflowParameter::setEnum(const std::vector<Object>& value)
{
    enum_ = value;
    enumIsSet_ = true;
}

bool WorkflowParameter::enumIsSet() const
{
    return enumIsSet_;
}

void WorkflowParameter::unsetenum()
{
    enumIsSet_ = false;
}

std::vector<std::string>& WorkflowParameter::getUsedSteps()
{
    return usedSteps_;
}

void WorkflowParameter::setUsedSteps(const std::vector<std::string>& value)
{
    usedSteps_ = value;
    usedStepsIsSet_ = true;
}

bool WorkflowParameter::usedStepsIsSet() const
{
    return usedStepsIsSet_;
}

void WorkflowParameter::unsetusedSteps()
{
    usedStepsIsSet_ = false;
}

std::string WorkflowParameter::getFormat() const
{
    return format_;
}

void WorkflowParameter::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool WorkflowParameter::formatIsSet() const
{
    return formatIsSet_;
}

void WorkflowParameter::unsetformat()
{
    formatIsSet_ = false;
}

std::map<std::string, Object>& WorkflowParameter::getConstraint()
{
    return constraint_;
}

void WorkflowParameter::setConstraint(const std::map<std::string, Object>& value)
{
    constraint_ = value;
    constraintIsSet_ = true;
}

bool WorkflowParameter::constraintIsSet() const
{
    return constraintIsSet_;
}

void WorkflowParameter::unsetconstraint()
{
    constraintIsSet_ = false;
}

}
}
}
}
}


