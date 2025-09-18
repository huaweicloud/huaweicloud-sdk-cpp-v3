

#include "huaweicloud/projectman/v4/model/UpdateMembesRoleV4RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateMembesRoleV4RequestBody::UpdateMembesRoleV4RequestBody()
{
    roleId_ = 0;
    roleIdIsSet_ = false;
    userIdsIsSet_ = false;
}

UpdateMembesRoleV4RequestBody::~UpdateMembesRoleV4RequestBody() = default;

void UpdateMembesRoleV4RequestBody::validate()
{
}

web::json::value UpdateMembesRoleV4RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("user_ids")] = ModelBase::toJson(userIds_);
    }

    return val;
}
bool UpdateMembesRoleV4RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIds(refVal);
        }
    }
    return ok;
}


int32_t UpdateMembesRoleV4RequestBody::getRoleId() const
{
    return roleId_;
}

void UpdateMembesRoleV4RequestBody::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UpdateMembesRoleV4RequestBody::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UpdateMembesRoleV4RequestBody::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::vector<std::string>& UpdateMembesRoleV4RequestBody::getUserIds()
{
    return userIds_;
}

void UpdateMembesRoleV4RequestBody::setUserIds(const std::vector<std::string>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool UpdateMembesRoleV4RequestBody::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void UpdateMembesRoleV4RequestBody::unsetuserIds()
{
    userIdsIsSet_ = false;
}

}
}
}
}
}


