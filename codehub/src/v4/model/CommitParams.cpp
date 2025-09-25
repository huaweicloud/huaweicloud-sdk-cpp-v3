

#include "huaweicloud/codehub/v4/model/CommitParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitParams::CommitParams()
{
    branch_ = "";
    branchIsSet_ = false;
    commitMessage_ = "";
    commitMessageIsSet_ = false;
    actionsIsSet_ = false;
    startBranch_ = "";
    startBranchIsSet_ = false;
    authorEmail_ = "";
    authorEmailIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    stats_ = false;
    statsIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
}

CommitParams::~CommitParams() = default;

void CommitParams::validate()
{
}

web::json::value CommitParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(commitMessageIsSet_) {
        val[utility::conversions::to_string_t("commit_message")] = ModelBase::toJson(commitMessage_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(startBranchIsSet_) {
        val[utility::conversions::to_string_t("start_branch")] = ModelBase::toJson(startBranch_);
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
bool CommitParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
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


std::string CommitParams::getBranch() const
{
    return branch_;
}

void CommitParams::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool CommitParams::branchIsSet() const
{
    return branchIsSet_;
}

void CommitParams::unsetbranch()
{
    branchIsSet_ = false;
}

std::string CommitParams::getCommitMessage() const
{
    return commitMessage_;
}

void CommitParams::setCommitMessage(const std::string& value)
{
    commitMessage_ = value;
    commitMessageIsSet_ = true;
}

bool CommitParams::commitMessageIsSet() const
{
    return commitMessageIsSet_;
}

void CommitParams::unsetcommitMessage()
{
    commitMessageIsSet_ = false;
}

std::vector<ActionDto>& CommitParams::getActions()
{
    return actions_;
}

void CommitParams::setActions(const std::vector<ActionDto>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CommitParams::actionsIsSet() const
{
    return actionsIsSet_;
}

void CommitParams::unsetactions()
{
    actionsIsSet_ = false;
}

std::string CommitParams::getStartBranch() const
{
    return startBranch_;
}

void CommitParams::setStartBranch(const std::string& value)
{
    startBranch_ = value;
    startBranchIsSet_ = true;
}

bool CommitParams::startBranchIsSet() const
{
    return startBranchIsSet_;
}

void CommitParams::unsetstartBranch()
{
    startBranchIsSet_ = false;
}

std::string CommitParams::getAuthorEmail() const
{
    return authorEmail_;
}

void CommitParams::setAuthorEmail(const std::string& value)
{
    authorEmail_ = value;
    authorEmailIsSet_ = true;
}

bool CommitParams::authorEmailIsSet() const
{
    return authorEmailIsSet_;
}

void CommitParams::unsetauthorEmail()
{
    authorEmailIsSet_ = false;
}

std::string CommitParams::getAuthorName() const
{
    return authorName_;
}

void CommitParams::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool CommitParams::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void CommitParams::unsetauthorName()
{
    authorNameIsSet_ = false;
}

bool CommitParams::isStats() const
{
    return stats_;
}

void CommitParams::setStats(bool value)
{
    stats_ = value;
    statsIsSet_ = true;
}

bool CommitParams::statsIsSet() const
{
    return statsIsSet_;
}

void CommitParams::unsetstats()
{
    statsIsSet_ = false;
}

bool CommitParams::isForce() const
{
    return force_;
}

void CommitParams::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool CommitParams::forceIsSet() const
{
    return forceIsSet_;
}

void CommitParams::unsetforce()
{
    forceIsSet_ = false;
}

}
}
}
}
}


