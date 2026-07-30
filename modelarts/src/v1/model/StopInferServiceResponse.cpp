

#include "huaweicloud/modelarts/v1/model/StopInferServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopInferServiceResponse::StopInferServiceResponse()
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

StopInferServiceResponse::~StopInferServiceResponse() = default;

void StopInferServiceResponse::validate()
{
}

web::json::value StopInferServiceResponse::toJson() const
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
bool StopInferServiceResponse::fromJson(const web::json::value& val)
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


std::string StopInferServiceResponse::getId() const
{
    return id_;
}

void StopInferServiceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StopInferServiceResponse::idIsSet() const
{
    return idIsSet_;
}

void StopInferServiceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string StopInferServiceResponse::getName() const
{
    return name_;
}

void StopInferServiceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StopInferServiceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void StopInferServiceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string StopInferServiceResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void StopInferServiceResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool StopInferServiceResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void StopInferServiceResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string StopInferServiceResponse::getType() const
{
    return type_;
}

void StopInferServiceResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StopInferServiceResponse::typeIsSet() const
{
    return typeIsSet_;
}

void StopInferServiceResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string StopInferServiceResponse::getDeployType() const
{
    return deployType_;
}

void StopInferServiceResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool StopInferServiceResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void StopInferServiceResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string StopInferServiceResponse::getStatus() const
{
    return status_;
}

void StopInferServiceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StopInferServiceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StopInferServiceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StopInferServiceResponse::getFailureReason() const
{
    return failureReason_;
}

void StopInferServiceResponse::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool StopInferServiceResponse::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void StopInferServiceResponse::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

ServiceVersionResponse StopInferServiceResponse::getVersion() const
{
    return version_;
}

void StopInferServiceResponse::setVersion(const ServiceVersionResponse& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool StopInferServiceResponse::versionIsSet() const
{
    return versionIsSet_;
}

void StopInferServiceResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::vector<PredictUrlResponse>& StopInferServiceResponse::getPredictUrl()
{
    return predictUrl_;
}

void StopInferServiceResponse::setPredictUrl(const std::vector<PredictUrlResponse>& value)
{
    predictUrl_ = value;
    predictUrlIsSet_ = true;
}

bool StopInferServiceResponse::predictUrlIsSet() const
{
    return predictUrlIsSet_;
}

void StopInferServiceResponse::unsetpredictUrl()
{
    predictUrlIsSet_ = false;
}

std::string StopInferServiceResponse::getDispatcherGroupId() const
{
    return dispatcherGroupId_;
}

void StopInferServiceResponse::setDispatcherGroupId(const std::string& value)
{
    dispatcherGroupId_ = value;
    dispatcherGroupIdIsSet_ = true;
}

bool StopInferServiceResponse::dispatcherGroupIdIsSet() const
{
    return dispatcherGroupIdIsSet_;
}

void StopInferServiceResponse::unsetdispatcherGroupId()
{
    dispatcherGroupIdIsSet_ = false;
}

std::vector<TagsResponse>& StopInferServiceResponse::getTags()
{
    return tags_;
}

void StopInferServiceResponse::setTags(const std::vector<TagsResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool StopInferServiceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void StopInferServiceResponse::unsettags()
{
    tagsIsSet_ = false;
}

int32_t StopInferServiceResponse::getDeployTimeoutMinutes() const
{
    return deployTimeoutMinutes_;
}

void StopInferServiceResponse::setDeployTimeoutMinutes(int32_t value)
{
    deployTimeoutMinutes_ = value;
    deployTimeoutMinutesIsSet_ = true;
}

bool StopInferServiceResponse::deployTimeoutMinutesIsSet() const
{
    return deployTimeoutMinutesIsSet_;
}

void StopInferServiceResponse::unsetdeployTimeoutMinutes()
{
    deployTimeoutMinutesIsSet_ = false;
}

std::vector<ScheduleConfigResponse>& StopInferServiceResponse::getSchedule()
{
    return schedule_;
}

void StopInferServiceResponse::setSchedule(const std::vector<ScheduleConfigResponse>& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool StopInferServiceResponse::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void StopInferServiceResponse::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::string StopInferServiceResponse::getCreateAt() const
{
    return createAt_;
}

void StopInferServiceResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool StopInferServiceResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void StopInferServiceResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string StopInferServiceResponse::getUpdateAt() const
{
    return updateAt_;
}

void StopInferServiceResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool StopInferServiceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void StopInferServiceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string StopInferServiceResponse::getTaskType() const
{
    return taskType_;
}

void StopInferServiceResponse::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool StopInferServiceResponse::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void StopInferServiceResponse::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string StopInferServiceResponse::getProvider() const
{
    return provider_;
}

void StopInferServiceResponse::setProvider(const std::string& value)
{
    provider_ = value;
    providerIsSet_ = true;
}

bool StopInferServiceResponse::providerIsSet() const
{
    return providerIsSet_;
}

void StopInferServiceResponse::unsetprovider()
{
    providerIsSet_ = false;
}

std::vector<FrozenInfo>& StopInferServiceResponse::getFrozenInfos()
{
    return frozenInfos_;
}

void StopInferServiceResponse::setFrozenInfos(const std::vector<FrozenInfo>& value)
{
    frozenInfos_ = value;
    frozenInfosIsSet_ = true;
}

bool StopInferServiceResponse::frozenInfosIsSet() const
{
    return frozenInfosIsSet_;
}

void StopInferServiceResponse::unsetfrozenInfos()
{
    frozenInfosIsSet_ = false;
}

}
}
}
}
}


