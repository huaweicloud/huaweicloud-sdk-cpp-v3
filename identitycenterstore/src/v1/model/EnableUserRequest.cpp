

#include "huaweicloud/identitycenterstore/v1/model/EnableUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




EnableUserRequest::EnableUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

EnableUserRequest::~EnableUserRequest() = default;

void EnableUserRequest::validate()
{
}

web::json::value EnableUserRequest::toJson() const
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
bool EnableUserRequest::fromJson(const web::json::value& val)
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


std::string EnableUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void EnableUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool EnableUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void EnableUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string EnableUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void EnableUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool EnableUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void EnableUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string EnableUserRequest::getUserId() const
{
    return userId_;
}

void EnableUserRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool EnableUserRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void EnableUserRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


