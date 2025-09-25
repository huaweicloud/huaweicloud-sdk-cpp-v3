

#include "huaweicloud/codehub/v3/model/ForkProjectRepoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ForkProjectRepoRequest::ForkProjectRepoRequest()
{
    importMembers_ = 0;
    importMembersIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    externalProjectInfoIsSet_ = false;
}

ForkProjectRepoRequest::~ForkProjectRepoRequest() = default;

void ForkProjectRepoRequest::validate()
{
}

web::json::value ForkProjectRepoRequest::toJson() const
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
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
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
bool ForkProjectRepoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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


int32_t ForkProjectRepoRequest::getImportMembers() const
{
    return importMembers_;
}

void ForkProjectRepoRequest::setImportMembers(int32_t value)
{
    importMembers_ = value;
    importMembersIsSet_ = true;
}

bool ForkProjectRepoRequest::importMembersIsSet() const
{
    return importMembersIsSet_;
}

void ForkProjectRepoRequest::unsetimportMembers()
{
    importMembersIsSet_ = false;
}

std::string ForkProjectRepoRequest::getProjectName() const
{
    return projectName_;
}

void ForkProjectRepoRequest::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ForkProjectRepoRequest::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ForkProjectRepoRequest::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ForkProjectRepoRequest::getRepoName() const
{
    return repoName_;
}

void ForkProjectRepoRequest::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool ForkProjectRepoRequest::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void ForkProjectRepoRequest::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string ForkProjectRepoRequest::getTemplateId() const
{
    return templateId_;
}

void ForkProjectRepoRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ForkProjectRepoRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ForkProjectRepoRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ForkProjectRepoRequest::getType() const
{
    return type_;
}

void ForkProjectRepoRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ForkProjectRepoRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ForkProjectRepoRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ForkProjectRepoRequest::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void ForkProjectRepoRequest::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool ForkProjectRepoRequest::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void ForkProjectRepoRequest::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

ExternalKeyMessage ForkProjectRepoRequest::getExternalProjectInfo() const
{
    return externalProjectInfo_;
}

void ForkProjectRepoRequest::setExternalProjectInfo(const ExternalKeyMessage& value)
{
    externalProjectInfo_ = value;
    externalProjectInfoIsSet_ = true;
}

bool ForkProjectRepoRequest::externalProjectInfoIsSet() const
{
    return externalProjectInfoIsSet_;
}

void ForkProjectRepoRequest::unsetexternalProjectInfo()
{
    externalProjectInfoIsSet_ = false;
}

}
}
}
}
}


