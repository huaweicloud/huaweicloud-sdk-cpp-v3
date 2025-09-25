

#include "huaweicloud/codehub/v4/model/UpdateUserEmailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateUserEmailsResponse::UpdateUserEmailsResponse()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    lastActivityOn_ = "";
    lastActivityOnIsSet_ = false;
    commitEmail_ = "";
    commitEmailIsSet_ = false;
}

UpdateUserEmailsResponse::~UpdateUserEmailsResponse() = default;

void UpdateUserEmailsResponse::validate()
{
}

web::json::value UpdateUserEmailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(lastActivityOnIsSet_) {
        val[utility::conversions::to_string_t("last_activity_on")] = ModelBase::toJson(lastActivityOn_);
    }
    if(commitEmailIsSet_) {
        val[utility::conversions::to_string_t("commit_email")] = ModelBase::toJson(commitEmail_);
    }

    return val;
}
bool UpdateUserEmailsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_activity_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_activity_on"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastActivityOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitEmail(refVal);
        }
    }
    return ok;
}


int32_t UpdateUserEmailsResponse::getId() const
{
    return id_;
}

void UpdateUserEmailsResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateUserEmailsResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateUserEmailsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getName() const
{
    return name_;
}

void UpdateUserEmailsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateUserEmailsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateUserEmailsResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getUsername() const
{
    return username_;
}

void UpdateUserEmailsResponse::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool UpdateUserEmailsResponse::usernameIsSet() const
{
    return usernameIsSet_;
}

void UpdateUserEmailsResponse::unsetusername()
{
    usernameIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getState() const
{
    return state_;
}

void UpdateUserEmailsResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool UpdateUserEmailsResponse::stateIsSet() const
{
    return stateIsSet_;
}

void UpdateUserEmailsResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateUserEmailsResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateUserEmailsResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateUserEmailsResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateUserEmailsResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateUserEmailsResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateUserEmailsResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getLastActivityOn() const
{
    return lastActivityOn_;
}

void UpdateUserEmailsResponse::setLastActivityOn(const std::string& value)
{
    lastActivityOn_ = value;
    lastActivityOnIsSet_ = true;
}

bool UpdateUserEmailsResponse::lastActivityOnIsSet() const
{
    return lastActivityOnIsSet_;
}

void UpdateUserEmailsResponse::unsetlastActivityOn()
{
    lastActivityOnIsSet_ = false;
}

std::string UpdateUserEmailsResponse::getCommitEmail() const
{
    return commitEmail_;
}

void UpdateUserEmailsResponse::setCommitEmail(const std::string& value)
{
    commitEmail_ = value;
    commitEmailIsSet_ = true;
}

bool UpdateUserEmailsResponse::commitEmailIsSet() const
{
    return commitEmailIsSet_;
}

void UpdateUserEmailsResponse::unsetcommitEmail()
{
    commitEmailIsSet_ = false;
}

}
}
}
}
}


