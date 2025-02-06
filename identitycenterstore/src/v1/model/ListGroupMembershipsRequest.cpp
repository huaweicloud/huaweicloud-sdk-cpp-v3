

#include "huaweicloud/identitycenterstore/v1/model/ListGroupMembershipsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListGroupMembershipsRequest::ListGroupMembershipsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

ListGroupMembershipsRequest::~ListGroupMembershipsRequest() = default;

void ListGroupMembershipsRequest::validate()
{
}

web::json::value ListGroupMembershipsRequest::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ListGroupMembershipsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string ListGroupMembershipsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListGroupMembershipsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListGroupMembershipsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListGroupMembershipsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListGroupMembershipsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListGroupMembershipsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListGroupMembershipsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListGroupMembershipsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

int32_t ListGroupMembershipsRequest::getLimit() const
{
    return limit_;
}

void ListGroupMembershipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupMembershipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupMembershipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGroupMembershipsRequest::getMarker() const
{
    return marker_;
}

void ListGroupMembershipsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGroupMembershipsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGroupMembershipsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListGroupMembershipsRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupMembershipsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupMembershipsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupMembershipsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


