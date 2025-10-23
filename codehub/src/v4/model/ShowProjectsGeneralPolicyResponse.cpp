

#include "huaweicloud/codehub/v4/model/ShowProjectsGeneralPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectsGeneralPolicyResponse::ShowProjectsGeneralPolicyResponse()
{
    disableFork_ = false;
    disableForkIsSet_ = false;
    forbiddenDeveloperCreateBranch_ = false;
    forbiddenDeveloperCreateBranchIsSet_ = false;
    forbiddenDeveloperCreateTag_ = false;
    forbiddenDeveloperCreateTagIsSet_ = false;
    forbiddenCommitterCreateBranch_ = false;
    forbiddenCommitterCreateBranchIsSet_ = false;
    branchNameRegex_ = "";
    branchNameRegexIsSet_ = false;
    tagNameRegex_ = "";
    tagNameRegexIsSet_ = false;
    generatePreMergeRef_ = false;
    generatePreMergeRefIsSet_ = false;
    forbiddenGitlabAccess_ = false;
    forbiddenGitlabAccessIsSet_ = false;
    rebaseDisableTriggerWebhook_ = false;
    rebaseDisableTriggerWebhookIsSet_ = false;
    openGpgVerified_ = false;
    openGpgVerifiedIsSet_ = false;
}

ShowProjectsGeneralPolicyResponse::~ShowProjectsGeneralPolicyResponse() = default;

void ShowProjectsGeneralPolicyResponse::validate()
{
}

web::json::value ShowProjectsGeneralPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableForkIsSet_) {
        val[utility::conversions::to_string_t("disable_fork")] = ModelBase::toJson(disableFork_);
    }
    if(forbiddenDeveloperCreateBranchIsSet_) {
        val[utility::conversions::to_string_t("forbidden_developer_create_branch")] = ModelBase::toJson(forbiddenDeveloperCreateBranch_);
    }
    if(forbiddenDeveloperCreateTagIsSet_) {
        val[utility::conversions::to_string_t("forbidden_developer_create_tag")] = ModelBase::toJson(forbiddenDeveloperCreateTag_);
    }
    if(forbiddenCommitterCreateBranchIsSet_) {
        val[utility::conversions::to_string_t("forbidden_committer_create_branch")] = ModelBase::toJson(forbiddenCommitterCreateBranch_);
    }
    if(branchNameRegexIsSet_) {
        val[utility::conversions::to_string_t("branch_name_regex")] = ModelBase::toJson(branchNameRegex_);
    }
    if(tagNameRegexIsSet_) {
        val[utility::conversions::to_string_t("tag_name_regex")] = ModelBase::toJson(tagNameRegex_);
    }
    if(generatePreMergeRefIsSet_) {
        val[utility::conversions::to_string_t("generate_pre_merge_ref")] = ModelBase::toJson(generatePreMergeRef_);
    }
    if(forbiddenGitlabAccessIsSet_) {
        val[utility::conversions::to_string_t("forbidden_gitlab_access")] = ModelBase::toJson(forbiddenGitlabAccess_);
    }
    if(rebaseDisableTriggerWebhookIsSet_) {
        val[utility::conversions::to_string_t("rebase_disable_trigger_webhook")] = ModelBase::toJson(rebaseDisableTriggerWebhook_);
    }
    if(openGpgVerifiedIsSet_) {
        val[utility::conversions::to_string_t("open_gpg_verified")] = ModelBase::toJson(openGpgVerified_);
    }

    return val;
}
bool ShowProjectsGeneralPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("forbidden_developer_create_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_developer_create_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenDeveloperCreateBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_developer_create_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_developer_create_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenDeveloperCreateTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_committer_create_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_committer_create_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenCommitterCreateBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("generate_pre_merge_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_pre_merge_ref"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeneratePreMergeRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_gitlab_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_gitlab_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenGitlabAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rebase_disable_trigger_webhook"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rebase_disable_trigger_webhook"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRebaseDisableTriggerWebhook(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("open_gpg_verified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_gpg_verified"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenGpgVerified(refVal);
        }
    }
    return ok;
}


bool ShowProjectsGeneralPolicyResponse::isDisableFork() const
{
    return disableFork_;
}

void ShowProjectsGeneralPolicyResponse::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isForbiddenDeveloperCreateBranch() const
{
    return forbiddenDeveloperCreateBranch_;
}

void ShowProjectsGeneralPolicyResponse::setForbiddenDeveloperCreateBranch(bool value)
{
    forbiddenDeveloperCreateBranch_ = value;
    forbiddenDeveloperCreateBranchIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::forbiddenDeveloperCreateBranchIsSet() const
{
    return forbiddenDeveloperCreateBranchIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetforbiddenDeveloperCreateBranch()
{
    forbiddenDeveloperCreateBranchIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isForbiddenDeveloperCreateTag() const
{
    return forbiddenDeveloperCreateTag_;
}

void ShowProjectsGeneralPolicyResponse::setForbiddenDeveloperCreateTag(bool value)
{
    forbiddenDeveloperCreateTag_ = value;
    forbiddenDeveloperCreateTagIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::forbiddenDeveloperCreateTagIsSet() const
{
    return forbiddenDeveloperCreateTagIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetforbiddenDeveloperCreateTag()
{
    forbiddenDeveloperCreateTagIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isForbiddenCommitterCreateBranch() const
{
    return forbiddenCommitterCreateBranch_;
}

void ShowProjectsGeneralPolicyResponse::setForbiddenCommitterCreateBranch(bool value)
{
    forbiddenCommitterCreateBranch_ = value;
    forbiddenCommitterCreateBranchIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::forbiddenCommitterCreateBranchIsSet() const
{
    return forbiddenCommitterCreateBranchIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetforbiddenCommitterCreateBranch()
{
    forbiddenCommitterCreateBranchIsSet_ = false;
}

std::string ShowProjectsGeneralPolicyResponse::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void ShowProjectsGeneralPolicyResponse::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string ShowProjectsGeneralPolicyResponse::getTagNameRegex() const
{
    return tagNameRegex_;
}

void ShowProjectsGeneralPolicyResponse::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void ShowProjectsGeneralPolicyResponse::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isForbiddenGitlabAccess() const
{
    return forbiddenGitlabAccess_;
}

void ShowProjectsGeneralPolicyResponse::setForbiddenGitlabAccess(bool value)
{
    forbiddenGitlabAccess_ = value;
    forbiddenGitlabAccessIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::forbiddenGitlabAccessIsSet() const
{
    return forbiddenGitlabAccessIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetforbiddenGitlabAccess()
{
    forbiddenGitlabAccessIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isRebaseDisableTriggerWebhook() const
{
    return rebaseDisableTriggerWebhook_;
}

void ShowProjectsGeneralPolicyResponse::setRebaseDisableTriggerWebhook(bool value)
{
    rebaseDisableTriggerWebhook_ = value;
    rebaseDisableTriggerWebhookIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::rebaseDisableTriggerWebhookIsSet() const
{
    return rebaseDisableTriggerWebhookIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetrebaseDisableTriggerWebhook()
{
    rebaseDisableTriggerWebhookIsSet_ = false;
}

bool ShowProjectsGeneralPolicyResponse::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void ShowProjectsGeneralPolicyResponse::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool ShowProjectsGeneralPolicyResponse::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void ShowProjectsGeneralPolicyResponse::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

}
}
}
}
}


