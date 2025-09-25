

#include "huaweicloud/codehub/v4/model/StatisticDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




StatisticDto::StatisticDto()
{
    id_ = 0;
    idIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    addLines_ = 0;
    addLinesIsSet_ = false;
    deleteLines_ = 0;
    deleteLinesIsSet_ = false;
    commitCount_ = 0;
    commitCountIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

StatisticDto::~StatisticDto() = default;

void StatisticDto::validate()
{
}

web::json::value StatisticDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(addLinesIsSet_) {
        val[utility::conversions::to_string_t("add_lines")] = ModelBase::toJson(addLines_);
    }
    if(deleteLinesIsSet_) {
        val[utility::conversions::to_string_t("delete_lines")] = ModelBase::toJson(deleteLines_);
    }
    if(commitCountIsSet_) {
        val[utility::conversions::to_string_t("commit_count")] = ModelBase::toJson(commitCount_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool StatisticDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("add_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddLines(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


int32_t StatisticDto::getId() const
{
    return id_;
}

void StatisticDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StatisticDto::idIsSet() const
{
    return idIsSet_;
}

void StatisticDto::unsetid()
{
    idIsSet_ = false;
}

int32_t StatisticDto::getProjectId() const
{
    return projectId_;
}

void StatisticDto::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StatisticDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StatisticDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StatisticDto::getBranch() const
{
    return branch_;
}

void StatisticDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool StatisticDto::branchIsSet() const
{
    return branchIsSet_;
}

void StatisticDto::unsetbranch()
{
    branchIsSet_ = false;
}

std::string StatisticDto::getUserName() const
{
    return userName_;
}

void StatisticDto::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool StatisticDto::userNameIsSet() const
{
    return userNameIsSet_;
}

void StatisticDto::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t StatisticDto::getAddLines() const
{
    return addLines_;
}

void StatisticDto::setAddLines(int32_t value)
{
    addLines_ = value;
    addLinesIsSet_ = true;
}

bool StatisticDto::addLinesIsSet() const
{
    return addLinesIsSet_;
}

void StatisticDto::unsetaddLines()
{
    addLinesIsSet_ = false;
}

int32_t StatisticDto::getDeleteLines() const
{
    return deleteLines_;
}

void StatisticDto::setDeleteLines(int32_t value)
{
    deleteLines_ = value;
    deleteLinesIsSet_ = true;
}

bool StatisticDto::deleteLinesIsSet() const
{
    return deleteLinesIsSet_;
}

void StatisticDto::unsetdeleteLines()
{
    deleteLinesIsSet_ = false;
}

int32_t StatisticDto::getCommitCount() const
{
    return commitCount_;
}

void StatisticDto::setCommitCount(int32_t value)
{
    commitCount_ = value;
    commitCountIsSet_ = true;
}

bool StatisticDto::commitCountIsSet() const
{
    return commitCountIsSet_;
}

void StatisticDto::unsetcommitCount()
{
    commitCountIsSet_ = false;
}

std::string StatisticDto::getCreatedAt() const
{
    return createdAt_;
}

void StatisticDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool StatisticDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void StatisticDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string StatisticDto::getUpdatedAt() const
{
    return updatedAt_;
}

void StatisticDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool StatisticDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void StatisticDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


