

#include "huaweicloud/identitycenterstore/v1/model/DisableUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DisableUserRequest::DisableUserRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

DisableUserRequest::~DisableUserRequest() = default;

void DisableUserRequest::validate()
{
}

web::json::value DisableUserRequest::toJson() const
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
bool DisableUserRequest::fromJson(const web::json::value& val)
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


std::string DisableUserRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DisableUserRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DisableUserRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DisableUserRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DisableUserRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DisableUserRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DisableUserRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DisableUserRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DisableUserRequest::getUserId() const
{
    return userId_;
}

void DisableUserRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DisableUserRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void DisableUserRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


