

#include "huaweicloud/codehub/v4/model/UpdateRepositoryPermissionInheritEnabledResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateRepositoryPermissionInheritEnabledResponse::UpdateRepositoryPermissionInheritEnabledResponse()
{
    inheritParentPermission_ = false;
    inheritParentPermissionIsSet_ = false;
}

UpdateRepositoryPermissionInheritEnabledResponse::~UpdateRepositoryPermissionInheritEnabledResponse() = default;

void UpdateRepositoryPermissionInheritEnabledResponse::validate()
{
}

web::json::value UpdateRepositoryPermissionInheritEnabledResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inheritParentPermissionIsSet_) {
        val[utility::conversions::to_string_t("inherit_parent_permission")] = ModelBase::toJson(inheritParentPermission_);
    }

    return val;
}
bool UpdateRepositoryPermissionInheritEnabledResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inherit_parent_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inherit_parent_permission"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInheritParentPermission(refVal);
        }
    }
    return ok;
}


bool UpdateRepositoryPermissionInheritEnabledResponse::isInheritParentPermission() const
{
    return inheritParentPermission_;
}

void UpdateRepositoryPermissionInheritEnabledResponse::setInheritParentPermission(bool value)
{
    inheritParentPermission_ = value;
    inheritParentPermissionIsSet_ = true;
}

bool UpdateRepositoryPermissionInheritEnabledResponse::inheritParentPermissionIsSet() const
{
    return inheritParentPermissionIsSet_;
}

void UpdateRepositoryPermissionInheritEnabledResponse::unsetinheritParentPermission()
{
    inheritParentPermissionIsSet_ = false;
}

}
}
}
}
}


