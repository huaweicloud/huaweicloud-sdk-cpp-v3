

#include "huaweicloud/modelarts/v1/model/TrainingExperimentResponseMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TrainingExperimentResponseMetadata::TrainingExperimentResponseMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

TrainingExperimentResponseMetadata::~TrainingExperimentResponseMetadata() = default;

void TrainingExperimentResponseMetadata::validate()
{
}

web::json::value TrainingExperimentResponseMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool TrainingExperimentResponseMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string TrainingExperimentResponseMetadata::getName() const
{
    return name_;
}

void TrainingExperimentResponseMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TrainingExperimentResponseMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void TrainingExperimentResponseMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string TrainingExperimentResponseMetadata::getDescription() const
{
    return description_;
}

void TrainingExperimentResponseMetadata::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TrainingExperimentResponseMetadata::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TrainingExperimentResponseMetadata::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TrainingExperimentResponseMetadata::getWorkspaceId() const
{
    return workspaceId_;
}

void TrainingExperimentResponseMetadata::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool TrainingExperimentResponseMetadata::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void TrainingExperimentResponseMetadata::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

int64_t TrainingExperimentResponseMetadata::getCreateTime() const
{
    return createTime_;
}

void TrainingExperimentResponseMetadata::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TrainingExperimentResponseMetadata::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TrainingExperimentResponseMetadata::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t TrainingExperimentResponseMetadata::getUpdateTime() const
{
    return updateTime_;
}

void TrainingExperimentResponseMetadata::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TrainingExperimentResponseMetadata::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TrainingExperimentResponseMetadata::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TrainingExperimentResponseMetadata::getId() const
{
    return id_;
}

void TrainingExperimentResponseMetadata::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrainingExperimentResponseMetadata::idIsSet() const
{
    return idIsSet_;
}

void TrainingExperimentResponseMetadata::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


