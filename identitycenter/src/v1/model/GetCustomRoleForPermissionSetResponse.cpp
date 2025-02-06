

#include "huaweicloud/identitycenter/v1/model/GetCustomRoleForPermissionSetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetCustomRoleForPermissionSetResponse::GetCustomRoleForPermissionSetResponse()
{
    customRole_ = "";
    customRoleIsSet_ = false;
}

GetCustomRoleForPermissionSetResponse::~GetCustomRoleForPermissionSetResponse() = default;

void GetCustomRoleForPermissionSetResponse::validate()
{
}

web::json::value GetCustomRoleForPermissionSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customRoleIsSet_) {
        val[utility::conversions::to_string_t("custom_role")] = ModelBase::toJson(customRole_);
    }

    return val;
}
bool GetCustomRoleForPermissionSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomRole(refVal);
        }
    }
    return ok;
}


std::string GetCustomRoleForPermissionSetResponse::getCustomRole() const
{
    return customRole_;
}

void GetCustomRoleForPermissionSetResponse::setCustomRole(const std::string& value)
{
    customRole_ = value;
    customRoleIsSet_ = true;
}

bool GetCustomRoleForPermissionSetResponse::customRoleIsSet() const
{
    return customRoleIsSet_;
}

void GetCustomRoleForPermissionSetResponse::unsetcustomRole()
{
    customRoleIsSet_ = false;
}

}
}
}
}
}


