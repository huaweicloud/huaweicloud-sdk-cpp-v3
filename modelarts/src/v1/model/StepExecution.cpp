

#include "huaweicloud/modelarts/v1/model/StepExecution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StepExecution::StepExecution()
{
    stepName_ = "";
    stepNameIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    inputsIsSet_ = false;
    outputsIsSet_ = false;
    stepUuid_ = "";
    stepUuidIsSet_ = false;
    propertiesIsSet_ = false;
    eventsIsSet_ = false;
    errorInfoIsSet_ = false;
    policyIsSet_ = false;
    conditionsExecutionIsSet_ = false;
    stepTitle_ = "";
    stepTitleIsSet_ = false;
    conditionsIsSet_ = false;
}

StepExecution::~StepExecution() = default;

void StepExecution::validate()
{
}

web::json::value StepExecution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepNameIsSet_) {
        val[utility::conversions::to_string_t("step_name")] = ModelBase::toJson(stepName_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }
    if(stepUuidIsSet_) {
        val[utility::conversions::to_string_t("step_uuid")] = ModelBase::toJson(stepUuid_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(conditionsExecutionIsSet_) {
        val[utility::conversions::to_string_t("conditions_execution")] = ModelBase::toJson(conditionsExecution_);
    }
    if(stepTitleIsSet_) {
        val[utility::conversions::to_string_t("step_title")] = ModelBase::toJson(stepTitle_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }

    return val;
}
bool StepExecution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("step_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("step_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            WorkflowErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            WorkflowStepExecutionPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions_execution"));
        if(!fieldValue.is_null())
        {
            WorkflowConditionExecution refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionsExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepTitle(refVal);
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
    return ok;
}


std::string StepExecution::getStepName() const
{
    return stepName_;
}

void StepExecution::setStepName(const std::string& value)
{
    stepName_ = value;
    stepNameIsSet_ = true;
}

bool StepExecution::stepNameIsSet() const
{
    return stepNameIsSet_;
}

void StepExecution::unsetstepName()
{
    stepNameIsSet_ = false;
}

int32_t StepExecution::getDuration() const
{
    return duration_;
}

void StepExecution::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool StepExecution::durationIsSet() const
{
    return durationIsSet_;
}

void StepExecution::unsetduration()
{
    durationIsSet_ = false;
}

std::string StepExecution::getType() const
{
    return type_;
}

void StepExecution::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StepExecution::typeIsSet() const
{
    return typeIsSet_;
}

void StepExecution::unsettype()
{
    typeIsSet_ = false;
}

std::string StepExecution::getInstanceId() const
{
    return instanceId_;
}

void StepExecution::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StepExecution::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StepExecution::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string StepExecution::getStatus() const
{
    return status_;
}

void StepExecution::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StepExecution::statusIsSet() const
{
    return statusIsSet_;
}

void StepExecution::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<JobInput>& StepExecution::getInputs()
{
    return inputs_;
}

void StepExecution::setInputs(const std::vector<JobInput>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool StepExecution::inputsIsSet() const
{
    return inputsIsSet_;
}

void StepExecution::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<JobOutput>& StepExecution::getOutputs()
{
    return outputs_;
}

void StepExecution::setOutputs(const std::vector<JobOutput>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool StepExecution::outputsIsSet() const
{
    return outputsIsSet_;
}

void StepExecution::unsetoutputs()
{
    outputsIsSet_ = false;
}

std::string StepExecution::getStepUuid() const
{
    return stepUuid_;
}

void StepExecution::setStepUuid(const std::string& value)
{
    stepUuid_ = value;
    stepUuidIsSet_ = true;
}

bool StepExecution::stepUuidIsSet() const
{
    return stepUuidIsSet_;
}

void StepExecution::unsetstepUuid()
{
    stepUuidIsSet_ = false;
}

std::map<std::string, Object>& StepExecution::getProperties()
{
    return properties_;
}

void StepExecution::setProperties(const std::map<std::string, Object>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool StepExecution::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void StepExecution::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::vector<std::string>& StepExecution::getEvents()
{
    return events_;
}

void StepExecution::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool StepExecution::eventsIsSet() const
{
    return eventsIsSet_;
}

void StepExecution::unsetevents()
{
    eventsIsSet_ = false;
}

WorkflowErrorInfo StepExecution::getErrorInfo() const
{
    return errorInfo_;
}

void StepExecution::setErrorInfo(const WorkflowErrorInfo& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool StepExecution::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void StepExecution::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

WorkflowStepExecutionPolicy StepExecution::getPolicy() const
{
    return policy_;
}

void StepExecution::setPolicy(const WorkflowStepExecutionPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool StepExecution::policyIsSet() const
{
    return policyIsSet_;
}

void StepExecution::unsetpolicy()
{
    policyIsSet_ = false;
}

WorkflowConditionExecution StepExecution::getConditionsExecution() const
{
    return conditionsExecution_;
}

void StepExecution::setConditionsExecution(const WorkflowConditionExecution& value)
{
    conditionsExecution_ = value;
    conditionsExecutionIsSet_ = true;
}

bool StepExecution::conditionsExecutionIsSet() const
{
    return conditionsExecutionIsSet_;
}

void StepExecution::unsetconditionsExecution()
{
    conditionsExecutionIsSet_ = false;
}

std::string StepExecution::getStepTitle() const
{
    return stepTitle_;
}

void StepExecution::setStepTitle(const std::string& value)
{
    stepTitle_ = value;
    stepTitleIsSet_ = true;
}

bool StepExecution::stepTitleIsSet() const
{
    return stepTitleIsSet_;
}

void StepExecution::unsetstepTitle()
{
    stepTitleIsSet_ = false;
}

std::vector<StepCondition>& StepExecution::getConditions()
{
    return conditions_;
}

void StepExecution::setConditions(const std::vector<StepCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool StepExecution::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void StepExecution::unsetconditions()
{
    conditionsIsSet_ = false;
}

}
}
}
}
}


