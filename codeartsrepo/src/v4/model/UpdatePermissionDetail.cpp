

#include "huaweicloud/codeartsrepo/v4/model/UpdatePermissionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdatePermissionDetail::UpdatePermissionDetail()
{
    permissionId_ = 0;
    permissionIdIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

UpdatePermissionDetail::~UpdatePermissionDetail() = default;

void UpdatePermissionDetail::validate()
{
}

web::json::value UpdatePermissionDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool UpdatePermissionDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


int32_t UpdatePermissionDetail::getPermissionId() const
{
    return permissionId_;
}

void UpdatePermissionDetail::setPermissionId(int32_t value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool UpdatePermissionDetail::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void UpdatePermissionDetail::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

bool UpdatePermissionDetail::isEnabled() const
{
    return enabled_;
}

void UpdatePermissionDetail::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdatePermissionDetail::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdatePermissionDetail::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


