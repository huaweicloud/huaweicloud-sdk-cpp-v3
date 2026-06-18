

#include "huaweicloud/codeartsrepo/v4/model/UpdateRepositoryGeneralPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateRepositoryGeneralPolicyResponse::UpdateRepositoryGeneralPolicyResponse()
{
    disableFork_ = false;
    disableForkIsSet_ = false;
    generatePreMergeRef_ = false;
    generatePreMergeRefIsSet_ = false;
    branchNameRegex_ = "";
    branchNameRegexIsSet_ = false;
    tagNameRegex_ = "";
    tagNameRegexIsSet_ = false;
    forbiddenDeveloperCreateBranch_ = false;
    forbiddenDeveloperCreateBranchIsSet_ = false;
    createBranchWhitelistUsersIsSet_ = false;
    repoEncryptionEnabled_ = false;
    repoEncryptionEnabledIsSet_ = false;
    repoEncryptionStatusIsSet_ = false;
}

UpdateRepositoryGeneralPolicyResponse::~UpdateRepositoryGeneralPolicyResponse() = default;

void UpdateRepositoryGeneralPolicyResponse::validate()
{
}

web::json::value UpdateRepositoryGeneralPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableForkIsSet_) {
        val[utility::conversions::to_string_t("disable_fork")] = ModelBase::toJson(disableFork_);
    }
    if(generatePreMergeRefIsSet_) {
        val[utility::conversions::to_string_t("generate_pre_merge_ref")] = ModelBase::toJson(generatePreMergeRef_);
    }
    if(branchNameRegexIsSet_) {
        val[utility::conversions::to_string_t("branch_name_regex")] = ModelBase::toJson(branchNameRegex_);
    }
    if(tagNameRegexIsSet_) {
        val[utility::conversions::to_string_t("tag_name_regex")] = ModelBase::toJson(tagNameRegex_);
    }
    if(forbiddenDeveloperCreateBranchIsSet_) {
        val[utility::conversions::to_string_t("forbidden_developer_create_branch")] = ModelBase::toJson(forbiddenDeveloperCreateBranch_);
    }
    if(createBranchWhitelistUsersIsSet_) {
        val[utility::conversions::to_string_t("create_branch_whitelist_users")] = ModelBase::toJson(createBranchWhitelistUsers_);
    }
    if(repoEncryptionEnabledIsSet_) {
        val[utility::conversions::to_string_t("repo_encryption_enabled")] = ModelBase::toJson(repoEncryptionEnabled_);
    }
    if(repoEncryptionStatusIsSet_) {
        val[utility::conversions::to_string_t("repo_encryption_status")] = ModelBase::toJson(repoEncryptionStatus_);
    }

    return val;
}
bool UpdateRepositoryGeneralPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disable_fork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_fork"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableFork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generate_pre_merge_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_pre_merge_ref"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeneratePreMergeRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_name_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_name_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagNameRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_developer_create_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_developer_create_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenDeveloperCreateBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_branch_whitelist_users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_branch_whitelist_users"));
        if(!fieldValue.is_null())
        {
            std::vector<PushRuleDevelopersDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateBranchWhitelistUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_encryption_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_encryption_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoEncryptionEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_encryption_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_encryption_status"));
        if(!fieldValue.is_null())
        {
            ProjectEncryptionStatusBriefDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoEncryptionStatus(refVal);
        }
    }
    return ok;
}


bool UpdateRepositoryGeneralPolicyResponse::isDisableFork() const
{
    return disableFork_;
}

void UpdateRepositoryGeneralPolicyResponse::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

bool UpdateRepositoryGeneralPolicyResponse::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void UpdateRepositoryGeneralPolicyResponse::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

std::string UpdateRepositoryGeneralPolicyResponse::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void UpdateRepositoryGeneralPolicyResponse::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string UpdateRepositoryGeneralPolicyResponse::getTagNameRegex() const
{
    return tagNameRegex_;
}

void UpdateRepositoryGeneralPolicyResponse::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool UpdateRepositoryGeneralPolicyResponse::isForbiddenDeveloperCreateBranch() const
{
    return forbiddenDeveloperCreateBranch_;
}

void UpdateRepositoryGeneralPolicyResponse::setForbiddenDeveloperCreateBranch(bool value)
{
    forbiddenDeveloperCreateBranch_ = value;
    forbiddenDeveloperCreateBranchIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::forbiddenDeveloperCreateBranchIsSet() const
{
    return forbiddenDeveloperCreateBranchIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetforbiddenDeveloperCreateBranch()
{
    forbiddenDeveloperCreateBranchIsSet_ = false;
}

std::vector<PushRuleDevelopersDto>& UpdateRepositoryGeneralPolicyResponse::getCreateBranchWhitelistUsers()
{
    return createBranchWhitelistUsers_;
}

void UpdateRepositoryGeneralPolicyResponse::setCreateBranchWhitelistUsers(const std::vector<PushRuleDevelopersDto>& value)
{
    createBranchWhitelistUsers_ = value;
    createBranchWhitelistUsersIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::createBranchWhitelistUsersIsSet() const
{
    return createBranchWhitelistUsersIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetcreateBranchWhitelistUsers()
{
    createBranchWhitelistUsersIsSet_ = false;
}

bool UpdateRepositoryGeneralPolicyResponse::isRepoEncryptionEnabled() const
{
    return repoEncryptionEnabled_;
}

void UpdateRepositoryGeneralPolicyResponse::setRepoEncryptionEnabled(bool value)
{
    repoEncryptionEnabled_ = value;
    repoEncryptionEnabledIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::repoEncryptionEnabledIsSet() const
{
    return repoEncryptionEnabledIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetrepoEncryptionEnabled()
{
    repoEncryptionEnabledIsSet_ = false;
}

ProjectEncryptionStatusBriefDto UpdateRepositoryGeneralPolicyResponse::getRepoEncryptionStatus() const
{
    return repoEncryptionStatus_;
}

void UpdateRepositoryGeneralPolicyResponse::setRepoEncryptionStatus(const ProjectEncryptionStatusBriefDto& value)
{
    repoEncryptionStatus_ = value;
    repoEncryptionStatusIsSet_ = true;
}

bool UpdateRepositoryGeneralPolicyResponse::repoEncryptionStatusIsSet() const
{
    return repoEncryptionStatusIsSet_;
}

void UpdateRepositoryGeneralPolicyResponse::unsetrepoEncryptionStatus()
{
    repoEncryptionStatusIsSet_ = false;
}

}
}
}
}
}


