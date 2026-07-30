

#include "huaweicloud/modelarts/v1/model/ShowWorkflowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowResponse::ShowWorkflowResponse()
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

ShowWorkflowResponse::~ShowWorkflowResponse() = default;

void ShowWorkflowResponse::validate()
{
}

web::json::value ShowWorkflowResponse::toJson() const
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
bool ShowWorkflowResponse::fromJson(const web::json::value& val)
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


std::string ShowWorkflowResponse::getName() const
{
    return name_;
}

void ShowWorkflowResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowWorkflowResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowWorkflowResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowWorkflowResponse::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowWorkflowResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowWorkflowResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowWorkflowResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowWorkflowResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowWorkflowResponse::getDescription() const
{
    return description_;
}

void ShowWorkflowResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowWorkflowResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowWorkflowResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<WorkflowStep>& ShowWorkflowResponse::getSteps()
{
    return steps_;
}

void ShowWorkflowResponse::setSteps(const std::vector<WorkflowStep>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ShowWorkflowResponse::stepsIsSet() const
{
    return stepsIsSet_;
}

void ShowWorkflowResponse::unsetsteps()
{
    stepsIsSet_ = false;
}

std::string ShowWorkflowResponse::getUserName() const
{
    return userName_;
}

void ShowWorkflowResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowWorkflowResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowWorkflowResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowWorkflowResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowWorkflowResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowWorkflowResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowWorkflowResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<DataRequirement>& ShowWorkflowResponse::getDataRequirements()
{
    return dataRequirements_;
}

void ShowWorkflowResponse::setDataRequirements(const std::vector<DataRequirement>& value)
{
    dataRequirements_ = value;
    dataRequirementsIsSet_ = true;
}

bool ShowWorkflowResponse::dataRequirementsIsSet() const
{
    return dataRequirementsIsSet_;
}

void ShowWorkflowResponse::unsetdataRequirements()
{
    dataRequirementsIsSet_ = false;
}

std::vector<Data>& ShowWorkflowResponse::getData()
{
    return data_;
}

void ShowWorkflowResponse::setData(const std::vector<Data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowWorkflowResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowWorkflowResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::vector<WorkflowParameter>& ShowWorkflowResponse::getParameters()
{
    return parameters_;
}

void ShowWorkflowResponse::setParameters(const std::vector<WorkflowParameter>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ShowWorkflowResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void ShowWorkflowResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

std::string ShowWorkflowResponse::getSourceWorkflowId() const
{
    return sourceWorkflowId_;
}

void ShowWorkflowResponse::setSourceWorkflowId(const std::string& value)
{
    sourceWorkflowId_ = value;
    sourceWorkflowIdIsSet_ = true;
}

bool ShowWorkflowResponse::sourceWorkflowIdIsSet() const
{
    return sourceWorkflowIdIsSet_;
}

void ShowWorkflowResponse::unsetsourceWorkflowId()
{
    sourceWorkflowIdIsSet_ = false;
}

WorkflowGallerySubscription ShowWorkflowResponse::getGallerySubscription() const
{
    return gallerySubscription_;
}

void ShowWorkflowResponse::setGallerySubscription(const WorkflowGallerySubscription& value)
{
    gallerySubscription_ = value;
    gallerySubscriptionIsSet_ = true;
}

bool ShowWorkflowResponse::gallerySubscriptionIsSet() const
{
    return gallerySubscriptionIsSet_;
}

void ShowWorkflowResponse::unsetgallerySubscription()
{
    gallerySubscriptionIsSet_ = false;
}

ExecutionBrief ShowWorkflowResponse::getLatestExecution() const
{
    return latestExecution_;
}

void ShowWorkflowResponse::setLatestExecution(const ExecutionBrief& value)
{
    latestExecution_ = value;
    latestExecutionIsSet_ = true;
}

bool ShowWorkflowResponse::latestExecutionIsSet() const
{
    return latestExecutionIsSet_;
}

void ShowWorkflowResponse::unsetlatestExecution()
{
    latestExecutionIsSet_ = false;
}

int32_t ShowWorkflowResponse::getRunCount() const
{
    return runCount_;
}

void ShowWorkflowResponse::setRunCount(int32_t value)
{
    runCount_ = value;
    runCountIsSet_ = true;
}

bool ShowWorkflowResponse::runCountIsSet() const
{
    return runCountIsSet_;
}

void ShowWorkflowResponse::unsetrunCount()
{
    runCountIsSet_ = false;
}

bool ShowWorkflowResponse::isParamReady() const
{
    return paramReady_;
}

void ShowWorkflowResponse::setParamReady(bool value)
{
    paramReady_ = value;
    paramReadyIsSet_ = true;
}

bool ShowWorkflowResponse::paramReadyIsSet() const
{
    return paramReadyIsSet_;
}

void ShowWorkflowResponse::unsetparamReady()
{
    paramReadyIsSet_ = false;
}

std::string ShowWorkflowResponse::getSource() const
{
    return source_;
}

void ShowWorkflowResponse::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ShowWorkflowResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void ShowWorkflowResponse::unsetsource()
{
    sourceIsSet_ = false;
}

std::vector<WorkflowStorage>& ShowWorkflowResponse::getStorages()
{
    return storages_;
}

void ShowWorkflowResponse::setStorages(const std::vector<WorkflowStorage>& value)
{
    storages_ = value;
    storagesIsSet_ = true;
}

bool ShowWorkflowResponse::storagesIsSet() const
{
    return storagesIsSet_;
}

void ShowWorkflowResponse::unsetstorages()
{
    storagesIsSet_ = false;
}

std::vector<std::string>& ShowWorkflowResponse::getLabels()
{
    return labels_;
}

void ShowWorkflowResponse::setLabels(const std::vector<std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ShowWorkflowResponse::labelsIsSet() const
{
    return labelsIsSet_;
}

void ShowWorkflowResponse::unsetlabels()
{
    labelsIsSet_ = false;
}

std::vector<WorkflowAsset>& ShowWorkflowResponse::getAssets()
{
    return assets_;
}

void ShowWorkflowResponse::setAssets(const std::vector<WorkflowAsset>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool ShowWorkflowResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void ShowWorkflowResponse::unsetassets()
{
    assetsIsSet_ = false;
}

std::vector<WorkflowSubgraph>& ShowWorkflowResponse::getSubGraphs()
{
    return subGraphs_;
}

void ShowWorkflowResponse::setSubGraphs(const std::vector<WorkflowSubgraph>& value)
{
    subGraphs_ = value;
    subGraphsIsSet_ = true;
}

bool ShowWorkflowResponse::subGraphsIsSet() const
{
    return subGraphsIsSet_;
}

void ShowWorkflowResponse::unsetsubGraphs()
{
    subGraphsIsSet_ = false;
}

std::map<std::string, Object>& ShowWorkflowResponse::getExtend()
{
    return extend_;
}

void ShowWorkflowResponse::setExtend(const std::map<std::string, Object>& value)
{
    extend_ = value;
    extendIsSet_ = true;
}

bool ShowWorkflowResponse::extendIsSet() const
{
    return extendIsSet_;
}

void ShowWorkflowResponse::unsetextend()
{
    extendIsSet_ = false;
}

WorkflowPolicy ShowWorkflowResponse::getPolicy() const
{
    return policy_;
}

void ShowWorkflowResponse::setPolicy(const WorkflowPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ShowWorkflowResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ShowWorkflowResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

bool ShowWorkflowResponse::isWithSubscription() const
{
    return withSubscription_;
}

void ShowWorkflowResponse::setWithSubscription(bool value)
{
    withSubscription_ = value;
    withSubscriptionIsSet_ = true;
}

bool ShowWorkflowResponse::withSubscriptionIsSet() const
{
    return withSubscriptionIsSet_;
}

void ShowWorkflowResponse::unsetwithSubscription()
{
    withSubscriptionIsSet_ = false;
}

bool ShowWorkflowResponse::isSmnSwitch() const
{
    return smnSwitch_;
}

void ShowWorkflowResponse::setSmnSwitch(bool value)
{
    smnSwitch_ = value;
    smnSwitchIsSet_ = true;
}

bool ShowWorkflowResponse::smnSwitchIsSet() const
{
    return smnSwitchIsSet_;
}

void ShowWorkflowResponse::unsetsmnSwitch()
{
    smnSwitchIsSet_ = false;
}

std::string ShowWorkflowResponse::getSubscriptionId() const
{
    return subscriptionId_;
}

void ShowWorkflowResponse::setSubscriptionId(const std::string& value)
{
    subscriptionId_ = value;
    subscriptionIdIsSet_ = true;
}

bool ShowWorkflowResponse::subscriptionIdIsSet() const
{
    return subscriptionIdIsSet_;
}

void ShowWorkflowResponse::unsetsubscriptionId()
{
    subscriptionIdIsSet_ = false;
}

std::string ShowWorkflowResponse::getExemlTemplateId() const
{
    return exemlTemplateId_;
}

void ShowWorkflowResponse::setExemlTemplateId(const std::string& value)
{
    exemlTemplateId_ = value;
    exemlTemplateIdIsSet_ = true;
}

bool ShowWorkflowResponse::exemlTemplateIdIsSet() const
{
    return exemlTemplateIdIsSet_;
}

void ShowWorkflowResponse::unsetexemlTemplateId()
{
    exemlTemplateIdIsSet_ = false;
}

std::string ShowWorkflowResponse::getLastModifiedAt() const
{
    return lastModifiedAt_;
}

void ShowWorkflowResponse::setLastModifiedAt(const std::string& value)
{
    lastModifiedAt_ = value;
    lastModifiedAtIsSet_ = true;
}

bool ShowWorkflowResponse::lastModifiedAtIsSet() const
{
    return lastModifiedAtIsSet_;
}

void ShowWorkflowResponse::unsetlastModifiedAt()
{
    lastModifiedAtIsSet_ = false;
}

WorkflowServicePackege ShowWorkflowResponse::getPackage() const
{
    return package_;
}

void ShowWorkflowResponse::setPackage(const WorkflowServicePackege& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ShowWorkflowResponse::packageIsSet() const
{
    return packageIsSet_;
}

void ShowWorkflowResponse::unsetpackage()
{
    packageIsSet_ = false;
}

}
}
}
}
}


