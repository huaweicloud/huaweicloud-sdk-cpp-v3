

#include "huaweicloud/modelarts/v1/model/CreateWorkflowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowResponse::CreateWorkflowResponse()
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

CreateWorkflowResponse::~CreateWorkflowResponse() = default;

void CreateWorkflowResponse::validate()
{
}

web::json::value CreateWorkflowResponse::toJson() const
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
bool CreateWorkflowResponse::fromJson(const web::json::value& val)
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


std::string CreateWorkflowResponse::getName() const
{
    return name_;
}

void CreateWorkflowResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWorkflowResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWorkflowResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateWorkflowResponse::getWorkflowId() const
{
    return workflowId_;
}

void CreateWorkflowResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CreateWorkflowResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CreateWorkflowResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CreateWorkflowResponse::getCreatedAt() const
{
    return createdAt_;
}

void CreateWorkflowResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateWorkflowResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateWorkflowResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CreateWorkflowResponse::getDescription() const
{
    return description_;
}

void CreateWorkflowResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWorkflowResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWorkflowResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<WorkflowStep>& CreateWorkflowResponse::getSteps()
{
    return steps_;
}

void CreateWorkflowResponse::setSteps(const std::vector<WorkflowStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool CreateWorkflowResponse::stepsIsSet() const
{
    return stepsIsSet_;
}

void CreateWorkflowResponse::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string CreateWorkflowResponse::getUserName() const
{
    return userName_;
}

void CreateWorkflowResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateWorkflowResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateWorkflowResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateWorkflowResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateWorkflowResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateWorkflowResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateWorkflowResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<DataRequirement>& CreateWorkflowResponse::getDataRequirements()
{
    return dataRequirements_;
}

void CreateWorkflowResponse::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool CreateWorkflowResponse::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void CreateWorkflowResponse::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<Data>& CreateWorkflowResponse::getData()
{
    return data_;
}

void CreateWorkflowResponse::setData(const std::vector<Data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateWorkflowResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateWorkflowResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::vector<WorkflowParameter>& CreateWorkflowResponse::getParameters()
{
    return parameters_;
}

void CreateWorkflowResponse::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CreateWorkflowResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void CreateWorkflowResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string CreateWorkflowResponse::getSourceWorkflowId() const
{
    return sourceWorkflowId_;
}

void CreateWorkflowResponse::setSourceWorkflowId(const std::string& value)
{
    sourceWorkflowId_ = value;
    sourceWorkflowIdIsSet_ = true;
}

bool CreateWorkflowResponse::sourceWorkflowIdIsSet() const
{
    return sourceWorkflowIdIsSet_;
}

void CreateWorkflowResponse::unsetsourceWorkflowId()
{
    sourceWorkflowIdIsSet_ = false;
}

WorkflowGallerySubscription CreateWorkflowResponse::getGallerySubscription() const
{
    return gallerySubscription_;
}

void CreateWorkflowResponse::setGallerySubscription(const WorkflowGallerySubscription& value)
{
    gallerySubscription_ = value;
    gallerySubscriptionIsSet_ = true;
}

bool CreateWorkflowResponse::gallerySubscriptionIsSet() const
{
    return gallerySubscriptionIsSet_;
}

void CreateWorkflowResponse::unsetgallerySubscription()
{
    gallerySubscriptionIsSet_ = false;
}

ExecutionBrief CreateWorkflowResponse::getLatestExecution() const
{
    return latestExecution_;
}

void CreateWorkflowResponse::setLatestExecution(const ExecutionBrief& value)
{
    latestExecution_ = value;
    latestExecutionIsSet_ = true;
}

bool CreateWorkflowResponse::latestExecutionIsSet() const
{
    return latestExecutionIsSet_;
}

void CreateWorkflowResponse::unsetlatestExecution()
{
    latestExecutionIsSet_ = false;
}

int32_t CreateWorkflowResponse::getRunCount() const
{
    return runCount_;
}

void CreateWorkflowResponse::setRunCount(int32_t value)
{
    runCount_ = value;
    runCountIsSet_ = true;
}

bool CreateWorkflowResponse::runCountIsSet() const
{
    return runCountIsSet_;
}

void CreateWorkflowResponse::unsetrunCount()
{
    runCountIsSet_ = false;
}

bool CreateWorkflowResponse::isParamReady() const
{
    return paramReady_;
}

void CreateWorkflowResponse::setParamReady(bool value)
{
    paramReady_ = value;
    paramReadyIsSet_ = true;
}

bool CreateWorkflowResponse::paramReadyIsSet() const
{
    return paramReadyIsSet_;
}

void CreateWorkflowResponse::unsetparamReady()
{
    paramReadyIsSet_ = false;
}

std::string CreateWorkflowResponse::getSource() const
{
    return source_;
}

void CreateWorkflowResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CreateWorkflowResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void CreateWorkflowResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::vector<WorkflowStorage>& CreateWorkflowResponse::getStorages()
{
    return storages_;
}

void CreateWorkflowResponse::setStorages(const std::vector<WorkflowStorage>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool CreateWorkflowResponse::storagesIsSet() const
{
    return storagesIsSet_;
}

void CreateWorkflowResponse::unsetstorages()
{
    storagesIsSet_ = false;
}

std::vector<std::string>& CreateWorkflowResponse::getLabels()
{
    return labels_;
}

void CreateWorkflowResponse::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool CreateWorkflowResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void CreateWorkflowResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<WorkflowAsset>& CreateWorkflowResponse::getAssets()
{
    return assets_;
}

void CreateWorkflowResponse::setAssets(const std::vector<WorkflowAsset>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool CreateWorkflowResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void CreateWorkflowResponse::unsetassets()
{
    assetsIsSet_ = false;
}

std::vector<WorkflowSubgraph>& CreateWorkflowResponse::getSubGraphs()
{
    return subGraphs_;
}

void CreateWorkflowResponse::setSubGraphs(const std::vector<WorkflowSubgraph>& value)
{
    subGraphs_ = value;
    subGraphsIsSet_ = true;
}

bool CreateWorkflowResponse::subGraphsIsSet() const
{
    return subGraphsIsSet_;
}

void CreateWorkflowResponse::unsetsubGraphs()
{
    subGraphsIsSet_ = false;
}

std::map<std::string, Object>& CreateWorkflowResponse::getExtend()
{
    return extend_;
}

void CreateWorkflowResponse::setExtend(const std::map<std::string, Object>& value)
{
    extend_ = value;
    extendIsSet_ = true;
}

bool CreateWorkflowResponse::extendIsSet() const
{
    return extendIsSet_;
}

void CreateWorkflowResponse::unsetextend()
{
    extendIsSet_ = false;
}

WorkflowPolicy CreateWorkflowResponse::getPolicy() const
{
    return policy_;
}

void CreateWorkflowResponse::setPolicy(const WorkflowPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool CreateWorkflowResponse::policyIsSet() const
{
    return policyIsSet_;
}

void CreateWorkflowResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

bool CreateWorkflowResponse::isWithSubscription() const
{
    return withSubscription_;
}

void CreateWorkflowResponse::setWithSubscription(bool value)
{
    withSubscription_ = value;
    withSubscriptionIsSet_ = true;
}

bool CreateWorkflowResponse::withSubscriptionIsSet() const
{
    return withSubscriptionIsSet_;
}

void CreateWorkflowResponse::unsetwithSubscription()
{
    withSubscriptionIsSet_ = false;
}

bool CreateWorkflowResponse::isSmnSwitch() const
{
    return smnSwitch_;
}

void CreateWorkflowResponse::setSmnSwitch(bool value)
{
    smnSwitch_ = value;
    smnSwitchIsSet_ = true;
}

bool CreateWorkflowResponse::smnSwitchIsSet() const
{
    return smnSwitchIsSet_;
}

void CreateWorkflowResponse::unsetsmnSwitch()
{
    smnSwitchIsSet_ = false;
}

std::string CreateWorkflowResponse::getSubscriptionId() const
{
    return subscriptionId_;
}

void CreateWorkflowResponse::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool CreateWorkflowResponse::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void CreateWorkflowResponse::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string CreateWorkflowResponse::getExemlTemplateId() const
{
    return exemlTemplateId_;
}

void CreateWorkflowResponse::setExemlTemplateId(const std::string& value)
{
    exemlTemplateId_ = value;
    exemlTemplateIdIsSet_ = true;
}

bool CreateWorkflowResponse::exemlTemplateIdIsSet() const
{
    return exemlTemplateIdIsSet_;
}

void CreateWorkflowResponse::unsetexemlTemplateId()
{
    exemlTemplateIdIsSet_ = false;
}

std::string CreateWorkflowResponse::getLastModifiedAt() const
{
    return lastModifiedAt_;
}

void CreateWorkflowResponse::setLastModifiedAt(const std::string& value)
{
    lastModifiedAt_ = value;
    lastModifiedAtIsSet_ = true;
}

bool CreateWorkflowResponse::lastModifiedAtIsSet() const
{
    return lastModifiedAtIsSet_;
}

void CreateWorkflowResponse::unsetlastModifiedAt()
{
    lastModifiedAtIsSet_ = false;
}

WorkflowServicePackege CreateWorkflowResponse::getPackage() const
{
    return package_;
}

void CreateWorkflowResponse::setPackage(const WorkflowServicePackege& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool CreateWorkflowResponse::packageIsSet() const
{
    return packageIsSet_;
}

void CreateWorkflowResponse::unsetpackage()
{
    packageIsSet_ = false;
}

}
}
}
}
}


