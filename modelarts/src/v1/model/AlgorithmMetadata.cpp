

#include "huaweicloud/modelarts/v1/model/AlgorithmMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmMetadata::AlgorithmMetadata()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    aiProject_ = "";
    aiProjectIsSet_ = false;
}

AlgorithmMetadata::~AlgorithmMetadata() = default;

void AlgorithmMetadata::validate()
{
}

web::json::value AlgorithmMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(aiProjectIsSet_) {
        val[utility::conversions::to_string_t("ai_project")] = ModelBase::toJson(aiProject_);
    }

    return val;
}
bool AlgorithmMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("ai_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ai_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAiProject(refVal);
        }
    }
    return ok;
}


int32_t AlgorithmMetadata::getId() const
{
    return id_;
}

void AlgorithmMetadata::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AlgorithmMetadata::idIsSet() const
{
    return idIsSet_;
}

void AlgorithmMetadata::unsetid()
{
    idIsSet_ = false;
}

std::string AlgorithmMetadata::getName() const
{
    return name_;
}

void AlgorithmMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmMetadata::getDescription() const
{
    return description_;
}

void AlgorithmMetadata::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AlgorithmMetadata::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AlgorithmMetadata::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AlgorithmMetadata::getWorkspaceId() const
{
    return workspaceId_;
}

void AlgorithmMetadata::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool AlgorithmMetadata::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void AlgorithmMetadata::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string AlgorithmMetadata::getAiProject() const
{
    return aiProject_;
}

void AlgorithmMetadata::setAiProject(const std::string& value)
{
    aiProject_ = value;
    aiProjectIsSet_ = true;
}

bool AlgorithmMetadata::aiProjectIsSet() const
{
    return aiProjectIsSet_;
}

void AlgorithmMetadata::unsetaiProject()
{
    aiProjectIsSet_ = false;
}

}
}
}
}
}


