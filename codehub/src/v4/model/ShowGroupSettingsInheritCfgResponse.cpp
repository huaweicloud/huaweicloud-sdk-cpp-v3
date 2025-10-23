

#include "huaweicloud/codehub/v4/model/ShowGroupSettingsInheritCfgResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupSettingsInheritCfgResponse::ShowGroupSettingsInheritCfgResponse()
{
    canUpdate_ = false;
    canUpdateIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    namespaceId_ = 0;
    namespaceIdIsSet_ = false;
    parentId_ = 0;
    parentIdIsSet_ = false;
    ownership_ = 0;
    ownershipIsSet_ = false;
    pbi_ = 0;
    pbiIsSet_ = false;
    protectedBranches_ = 0;
    protectedBranchesIsSet_ = false;
    protectedTags_ = 0;
    protectedTagsIsSet_ = false;
    pushRules_ = 0;
    pushRulesIsSet_ = false;
    changeRequests_ = 0;
    changeRequestsIsSet_ = false;
    customCtrlItems_ = 0;
    customCtrlItemsIsSet_ = false;
    reviews_ = 0;
    reviewsIsSet_ = false;
    issues_ = 0;
    issuesIsSet_ = false;
    crEvaluation_ = 0;
    crEvaluationIsSet_ = false;
    e2eSettings_ = 0;
    e2eSettingsIsSet_ = false;
    committerSettings_ = 0;
    committerSettingsIsSet_ = false;
    webhookSettings_ = 0;
    webhookSettingsIsSet_ = false;
    streamEventSettings_ = 0;
    streamEventSettingsIsSet_ = false;
    pipelineSettings_ = 0;
    pipelineSettingsIsSet_ = false;
    issueTemplates_ = 0;
    issueTemplatesIsSet_ = false;
    crCommentTemplates_ = 0;
    crCommentTemplatesIsSet_ = false;
    mergeRequests_ = 0;
    mergeRequestsIsSet_ = false;
    mrBranchPolicies_ = 0;
    mrBranchPoliciesIsSet_ = false;
    repositorySettings_ = 0;
    repositorySettingsIsSet_ = false;
    deployKeys_ = 0;
    deployKeysIsSet_ = false;
    watermark_ = 0;
    watermarkIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
}

ShowGroupSettingsInheritCfgResponse::~ShowGroupSettingsInheritCfgResponse() = default;

void ShowGroupSettingsInheritCfgResponse::validate()
{
}

