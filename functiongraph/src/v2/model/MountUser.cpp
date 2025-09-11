

#include "huaweicloud/functiongraph/v2/model/MountUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




MountUser::MountUser()
{
    userId_ = 0;
    userIdIsSet_ = false;
    userGroupId_ = 0;
    userGroupIdIsSet_ = false;
}

MountUser::~MountUser() = default;

void MountUser::validate()
{
}

web::json::value MountUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userGroupIdIsSet_) {
        val[utility::conversions::to_string_t("user_group_id")] = ModelBase::toJson(userGroupId_);
    }

    return val;
}
bool MountUser::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserGroupId(refVal);
        }
    }
    return ok;
}


int32_t MountUser::getUserId() const
{
    return userId_;
}

void MountUser::setUserId(int32_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool MountUser::userIdIsSet() const
{
    return userIdIsSet_;
}

void MountUser::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t MountUser::getUserGroupId() const
{
    return userGroupId_;
}

void MountUser::setUserGroupId(int32_t value)
{
    userGroupId_ = value;
    userGroupIdIsSet_ = true;
}

bool MountUser::userGroupIdIsSet() const
{
    return userGroupIdIsSet_;
}

void MountUser::unsetuserGroupId()
{
    userGroupIdIsSet_ = false;
}

}
}
}
}
}


