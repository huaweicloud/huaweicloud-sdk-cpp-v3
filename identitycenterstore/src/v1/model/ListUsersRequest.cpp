

#include "huaweicloud/identitycenterstore/v1/model/ListUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListUsersRequest::ListUsersRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ListUsersRequest::~ListUsersRequest() = default;

void ListUsersRequest::validate()
{
}

web::json::value ListUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ListUsersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ListUsersRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListUsersRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListUsersRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListUsersRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListUsersRequest::getMarker() const
{
    return marker_;
}

void ListUsersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListUsersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListUsersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListUsersRequest::getLimit() const
{
    return limit_;
}

void ListUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListUsersRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListUsersRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListUsersRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListUsersRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ListUsersRequest::getUserName() const
{
    return userName_;
}

void ListUsersRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListUsersRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListUsersRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


