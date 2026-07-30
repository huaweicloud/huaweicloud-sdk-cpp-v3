

#include "huaweicloud/modelarts/v1/model/WorkflowStep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowStep::WorkflowStep()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    propertiesIsSet_ = false;
    dependStepsIsSet_ = false;
    conditionsIsSet_ = false;
    ifThenStepsIsSet_ = false;
    elseThenStepsIsSet_ = false;
    policyIsSet_ = false;
}

WorkflowStep::~WorkflowStep() = default;

void WorkflowStep::validate()
{
}

web::json::value WorkflowStep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(dependStepsIsSet_) {
        val[utility::conversions::to_string_t("depend_steps")] = ModelBase::toJson(dependSteps_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(ifThenStepsIsSet_) {
        val[utility::conversions::to_string_t("if_then_steps")] = ModelBase::toJson(ifThenSteps_);
    }
    if(elseThenStepsIsSet_) {
        val[utility::conversions::to_string_t("else_then_steps")] = ModelBase::toJson(elseThenSteps_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool WorkflowStep::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobInput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobOutput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<StepCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("if_then_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("if_then_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIfThenSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("else_then_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("else_then_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElseThenSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            WorkflowStepPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


std::string WorkflowStep::getName() const
{
    return name_;
}

void WorkflowStep::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowStep::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowStep::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowStep::getType() const
{
    return type_;
}

void WorkflowStep::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowStep::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowStep::unsettype()
{
    typeIsSet_ = false;
}

std::vector<JobInput>& WorkflowStep::getInputs()
{
    return inputs_;
}

void WorkflowStep::setInputs(const std::vector<JobInput>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool WorkflowStep::inputsIsSet() const
{
    return inputsIsSet_;
}

void WorkflowStep::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<JobOutput>& WorkflowStep::getOutputs()
{
    return outputs_;
}

void WorkflowStep::setOutputs(const std::vector<JobOutput>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool WorkflowStep::outputsIsSet() const
{
    return outputsIsSet_;
}

void WorkflowStep::unsetoutputs()
{
    outputsIsSet_ = false;
}

std::string WorkflowStep::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowStep::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowStep::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowStep::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WorkflowStep::getTitle() const
{
    return title_;
}

void WorkflowStep::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool WorkflowStep::titleIsSet() const
{
    return titleIsSet_;
}

void WorkflowStep::unsettitle()
{
    titleIsSet_ = false;
}

std::string WorkflowStep::getDescription() const
{
    return description_;
}

void WorkflowStep::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowStep::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowStep::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, Object>& WorkflowStep::getProperties()
{
    return properties_;
}

void WorkflowStep::setProperties(const std::map<std::string, Object>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool WorkflowStep::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void WorkflowStep::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::vector<std::string>& WorkflowStep::getDependSteps()
{
    return dependSteps_;
}

void WorkflowStep::setDependSteps(const std::vector<std::string>& value)
{
    dependSteps_ = value;
    dependStepsIsSet_ = true;
}

bool WorkflowStep::dependStepsIsSet() const
{
    return dependStepsIsSet_;
}

void WorkflowStep::unsetdependSteps()
{
    dependStepsIsSet_ = false;
}

std::vector<StepCondition>& WorkflowStep::getConditions()
{
    return conditions_;
}

void WorkflowStep::setConditions(const std::vector<StepCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool WorkflowStep::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void WorkflowStep::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<std::string>& WorkflowStep::getIfThenSteps()
{
    return ifThenSteps_;
}

void WorkflowStep::setIfThenSteps(const std::vector<std::string>& value)
{
    ifThenSteps_ = value;
    ifThenStepsIsSet_ = true;
}

bool WorkflowStep::ifThenStepsIsSet() const
{
    return ifThenStepsIsSet_;
}

void WorkflowStep::unsetifThenSteps()
{
    ifThenStepsIsSet_ = false;
}

std::vector<std::string>& WorkflowStep::getElseThenSteps()
{
    return elseThenSteps_;
}

void WorkflowStep::setElseThenSteps(const std::vector<std::string>& value)
{
    elseThenSteps_ = value;
    elseThenStepsIsSet_ = true;
}

bool WorkflowStep::elseThenStepsIsSet() const
{
    return elseThenStepsIsSet_;
}

void WorkflowStep::unsetelseThenSteps()
{
    elseThenStepsIsSet_ = false;
}

WorkflowStepPolicy WorkflowStep::getPolicy() const
{
    return policy_;
}

void WorkflowStep::setPolicy(const WorkflowStepPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool WorkflowStep::policyIsSet() const
{
    return policyIsSet_;
}

void WorkflowStep::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


