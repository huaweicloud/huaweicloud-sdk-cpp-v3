

#include "huaweicloud/codehub/v4/model/ShowGroupPermissionInheritEnabledResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupPermissionInheritEnabledResponse::ShowGroupPermissionInheritEnabledResponse()
{
    permissionInheritEnabled_ = false;
    permissionInheritEnabledIsSet_ = false;
}

ShowGroupPermissionInheritEnabledResponse::~ShowGroupPermissionInheritEnabledResponse() = default;

void ShowGroupPermissionInheritEnabledResponse::validate()
{
}

web::json::value ShowGroupPermissionInheritEnabledResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionInheritEnabledIsSet_) {
        val[utility::conversions::to_string_t("permission_inherit_enabled")] = ModelBase::toJson(permissionInheritEnabled_);
    }

    return val;
}
bool ShowGroupPermissionInheritEnabledResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_inherit_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_inherit_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionInheritEnabled(refVal);
        }
    }
    return ok;
}


bool ShowGroupPermissionInheritEnabledResponse::isPermissionInheritEnabled() const
{
    return permissionInheritEnabled_;
}

void ShowGroupPermissionInheritEnabledResponse::setPermissionInheritEnabled(bool value)
{
    permissionInheritEnabled_ = value;
    permissionInheritEnabledIsSet_ = true;
}

bool ShowGroupPermissionInheritEnabledResponse::permissionInheritEnabledIsSet() const
{
    return permissionInheritEnabledIsSet_;
}

void ShowGroupPermissionInheritEnabledResponse::unsetpermissionInheritEnabled()
{
    permissionInheritEnabledIsSet_ = false;
}

}
}
}
}
}


