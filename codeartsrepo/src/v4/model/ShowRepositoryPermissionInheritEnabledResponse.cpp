

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryPermissionInheritEnabledResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryPermissionInheritEnabledResponse::ShowRepositoryPermissionInheritEnabledResponse()
{
    inheritParentPermission_ = false;
    inheritParentPermissionIsSet_ = false;
}

ShowRepositoryPermissionInheritEnabledResponse::~ShowRepositoryPermissionInheritEnabledResponse() = default;

void ShowRepositoryPermissionInheritEnabledResponse::validate()
{
}

web::json::value ShowRepositoryPermissionInheritEnabledResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inheritParentPermissionIsSet_) {
        val[utility::conversions::to_string_t("inherit_parent_permission")] = ModelBase::toJson(inheritParentPermission_);
    }

    return val;
}
bool ShowRepositoryPermissionInheritEnabledResponse::fromJson(const web::json::value& val)
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


bool ShowRepositoryPermissionInheritEnabledResponse::isInheritParentPermission() const
{
    return inheritParentPermission_;
}

void ShowRepositoryPermissionInheritEnabledResponse::setInheritParentPermission(bool value)
{
    inheritParentPermission_ = value;
    inheritParentPermissionIsSet_ = true;
}

bool ShowRepositoryPermissionInheritEnabledResponse::inheritParentPermissionIsSet() const
{
    return inheritParentPermissionIsSet_;
}

void ShowRepositoryPermissionInheritEnabledResponse::unsetinheritParentPermission()
{
    inheritParentPermissionIsSet_ = false;
}

}
}
}
}
}


