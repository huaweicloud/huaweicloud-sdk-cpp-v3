

#include "huaweicloud/codeartsrepo/v4/model/RepoEncryptionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepoEncryptionDto::RepoEncryptionDto()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    fullPath_ = "";
    fullPathIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    ownerId_ = 0;
    ownerIdIsSet_ = false;
    ownerIamId_ = "";
    ownerIamIdIsSet_ = false;
    ownerTenantName_ = "";
    ownerTenantNameIsSet_ = false;
    ownerNickName_ = "";
    ownerNickNameIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
}

RepoEncryptionDto::~RepoEncryptionDto() = default;

void RepoEncryptionDto::validate()
{
}

web::json::value RepoEncryptionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(fullPathIsSet_) {
        val[utility::conversions::to_string_t("full_path")] = ModelBase::toJson(fullPath_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }
    if(ownerIamIdIsSet_) {
        val[utility::conversions::to_string_t("owner_iam_id")] = ModelBase::toJson(ownerIamId_);
    }
    if(ownerTenantNameIsSet_) {
        val[utility::conversions::to_string_t("owner_tenant_name")] = ModelBase::toJson(ownerTenantName_);
    }
    if(ownerNickNameIsSet_) {
        val[utility::conversions::to_string_t("owner_nick_name")] = ModelBase::toJson(ownerNickName_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }

    return val;
}
bool RepoEncryptionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("full_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_tenant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_tenant_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerTenantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    return ok;
}


int32_t RepoEncryptionDto::getRepoId() const
{
    return repoId_;
}

void RepoEncryptionDto::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool RepoEncryptionDto::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void RepoEncryptionDto::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string RepoEncryptionDto::getRepoName() const
{
    return repoName_;
}

void RepoEncryptionDto::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool RepoEncryptionDto::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void RepoEncryptionDto::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string RepoEncryptionDto::getFullPath() const
{
    return fullPath_;
}

void RepoEncryptionDto::setFullPath(const std::string& value)
{
    fullPath_ = value;
    fullPathIsSet_ = true;
}

bool RepoEncryptionDto::fullPathIsSet() const
{
    return fullPathIsSet_;
}

void RepoEncryptionDto::unsetfullPath()
{
    fullPathIsSet_ = false;
}

std::string RepoEncryptionDto::getProjectId() const
{
    return projectId_;
}

void RepoEncryptionDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoEncryptionDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoEncryptionDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepoEncryptionDto::getProjectName() const
{
    return projectName_;
}

void RepoEncryptionDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool RepoEncryptionDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void RepoEncryptionDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

int32_t RepoEncryptionDto::getOwnerId() const
{
    return ownerId_;
}

void RepoEncryptionDto::setOwnerId(int32_t value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool RepoEncryptionDto::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void RepoEncryptionDto::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string RepoEncryptionDto::getOwnerIamId() const
{
    return ownerIamId_;
}

void RepoEncryptionDto::setOwnerIamId(const std::string& value)
{
    ownerIamId_ = value;
    ownerIamIdIsSet_ = true;
}

bool RepoEncryptionDto::ownerIamIdIsSet() const
{
    return ownerIamIdIsSet_;
}

void RepoEncryptionDto::unsetownerIamId()
{
    ownerIamIdIsSet_ = false;
}

std::string RepoEncryptionDto::getOwnerTenantName() const
{
    return ownerTenantName_;
}

void RepoEncryptionDto::setOwnerTenantName(const std::string& value)
{
    ownerTenantName_ = value;
    ownerTenantNameIsSet_ = true;
}

bool RepoEncryptionDto::ownerTenantNameIsSet() const
{
    return ownerTenantNameIsSet_;
}

void RepoEncryptionDto::unsetownerTenantName()
{
    ownerTenantNameIsSet_ = false;
}

std::string RepoEncryptionDto::getOwnerNickName() const
{
    return ownerNickName_;
}

void RepoEncryptionDto::setOwnerNickName(const std::string& value)
{
    ownerNickName_ = value;
    ownerNickNameIsSet_ = true;
}

bool RepoEncryptionDto::ownerNickNameIsSet() const
{
    return ownerNickNameIsSet_;
}

void RepoEncryptionDto::unsetownerNickName()
{
    ownerNickNameIsSet_ = false;
}

std::string RepoEncryptionDto::getOwnerName() const
{
    return ownerName_;
}

void RepoEncryptionDto::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool RepoEncryptionDto::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void RepoEncryptionDto::unsetownerName()
{
    ownerNameIsSet_ = false;
}

}
}
}
}
}


