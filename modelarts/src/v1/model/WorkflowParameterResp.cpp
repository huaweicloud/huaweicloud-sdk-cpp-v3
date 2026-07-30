

#include "huaweicloud/modelarts/v1/model/WorkflowParameterResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowParameterResp::WorkflowParameterResp()
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

WorkflowParameterResp::~WorkflowParameterResp() = default;

void WorkflowParameterResp::validate()
{
}

web::json::value WorkflowParameterResp::toJson() const
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
bool WorkflowParameterResp::fromJson(const web::json::value& val)
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


std::string WorkflowParameterResp::getName() const
{
    return name_;
}

void WorkflowParameterResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowParameterResp::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowParameterResp::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowParameterResp::getType() const
{
    return type_;
}

void WorkflowParameterResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowParameterResp::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowParameterResp::unsettype()
{
    typeIsSet_ = false;
}

std::string WorkflowParameterResp::getDescription() const
{
    return description_;
}

void WorkflowParameterResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowParameterResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowParameterResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

Object WorkflowParameterResp::getExample() const
{
    return example_;
}

void WorkflowParameterResp::setExample(const Object& value)
{
    example_ = value;
    exampleIsSet_ = true;
}

bool WorkflowParameterResp::exampleIsSet() const
{
    return exampleIsSet_;
}

void WorkflowParameterResp::unsetexample()
{
    exampleIsSet_ = false;
}

bool WorkflowParameterResp::isDelay() const
{
    return delay_;
}

void WorkflowParameterResp::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool WorkflowParameterResp::delayIsSet() const
{
    return delayIsSet_;
}

void WorkflowParameterResp::unsetdelay()
{
    delayIsSet_ = false;
}

Object WorkflowParameterResp::getDefault() const
{
    return default_;
}

void WorkflowParameterResp::setDefault(const Object& value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool WorkflowParameterResp::defaultIsSet() const
{
    return defaultIsSet_;
}

void WorkflowParameterResp::unsetdefault()
{
    defaultIsSet_ = false;
}

Object WorkflowParameterResp::getValue() const
{
    return value_;
}

void WorkflowParameterResp::setValue(const Object& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool WorkflowParameterResp::valueIsSet() const
{
    return valueIsSet_;
}

void WorkflowParameterResp::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<Object>& WorkflowParameterResp::getEnum()
{
    return enum_;
}

void WorkflowParameterResp::setEnum(const std::vector<Object>& value)
{
    enum_ = value;
    enumIsSet_ = true;
}

bool WorkflowParameterResp::enumIsSet() const
{
    return enumIsSet_;
}

void WorkflowParameterResp::unsetenum()
{
    enumIsSet_ = false;
}

std::vector<std::string>& WorkflowParameterResp::getUsedSteps()
{
    return usedSteps_;
}

void WorkflowParameterResp::setUsedSteps(const std::vector<std::string>& value)
{
    usedSteps_ = value;
    usedStepsIsSet_ = true;
}

bool WorkflowParameterResp::usedStepsIsSet() const
{
    return usedStepsIsSet_;
}

void WorkflowParameterResp::unsetusedSteps()
{
    usedStepsIsSet_ = false;
}

std::string WorkflowParameterResp::getFormat() const
{
    return format_;
}

void WorkflowParameterResp::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool WorkflowParameterResp::formatIsSet() const
{
    return formatIsSet_;
}

void WorkflowParameterResp::unsetformat()
{
    formatIsSet_ = false;
}

std::map<std::string, Object>& WorkflowParameterResp::getConstraint()
{
    return constraint_;
}

void WorkflowParameterResp::setConstraint(const std::map<std::string, Object>& value)
{
    constraint_ = value;
    constraintIsSet_ = true;
}

bool WorkflowParameterResp::constraintIsSet() const
{
    return constraintIsSet_;
}

void WorkflowParameterResp::unsetconstraint()
{
    constraintIsSet_ = false;
}

}
}
}
}
}


