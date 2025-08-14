

#include "huaweicloud/identitycenterstore/v1/model/RegisterMfaDeviceForUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




RegisterMfaDeviceForUserRequest::RegisterMfaDeviceForUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

RegisterMfaDeviceForUserRequest::~RegisterMfaDeviceForUserRequest() = default;

void RegisterMfaDeviceForUserRequest::validate()
{
}

web::json::value RegisterMfaDeviceForUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool RegisterMfaDeviceForUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string RegisterMfaDeviceForUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void RegisterMfaDeviceForUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool RegisterMfaDeviceForUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void RegisterMfaDeviceForUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string RegisterMfaDeviceForUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void RegisterMfaDeviceForUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool RegisterMfaDeviceForUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void RegisterMfaDeviceForUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string RegisterMfaDeviceForUserRequest::getUserId() const
{
    return userId_;
}

void RegisterMfaDeviceForUserRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool RegisterMfaDeviceForUserRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void RegisterMfaDeviceForUserRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


