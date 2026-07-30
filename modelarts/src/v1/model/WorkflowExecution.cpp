

#include "huaweicloud/modelarts/v1/model/WorkflowExecution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowExecution::WorkflowExecution()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    executionId_ = "";
    executionIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
    sceneId_ = "";
    sceneIdIsSet_ = false;
    sceneName_ = "";
    sceneNameIsSet_ = false;
    stepsExecutionIsSet_ = false;
    subGraphsIsSet_ = false;
    duration_ = "";
    durationIsSet_ = false;
    eventsIsSet_ = false;
    labelsIsSet_ = false;
    dataRequirementsIsSet_ = false;
    parametersIsSet_ = false;
    policiesIsSet_ = false;
}

WorkflowExecution::~WorkflowExecution() = default;

void WorkflowExecution::validate()
{
}

web::json::value WorkflowExecution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(executionIdIsSet_) {
        val[utility::conversions::to_string_t("execution_id")] = ModelBase::toJson(executionId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }
    if(sceneIdIsSet_) {
        val[utility::conversions::to_string_t("scene_id")] = ModelBase::toJson(sceneId_);
    }
    if(sceneNameIsSet_) {
        val[utility::conversions::to_string_t("scene_name")] = ModelBase::toJson(sceneName_);
    }
    if(stepsExecutionIsSet_) {
        val[utility::conversions::to_string_t("steps_execution")] = ModelBase::toJson(stepsExecution_);
    }
    if(subGraphsIsSet_) {
        val[utility::conversions::to_string_t("sub_graphs")] = ModelBase::toJson(subGraphs_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(dataRequirementsIsSet_) {
        val[utility::conversions::to_string_t("data_requirements")] = ModelBase::toJson(dataRequirements_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}
bool WorkflowExecution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps_execution"));
        if(!fieldValue.is_null())
        {
            std::vector<StepExecution> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepsExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_graphs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_graphs"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowSubgraph> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubGraphs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_requirements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_requirements"));
        if(!fieldValue.is_null())
        {
            std::vector<DataRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataRequirements(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            WorkflowDagPolicies refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string WorkflowExecution::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowExecution::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowExecution::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowExecution::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WorkflowExecution::getName() const
{
    return name_;
}

void WorkflowExecution::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowExecution::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowExecution::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkflowExecution::getExecutionId() const
{
    return executionId_;
}

void WorkflowExecution::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool WorkflowExecution::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void WorkflowExecution::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string WorkflowExecution::getDescription() const
{
    return description_;
}

void WorkflowExecution::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WorkflowExecution::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WorkflowExecution::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string WorkflowExecution::getStatus() const
{
    return status_;
}

void WorkflowExecution::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkflowExecution::statusIsSet() const
{
    return statusIsSet_;
}

void WorkflowExecution::unsetstatus()
{
    statusIsSet_ = false;
}

std::string WorkflowExecution::getWorkspaceId() const
{
    return workspaceId_;
}

void WorkflowExecution::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool WorkflowExecution::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void WorkflowExecution::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string WorkflowExecution::getWorkflowId() const
{
    return workflowId_;
}

void WorkflowExecution::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool WorkflowExecution::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void WorkflowExecution::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string WorkflowExecution::getWorkflowName() const
{
    return workflowName_;
}

void WorkflowExecution::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool WorkflowExecution::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void WorkflowExecution::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

std::string WorkflowExecution::getSceneId() const
{
    return sceneId_;
}

void WorkflowExecution::setSceneId(const std::string& value)
{
    sceneId_ = value;
    sceneIdIsSet_ = true;
}

bool WorkflowExecution::sceneIdIsSet() const
{
    return sceneIdIsSet_;
}

void WorkflowExecution::unsetsceneId()
{
    sceneIdIsSet_ = false;
}

std::string WorkflowExecution::getSceneName() const
{
    return sceneName_;
}

void WorkflowExecution::setSceneName(const std::string& value)
{
    sceneName_ = value;
    sceneNameIsSet_ = true;
}

bool WorkflowExecution::sceneNameIsSet() const
{
    return sceneNameIsSet_;
}

void WorkflowExecution::unsetsceneName()
{
    sceneNameIsSet_ = false;
}

std::vector<StepExecution>& WorkflowExecution::getStepsExecution()
{
    return stepsExecution_;
}

void WorkflowExecution::setStepsExecution(const std::vector<StepExecution>& value)
{
    stepsExecution_ = value;
    stepsExecutionIsSet_ = true;
}

bool WorkflowExecution::stepsExecutionIsSet() const
{
    return stepsExecutionIsSet_;
}

void WorkflowExecution::unsetstepsExecution()
{
    stepsExecutionIsSet_ = false;
}

std::vector<WorkflowSubgraph>& WorkflowExecution::getSubGraphs()
{
    return subGraphs_;
}

void WorkflowExecution::setSubGraphs(const std::vector<WorkflowSubgraph>& value)
{
    subGraphs_ = value;
    subGraphsIsSet_ = true;
}

bool WorkflowExecution::subGraphsIsSet() const
{
    return subGraphsIsSet_;
}

void WorkflowExecution::unsetsubGraphs()
{
    subGraphsIsSet_ = false;
}

std::string WorkflowExecution::getDuration() const
{
    return duration_;
}

void WorkflowExecution::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool WorkflowExecution::durationIsSet() const
{
    return durationIsSet_;
}

void WorkflowExecution::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<std::string>& WorkflowExecution::getEvents()
{
    return events_;
}

void WorkflowExecution::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool WorkflowExecution::eventsIsSet() const
{
    return eventsIsSet_;
}

void WorkflowExecution::unsetevents()
{
    eventsIsSet_ = false;
}

std::vector<std::string>& WorkflowExecution::getLabels()
{
    return labels_;
}

void WorkflowExecution::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool WorkflowExecution::labelsIsSet() const
{
    return labelsIsSet_;
}

void WorkflowExecution::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<DataRequirement>& WorkflowExecution::getDataRequirements()
{
    return dataRequirements_;
}

void WorkflowExecution::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool WorkflowExecution::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void WorkflowExecution::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<WorkflowParameter>& WorkflowExecution::getParameters()
{
    return parameters_;
}

void WorkflowExecution::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool WorkflowExecution::parametersIsSet() const
{
    return parametersIsSet_;
}

void WorkflowExecution::unsetparameters()
{
    parametersIsSet_ = false;
}

WorkflowDagPolicies WorkflowExecution::getPolicies() const
{
    return policies_;
}

void WorkflowExecution::setPolicies(const WorkflowDagPolicies& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool WorkflowExecution::policiesIsSet() const
{
    return policiesIsSet_;
}

void WorkflowExecution::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


