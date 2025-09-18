

#include "huaweicloud/projectman/v4/model/CommitRecordDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommitRecordDetail::CommitRecordDetail()
{
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
    commitShortId_ = "";
    commitShortIdIsSet_ = false;
    commitMsg_ = "";
    commitMsgIsSet_ = false;
    commitUrl_ = "";
    commitUrlIsSet_ = false;
    userIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    createDate_ = "";
    createDateIsSet_ = false;
    updateDate_ = "";
    updateDateIsSet_ = false;
}

CommitRecordDetail::~CommitRecordDetail() = default;

void CommitRecordDetail::validate()
{
}

web::json::value CommitRecordDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }
    if(commitShortIdIsSet_) {
        val[utility::conversions::to_string_t("commit_short_id")] = ModelBase::toJson(commitShortId_);
    }
    if(commitMsgIsSet_) {
        val[utility::conversions::to_string_t("commit_msg")] = ModelBase::toJson(commitMsg_);
    }
    if(commitUrlIsSet_) {
        val[utility::conversions::to_string_t("commit_url")] = ModelBase::toJson(commitUrl_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createDateIsSet_) {
        val[utility::conversions::to_string_t("create_date")] = ModelBase::toJson(createDate_);
    }
    if(updateDateIsSet_) {
        val[utility::conversions::to_string_t("update_date")] = ModelBase::toJson(updateDate_);
    }

    return val;
}
bool CommitRecordDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_short_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_short_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitShortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            SimpleUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateDate(refVal);
        }
    }
    return ok;
}


std::string CommitRecordDetail::getRepositoryId() const
{
    return repositoryId_;
}

void CommitRecordDetail::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CommitRecordDetail::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CommitRecordDetail::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string CommitRecordDetail::getBranchName() const
{
    return branchName_;
}

void CommitRecordDetail::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool CommitRecordDetail::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void CommitRecordDetail::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string CommitRecordDetail::getCommitId() const
{
    return commitId_;
}

void CommitRecordDetail::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool CommitRecordDetail::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void CommitRecordDetail::unsetcommitId()
{
    commitIdIsSet_ = false;
}

std::string CommitRecordDetail::getCommitShortId() const
{
    return commitShortId_;
}

void CommitRecordDetail::setCommitShortId(const std::string& value)
{
    commitShortId_ = value;
    commitShortIdIsSet_ = true;
}

bool CommitRecordDetail::commitShortIdIsSet() const
{
    return commitShortIdIsSet_;
}

void CommitRecordDetail::unsetcommitShortId()
{
    commitShortIdIsSet_ = false;
}

std::string CommitRecordDetail::getCommitMsg() const
{
    return commitMsg_;
}

void CommitRecordDetail::setCommitMsg(const std::string& value)
{
    commitMsg_ = value;
    commitMsgIsSet_ = true;
}

bool CommitRecordDetail::commitMsgIsSet() const
{
    return commitMsgIsSet_;
}

void CommitRecordDetail::unsetcommitMsg()
{
    commitMsgIsSet_ = false;
}

std::string CommitRecordDetail::getCommitUrl() const
{
    return commitUrl_;
}

void CommitRecordDetail::setCommitUrl(const std::string& value)
{
    commitUrl_ = value;
    commitUrlIsSet_ = true;
}

bool CommitRecordDetail::commitUrlIsSet() const
{
    return commitUrlIsSet_;
}

void CommitRecordDetail::unsetcommitUrl()
{
    commitUrlIsSet_ = false;
}

SimpleUser CommitRecordDetail::getUser() const
{
    return user_;
}

void CommitRecordDetail::setUser(const SimpleUser& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool CommitRecordDetail::userIsSet() const
{
    return userIsSet_;
}

void CommitRecordDetail::unsetuser()
{
    userIsSet_ = false;
}

std::string CommitRecordDetail::getType() const
{
    return type_;
}

void CommitRecordDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CommitRecordDetail::typeIsSet() const
{
    return typeIsSet_;
}

void CommitRecordDetail::unsettype()
{
    typeIsSet_ = false;
}

std::string CommitRecordDetail::getCreateDate() const
{
    return createDate_;
}

void CommitRecordDetail::setCreateDate(const std::string& value)
{
    createDate_ = value;
    createDateIsSet_ = true;
}

bool CommitRecordDetail::createDateIsSet() const
{
    return createDateIsSet_;
}

void CommitRecordDetail::unsetcreateDate()
{
    createDateIsSet_ = false;
}

std::string CommitRecordDetail::getUpdateDate() const
{
    return updateDate_;
}

void CommitRecordDetail::setUpdateDate(const std::string& value)
{
    updateDate_ = value;
    updateDateIsSet_ = true;
}

bool CommitRecordDetail::updateDateIsSet() const
{
    return updateDateIsSet_;
}

void CommitRecordDetail::unsetupdateDate()
{
    updateDateIsSet_ = false;
}

}
}
}
}
}


