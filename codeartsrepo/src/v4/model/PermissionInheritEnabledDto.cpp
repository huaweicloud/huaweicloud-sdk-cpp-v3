

#include "huaweicloud/codeartsrepo/v4/model/PermissionInheritEnabledDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PermissionInheritEnabledDto::PermissionInheritEnabledDto()
{
    inheritParentPermission_ = false;
    inheritParentPermissionIsSet_ = false;
}

PermissionInheritEnabledDto::~PermissionInheritEnabledDto() = default;

void PermissionInheritEnabledDto::validate()
{
}

web::json::value PermissionInheritEnabledDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inheritParentPermissionIsSet_) {
        val[utility::conversions::to_string_t("inherit_parent_permission")] = ModelBase::toJson(inheritParentPermission_);
    }

    return val;
}
bool PermissionInheritEnabledDto::fromJson(const web::json::value& val)
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


bool PermissionInheritEnabledDto::isInheritParentPermission() const
{
    return inheritParentPermission_;
}

void PermissionInheritEnabledDto::setInheritParentPermission(bool value)
{
    inheritParentPermission_ = value;
    inheritParentPermissionIsSet_ = true;
}

bool PermissionInheritEnabledDto::inheritParentPermissionIsSet() const
{
    return inheritParentPermissionIsSet_;
}

void PermissionInheritEnabledDto::unsetinheritParentPermission()
{
    inheritParentPermissionIsSet_ = false;
}

}
}
}
}
}


