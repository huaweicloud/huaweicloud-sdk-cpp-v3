

#include "huaweicloud/projectman/v4/model/SimpleUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SimpleUser::SimpleUser()
{
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

SimpleUser::~SimpleUser() = default;

void SimpleUser::validate()
{
}

web::json::value SimpleUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool SimpleUser::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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


int32_t SimpleUser::getUserNumId() const
{
    return userNumId_;
}

void SimpleUser::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool SimpleUser::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void SimpleUser::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string SimpleUser::getUserId() const
{
    return userId_;
}

void SimpleUser::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool SimpleUser::userIdIsSet() const
{
    return userIdIsSet_;
}

void SimpleUser::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string SimpleUser::getUserName() const
{
    return userName_;
}

void SimpleUser::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SimpleUser::userNameIsSet() const
{
    return userNameIsSet_;
}

void SimpleUser::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string SimpleUser::getNickName() const
{
    return nickName_;
}

void SimpleUser::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool SimpleUser::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void SimpleUser::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


