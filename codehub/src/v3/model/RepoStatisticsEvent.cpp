

#include "huaweicloud/codehub/v3/model/RepoStatisticsEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoStatisticsEvent::RepoStatisticsEvent()
{
    branch_ = "";
    branchIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    userId_ = 0;
    userIdIsSet_ = false;
}

RepoStatisticsEvent::~RepoStatisticsEvent() = default;

void RepoStatisticsEvent::validate()
{
}

web::json::value RepoStatisticsEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool RepoStatisticsEvent::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string RepoStatisticsEvent::getBranch() const
{
    return branch_;
}

void RepoStatisticsEvent::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool RepoStatisticsEvent::branchIsSet() const
{
    return branchIsSet_;
}

void RepoStatisticsEvent::unsetbranch()
{
    branchIsSet_ = false;
}

utility::datetime RepoStatisticsEvent::getCreatedAt() const
{
    return createdAt_;
}

void RepoStatisticsEvent::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepoStatisticsEvent::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepoStatisticsEvent::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RepoStatisticsEvent::getDate() const
{
    return date_;
}

void RepoStatisticsEvent::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool RepoStatisticsEvent::dateIsSet() const
{
    return dateIsSet_;
}

void RepoStatisticsEvent::unsetdate()
{
    dateIsSet_ = false;
}

int32_t RepoStatisticsEvent::getId() const
{
    return id_;
}

void RepoStatisticsEvent::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepoStatisticsEvent::idIsSet() const
{
    return idIsSet_;
}

void RepoStatisticsEvent::unsetid()
{
    idIsSet_ = false;
}

int32_t RepoStatisticsEvent::getProjectId() const
{
    return projectId_;
}

void RepoStatisticsEvent::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoStatisticsEvent::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoStatisticsEvent::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepoStatisticsEvent::getStatus() const
{
    return status_;
}

void RepoStatisticsEvent::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepoStatisticsEvent::statusIsSet() const
{
    return statusIsSet_;
}

void RepoStatisticsEvent::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime RepoStatisticsEvent::getUpdatedAt() const
{
    return updatedAt_;
}

void RepoStatisticsEvent::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool RepoStatisticsEvent::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void RepoStatisticsEvent::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t RepoStatisticsEvent::getUserId() const
{
    return userId_;
}

void RepoStatisticsEvent::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RepoStatisticsEvent::userIdIsSet() const
{
    return userIdIsSet_;
}

void RepoStatisticsEvent::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


