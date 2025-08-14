

#include "huaweicloud/identitycenter/v1/model/PutMfaDeviceManagementForDirectoryReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PutMfaDeviceManagementForDirectoryReqBody::PutMfaDeviceManagementForDirectoryReqBody()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userPermission_ = "";
    userPermissionIsSet_ = false;
}

PutMfaDeviceManagementForDirectoryReqBody::~PutMfaDeviceManagementForDirectoryReqBody() = default;

void PutMfaDeviceManagementForDirectoryReqBody::validate()
{
}

web::json::value PutMfaDeviceManagementForDirectoryReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userPermissionIsSet_) {
        val[utility::conversions::to_string_t("user_permission")] = ModelBase::toJson(userPermission_);
    }

    return val;
}
bool PutMfaDeviceManagementForDirectoryReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_permission"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPermission(refVal);
        }
    }
    return ok;
}


std::string PutMfaDeviceManagementForDirectoryReqBody::getIdentityStoreId() const
{
    return identityStoreId_;
}

void PutMfaDeviceManagementForDirectoryReqBody::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool PutMfaDeviceManagementForDirectoryReqBody::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void PutMfaDeviceManagementForDirectoryReqBody::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string PutMfaDeviceManagementForDirectoryReqBody::getUserPermission() const
{
    return userPermission_;
}

void PutMfaDeviceManagementForDirectoryReqBody::setUserPermission(const std::string& value)
{
    userPermission_ = value;
    userPermissionIsSet_ = true;
}

bool PutMfaDeviceManagementForDirectoryReqBody::userPermissionIsSet() const
{
    return userPermissionIsSet_;
}

void PutMfaDeviceManagementForDirectoryReqBody::unsetuserPermission()
{
    userPermissionIsSet_ = false;
}

}
}
}
}
}


