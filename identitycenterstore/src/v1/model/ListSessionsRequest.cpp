

#include "huaweicloud/identitycenterstore/v1/model/ListSessionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListSessionsRequest::ListSessionsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

ListSessionsRequest::~ListSessionsRequest() = default;

void ListSessionsRequest::validate()
{
}

web::json::value ListSessionsRequest::toJson() const
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
bool ListSessionsRequest::fromJson(const web::json::value& val)
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


std::string ListSessionsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListSessionsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListSessionsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListSessionsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListSessionsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListSessionsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListSessionsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListSessionsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ListSessionsRequest::getUserId() const
{
    return userId_;
}

void ListSessionsRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListSessionsRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListSessionsRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


