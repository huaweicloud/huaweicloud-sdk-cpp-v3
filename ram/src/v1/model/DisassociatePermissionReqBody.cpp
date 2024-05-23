

#include "huaweicloud/ram/v1/model/DisassociatePermissionReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DisassociatePermissionReqBody::DisassociatePermissionReqBody()
{
    permissionId_ = "";
    permissionIdIsSet_ = false;
}

DisassociatePermissionReqBody::~DisassociatePermissionReqBody() = default;

void DisassociatePermissionReqBody::validate()
{
}

web::json::value DisassociatePermissionReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }

    return val;
}
bool DisassociatePermissionReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
        }
    }
    return ok;
}


std::string DisassociatePermissionReqBody::getPermissionId() const
{
    return permissionId_;
}

void DisassociatePermissionReqBody::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool DisassociatePermissionReqBody::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void DisassociatePermissionReqBody::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

}
}
}
}
}


