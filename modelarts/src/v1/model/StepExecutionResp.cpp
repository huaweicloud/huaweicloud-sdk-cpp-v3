

#include "huaweicloud/modelarts/v1/model/StepExecutionResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StepExecutionResp::StepExecutionResp()
{
    stepName_ = "";
    stepNameIsSet_ = false;
    executionName_ = "";
    executionNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    executionUuid_ = "";
    executionUuidIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
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

StepExecutionResp::~StepExecutionResp() = default;

void StepExecutionResp::validate()
{
}

web::json::value StepExecutionResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepNameIsSet_) {
        val[utility::conversions::to_string_t("step_name")] = ModelBase::toJson(stepName_);
    }
    if(executionNameIsSet_) {
        val[utility::conversions::to_string_t("execution_name")] = ModelBase::toJson(executionName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(executionUuidIsSet_) {
        val[utility::conversions::to_string_t("execution_uuid")] = ModelBase::toJson(executionUuid_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
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
bool StepExecutionResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("execution_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
            std::vector<JobInputResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobOutputResp> refVal;
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
            std::map<std::string, std::string> refVal;
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
            WorkflowErrorInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            WorkflowStepExecutionPolicyResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions_execution"));
        if(!fieldValue.is_null())
        {
            WorkflowConditionExecutionResp refVal;
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
            std::vector<StepConditionResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    return ok;
}


std::string StepExecutionResp::getStepName() const
{
    return stepName_;
}

void StepExecutionResp::setStepName(const std::string& value)
{
    stepName_ = value;
    stepNameIsSet_ = true;
}

bool StepExecutionResp::stepNameIsSet() const
{
    return stepNameIsSet_;
}

void StepExecutionResp::unsetstepName()
{
    stepNameIsSet_ = false;
}

std::string StepExecutionResp::getExecutionName() const
{
    return executionName_;
}

void StepExecutionResp::setExecutionName(const std::string& value)
{
    executionName_ = value;
    executionNameIsSet_ = true;
}

bool StepExecutionResp::executionNameIsSet() const
{
    return executionNameIsSet_;
}

void StepExecutionResp::unsetexecutionName()
{
    executionNameIsSet_ = false;
}

std::string StepExecutionResp::getName() const
{
    return name_;
}

void StepExecutionResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StepExecutionResp::nameIsSet() const
{
    return nameIsSet_;
}

void StepExecutionResp::unsetname()
{
    nameIsSet_ = false;
}

std::string StepExecutionResp::getUuid() const
{
    return uuid_;
}

void StepExecutionResp::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool StepExecutionResp::uuidIsSet() const
{
    return uuidIsSet_;
}

void StepExecutionResp::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string StepExecutionResp::getExecutionUuid() const
{
    return executionUuid_;
}

void StepExecutionResp::setExecutionUuid(const std::string& value)
{
    executionUuid_ = value;
    executionUuidIsSet_ = true;
}

bool StepExecutionResp::executionUuidIsSet() const
{
    return executionUuidIsSet_;
}

void StepExecutionResp::unsetexecutionUuid()
{
    executionUuidIsSet_ = false;
}

std::string StepExecutionResp::getCreatedAt() const
{
    return createdAt_;
}

void StepExecutionResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool StepExecutionResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void StepExecutionResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string StepExecutionResp::getUpdatedAt() const
{
    return updatedAt_;
}

void StepExecutionResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool StepExecutionResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void StepExecutionResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t StepExecutionResp::getDuration() const
{
    return duration_;
}

void StepExecutionResp::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool StepExecutionResp::durationIsSet() const
{
    return durationIsSet_;
}

void StepExecutionResp::unsetduration()
{
    durationIsSet_ = false;
}

std::string StepExecutionResp::getType() const
{
    return type_;
}

void StepExecutionResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StepExecutionResp::typeIsSet() const
{
    return typeIsSet_;
}

void StepExecutionResp::unsettype()
{
    typeIsSet_ = false;
}

std::string StepExecutionResp::getInstanceId() const
{
    return instanceId_;
}

void StepExecutionResp::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StepExecutionResp::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StepExecutionResp::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string StepExecutionResp::getStatus() const
{
    return status_;
}

void StepExecutionResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StepExecutionResp::statusIsSet() const
{
    return statusIsSet_;
}

void StepExecutionResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<JobInputResp>& StepExecutionResp::getInputs()
{
    return inputs_;
}

void StepExecutionResp::setInputs(const std::vector<JobInputResp>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool StepExecutionResp::inputsIsSet() const
{
    return inputsIsSet_;
}

void StepExecutionResp::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<JobOutputResp>& StepExecutionResp::getOutputs()
{
    return outputs_;
}

void StepExecutionResp::setOutputs(const std::vector<JobOutputResp>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool StepExecutionResp::outputsIsSet() const
{
    return outputsIsSet_;
}

void StepExecutionResp::unsetoutputs()
{
    outputsIsSet_ = false;
}

std::string StepExecutionResp::getStepUuid() const
{
    return stepUuid_;
}

void StepExecutionResp::setStepUuid(const std::string& value)
{
    stepUuid_ = value;
    stepUuidIsSet_ = true;
}

bool StepExecutionResp::stepUuidIsSet() const
{
    return stepUuidIsSet_;
}

void StepExecutionResp::unsetstepUuid()
{
    stepUuidIsSet_ = false;
}

std::map<std::string, std::string>& StepExecutionResp::getProperties()
{
    return properties_;
}

void StepExecutionResp::setProperties(const std::map<std::string, std::string>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool StepExecutionResp::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void StepExecutionResp::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::vector<std::string>& StepExecutionResp::getEvents()
{
    return events_;
}

void StepExecutionResp::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool StepExecutionResp::eventsIsSet() const
{
    return eventsIsSet_;
}

void StepExecutionResp::unsetevents()
{
    eventsIsSet_ = false;
}

WorkflowErrorInfoResp StepExecutionResp::getErrorInfo() const
{
    return errorInfo_;
}

void StepExecutionResp::setErrorInfo(const WorkflowErrorInfoResp& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool StepExecutionResp::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void StepExecutionResp::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

WorkflowStepExecutionPolicyResp StepExecutionResp::getPolicy() const
{
    return policy_;
}

void StepExecutionResp::setPolicy(const WorkflowStepExecutionPolicyResp& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool StepExecutionResp::policyIsSet() const
{
    return policyIsSet_;
}

void StepExecutionResp::unsetpolicy()
{
    policyIsSet_ = false;
}

WorkflowConditionExecutionResp StepExecutionResp::getConditionsExecution() const
{
    return conditionsExecution_;
}

void StepExecutionResp::setConditionsExecution(const WorkflowConditionExecutionResp& value)
{
    conditionsExecution_ = value;
    conditionsExecutionIsSet_ = true;
}

bool StepExecutionResp::conditionsExecutionIsSet() const
{
    return conditionsExecutionIsSet_;
}

void StepExecutionResp::unsetconditionsExecution()
{
    conditionsExecutionIsSet_ = false;
}

std::string StepExecutionResp::getStepTitle() const
{
    return stepTitle_;
}

void StepExecutionResp::setStepTitle(const std::string& value)
{
    stepTitle_ = value;
    stepTitleIsSet_ = true;
}

bool StepExecutionResp::stepTitleIsSet() const
{
    return stepTitleIsSet_;
}

void StepExecutionResp::unsetstepTitle()
{
    stepTitleIsSet_ = false;
}

std::vector<StepConditionResp>& StepExecutionResp::getConditions()
{
    return conditions_;
}

void StepExecutionResp::setConditions(const std::vector<StepConditionResp>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool StepExecutionResp::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void StepExecutionResp::unsetconditions()
{
    conditionsIsSet_ = false;
}

}
}
}
}
}


