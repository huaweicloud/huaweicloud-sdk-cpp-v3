

#include "huaweicloud/projectman/v4/model/UpdateChildUserNickNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateChildUserNickNameRequestBody::UpdateChildUserNickNameRequestBody()
{
    nickName_ = "";
    nickNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

UpdateChildUserNickNameRequestBody::~UpdateChildUserNickNameRequestBody() = default;

void UpdateChildUserNickNameRequestBody::validate()
{
}

web::json::value UpdateChildUserNickNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool UpdateChildUserNickNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdateChildUserNickNameRequestBody::getNickName() const
{
    return nickName_;
}

void UpdateChildUserNickNameRequestBody::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UpdateChildUserNickNameRequestBody::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UpdateChildUserNickNameRequestBody::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string UpdateChildUserNickNameRequestBody::getUserId() const
{
    return userId_;
}

void UpdateChildUserNickNameRequestBody::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateChildUserNickNameRequestBody::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateChildUserNickNameRequestBody::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


