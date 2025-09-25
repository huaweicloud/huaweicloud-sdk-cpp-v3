

#include "huaweicloud/codehub/v4/model/SubmoduleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SubmoduleDto::SubmoduleDto()
{
    repoId_ = 0;
    repoIdIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    submoduleBranch_ = "";
    submoduleBranchIsSet_ = false;
    namespaceUuid_ = "";
    namespaceUuidIsSet_ = false;
    submoduleRepoId_ = 0;
    submoduleRepoIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    subCommitId_ = "";
    subCommitIdIsSet_ = false;
    deployKeyStatus_ = 0;
    deployKeyStatusIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

SubmoduleDto::~SubmoduleDto() = default;

void SubmoduleDto::validate()
{
}

web::json::value SubmoduleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(submoduleBranchIsSet_) {
        val[utility::conversions::to_string_t("submodule_branch")] = ModelBase::toJson(submoduleBranch_);
    }
    if(namespaceUuidIsSet_) {
        val[utility::conversions::to_string_t("namespace_uuid")] = ModelBase::toJson(namespaceUuid_);
    }
    if(submoduleRepoIdIsSet_) {
        val[utility::conversions::to_string_t("submodule_repo_id")] = ModelBase::toJson(submoduleRepoId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(subCommitIdIsSet_) {
        val[utility::conversions::to_string_t("sub_commitId")] = ModelBase::toJson(subCommitId_);
    }
    if(deployKeyStatusIsSet_) {
        val[utility::conversions::to_string_t("deployKey_status")] = ModelBase::toJson(deployKeyStatus_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SubmoduleDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submodule_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmoduleBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaceUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submodule_repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("submodule_repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubmoduleRepoId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sub_commitId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_commitId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployKey_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployKey_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployKeyStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t SubmoduleDto::getRepoId() const
{
    return repoId_;
}

void SubmoduleDto::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool SubmoduleDto::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void SubmoduleDto::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string SubmoduleDto::getBranch() const
{
    return branch_;
}

void SubmoduleDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool SubmoduleDto::branchIsSet() const
{
    return branchIsSet_;
}

void SubmoduleDto::unsetbranch()
{
    branchIsSet_ = false;
}

std::string SubmoduleDto::getPath() const
{
    return path_;
}

void SubmoduleDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool SubmoduleDto::pathIsSet() const
{
    return pathIsSet_;
}

void SubmoduleDto::unsetpath()
{
    pathIsSet_ = false;
}

std::string SubmoduleDto::getGitUrl() const
{
    return gitUrl_;
}

void SubmoduleDto::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool SubmoduleDto::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void SubmoduleDto::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

std::string SubmoduleDto::getSubmoduleBranch() const
{
    return submoduleBranch_;
}

void SubmoduleDto::setSubmoduleBranch(const std::string& value)
{
    submoduleBranch_ = value;
    submoduleBranchIsSet_ = true;
}

bool SubmoduleDto::submoduleBranchIsSet() const
{
    return submoduleBranchIsSet_;
}

void SubmoduleDto::unsetsubmoduleBranch()
{
    submoduleBranchIsSet_ = false;
}

std::string SubmoduleDto::getNamespaceUuid() const
{
    return namespaceUuid_;
}

void SubmoduleDto::setNamespaceUuid(const std::string& value)
{
    namespaceUuid_ = value;
    namespaceUuidIsSet_ = true;
}

bool SubmoduleDto::namespaceUuidIsSet() const
{
    return namespaceUuidIsSet_;
}

void SubmoduleDto::unsetnamespaceUuid()
{
    namespaceUuidIsSet_ = false;
}

int32_t SubmoduleDto::getSubmoduleRepoId() const
{
    return submoduleRepoId_;
}

void SubmoduleDto::setSubmoduleRepoId(int32_t value)
{
    submoduleRepoId_ = value;
    submoduleRepoIdIsSet_ = true;
}

bool SubmoduleDto::submoduleRepoIdIsSet() const
{
    return submoduleRepoIdIsSet_;
}

void SubmoduleDto::unsetsubmoduleRepoId()
{
    submoduleRepoIdIsSet_ = false;
}

std::string SubmoduleDto::getRepoName() const
{
    return repoName_;
}

void SubmoduleDto::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool SubmoduleDto::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void SubmoduleDto::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string SubmoduleDto::getSubCommitId() const
{
    return subCommitId_;
}

void SubmoduleDto::setSubCommitId(const std::string& value)
{
    subCommitId_ = value;
    subCommitIdIsSet_ = true;
}

bool SubmoduleDto::subCommitIdIsSet() const
{
    return subCommitIdIsSet_;
}

void SubmoduleDto::unsetsubCommitId()
{
    subCommitIdIsSet_ = false;
}

int32_t SubmoduleDto::getDeployKeyStatus() const
{
    return deployKeyStatus_;
}

void SubmoduleDto::setDeployKeyStatus(int32_t value)
{
    deployKeyStatus_ = value;
    deployKeyStatusIsSet_ = true;
}

bool SubmoduleDto::deployKeyStatusIsSet() const
{
    return deployKeyStatusIsSet_;
}

void SubmoduleDto::unsetdeployKeyStatus()
{
    deployKeyStatusIsSet_ = false;
}

int32_t SubmoduleDto::getStatus() const
{
    return status_;
}

void SubmoduleDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SubmoduleDto::statusIsSet() const
{
    return statusIsSet_;
}

void SubmoduleDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


