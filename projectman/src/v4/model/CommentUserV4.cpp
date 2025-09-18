

#include "huaweicloud/projectman/v4/model/CommentUserV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommentUserV4::CommentUserV4()
{
    userNumId_ = 0;
    userNumIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

CommentUserV4::~CommentUserV4() = default;

void CommentUserV4::validate()
{
}

web::json::value CommentUserV4::toJson() const
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

    return val;
}
bool CommentUserV4::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t CommentUserV4::getUserNumId() const
{
    return userNumId_;
}

void CommentUserV4::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool CommentUserV4::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void CommentUserV4::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

std::string CommentUserV4::getUserName() const
{
    return userName_;
}

void CommentUserV4::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CommentUserV4::userNameIsSet() const
{
    return userNameIsSet_;
}

void CommentUserV4::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CommentUserV4::getNickName() const
{
    return nickName_;
}

void CommentUserV4::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool CommentUserV4::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void CommentUserV4::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


