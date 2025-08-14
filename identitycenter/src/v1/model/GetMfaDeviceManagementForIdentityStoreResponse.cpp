

#include "huaweicloud/identitycenter/v1/model/GetMfaDeviceManagementForIdentityStoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




GetMfaDeviceManagementForIdentityStoreResponse::GetMfaDeviceManagementForIdentityStoreResponse()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userPermission_ = "";
    userPermissionIsSet_ = false;
}

GetMfaDeviceManagementForIdentityStoreResponse::~GetMfaDeviceManagementForIdentityStoreResponse() = default;

void GetMfaDeviceManagementForIdentityStoreResponse::validate()
{
}

web::json::value GetMfaDeviceManagementForIdentityStoreResponse::toJson() const
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
bool GetMfaDeviceManagementForIdentityStoreResponse::fromJson(const web::json::value& val)
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


std::string GetMfaDeviceManagementForIdentityStoreResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetMfaDeviceManagementForIdentityStoreResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetMfaDeviceManagementForIdentityStoreResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetMfaDeviceManagementForIdentityStoreResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string GetMfaDeviceManagementForIdentityStoreResponse::getUserPermission() const
{
    return userPermission_;
}

void GetMfaDeviceManagementForIdentityStoreResponse::setUserPermission(const std::string& value)
{
    userPermission_ = value;
    userPermissionIsSet_ = true;
}

bool GetMfaDeviceManagementForIdentityStoreResponse::userPermissionIsSet() const
{
    return userPermissionIsSet_;
}

void GetMfaDeviceManagementForIdentityStoreResponse::unsetuserPermission()
{
    userPermissionIsSet_ = false;
}

}
}
}
}
}


