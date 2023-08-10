

#include "huaweicloud/codeartsdeploy/v2/model/UserInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UserInfo::UserInfo()
{
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

UserInfo::~UserInfo() = default;

void UserInfo::validate()
{
}

web::json::value UserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}

bool UserInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}

std::string UserInfo::getUserId() const
{
    return userId_;
}

void UserInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UserInfo::getUserName() const
{
    return userName_;
}

void UserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void UserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


