

#include "huaweicloud/projectman/v4/model/BatchAddMemberRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchAddMemberRequestV4::BatchAddMemberRequestV4()
{
    roleId_ = 0;
    roleIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

BatchAddMemberRequestV4::~BatchAddMemberRequestV4() = default;

void BatchAddMemberRequestV4::validate()
{
}

web::json::value BatchAddMemberRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool BatchAddMemberRequestV4::fromJson(const web::json::value& val)
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


int32_t BatchAddMemberRequestV4::getRoleId() const
{
    return roleId_;
}

void BatchAddMemberRequestV4::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool BatchAddMemberRequestV4::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void BatchAddMemberRequestV4::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string BatchAddMemberRequestV4::getUserId() const
{
    return userId_;
}

void BatchAddMemberRequestV4::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool BatchAddMemberRequestV4::userIdIsSet() const
{
    return userIdIsSet_;
}

void BatchAddMemberRequestV4::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


