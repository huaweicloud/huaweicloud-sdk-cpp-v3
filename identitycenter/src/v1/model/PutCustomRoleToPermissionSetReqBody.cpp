

#include "huaweicloud/identitycenter/v1/model/PutCustomRoleToPermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PutCustomRoleToPermissionSetReqBody::PutCustomRoleToPermissionSetReqBody()
{
    customRole_ = "";
    customRoleIsSet_ = false;
}

PutCustomRoleToPermissionSetReqBody::~PutCustomRoleToPermissionSetReqBody() = default;

void PutCustomRoleToPermissionSetReqBody::validate()
{
}

web::json::value PutCustomRoleToPermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customRoleIsSet_) {
        val[utility::conversions::to_string_t("custom_role")] = ModelBase::toJson(customRole_);
    }

    return val;
}
bool PutCustomRoleToPermissionSetReqBody::fromJson(const web::json::value& val)
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


std::string PutCustomRoleToPermissionSetReqBody::getCustomRole() const
{
    return customRole_;
}

void PutCustomRoleToPermissionSetReqBody::setCustomRole(const std::string& value)
{
    customRole_ = value;
    customRoleIsSet_ = true;
}

bool PutCustomRoleToPermissionSetReqBody::customRoleIsSet() const
{
    return customRoleIsSet_;
}

void PutCustomRoleToPermissionSetReqBody::unsetcustomRole()
{
    customRoleIsSet_ = false;
}

}
}
}
}
}


