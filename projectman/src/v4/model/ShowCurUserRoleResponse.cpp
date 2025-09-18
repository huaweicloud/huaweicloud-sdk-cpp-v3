

#include "huaweicloud/projectman/v4/model/ShowCurUserRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCurUserRoleResponse::ShowCurUserRoleResponse()
{
    userRole_ = 0;
    userRoleIsSet_ = false;
}

ShowCurUserRoleResponse::~ShowCurUserRoleResponse() = default;

void ShowCurUserRoleResponse::validate()
{
}

web::json::value ShowCurUserRoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userRoleIsSet_) {
        val[utility::conversions::to_string_t("user_role")] = ModelBase::toJson(userRole_);
    }

    return val;
}
bool ShowCurUserRoleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserRole(refVal);
        }
    }
    return ok;
}


int32_t ShowCurUserRoleResponse::getUserRole() const
{
    return userRole_;
}

void ShowCurUserRoleResponse::setUserRole(int32_t value)
{
    userRole_ = value;
    userRoleIsSet_ = true;
}

bool ShowCurUserRoleResponse::userRoleIsSet() const
{
    return userRoleIsSet_;
}

void ShowCurUserRoleResponse::unsetuserRole()
{
    userRoleIsSet_ = false;
}

}
}
}
}
}


