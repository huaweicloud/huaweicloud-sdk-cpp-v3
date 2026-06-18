

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestTemplateFromDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestTemplateFromDto::MergeRequestTemplateFromDto()
{
    path_ = "";
    pathIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    groupId_ = 0;
    groupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

MergeRequestTemplateFromDto::~MergeRequestTemplateFromDto() = default;

void MergeRequestTemplateFromDto::validate()
{
}

web::json::value MergeRequestTemplateFromDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool MergeRequestTemplateFromDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    return ok;
}


std::string MergeRequestTemplateFromDto::getPath() const
{
    return path_;
}

void MergeRequestTemplateFromDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool MergeRequestTemplateFromDto::pathIsSet() const
{
    return pathIsSet_;
}

void MergeRequestTemplateFromDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string MergeRequestTemplateFromDto::getType() const
{
    return type_;
}

void MergeRequestTemplateFromDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MergeRequestTemplateFromDto::typeIsSet() const
{
    return typeIsSet_;
}

void MergeRequestTemplateFromDto::unsettype()
{
    typeIsSet_ = false;
}

int32_t MergeRequestTemplateFromDto::getRepositoryId() const
{
    return repositoryId_;
}

void MergeRequestTemplateFromDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool MergeRequestTemplateFromDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void MergeRequestTemplateFromDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t MergeRequestTemplateFromDto::getGroupId() const
{
    return groupId_;
}

void MergeRequestTemplateFromDto::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool MergeRequestTemplateFromDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void MergeRequestTemplateFromDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string MergeRequestTemplateFromDto::getProjectId() const
{
    return projectId_;
}

void MergeRequestTemplateFromDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MergeRequestTemplateFromDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MergeRequestTemplateFromDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


