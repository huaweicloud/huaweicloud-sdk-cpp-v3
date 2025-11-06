

#include "huaweicloud/codeartsrepo/v4/model/StatisticEventsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




StatisticEventsDto::StatisticEventsDto()
{
    id_ = 0;
    idIsSet_ = false;
    userId_ = 0;
    userIdIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    statDate_ = "";
    statDateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

StatisticEventsDto::~StatisticEventsDto() = default;

void StatisticEventsDto::validate()
{
}

web::json::value StatisticEventsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statDateIsSet_) {
        val[utility::conversions::to_string_t("stat_date")] = ModelBase::toJson(statDate_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool StatisticEventsDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatDate(refVal);
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


int32_t StatisticEventsDto::getId() const
{
    return id_;
}

void StatisticEventsDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StatisticEventsDto::idIsSet() const
{
    return idIsSet_;
}

void StatisticEventsDto::unsetid()
{
    idIsSet_ = false;
}

int32_t StatisticEventsDto::getUserId() const
{
    return userId_;
}

void StatisticEventsDto::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool StatisticEventsDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void StatisticEventsDto::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t StatisticEventsDto::getProjectId() const
{
    return projectId_;
}

void StatisticEventsDto::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StatisticEventsDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StatisticEventsDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StatisticEventsDto::getBranch() const
{
    return branch_;
}

void StatisticEventsDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool StatisticEventsDto::branchIsSet() const
{
    return branchIsSet_;
}

void StatisticEventsDto::unsetbranch()
{
    branchIsSet_ = false;
}

std::string StatisticEventsDto::getStatus() const
{
    return status_;
}

void StatisticEventsDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StatisticEventsDto::statusIsSet() const
{
    return statusIsSet_;
}

void StatisticEventsDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StatisticEventsDto::getStatDate() const
{
    return statDate_;
}

void StatisticEventsDto::setStatDate(const std::string& value)
{
    statDate_ = value;
    statDateIsSet_ = true;
}

bool StatisticEventsDto::statDateIsSet() const
{
    return statDateIsSet_;
}

void StatisticEventsDto::unsetstatDate()
{
    statDateIsSet_ = false;
}

std::string StatisticEventsDto::getCreatedAt() const
{
    return createdAt_;
}

void StatisticEventsDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool StatisticEventsDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void StatisticEventsDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string StatisticEventsDto::getUpdatedAt() const
{
    return updatedAt_;
}

void StatisticEventsDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool StatisticEventsDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void StatisticEventsDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


