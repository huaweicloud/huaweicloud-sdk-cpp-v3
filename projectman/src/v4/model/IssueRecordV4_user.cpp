

#include "huaweicloud/projectman/v4/model/IssueRecordV4_user.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueRecordV4_user::IssueRecordV4_user()
{
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

IssueRecordV4_user::~IssueRecordV4_user() = default;

void IssueRecordV4_user::validate()
{
}

web::json::value IssueRecordV4_user::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool IssueRecordV4_user::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


int32_t IssueRecordV4_user::getUserNumId() const
{
    return userNumId_;
}

void IssueRecordV4_user::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool IssueRecordV4_user::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void IssueRecordV4_user::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string IssueRecordV4_user::getUserName() const
{
    return userName_;
}

void IssueRecordV4_user::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool IssueRecordV4_user::userNameIsSet() const
{
    return userNameIsSet_;
}

void IssueRecordV4_user::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string IssueRecordV4_user::getNickName() const
{
    return nickName_;
}

void IssueRecordV4_user::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool IssueRecordV4_user::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void IssueRecordV4_user::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string IssueRecordV4_user::getUserId() const
{
    return userId_;
}

void IssueRecordV4_user::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool IssueRecordV4_user::userIdIsSet() const
{
    return userIdIsSet_;
}

void IssueRecordV4_user::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