web::json::value ShowGroupSettingsInheritCfgResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canUpdateIsSet_) {
        val[utility::conversions::to_string_t("can_update")] = ModelBase::toJson(canUpdate_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(namespaceIdIsSet_) {
        val[utility::conversions::to_string_t("namespace_id")] = ModelBase::toJson(namespaceId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(ownershipIsSet_) {
        val[utility::conversions::to_string_t("ownership")] = ModelBase::toJson(ownership_);
    }
    if(pbiIsSet_) {
        val[utility::conversions::to_string_t("pbi")] = ModelBase::toJson(pbi_);
    }
    if(protectedBranchesIsSet_) {
        val[utility::conversions::to_string_t("protected_branches")] = ModelBase::toJson(protectedBranches_);
    }
    if(protectedTagsIsSet_) {
        val[utility::conversions::to_string_t("protected_tags")] = ModelBase::toJson(protectedTags_);
    }
    if(pushRulesIsSet_) {
        val[utility::conversions::to_string_t("push_rules")] = ModelBase::toJson(pushRules_);
    }
    if(changeRequestsIsSet_) {
        val[utility::conversions::to_string_t("change_requests")] = ModelBase::toJson(changeRequests_);
    }
    if(customCtrlItemsIsSet_) {
        val[utility::conversions::to_string_t("custom_ctrl_items")] = ModelBase::toJson(customCtrlItems_);
    }
    if(reviewsIsSet_) {
        val[utility::conversions::to_string_t("reviews")] = ModelBase::toJson(reviews_);
    }
    if(issuesIsSet_) {
        val[utility::conversions::to_string_t("issues")] = ModelBase::toJson(issues_);
    }
    if(crEvaluationIsSet_) {
        val[utility::conversions::to_string_t("cr_evaluation")] = ModelBase::toJson(crEvaluation_);
    }
    if(e2eSettingsIsSet_) {
        val[utility::conversions::to_string_t("e2e_settings")] = ModelBase::toJson(e2eSettings_);
    }
    if(committerSettingsIsSet_) {
        val[utility::conversions::to_string_t("committer_settings")] = ModelBase::toJson(committerSettings_);
    }
    if(webhookSettingsIsSet_) {
        val[utility::conversions::to_string_t("webhook_settings")] = ModelBase::toJson(webhookSettings_);
    }
    if(streamEventSettingsIsSet_) {
        val[utility::conversions::to_string_t("stream_event_settings")] = ModelBase::toJson(streamEventSettings_);
    }
    if(pipelineSettingsIsSet_) {
        val[utility::conversions::to_string_t("pipeline_settings")] = ModelBase::toJson(pipelineSettings_);
    }
    if(issueTemplatesIsSet_) {
        val[utility::conversions::to_string_t("issue_templates")] = ModelBase::toJson(issueTemplates_);
    }
    if(crCommentTemplatesIsSet_) {
        val[utility::conversions::to_string_t("cr_comment_templates")] = ModelBase::toJson(crCommentTemplates_);
    }
    if(mergeRequestsIsSet_) {
        val[utility::conversions::to_string_t("merge_requests")] = ModelBase::toJson(mergeRequests_);
    }
    if(mrBranchPoliciesIsSet_) {
        val[utility::conversions::to_string_t("mr_branch_policies")] = ModelBase::toJson(mrBranchPolicies_);
    }
    if(repositorySettingsIsSet_) {
        val[utility::conversions::to_string_t("repository_settings")] = ModelBase::toJson(repositorySettings_);
    }
    if(deployKeysIsSet_) {
        val[utility::conversions::to_string_t("deploy_keys")] = ModelBase::toJson(deployKeys_);
    }
    if(watermarkIsSet_) {
        val[utility::conversions::to_string_t("watermark")] = ModelBase::toJson(watermark_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ShowGroupSettingsInheritCfgResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_update"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_update"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanUpdate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownership"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownership"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnership(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pbi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pbi"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPbi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_branches"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_tags"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_rules"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_requests"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeRequests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_ctrl_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_ctrl_items"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomCtrlItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviews"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviews"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviews(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cr_evaluation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cr_evaluation"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrEvaluation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("e2e_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("e2e_settings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setE2eSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("committer_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("committer_settings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitterSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhook_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhook_settings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebhookSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_event_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_event_settings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamEventSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_settings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_templates"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cr_comment_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cr_comment_templates"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrCommentTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_requests"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mr_branch_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mr_branch_policies"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMrBranchPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_settings"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositorySettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_keys"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployKeys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watermark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermark"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


bool ShowGroupSettingsInheritCfgResponse::isCanUpdate() const
{
    return canUpdate_;
}

void ShowGroupSettingsInheritCfgResponse::setCanUpdate(bool value)
{
    canUpdate_ = value;
    canUpdateIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::canUpdateIsSet() const
{
    return canUpdateIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetcanUpdate()
{
    canUpdateIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getId() const
{
    return id_;
}

void ShowGroupSettingsInheritCfgResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowGroupSettingsInheritCfgResponse::getProductId() const
{
    return productId_;
}

void ShowGroupSettingsInheritCfgResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getNamespaceId() const
{
    return namespaceId_;
}

void ShowGroupSettingsInheritCfgResponse::setNamespaceId(int32_t value)
{
    namespaceId_ = value;
    namespaceIdIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::namespaceIdIsSet() const
{
    return namespaceIdIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetnamespaceId()
{
    namespaceIdIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getParentId() const
{
    return parentId_;
}

void ShowGroupSettingsInheritCfgResponse::setParentId(int32_t value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getOwnership() const
{
    return ownership_;
}

void ShowGroupSettingsInheritCfgResponse::setOwnership(int32_t value)
{
    ownership_ = value;
    ownershipIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::ownershipIsSet() const
{
    return ownershipIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetownership()
{
    ownershipIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getPbi() const
{
    return pbi_;
}

void ShowGroupSettingsInheritCfgResponse::setPbi(int32_t value)
{
    pbi_ = value;
    pbiIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::pbiIsSet() const
{
    return pbiIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetpbi()
{
    pbiIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getProtectedBranches() const
{
    return protectedBranches_;
}

void ShowGroupSettingsInheritCfgResponse::setProtectedBranches(int32_t value)
{
    protectedBranches_ = value;
    protectedBranchesIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::protectedBranchesIsSet() const
{
    return protectedBranchesIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetprotectedBranches()
{
    protectedBranchesIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getProtectedTags() const
{
    return protectedTags_;
}

void ShowGroupSettingsInheritCfgResponse::setProtectedTags(int32_t value)
{
    protectedTags_ = value;
    protectedTagsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::protectedTagsIsSet() const
{
    return protectedTagsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetprotectedTags()
{
    protectedTagsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getPushRules() const
{
    return pushRules_;
}

void ShowGroupSettingsInheritCfgResponse::setPushRules(int32_t value)
{
    pushRules_ = value;
    pushRulesIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::pushRulesIsSet() const
{
    return pushRulesIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetpushRules()
{
    pushRulesIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getChangeRequests() const
{
    return changeRequests_;
}

void ShowGroupSettingsInheritCfgResponse::setChangeRequests(int32_t value)
{
    changeRequests_ = value;
    changeRequestsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::changeRequestsIsSet() const
{
    return changeRequestsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetchangeRequests()
{
    changeRequestsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getCustomCtrlItems() const
{
    return customCtrlItems_;
}

void ShowGroupSettingsInheritCfgResponse::setCustomCtrlItems(int32_t value)
{
    customCtrlItems_ = value;
    customCtrlItemsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::customCtrlItemsIsSet() const
{
    return customCtrlItemsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetcustomCtrlItems()
{
    customCtrlItemsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getReviews() const
{
    return reviews_;
}

void ShowGroupSettingsInheritCfgResponse::setReviews(int32_t value)
{
    reviews_ = value;
    reviewsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::reviewsIsSet() const
{
    return reviewsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetreviews()
{
    reviewsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getIssues() const
{
    return issues_;
}

void ShowGroupSettingsInheritCfgResponse::setIssues(int32_t value)
{
    issues_ = value;
    issuesIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::issuesIsSet() const
{
    return issuesIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetissues()
{
    issuesIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getCrEvaluation() const
{
    return crEvaluation_;
}

void ShowGroupSettingsInheritCfgResponse::setCrEvaluation(int32_t value)
{
    crEvaluation_ = value;
    crEvaluationIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::crEvaluationIsSet() const
{
    return crEvaluationIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetcrEvaluation()
{
    crEvaluationIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getE2eSettings() const
{
    return e2eSettings_;
}

void ShowGroupSettingsInheritCfgResponse::setE2eSettings(int32_t value)
{
    e2eSettings_ = value;
    e2eSettingsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::e2eSettingsIsSet() const
{
    return e2eSettingsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsete2eSettings()
{
    e2eSettingsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getCommitterSettings() const
{
    return committerSettings_;
}

void ShowGroupSettingsInheritCfgResponse::setCommitterSettings(int32_t value)
{
    committerSettings_ = value;
    committerSettingsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::committerSettingsIsSet() const
{
    return committerSettingsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetcommitterSettings()
{
    committerSettingsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getWebhookSettings() const
{
    return webhookSettings_;
}

void ShowGroupSettingsInheritCfgResponse::setWebhookSettings(int32_t value)
{
    webhookSettings_ = value;
    webhookSettingsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::webhookSettingsIsSet() const
{
    return webhookSettingsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetwebhookSettings()
{
    webhookSettingsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getStreamEventSettings() const
{
    return streamEventSettings_;
}

void ShowGroupSettingsInheritCfgResponse::setStreamEventSettings(int32_t value)
{
    streamEventSettings_ = value;
    streamEventSettingsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::streamEventSettingsIsSet() const
{
    return streamEventSettingsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetstreamEventSettings()
{
    streamEventSettingsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getPipelineSettings() const
{
    return pipelineSettings_;
}

void ShowGroupSettingsInheritCfgResponse::setPipelineSettings(int32_t value)
{
    pipelineSettings_ = value;
    pipelineSettingsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::pipelineSettingsIsSet() const
{
    return pipelineSettingsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetpipelineSettings()
{
    pipelineSettingsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getIssueTemplates() const
{
    return issueTemplates_;
}

void ShowGroupSettingsInheritCfgResponse::setIssueTemplates(int32_t value)
{
    issueTemplates_ = value;
    issueTemplatesIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::issueTemplatesIsSet() const
{
    return issueTemplatesIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetissueTemplates()
{
    issueTemplatesIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getCrCommentTemplates() const
{
    return crCommentTemplates_;
}

void ShowGroupSettingsInheritCfgResponse::setCrCommentTemplates(int32_t value)
{
    crCommentTemplates_ = value;
    crCommentTemplatesIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::crCommentTemplatesIsSet() const
{
    return crCommentTemplatesIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetcrCommentTemplates()
{
    crCommentTemplatesIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getMergeRequests() const
{
    return mergeRequests_;
}

void ShowGroupSettingsInheritCfgResponse::setMergeRequests(int32_t value)
{
    mergeRequests_ = value;
    mergeRequestsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::mergeRequestsIsSet() const
{
    return mergeRequestsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetmergeRequests()
{
    mergeRequestsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getMrBranchPolicies() const
{
    return mrBranchPolicies_;
}

void ShowGroupSettingsInheritCfgResponse::setMrBranchPolicies(int32_t value)
{
    mrBranchPolicies_ = value;
    mrBranchPoliciesIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::mrBranchPoliciesIsSet() const
{
    return mrBranchPoliciesIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetmrBranchPolicies()
{
    mrBranchPoliciesIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getRepositorySettings() const
{
    return repositorySettings_;
}

void ShowGroupSettingsInheritCfgResponse::setRepositorySettings(int32_t value)
{
    repositorySettings_ = value;
    repositorySettingsIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::repositorySettingsIsSet() const
{
    return repositorySettingsIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetrepositorySettings()
{
    repositorySettingsIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getDeployKeys() const
{
    return deployKeys_;
}

void ShowGroupSettingsInheritCfgResponse::setDeployKeys(int32_t value)
{
    deployKeys_ = value;
    deployKeysIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::deployKeysIsSet() const
{
    return deployKeysIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetdeployKeys()
{
    deployKeysIsSet_ = false;
}

int32_t ShowGroupSettingsInheritCfgResponse::getWatermark() const
{
    return watermark_;
}

void ShowGroupSettingsInheritCfgResponse::setWatermark(int32_t value)
{
    watermark_ = value;
    watermarkIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::watermarkIsSet() const
{
    return watermarkIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetwatermark()
{
    watermarkIsSet_ = false;
}

std::string ShowGroupSettingsInheritCfgResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowGroupSettingsInheritCfgResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowGroupSettingsInheritCfgResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowGroupSettingsInheritCfgResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowGroupSettingsInheritCfgResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowGroupSettingsInheritCfgResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


