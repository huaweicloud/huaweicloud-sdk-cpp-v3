

#include "huaweicloud/modelarts/v1/model/UpdateInferServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateInferServiceResponse::UpdateInferServiceResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
    versionIsSet_ = false;
    predictUrlIsSet_ = false;
    dispatcherGroupId_ = "";
    dispatcherGroupIdIsSet_ = false;
    tagsIsSet_ = false;
    deployTimeoutMinutes_ = 0;
    deployTimeoutMinutesIsSet_ = false;
    scheduleIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    provider_ = "";
    providerIsSet_ = false;
    frozenInfosIsSet_ = false;
}

UpdateInferServiceResponse::~UpdateInferServiceResponse() = default;

void UpdateInferServiceResponse::validate()
{
}

web::json::value UpdateInferServiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(predictUrlIsSet_) {
        val[utility::conversions::to_string_t("predict_url")] = ModelBase::toJson(predictUrl_);
    }
    if(dispatcherGroupIdIsSet_) {
        val[utility::conversions::to_string_t("dispatcher_group_id")] = ModelBase::toJson(dispatcherGroupId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(deployTimeoutMinutesIsSet_) {
        val[utility::conversions::to_string_t("deploy_timeout_minutes")] = ModelBase::toJson(deployTimeoutMinutes_);
    }
    if(scheduleIsSet_) {
        val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(schedule_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(providerIsSet_) {
        val[utility::conversions::to_string_t("provider")] = ModelBase::toJson(provider_);
    }
    if(frozenInfosIsSet_) {
        val[utility::conversions::to_string_t("frozen_infos")] = ModelBase::toJson(frozenInfos_);
    }

    return val;
}
bool UpdateInferServiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            ServiceVersionResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("predict_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("predict_url"));
        if(!fieldValue.is_null())
        {
            std::vector<PredictUrlResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPredictUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dispatcher_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dispatcher_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDispatcherGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_timeout_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_timeout_minutes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployTimeoutMinutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleConfigResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<FrozenInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenInfos(refVal);
        }
    }
    return ok;
}


std::string UpdateInferServiceResponse::getId() const
{
    return id_;
}

void UpdateInferServiceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateInferServiceResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateInferServiceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateInferServiceResponse::getName() const
{
    return name_;
}

void UpdateInferServiceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInferServiceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInferServiceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateInferServiceResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateInferServiceResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateInferServiceResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateInferServiceResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string UpdateInferServiceResponse::getType() const
{
    return type_;
}

void UpdateInferServiceResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateInferServiceResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateInferServiceResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateInferServiceResponse::getDeployType() const
{
    return deployType_;
}

void UpdateInferServiceResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool UpdateInferServiceResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void UpdateInferServiceResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string UpdateInferServiceResponse::getStatus() const
{
    return status_;
}

void UpdateInferServiceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateInferServiceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateInferServiceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateInferServiceResponse::getFailureReason() const
{
    return failureReason_;
}

void UpdateInferServiceResponse::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool UpdateInferServiceResponse::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void UpdateInferServiceResponse::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

ServiceVersionResponse UpdateInferServiceResponse::getVersion() const
{
    return version_;
}

void UpdateInferServiceResponse::setVersion(const ServiceVersionResponse& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateInferServiceResponse::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateInferServiceResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<PredictUrlResponse>& UpdateInferServiceResponse::getPredictUrl()
{
    return predictUrl_;
}

void UpdateInferServiceResponse::setPredictUrl(const std::vector<PredictUrlResponse>& value)
{
    predictUrl_ = value;
    predictUrlIsSet_ = true;
}

bool UpdateInferServiceResponse::predictUrlIsSet() const
{
    return predictUrlIsSet_;
}

void UpdateInferServiceResponse::unsetpredictUrl()
{
    predictUrlIsSet_ = false;
}

std::string UpdateInferServiceResponse::getDispatcherGroupId() const
{
    return dispatcherGroupId_;
}

void UpdateInferServiceResponse::setDispatcherGroupId(const std::string& value)
{
    dispatcherGroupId_ = value;
    dispatcherGroupIdIsSet_ = true;
}

bool UpdateInferServiceResponse::dispatcherGroupIdIsSet() const
{
    return dispatcherGroupIdIsSet_;
}

void UpdateInferServiceResponse::unsetdispatcherGroupId()
{
    dispatcherGroupIdIsSet_ = false;
}

std::vector<TagsResponse>& UpdateInferServiceResponse::getTags()
{
    return tags_;
}

void UpdateInferServiceResponse::setTags(const std::vector<TagsResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateInferServiceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateInferServiceResponse::unsettags()
{
    tagsIsSet_ = false;
}

int32_t UpdateInferServiceResponse::getDeployTimeoutMinutes() const
{
    return deployTimeoutMinutes_;
}

void UpdateInferServiceResponse::setDeployTimeoutMinutes(int32_t value)
{
    deployTimeoutMinutes_ = value;
    deployTimeoutMinutesIsSet_ = true;
}

bool UpdateInferServiceResponse::deployTimeoutMinutesIsSet() const
{
    return deployTimeoutMinutesIsSet_;
}

void UpdateInferServiceResponse::unsetdeployTimeoutMinutes()
{
    deployTimeoutMinutesIsSet_ = false;
}

std::vector<ScheduleConfigResponse>& UpdateInferServiceResponse::getSchedule()
{
    return schedule_;
}

void UpdateInferServiceResponse::setSchedule(const std::vector<ScheduleConfigResponse>& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool UpdateInferServiceResponse::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void UpdateInferServiceResponse::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::string UpdateInferServiceResponse::getCreateAt() const
{
    return createAt_;
}

void UpdateInferServiceResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool UpdateInferServiceResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void UpdateInferServiceResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string UpdateInferServiceResponse::getUpdateAt() const
{
    return updateAt_;
}

void UpdateInferServiceResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool UpdateInferServiceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void UpdateInferServiceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string UpdateInferServiceResponse::getTaskType() const
{
    return taskType_;
}

void UpdateInferServiceResponse::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool UpdateInferServiceResponse::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void UpdateInferServiceResponse::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string UpdateInferServiceResponse::getProvider() const
{
    return provider_;
}

void UpdateInferServiceResponse::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool UpdateInferServiceResponse::providerIsSet() const
{
    return providerIsSet_;
}

void UpdateInferServiceResponse::unsetprovider()
{
    providerIsSet_ = false;
}

std::vector<FrozenInfo>& UpdateInferServiceResponse::getFrozenInfos()
{
    return frozenInfos_;
}

void UpdateInferServiceResponse::setFrozenInfos(const std::vector<FrozenInfo>& value)
{
    frozenInfos_ = value;
    frozenInfosIsSet_ = true;
}

bool UpdateInferServiceResponse::frozenInfosIsSet() const
{
    return frozenInfosIsSet_;
}

void UpdateInferServiceResponse::unsetfrozenInfos()
{
    frozenInfosIsSet_ = false;
}

}
}
}
}
}


