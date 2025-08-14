

#include "huaweicloud/identitycenterstore/v1/model/DeleteMfaDeviceForUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteMfaDeviceForUserRequest::DeleteMfaDeviceForUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
}

DeleteMfaDeviceForUserRequest::~DeleteMfaDeviceForUserRequest() = default;

void DeleteMfaDeviceForUserRequest::validate()
{
}

web::json::value DeleteMfaDeviceForUserRequest::toJson() const
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
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }

    return val;
}
bool DeleteMfaDeviceForUserRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    return ok;
}


std::string DeleteMfaDeviceForUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteMfaDeviceForUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteMfaDeviceForUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteMfaDeviceForUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteMfaDeviceForUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteMfaDeviceForUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteMfaDeviceForUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteMfaDeviceForUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteMfaDeviceForUserRequest::getUserId() const
{
    return userId_;
}

void DeleteMfaDeviceForUserRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DeleteMfaDeviceForUserRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void DeleteMfaDeviceForUserRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string DeleteMfaDeviceForUserRequest::getDeviceId() const
{
    return deviceId_;
}

void DeleteMfaDeviceForUserRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeleteMfaDeviceForUserRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeleteMfaDeviceForUserRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

}
}
}
}
}


