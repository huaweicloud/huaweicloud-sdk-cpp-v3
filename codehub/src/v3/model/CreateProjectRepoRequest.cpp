

#include "huaweicloud/codehub/v3/model/CreateProjectRepoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateProjectRepoRequest::CreateProjectRepoRequest()
{
    importMembers_ = 0;
    importMembersIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    externalProjectInfoIsSet_ = false;
}

CreateProjectRepoRequest::~CreateProjectRepoRequest() = default;

void CreateProjectRepoRequest::validate()
{
}

web::json::value CreateProjectRepoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(importMembersIsSet_) {
        val[utility::conversions::to_string_t("import_members")] = ModelBase::toJson(importMembers_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(visibilityLevelIsSet_) {
        val[utility::conversions::to_string_t("visibility_level")] = ModelBase::toJson(visibilityLevel_);
    }
    if(externalProjectInfoIsSet_) {
        val[utility::conversions::to_string_t("external_project_info")] = ModelBase::toJson(externalProjectInfo_);
    }

    return val;
}
bool CreateProjectRepoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("import_members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_members"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportMembers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("visibility_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibilityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_project_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_project_info"));
        if(!fieldValue.is_null())
        {
            ExternalKeyMessage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalProjectInfo(refVal);
        }
    }
    return ok;
}


int32_t CreateProjectRepoRequest::getImportMembers() const
{
    return importMembers_;
}

void CreateProjectRepoRequest::setImportMembers(int32_t value)
{
    importMembers_ = value;
    importMembersIsSet_ = true;
}

bool CreateProjectRepoRequest::importMembersIsSet() const
{
    return importMembersIsSet_;
}

void CreateProjectRepoRequest::unsetimportMembers()
{
    importMembersIsSet_ = false;
}

std::string CreateProjectRepoRequest::getProjectName() const
{
    return projectName_;
}

void CreateProjectRepoRequest::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CreateProjectRepoRequest::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CreateProjectRepoRequest::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string CreateProjectRepoRequest::getRepoName() const
{
    return repoName_;
}

void CreateProjectRepoRequest::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool CreateProjectRepoRequest::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void CreateProjectRepoRequest::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string CreateProjectRepoRequest::getType() const
{
    return type_;
}

void CreateProjectRepoRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateProjectRepoRequest::typeIsSet() const
{
    return typeIsSet_;
}

void CreateProjectRepoRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t CreateProjectRepoRequest::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void CreateProjectRepoRequest::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool CreateProjectRepoRequest::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void CreateProjectRepoRequest::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

ExternalKeyMessage CreateProjectRepoRequest::getExternalProjectInfo() const
{
    return externalProjectInfo_;
}

void CreateProjectRepoRequest::setExternalProjectInfo(const ExternalKeyMessage& value)
{
    externalProjectInfo_ = value;
    externalProjectInfoIsSet_ = true;
}

bool CreateProjectRepoRequest::externalProjectInfoIsSet() const
{
    return externalProjectInfoIsSet_;
}

void CreateProjectRepoRequest::unsetexternalProjectInfo()
{
    externalProjectInfoIsSet_ = false;
}

}
}
}
}
}


