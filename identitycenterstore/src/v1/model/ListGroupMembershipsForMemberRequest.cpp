

#include "huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsForMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListGroupMembershipsForMemberRequest::ListGroupMembershipsForMemberRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

ListGroupMembershipsForMemberRequest::~ListGroupMembershipsForMemberRequest() = default;

void ListGroupMembershipsForMemberRequest::validate()
{
}

web::json::value ListGroupMembershipsForMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool ListGroupMembershipsForMemberRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ListGroupMembershipsForMemberRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListGroupMembershipsForMemberRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListGroupMembershipsForMemberRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListGroupMembershipsForMemberRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListGroupMembershipsForMemberRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListGroupMembershipsForMemberRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListGroupMembershipsForMemberRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListGroupMembershipsForMemberRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

int32_t ListGroupMembershipsForMemberRequest::getLimit() const
{
    return limit_;
}

void ListGroupMembershipsForMemberRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupMembershipsForMemberRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupMembershipsForMemberRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGroupMembershipsForMemberRequest::getMarker() const
{
    return marker_;
}

void ListGroupMembershipsForMemberRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGroupMembershipsForMemberRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGroupMembershipsForMemberRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListGroupMembershipsForMemberRequest::getUserId() const
{
    return userId_;
}

void ListGroupMembershipsForMemberRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListGroupMembershipsForMemberRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListGroupMembershipsForMemberRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


