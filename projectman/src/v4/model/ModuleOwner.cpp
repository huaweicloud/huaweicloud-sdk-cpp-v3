

#include "huaweicloud/projectman/v4/model/ModuleOwner.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ModuleOwner::ModuleOwner()
{
    userId_ = "";
    userIdIsSet_ = false;
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

ModuleOwner::~ModuleOwner() = default;

void ModuleOwner::validate()
{
}

web::json::value ModuleOwner::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool ModuleOwner::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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


std::string ModuleOwner::getUserId() const
{
    return userId_;
}

void ModuleOwner::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ModuleOwner::userIdIsSet() const
{
    return userIdIsSet_;
}

void ModuleOwner::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t ModuleOwner::getUserNumId() const
{
    return userNumId_;
}

void ModuleOwner::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool ModuleOwner::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void ModuleOwner::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string ModuleOwner::getUserName() const
{
    return userName_;
}

void ModuleOwner::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ModuleOwner::userNameIsSet() const
{
    return userNameIsSet_;
}

void ModuleOwner::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ModuleOwner::getNickName() const
{
    return nickName_;
}

void ModuleOwner::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool ModuleOwner::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void ModuleOwner::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


