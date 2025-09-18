

#include "huaweicloud/projectman/v4/model/IssueUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueUser::IssueUser()
{
    userId_ = "";
    userIdIsSet_ = false;
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

IssueUser::~IssueUser() = default;

void IssueUser::validate()
{
}

web::json::value IssueUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool IssueUser::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    return ok;
}


std::string IssueUser::getUserId() const
{
    return userId_;
}

void IssueUser::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool IssueUser::userIdIsSet() const
{
    return userIdIsSet_;
}

void IssueUser::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t IssueUser::getUserNumId() const
{
    return userNumId_;
}

void IssueUser::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool IssueUser::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void IssueUser::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

int32_t IssueUser::getId() const
{
    return id_;
}

void IssueUser::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueUser::idIsSet() const
{
    return idIsSet_;
}

void IssueUser::unsetid()
{
    idIsSet_ = false;
}

std::string IssueUser::getName() const
{
    return name_;
}

void IssueUser::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueUser::nameIsSet() const
{
    return nameIsSet_;
}

void IssueUser::unsetname()
{
    nameIsSet_ = false;
}

std::string IssueUser::getNickName() const
{
    return nickName_;
}

void IssueUser::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool IssueUser::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void IssueUser::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


