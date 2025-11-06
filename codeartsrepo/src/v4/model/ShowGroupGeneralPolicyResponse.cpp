

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupGeneralPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupGeneralPolicyResponse::ShowGroupGeneralPolicyResponse()
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

ShowGroupGeneralPolicyResponse::~ShowGroupGeneralPolicyResponse() = default;

void ShowGroupGeneralPolicyResponse::validate()
{
}

web::json::value ShowGroupGeneralPolicyResponse::toJson() const
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
bool ShowGroupGeneralPolicyResponse::fromJson(const web::json::value& val)
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


bool ShowGroupGeneralPolicyResponse::isDisableFork() const
{
    return disableFork_;
}

void ShowGroupGeneralPolicyResponse::setDisableFork(bool value)
{
    disableFork_ = value;
    disableForkIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::disableForkIsSet() const
{
    return disableForkIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetdisableFork()
{
    disableForkIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isForbiddenDeveloperCreateBranch() const
{
    return forbiddenDeveloperCreateBranch_;
}

void ShowGroupGeneralPolicyResponse::setForbiddenDeveloperCreateBranch(bool value)
{
    forbiddenDeveloperCreateBranch_ = value;
    forbiddenDeveloperCreateBranchIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::forbiddenDeveloperCreateBranchIsSet() const
{
    return forbiddenDeveloperCreateBranchIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetforbiddenDeveloperCreateBranch()
{
    forbiddenDeveloperCreateBranchIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isForbiddenDeveloperCreateTag() const
{
    return forbiddenDeveloperCreateTag_;
}

void ShowGroupGeneralPolicyResponse::setForbiddenDeveloperCreateTag(bool value)
{
    forbiddenDeveloperCreateTag_ = value;
    forbiddenDeveloperCreateTagIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::forbiddenDeveloperCreateTagIsSet() const
{
    return forbiddenDeveloperCreateTagIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetforbiddenDeveloperCreateTag()
{
    forbiddenDeveloperCreateTagIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isForbiddenCommitterCreateBranch() const
{
    return forbiddenCommitterCreateBranch_;
}

void ShowGroupGeneralPolicyResponse::setForbiddenCommitterCreateBranch(bool value)
{
    forbiddenCommitterCreateBranch_ = value;
    forbiddenCommitterCreateBranchIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::forbiddenCommitterCreateBranchIsSet() const
{
    return forbiddenCommitterCreateBranchIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetforbiddenCommitterCreateBranch()
{
    forbiddenCommitterCreateBranchIsSet_ = false;
}

std::string ShowGroupGeneralPolicyResponse::getBranchNameRegex() const
{
    return branchNameRegex_;
}

void ShowGroupGeneralPolicyResponse::setBranchNameRegex(const std::string& value)
{
    branchNameRegex_ = value;
    branchNameRegexIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::branchNameRegexIsSet() const
{
    return branchNameRegexIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetbranchNameRegex()
{
    branchNameRegexIsSet_ = false;
}

std::string ShowGroupGeneralPolicyResponse::getTagNameRegex() const
{
    return tagNameRegex_;
}

void ShowGroupGeneralPolicyResponse::setTagNameRegex(const std::string& value)
{
    tagNameRegex_ = value;
    tagNameRegexIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::tagNameRegexIsSet() const
{
    return tagNameRegexIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsettagNameRegex()
{
    tagNameRegexIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isGeneratePreMergeRef() const
{
    return generatePreMergeRef_;
}

void ShowGroupGeneralPolicyResponse::setGeneratePreMergeRef(bool value)
{
    generatePreMergeRef_ = value;
    generatePreMergeRefIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::generatePreMergeRefIsSet() const
{
    return generatePreMergeRefIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetgeneratePreMergeRef()
{
    generatePreMergeRefIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isForbiddenGitlabAccess() const
{
    return forbiddenGitlabAccess_;
}

void ShowGroupGeneralPolicyResponse::setForbiddenGitlabAccess(bool value)
{
    forbiddenGitlabAccess_ = value;
    forbiddenGitlabAccessIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::forbiddenGitlabAccessIsSet() const
{
    return forbiddenGitlabAccessIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetforbiddenGitlabAccess()
{
    forbiddenGitlabAccessIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isRebaseDisableTriggerWebhook() const
{
    return rebaseDisableTriggerWebhook_;
}

void ShowGroupGeneralPolicyResponse::setRebaseDisableTriggerWebhook(bool value)
{
    rebaseDisableTriggerWebhook_ = value;
    rebaseDisableTriggerWebhookIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::rebaseDisableTriggerWebhookIsSet() const
{
    return rebaseDisableTriggerWebhookIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetrebaseDisableTriggerWebhook()
{
    rebaseDisableTriggerWebhookIsSet_ = false;
}

bool ShowGroupGeneralPolicyResponse::isOpenGpgVerified() const
{
    return openGpgVerified_;
}

void ShowGroupGeneralPolicyResponse::setOpenGpgVerified(bool value)
{
    openGpgVerified_ = value;
    openGpgVerifiedIsSet_ = true;
}

bool ShowGroupGeneralPolicyResponse::openGpgVerifiedIsSet() const
{
    return openGpgVerifiedIsSet_;
}

void ShowGroupGeneralPolicyResponse::unsetopenGpgVerified()
{
    openGpgVerifiedIsSet_ = false;
}

}
}
}
}
}


