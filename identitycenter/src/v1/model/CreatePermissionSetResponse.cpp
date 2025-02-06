

#include "huaweicloud/identitycenter/v1/model/CreatePermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CreatePermissionSetResponse::CreatePermissionSetResponse()
{
    permissionSetIsSet_ = false;
}

CreatePermissionSetResponse::~CreatePermissionSetResponse() = default;

void CreatePermissionSetResponse::validate()
{
}

web::json::value CreatePermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetIsSet_) {
        val[utility::conversions::to_string_t("permission_set")] = ModelBase::toJson(permissionSet_);
    }

    return val;
}
bool CreatePermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set"));
        if(!fieldValue.is_null())
        {
            PermissionSetDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSet(refVal);
        }
    }
    return ok;
}


PermissionSetDto CreatePermissionSetResponse::getPermissionSet() const
{
    return permissionSet_;
}

void CreatePermissionSetResponse::setPermissionSet(const PermissionSetDto& value)
{
    permissionSet_ = value;
    permissionSetIsSet_ = true;
}

bool CreatePermissionSetResponse::permissionSetIsSet() const
{
    return permissionSetIsSet_;
}

void CreatePermissionSetResponse::unsetpermissionSet()
{
    permissionSetIsSet_ = false;
}

}
}
}
}
}


