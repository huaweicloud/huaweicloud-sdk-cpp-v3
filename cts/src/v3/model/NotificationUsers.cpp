

#include "huaweicloud/cts/v3/model/NotificationUsers.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




NotificationUsers::NotificationUsers()
{
    userGroup_ = "";
    userGroupIsSet_ = false;
    userListIsSet_ = false;
}

NotificationUsers::~NotificationUsers() = default;

void NotificationUsers::validate()
{
}

web::json::value NotificationUsers::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userGroupIsSet_) {
        val[utility::conversions::to_string_t("user_group")] = ModelBase::toJson(userGroup_);
    }
    if(userListIsSet_) {
        val[utility::conversions::to_string_t("user_list")] = ModelBase::toJson(userList_);
    }

    return val;
}
bool NotificationUsers::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserList(refVal);
        }
    }
    return ok;
}


std::string NotificationUsers::getUserGroup() const
{
    return userGroup_;
}

void NotificationUsers::setUserGroup(const std::string& value)
{
    userGroup_ = value;
    userGroupIsSet_ = true;
}

bool NotificationUsers::userGroupIsSet() const
{
    return userGroupIsSet_;
}

void NotificationUsers::unsetuserGroup()
{
    userGroupIsSet_ = false;
}

std::vector<std::string>& NotificationUsers::getUserList()
{
    return userList_;
}

void NotificationUsers::setUserList(const std::vector<std::string>& value)
{
    userList_ = value;
    userListIsSet_ = true;
}

bool NotificationUsers::userListIsSet() const
{
    return userListIsSet_;
}

void NotificationUsers::unsetuserList()
{
    userListIsSet_ = false;
}

}
}
}
}
}


