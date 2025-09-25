

#include "huaweicloud/codehub/v3/model/RepoInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoInfo::RepoInfo()
{
    createAt_ = "";
    createAtIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    httpUrl_ = "";
    httpUrlIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectIsDelete_ = "";
    projectIsDeleteIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    sshUrl_ = "";
    sshUrlIsSet_ = false;
    visibilityLevel_ = 0;
    visibilityLevelIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
}

RepoInfo::~RepoInfo() = default;

void RepoInfo::validate()
{
}

web::json::value RepoInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("createAt")] = ModelBase::toJson(createAt_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("groupName")] = ModelBase::toJson(groupName_);
    }
    if(httpUrlIsSet_) {
        val[utility::conversions::to_string_t("httpUrl")] = ModelBase::toJson(httpUrl_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(projectIsDeleteIsSet_) {
        val[utility::conversions::to_string_t("projectIsDelete")] = ModelBase::toJson(projectIsDelete_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repoId")] = ModelBase::toJson(repoId_);
    }
    if(sshUrlIsSet_) {
        val[utility::conversions::to_string_t("sshUrl")] = ModelBase::toJson(sshUrl_);
    }
    if(visibilityLevelIsSet_) {
        val[utility::conversions::to_string_t("visibilityLevel")] = ModelBase::toJson(visibilityLevel_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("webUrl")] = ModelBase::toJson(webUrl_);
    }

    return val;
}
bool RepoInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("createAt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createAt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("httpUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectIsDelete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectIsDelete"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectIsDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sshUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sshUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibilityLevel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibilityLevel"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibilityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    return ok;
}


std::string RepoInfo::getCreateAt() const
{
    return createAt_;
}

void RepoInfo::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool RepoInfo::createAtIsSet() const
{
    return createAtIsSet_;
}

void RepoInfo::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string RepoInfo::getGroupName() const
{
    return groupName_;
}

void RepoInfo::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool RepoInfo::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void RepoInfo::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string RepoInfo::getHttpUrl() const
{
    return httpUrl_;
}

void RepoInfo::setHttpUrl(const std::string& value)
{
    httpUrl_ = value;
    httpUrlIsSet_ = true;
}

bool RepoInfo::httpUrlIsSet() const
{
    return httpUrlIsSet_;
}

void RepoInfo::unsethttpUrl()
{
    httpUrlIsSet_ = false;
}

std::string RepoInfo::getId() const
{
    return id_;
}

void RepoInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepoInfo::idIsSet() const
{
    return idIsSet_;
}

void RepoInfo::unsetid()
{
    idIsSet_ = false;
}

std::string RepoInfo::getName() const
{
    return name_;
}

void RepoInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepoInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RepoInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string RepoInfo::getProjectId() const
{
    return projectId_;
}

void RepoInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepoInfo::getProjectIsDelete() const
{
    return projectIsDelete_;
}

void RepoInfo::setProjectIsDelete(const std::string& value)
{
    projectIsDelete_ = value;
    projectIsDeleteIsSet_ = true;
}

bool RepoInfo::projectIsDeleteIsSet() const
{
    return projectIsDeleteIsSet_;
}

void RepoInfo::unsetprojectIsDelete()
{
    projectIsDeleteIsSet_ = false;
}

std::string RepoInfo::getRepoId() const
{
    return repoId_;
}

void RepoInfo::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool RepoInfo::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void RepoInfo::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string RepoInfo::getSshUrl() const
{
    return sshUrl_;
}

void RepoInfo::setSshUrl(const std::string& value)
{
    sshUrl_ = value;
    sshUrlIsSet_ = true;
}

bool RepoInfo::sshUrlIsSet() const
{
    return sshUrlIsSet_;
}

void RepoInfo::unsetsshUrl()
{
    sshUrlIsSet_ = false;
}

int32_t RepoInfo::getVisibilityLevel() const
{
    return visibilityLevel_;
}

void RepoInfo::setVisibilityLevel(int32_t value)
{
    visibilityLevel_ = value;
    visibilityLevelIsSet_ = true;
}

bool RepoInfo::visibilityLevelIsSet() const
{
    return visibilityLevelIsSet_;
}

void RepoInfo::unsetvisibilityLevel()
{
    visibilityLevelIsSet_ = false;
}

std::string RepoInfo::getWebUrl() const
{
    return webUrl_;
}

void RepoInfo::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool RepoInfo::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void RepoInfo::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

}
}
}
}
}


