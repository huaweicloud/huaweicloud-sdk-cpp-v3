

#include "huaweicloud/codeartsrepo/v4/model/ProjectProtectedTagPo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProjectProtectedTagPo::ProjectProtectedTagPo()
{
    id_ = 0;
    idIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    actionsIsSet_ = false;
}

ProjectProtectedTagPo::~ProjectProtectedTagPo() = default;

void ProjectProtectedTagPo::validate()
{
}

web::json::value ProjectProtectedTagPo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool ProjectProtectedTagPo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectProtectedActionResultDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


int32_t ProjectProtectedTagPo::getId() const
{
    return id_;
}

void ProjectProtectedTagPo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectProtectedTagPo::idIsSet() const
{
    return idIsSet_;
}

void ProjectProtectedTagPo::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectProtectedTagPo::getSource() const
{
    return source_;
}

void ProjectProtectedTagPo::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ProjectProtectedTagPo::sourceIsSet() const
{
    return sourceIsSet_;
}

void ProjectProtectedTagPo::unsetsource()
{
    sourceIsSet_ = false;
}

std::string ProjectProtectedTagPo::getProjectId() const
{
    return projectId_;
}

void ProjectProtectedTagPo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ProjectProtectedTagPo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ProjectProtectedTagPo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ProjectProtectedTagPo::getUpdatedAt() const
{
    return updatedAt_;
}

void ProjectProtectedTagPo::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ProjectProtectedTagPo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ProjectProtectedTagPo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ProjectProtectedTagPo::getName() const
{
    return name_;
}

void ProjectProtectedTagPo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProjectProtectedTagPo::nameIsSet() const
{
    return nameIsSet_;
}

void ProjectProtectedTagPo::unsetname()
{
    nameIsSet_ = false;
}

std::vector<ProjectProtectedActionResultDto>& ProjectProtectedTagPo::getActions()
{
    return actions_;
}

void ProjectProtectedTagPo::setActions(const std::vector<ProjectProtectedActionResultDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ProjectProtectedTagPo::actionsIsSet() const
{
    return actionsIsSet_;
}

void ProjectProtectedTagPo::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


