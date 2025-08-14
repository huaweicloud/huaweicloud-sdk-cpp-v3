

#include "huaweicloud/identitycenterstore/v1/model/UpdateMfaDeviceForUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateMfaDeviceForUserRequest::UpdateMfaDeviceForUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMfaDeviceForUserRequest::~UpdateMfaDeviceForUserRequest() = default;

void UpdateMfaDeviceForUserRequest::validate()
{
}

web::json::value UpdateMfaDeviceForUserRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMfaDeviceForUserRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateMfaDeviceForUserReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMfaDeviceForUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateMfaDeviceForUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateMfaDeviceForUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateMfaDeviceForUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateMfaDeviceForUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void UpdateMfaDeviceForUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool UpdateMfaDeviceForUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void UpdateMfaDeviceForUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string UpdateMfaDeviceForUserRequest::getUserId() const
{
    return userId_;
}

void UpdateMfaDeviceForUserRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateMfaDeviceForUserRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateMfaDeviceForUserRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UpdateMfaDeviceForUserRequest::getDeviceId() const
{
    return deviceId_;
}

void UpdateMfaDeviceForUserRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdateMfaDeviceForUserRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdateMfaDeviceForUserRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

UpdateMfaDeviceForUserReqBody UpdateMfaDeviceForUserRequest::getBody() const
{
    return body_;
}

void UpdateMfaDeviceForUserRequest::setBody(const UpdateMfaDeviceForUserReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMfaDeviceForUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMfaDeviceForUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


