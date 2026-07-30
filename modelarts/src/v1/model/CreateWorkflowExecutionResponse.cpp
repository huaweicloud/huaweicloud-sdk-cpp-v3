

#include "huaweicloud/modelarts/v1/model/CreateWorkflowExecutionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowExecutionResponse::CreateWorkflowExecutionResponse()
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

CreateWorkflowExecutionResponse::~CreateWorkflowExecutionResponse() = default;

void CreateWorkflowExecutionResponse::validate()
{
}

web::json::value CreateWorkflowExecutionResponse::toJson() const
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
bool CreateWorkflowExecutionResponse::fromJson(const web::json::value& val)
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
            std::vector<StepExecutionResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepsExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_graphs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_graphs"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowSubgraphResp> refVal;
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
            std::vector<DataRequirementResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataRequirements(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowParameterResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            WorkflowDagPoliciesResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowExecutionResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateWorkflowExecutionResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateWorkflowExecutionResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getName() const
{
    return name_;
}

void CreateWorkflowExecutionResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWorkflowExecutionResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getExecutionId() const
{
    return executionId_;
}

void CreateWorkflowExecutionResponse::setExecutionId(const std::string& value)
{
    executionId_ = value;
    executionIdIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::executionIdIsSet() const
{
    return executionIdIsSet_;
}

void CreateWorkflowExecutionResponse::unsetexecutionId()
{
    executionIdIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getDescription() const
{
    return description_;
}

void CreateWorkflowExecutionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWorkflowExecutionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getStatus() const
{
    return status_;
}

void CreateWorkflowExecutionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateWorkflowExecutionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateWorkflowExecutionResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateWorkflowExecutionResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowExecutionResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowExecutionResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getWorkflowName() const
{
    return workflowName_;
}

void CreateWorkflowExecutionResponse::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void CreateWorkflowExecutionResponse::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getSceneId() const
{
    return sceneId_;
}

void CreateWorkflowExecutionResponse::setSceneId(const std::string& value)
{
    sceneId_ = value;
    sceneIdIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::sceneIdIsSet() const
{
    return sceneIdIsSet_;
}

void CreateWorkflowExecutionResponse::unsetsceneId()
{
    sceneIdIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getSceneName() const
{
    return sceneName_;
}

void CreateWorkflowExecutionResponse::setSceneName(const std::string& value)
{
    sceneName_ = value;
    sceneNameIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::sceneNameIsSet() const
{
    return sceneNameIsSet_;
}

void CreateWorkflowExecutionResponse::unsetsceneName()
{
    sceneNameIsSet_ = false;
}

std::vector<StepExecutionResp>& CreateWorkflowExecutionResponse::getStepsExecution()
{
    return stepsExecution_;
}

void CreateWorkflowExecutionResponse::setStepsExecution(const std::vector<StepExecutionResp>& value)
{
    stepsExecution_ = value;
    stepsExecutionIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::stepsExecutionIsSet() const
{
    return stepsExecutionIsSet_;
}

void CreateWorkflowExecutionResponse::unsetstepsExecution()
{
    stepsExecutionIsSet_ = false;
}

std::vector<WorkflowSubgraphResp>& CreateWorkflowExecutionResponse::getSubGraphs()
{
    return subGraphs_;
}

void CreateWorkflowExecutionResponse::setSubGraphs(const std::vector<WorkflowSubgraphResp>& value)
{
    subGraphs_ = value;
    subGraphsIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::subGraphsIsSet() const
{
    return subGraphsIsSet_;
}

void CreateWorkflowExecutionResponse::unsetsubGraphs()
{
    subGraphsIsSet_ = false;
}

std::string CreateWorkflowExecutionResponse::getDuration() const
{
    return duration_;
}

void CreateWorkflowExecutionResponse::setDuration(const std::string& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::durationIsSet() const
{
    return durationIsSet_;
}

void CreateWorkflowExecutionResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<std::string>& CreateWorkflowExecutionResponse::getEvents()
{
    return events_;
}

void CreateWorkflowExecutionResponse::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::eventsIsSet() const
{
    return eventsIsSet_;
}

void CreateWorkflowExecutionResponse::unsetevents()
{
    eventsIsSet_ = false;
}

std::vector<std::string>& CreateWorkflowExecutionResponse::getLabels()
{
    return labels_;
}

void CreateWorkflowExecutionResponse::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void CreateWorkflowExecutionResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<DataRequirementResp>& CreateWorkflowExecutionResponse::getDataRequirements()
{
    return dataRequirements_;
}

void CreateWorkflowExecutionResponse::setDataRequirements(const std::vector<DataRequirementResp>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void CreateWorkflowExecutionResponse::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<WorkflowParameterResp>& CreateWorkflowExecutionResponse::getParameters()
{
    return parameters_;
}

void CreateWorkflowExecutionResponse::setParameters(const std::vector<WorkflowParameterResp>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateWorkflowExecutionResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

WorkflowDagPoliciesResp CreateWorkflowExecutionResponse::getPolicies() const
{
    return policies_;
}

void CreateWorkflowExecutionResponse::setPolicies(const WorkflowDagPoliciesResp& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool CreateWorkflowExecutionResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void CreateWorkflowExecutionResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


