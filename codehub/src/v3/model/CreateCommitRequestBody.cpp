

#include "huaweicloud/codehub/v3/model/CreateCommitRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




CreateCommitRequestBody::CreateCommitRequestBody()
{
    branch_ = "";
    branchIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    startBranch_ = "";
    startBranchIsSet_ = false;
    actionsIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    stats_ = false;
    statsIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
}

CreateCommitRequestBody::~CreateCommitRequestBody() = default;

void CreateCommitRequestBody::validate()
{
}

web::json::value CreateCommitRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(startBranchIsSet_) {
        val[utility::conversions::to_string_t("start_branch")] = ModelBase::toJson(startBranch_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(authorEmailIsSet_) {
        val[utility::conversions::to_string_t("author_email")] = ModelBase::toJson(authorEmail_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(statsIsSet_) {
        val[utility::conversions::to_string_t("stats")] = ModelBase::toJson(stats_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }

    return val;
}
bool CreateCommitRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitAction> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stats"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    return ok;
}


std::string CreateCommitRequestBody::getBranch() const
{
    return branch_;
}

void CreateCommitRequestBody::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool CreateCommitRequestBody::branchIsSet() const
{
    return branchIsSet_;
}

void CreateCommitRequestBody::unsetbranch()
{
    branchIsSet_ = false;
}

std::string CreateCommitRequestBody::getCommitMessage() const
{
    return commitMessage_;
}

void CreateCommitRequestBody::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool CreateCommitRequestBody::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void CreateCommitRequestBody::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::string CreateCommitRequestBody::getStartBranch() const
{
    return startBranch_;
}

void CreateCommitRequestBody::setStartBranch(const std::string& value)
{
    startBranch_ = value;
    startBranchIsSet_ = true;
}

bool CreateCommitRequestBody::startBranchIsSet() const
{
    return startBranchIsSet_;
}

void CreateCommitRequestBody::unsetstartBranch()
{
    startBranchIsSet_ = false;
}

std::vector<CommitAction>& CreateCommitRequestBody::getActions()
{
    return actions_;
}

void CreateCommitRequestBody::setActions(const std::vector<CommitAction>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateCommitRequestBody::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateCommitRequestBody::unsetactions()
{
    actionsIsSet_ = false;
}

std::string CreateCommitRequestBody::getAuthorEmail() const
{
    return authorEmail_;
}

void CreateCommitRequestBody::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CreateCommitRequestBody::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CreateCommitRequestBody::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CreateCommitRequestBody::getAuthorName() const
{
    return authorName_;
}

void CreateCommitRequestBody::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CreateCommitRequestBody::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CreateCommitRequestBody::unsetauthorName()
{
    authorNameIsSet_ = false;
}

bool CreateCommitRequestBody::isStats() const
{
    return stats_;
}

void CreateCommitRequestBody::setStats(bool value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool CreateCommitRequestBody::statsIsSet() const
{
    return statsIsSet_;
}

void CreateCommitRequestBody::unsetstats()
{
    statsIsSet_ = false;
}

bool CreateCommitRequestBody::isForce() const
{
    return force_;
}

void CreateCommitRequestBody::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool CreateCommitRequestBody::forceIsSet() const
{
    return forceIsSet_;
}

void CreateCommitRequestBody::unsetforce()
{
    forceIsSet_ = false;
}

}
}
}
}
}


