

#include "huaweicloud/modelarts/v1/model/ServiceItemResponse_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceItemResponse_data::ServiceItemResponse_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionCount_ = 0;
    versionCountIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    tagsIsSet_ = false;
    scheduleIsSet_ = false;
    frozenInfosIsSet_ = false;
}

ServiceItemResponse_data::~ServiceItemResponse_data() = default;

void ServiceItemResponse_data::validate()
{
}

web::json::value ServiceItemResponse_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionCountIsSet_) {
        val[utility::conversions::to_string_t("version_count")] = ModelBase::toJson(versionCount_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(scheduleIsSet_) {
        val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(schedule_);
    }
    if(frozenInfosIsSet_) {
        val[utility::conversions::to_string_t("frozen_infos")] = ModelBase::toJson(frozenInfos_);
    }

    return val;
}
bool ServiceItemResponse_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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


std::string ServiceItemResponse_data::getId() const
{
    return id_;
}

void ServiceItemResponse_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceItemResponse_data::idIsSet() const
{
    return idIsSet_;
}

void ServiceItemResponse_data::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceItemResponse_data::getName() const
{
    return name_;
}

void ServiceItemResponse_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceItemResponse_data::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceItemResponse_data::unsetname()
{
    nameIsSet_ = false;
}

std::string ServiceItemResponse_data::getStatus() const
{
    return status_;
}

void ServiceItemResponse_data::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServiceItemResponse_data::statusIsSet() const
{
    return statusIsSet_;
}

void ServiceItemResponse_data::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ServiceItemResponse_data::getVersion() const
{
    return version_;
}

void ServiceItemResponse_data::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ServiceItemResponse_data::versionIsSet() const
{
    return versionIsSet_;
}

void ServiceItemResponse_data::unsetversion()
{
    versionIsSet_ = false;
}

int32_t ServiceItemResponse_data::getVersionCount() const
{
    return versionCount_;
}

void ServiceItemResponse_data::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool ServiceItemResponse_data::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void ServiceItemResponse_data::unsetversionCount()
{
    versionCountIsSet_ = false;
}

std::string ServiceItemResponse_data::getDescription() const
{
    return description_;
}

void ServiceItemResponse_data::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceItemResponse_data::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceItemResponse_data::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ServiceItemResponse_data::getType() const
{
    return type_;
}

void ServiceItemResponse_data::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ServiceItemResponse_data::typeIsSet() const
{
    return typeIsSet_;
}

void ServiceItemResponse_data::unsettype()
{
    typeIsSet_ = false;
}

std::string ServiceItemResponse_data::getDeployType() const
{
    return deployType_;
}

void ServiceItemResponse_data::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool ServiceItemResponse_data::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void ServiceItemResponse_data::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string ServiceItemResponse_data::getUserName() const
{
    return userName_;
}

void ServiceItemResponse_data::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ServiceItemResponse_data::userNameIsSet() const
{
    return userNameIsSet_;
}

void ServiceItemResponse_data::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ServiceItemResponse_data::getWorkspaceId() const
{
    return workspaceId_;
}

void ServiceItemResponse_data::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ServiceItemResponse_data::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ServiceItemResponse_data::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

int64_t ServiceItemResponse_data::getCreateAt() const
{
    return createAt_;
}

void ServiceItemResponse_data::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ServiceItemResponse_data::createAtIsSet() const
{
    return createAtIsSet_;
}

void ServiceItemResponse_data::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ServiceItemResponse_data::getUpdateAt() const
{
    return updateAt_;
}

void ServiceItemResponse_data::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ServiceItemResponse_data::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ServiceItemResponse_data::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ServiceItemResponse_data::getAuthType() const
{
    return authType_;
}

void ServiceItemResponse_data::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ServiceItemResponse_data::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ServiceItemResponse_data::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string ServiceItemResponse_data::getTaskType() const
{
    return taskType_;
}

void ServiceItemResponse_data::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ServiceItemResponse_data::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ServiceItemResponse_data::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::vector<TagsResponse>& ServiceItemResponse_data::getTags()
{
    return tags_;
}

void ServiceItemResponse_data::setTags(const std::vector<TagsResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ServiceItemResponse_data::tagsIsSet() const
{
    return tagsIsSet_;
}

void ServiceItemResponse_data::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ScheduleConfigResponse>& ServiceItemResponse_data::getSchedule()
{
    return schedule_;
}

void ServiceItemResponse_data::setSchedule(const std::vector<ScheduleConfigResponse>& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool ServiceItemResponse_data::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void ServiceItemResponse_data::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::vector<FrozenInfo>& ServiceItemResponse_data::getFrozenInfos()
{
    return frozenInfos_;
}

void ServiceItemResponse_data::setFrozenInfos(const std::vector<FrozenInfo>& value)
{
    frozenInfos_ = value;
    frozenInfosIsSet_ = true;
}

bool ServiceItemResponse_data::frozenInfosIsSet() const
{
    return frozenInfosIsSet_;
}

void ServiceItemResponse_data::unsetfrozenInfos()
{
    frozenInfosIsSet_ = false;
}

}
}
}
}
}


