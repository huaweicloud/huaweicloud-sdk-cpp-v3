

#include "huaweicloud/identitycenterstore/v1/model/ListGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListGroupsRequest::ListGroupsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

ListGroupsRequest::~ListGroupsRequest() = default;

void ListGroupsRequest::validate()
{
}

web::json::value ListGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool ListGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string ListGroupsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListGroupsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListGroupsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListGroupsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListGroupsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListGroupsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListGroupsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListGroupsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ListGroupsRequest::getMarker() const
{
    return marker_;
}

void ListGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListGroupsRequest::getLimit() const
{
    return limit_;
}

void ListGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGroupsRequest::getDisplayName() const
{
    return displayName_;
}

void ListGroupsRequest::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ListGroupsRequest::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ListGroupsRequest::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


