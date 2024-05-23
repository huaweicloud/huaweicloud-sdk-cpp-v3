

#include "huaweicloud/ram/v1/model/ShowPermissionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ShowPermissionResponse::ShowPermissionResponse()
{
    permissionIsSet_ = false;
}

ShowPermissionResponse::~ShowPermissionResponse() = default;

void ShowPermissionResponse::validate()
{
}

web::json::value ShowPermissionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }

    return val;
}
bool ShowPermissionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            Permission refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
        }
    }
    return ok;
}


Permission ShowPermissionResponse::getPermission() const
{
    return permission_;
}

void ShowPermissionResponse::setPermission(const Permission& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool ShowPermissionResponse::permissionIsSet() const
{
    return permissionIsSet_;
}

void ShowPermissionResponse::unsetpermission()
{
    permissionIsSet_ = false;
}

}
}
}
}
}


