

#include "huaweicloud/modelarts/v1/model/UpdateWorkflowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkflowResponse::UpdateWorkflowResponse()
{
    name_ = "";
    nameIsSet_ = false;
    workflowId_ = "";
    workflowIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    stepsIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    dataRequirementsIsSet_ = false;
    dataIsSet_ = false;
    parametersIsSet_ = false;
    sourceWorkflowId_ = "";
    sourceWorkflowIdIsSet_ = false;
    gallerySubscriptionIsSet_ = false;
    latestExecutionIsSet_ = false;
    runCount_ = 0;
    runCountIsSet_ = false;
    paramReady_ = false;
    paramReadyIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    storagesIsSet_ = false;
    labelsIsSet_ = false;
    assetsIsSet_ = false;
    subGraphsIsSet_ = false;
    extendIsSet_ = false;
    policyIsSet_ = false;
    withSubscription_ = false;
    withSubscriptionIsSet_ = false;
    smnSwitch_ = false;
    smnSwitchIsSet_ = false;
    subscriptionId_ = "";
    subscriptionIdIsSet_ = false;
    exemlTemplateId_ = "";
    exemlTemplateIdIsSet_ = false;
    lastModifiedAt_ = "";
    lastModifiedAtIsSet_ = false;
    packageIsSet_ = false;
}

UpdateWorkflowResponse::~UpdateWorkflowResponse() = default;

void UpdateWorkflowResponse::validate()
{
}

