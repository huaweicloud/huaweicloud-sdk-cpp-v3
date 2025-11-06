

#include "huaweicloud/codeartsrepo/v3/model/RepoStatistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RepoStatistics::RepoStatistics()
{
    addLines_ = 0;
    addLinesIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    commitCount_ = 0;
    commitCountIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    deleteLines_ = 0;
    deleteLinesIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

RepoStatistics::~RepoStatistics() = default;

void RepoStatistics::validate()
{
}

web::json::value RepoStatistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addLinesIsSet_) {
        val[utility::conversions::to_string_t("add_lines")] = ModelBase::toJson(addLines_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(commitCountIsSet_) {
        val[utility::conversions::to_string_t("commit_count")] = ModelBase::toJson(commitCount_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(deleteLinesIsSet_) {
        val[utility::conversions::to_string_t("delete_lines")] = ModelBase::toJson(deleteLines_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool RepoStatistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddLines(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteLines(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


int32_t RepoStatistics::getAddLines() const
{
    return addLines_;
}

void RepoStatistics::setAddLines(int32_t value)
{
    addLines_ = value;
    addLinesIsSet_ = true;
}

bool RepoStatistics::addLinesIsSet() const
{
    return addLinesIsSet_;
}

void RepoStatistics::unsetaddLines()
{
    addLinesIsSet_ = false;
}

std::string RepoStatistics::getBranch() const
{
    return branch_;
}

void RepoStatistics::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool RepoStatistics::branchIsSet() const
{
    return branchIsSet_;
}

void RepoStatistics::unsetbranch()
{
    branchIsSet_ = false;
}

int32_t RepoStatistics::getCommitCount() const
{
    return commitCount_;
}

void RepoStatistics::setCommitCount(int32_t value)
{
    commitCount_ = value;
    commitCountIsSet_ = true;
}

bool RepoStatistics::commitCountIsSet() const
{
    return commitCountIsSet_;
}

void RepoStatistics::unsetcommitCount()
{
    commitCountIsSet_ = false;
}

utility::datetime RepoStatistics::getCreatedAt() const
{
    return createdAt_;
}

void RepoStatistics::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepoStatistics::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepoStatistics::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t RepoStatistics::getDeleteLines() const
{
    return deleteLines_;
}

void RepoStatistics::setDeleteLines(int32_t value)
{
    deleteLines_ = value;
    deleteLinesIsSet_ = true;
}

bool RepoStatistics::deleteLinesIsSet() const
{
    return deleteLinesIsSet_;
}

void RepoStatistics::unsetdeleteLines()
{
    deleteLinesIsSet_ = false;
}

int32_t RepoStatistics::getId() const
{
    return id_;
}

void RepoStatistics::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepoStatistics::idIsSet() const
{
    return idIsSet_;
}

void RepoStatistics::unsetid()
{
    idIsSet_ = false;
}

int32_t RepoStatistics::getProjectId() const
{
    return projectId_;
}

void RepoStatistics::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoStatistics::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoStatistics::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime RepoStatistics::getUpdatedAt() const
{
    return updatedAt_;
}

void RepoStatistics::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RepoStatistics::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RepoStatistics::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string RepoStatistics::getUserName() const
{
    return userName_;
}

void RepoStatistics::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RepoStatistics::userNameIsSet() const
{
    return userNameIsSet_;
}

void RepoStatistics::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