web::json::value UpdateWorkflowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(dataRequirementsIsSet_) {
        val[utility::conversions::to_string_t("data_requirements")] = ModelBase::toJson(dataRequirements_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(sourceWorkflowIdIsSet_) {
        val[utility::conversions::to_string_t("source_workflow_id")] = ModelBase::toJson(sourceWorkflowId_);
    }
    if(gallerySubscriptionIsSet_) {
        val[utility::conversions::to_string_t("gallery_subscription")] = ModelBase::toJson(gallerySubscription_);
    }
    if(latestExecutionIsSet_) {
        val[utility::conversions::to_string_t("latest_execution")] = ModelBase::toJson(latestExecution_);
    }
    if(runCountIsSet_) {
        val[utility::conversions::to_string_t("run_count")] = ModelBase::toJson(runCount_);
    }
    if(paramReadyIsSet_) {
        val[utility::conversions::to_string_t("param_ready")] = ModelBase::toJson(paramReady_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(storagesIsSet_) {
        val[utility::conversions::to_string_t("storages")] = ModelBase::toJson(storages_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(assetsIsSet_) {
        val[utility::conversions::to_string_t("assets")] = ModelBase::toJson(assets_);
    }
    if(subGraphsIsSet_) {
        val[utility::conversions::to_string_t("sub_graphs")] = ModelBase::toJson(subGraphs_);
    }
    if(extendIsSet_) {
        val[utility::conversions::to_string_t("extend")] = ModelBase::toJson(extend_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(withSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("with_subscription")] = ModelBase::toJson(withSubscription_);
    }
    if(smnSwitchIsSet_) {
        val[utility::conversions::to_string_t("smn_switch")] = ModelBase::toJson(smnSwitch_);
    }
    if(subscriptionIdIsSet_) {
        val[utility::conversions::to_string_t("subscription_id")] = ModelBase::toJson(subscriptionId_);
    }
    if(exemlTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("exeml_template_id")] = ModelBase::toJson(exemlTemplateId_);
    }
    if(lastModifiedAtIsSet_) {
        val[utility::conversions::to_string_t("last_modified_at")] = ModelBase::toJson(lastModifiedAt_);
    }
    if(packageIsSet_) {
        val[utility::conversions::to_string_t("package")] = ModelBase::toJson(package_);
    }

    return val;
}
bool UpdateWorkflowResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowStep> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("data_requirements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_requirements"));
        if(!fieldValue.is_null())
        {
            std::vector<DataRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataRequirements(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<Data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gallery_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gallery_subscription"));
        if(!fieldValue.is_null())
        {
            WorkflowGallerySubscription refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGallerySubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_execution"));
        if(!fieldValue.is_null())
        {
            ExecutionBrief refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestExecution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_ready"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_ready"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamReady(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storages"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowStorage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorages(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assets"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowAsset> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            WorkflowPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_subscription"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithSubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smn_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smn_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmnSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exeml_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exeml_template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExemlTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package"));
        if(!fieldValue.is_null())
        {
            WorkflowServicePackege refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackage(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkflowResponse::getName() const
{
    return name_;
}

void UpdateWorkflowResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateWorkflowResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateWorkflowResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateWorkflowResponse::getWorkflowId() const
{
    return workflowId_;
}

void UpdateWorkflowResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateWorkflowResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateWorkflowResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string UpdateWorkflowResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateWorkflowResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateWorkflowResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateWorkflowResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateWorkflowResponse::getDescription() const
{
    return description_;
}

void UpdateWorkflowResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateWorkflowResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateWorkflowResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<WorkflowStep>& UpdateWorkflowResponse::getSteps()
{
    return steps_;
}

void UpdateWorkflowResponse::setSteps(const std::vector<WorkflowStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool UpdateWorkflowResponse::stepsIsSet() const
{
    return stepsIsSet_;
}

void UpdateWorkflowResponse::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string UpdateWorkflowResponse::getUserName() const
{
    return userName_;
}

void UpdateWorkflowResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UpdateWorkflowResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void UpdateWorkflowResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string UpdateWorkflowResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateWorkflowResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateWorkflowResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateWorkflowResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<DataRequirement>& UpdateWorkflowResponse::getDataRequirements()
{
    return dataRequirements_;
}

void UpdateWorkflowResponse::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool UpdateWorkflowResponse::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void UpdateWorkflowResponse::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<Data>& UpdateWorkflowResponse::getData()
{
    return data_;
}

void UpdateWorkflowResponse::setData(const std::vector<Data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool UpdateWorkflowResponse::dataIsSet() const
{
    return dataIsSet_;
}

void UpdateWorkflowResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::vector<WorkflowParameter>& UpdateWorkflowResponse::getParameters()
{
    return parameters_;
}

void UpdateWorkflowResponse::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool UpdateWorkflowResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void UpdateWorkflowResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string UpdateWorkflowResponse::getSourceWorkflowId() const
{
    return sourceWorkflowId_;
}

void UpdateWorkflowResponse::setSourceWorkflowId(const std::string& value)
{
    sourceWorkflowId_ = value;
    sourceWorkflowIdIsSet_ = true;
}

bool UpdateWorkflowResponse::sourceWorkflowIdIsSet() const
{
    return sourceWorkflowIdIsSet_;
}

void UpdateWorkflowResponse::unsetsourceWorkflowId()
{
    sourceWorkflowIdIsSet_ = false;
}

WorkflowGallerySubscription UpdateWorkflowResponse::getGallerySubscription() const
{
    return gallerySubscription_;
}

void UpdateWorkflowResponse::setGallerySubscription(const WorkflowGallerySubscription& value)
{
    gallerySubscription_ = value;
    gallerySubscriptionIsSet_ = true;
}

bool UpdateWorkflowResponse::gallerySubscriptionIsSet() const
{
    return gallerySubscriptionIsSet_;
}

void UpdateWorkflowResponse::unsetgallerySubscription()
{
    gallerySubscriptionIsSet_ = false;
}

ExecutionBrief UpdateWorkflowResponse::getLatestExecution() const
{
    return latestExecution_;
}

void UpdateWorkflowResponse::setLatestExecution(const ExecutionBrief& value)
{
    latestExecution_ = value;
    latestExecutionIsSet_ = true;
}

bool UpdateWorkflowResponse::latestExecutionIsSet() const
{
    return latestExecutionIsSet_;
}

void UpdateWorkflowResponse::unsetlatestExecution()
{
    latestExecutionIsSet_ = false;
}

int32_t UpdateWorkflowResponse::getRunCount() const
{
    return runCount_;
}

void UpdateWorkflowResponse::setRunCount(int32_t value)
{
    runCount_ = value;
    runCountIsSet_ = true;
}

bool UpdateWorkflowResponse::runCountIsSet() const
{
    return runCountIsSet_;
}

void UpdateWorkflowResponse::unsetrunCount()
{
    runCountIsSet_ = false;
}

bool UpdateWorkflowResponse::isParamReady() const
{
    return paramReady_;
}

void UpdateWorkflowResponse::setParamReady(bool value)
{
    paramReady_ = value;
    paramReadyIsSet_ = true;
}

bool UpdateWorkflowResponse::paramReadyIsSet() const
{
    return paramReadyIsSet_;
}

void UpdateWorkflowResponse::unsetparamReady()
{
    paramReadyIsSet_ = false;
}

std::string UpdateWorkflowResponse::getSource() const
{
    return source_;
}

void UpdateWorkflowResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool UpdateWorkflowResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void UpdateWorkflowResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::vector<WorkflowStorage>& UpdateWorkflowResponse::getStorages()
{
    return storages_;
}

void UpdateWorkflowResponse::setStorages(const std::vector<WorkflowStorage>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool UpdateWorkflowResponse::storagesIsSet() const
{
    return storagesIsSet_;
}

void UpdateWorkflowResponse::unsetstorages()
{
    storagesIsSet_ = false;
}

std::vector<std::string>& UpdateWorkflowResponse::getLabels()
{
    return labels_;
}

void UpdateWorkflowResponse::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool UpdateWorkflowResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void UpdateWorkflowResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<WorkflowAsset>& UpdateWorkflowResponse::getAssets()
{
    return assets_;
}

void UpdateWorkflowResponse::setAssets(const std::vector<WorkflowAsset>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool UpdateWorkflowResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void UpdateWorkflowResponse::unsetassets()
{
    assetsIsSet_ = false;
}

std::vector<WorkflowSubgraph>& UpdateWorkflowResponse::getSubGraphs()
{
    return subGraphs_;
}

void UpdateWorkflowResponse::setSubGraphs(const std::vector<WorkflowSubgraph>& value)
{
    subGraphs_ = value;
    subGraphsIsSet_ = true;
}

bool UpdateWorkflowResponse::subGraphsIsSet() const
{
    return subGraphsIsSet_;
}

void UpdateWorkflowResponse::unsetsubGraphs()
{
    subGraphsIsSet_ = false;
}

std::map<std::string, Object>& UpdateWorkflowResponse::getExtend()
{
    return extend_;
}

void UpdateWorkflowResponse::setExtend(const std::map<std::string, Object>& value)
{
    extend_ = value;
    extendIsSet_ = true;
}

bool UpdateWorkflowResponse::extendIsSet() const
{
    return extendIsSet_;
}

void UpdateWorkflowResponse::unsetextend()
{
    extendIsSet_ = false;
}

WorkflowPolicy UpdateWorkflowResponse::getPolicy() const
{
    return policy_;
}

void UpdateWorkflowResponse::setPolicy(const WorkflowPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool UpdateWorkflowResponse::policyIsSet() const
{
    return policyIsSet_;
}

void UpdateWorkflowResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

bool UpdateWorkflowResponse::isWithSubscription() const
{
    return withSubscription_;
}

void UpdateWorkflowResponse::setWithSubscription(bool value)
{
    withSubscription_ = value;
    withSubscriptionIsSet_ = true;
}

bool UpdateWorkflowResponse::withSubscriptionIsSet() const
{
    return withSubscriptionIsSet_;
}

void UpdateWorkflowResponse::unsetwithSubscription()
{
    withSubscriptionIsSet_ = false;
}

bool UpdateWorkflowResponse::isSmnSwitch() const
{
    return smnSwitch_;
}

void UpdateWorkflowResponse::setSmnSwitch(bool value)
{
    smnSwitch_ = value;
    smnSwitchIsSet_ = true;
}

bool UpdateWorkflowResponse::smnSwitchIsSet() const
{
    return smnSwitchIsSet_;
}

void UpdateWorkflowResponse::unsetsmnSwitch()
{
    smnSwitchIsSet_ = false;
}

std::string UpdateWorkflowResponse::getSubscriptionId() const
{
    return subscriptionId_;
}

void UpdateWorkflowResponse::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool UpdateWorkflowResponse::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void UpdateWorkflowResponse::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string UpdateWorkflowResponse::getExemlTemplateId() const
{
    return exemlTemplateId_;
}

void UpdateWorkflowResponse::setExemlTemplateId(const std::string& value)
{
    exemlTemplateId_ = value;
    exemlTemplateIdIsSet_ = true;
}

bool UpdateWorkflowResponse::exemlTemplateIdIsSet() const
{
    return exemlTemplateIdIsSet_;
}

void UpdateWorkflowResponse::unsetexemlTemplateId()
{
    exemlTemplateIdIsSet_ = false;
}

std::string UpdateWorkflowResponse::getLastModifiedAt() const
{
    return lastModifiedAt_;
}

void UpdateWorkflowResponse::setLastModifiedAt(const std::string& value)
{
    lastModifiedAt_ = value;
    lastModifiedAtIsSet_ = true;
}

bool UpdateWorkflowResponse::lastModifiedAtIsSet() const
{
    return lastModifiedAtIsSet_;
}

void UpdateWorkflowResponse::unsetlastModifiedAt()
{
    lastModifiedAtIsSet_ = false;
}

WorkflowServicePackege UpdateWorkflowResponse::getPackage() const
{
    return package_;
}

void UpdateWorkflowResponse::setPackage(const WorkflowServicePackege& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool UpdateWorkflowResponse::packageIsSet() const
{
    return packageIsSet_;
}

void UpdateWorkflowResponse::unsetpackage()
{
    packageIsSet_ = false;
}

}
}
}
}
}


