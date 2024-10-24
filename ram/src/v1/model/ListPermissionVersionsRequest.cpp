

#include "huaweicloud/ram/v1/model/ListPermissionVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListPermissionVersionsRequest::ListPermissionVersionsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    permissionId_ = "";
    permissionIdIsSet_ = false;
}

ListPermissionVersionsRequest::~ListPermissionVersionsRequest() = default;

void ListPermissionVersionsRequest::validate()
{
}

web::json::value ListPermissionVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(permissionIdIsSet_) {
        val[utility::conversions::to_string_t("permission_id")] = ModelBase::toJson(permissionId_);
    }

    return val;
}
bool ListPermissionVersionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionId(refVal);
        }
    }
    return ok;
}


std::string ListPermissionVersionsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListPermissionVersionsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListPermissionVersionsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListPermissionVersionsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

int32_t ListPermissionVersionsRequest::getLimit() const
{
    return limit_;
}

void ListPermissionVersionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPermissionVersionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPermissionVersionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPermissionVersionsRequest::getMarker() const
{
    return marker_;
}

void ListPermissionVersionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPermissionVersionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPermissionVersionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPermissionVersionsRequest::getPermissionId() const
{
    return permissionId_;
}

void ListPermissionVersionsRequest::setPermissionId(const std::string& value)
{
    permissionId_ = value;
    permissionIdIsSet_ = true;
}

bool ListPermissionVersionsRequest::permissionIdIsSet() const
{
    return permissionIdIsSet_;
}

void ListPermissionVersionsRequest::unsetpermissionId()
{
    permissionIdIsSet_ = false;
}

}
}
}
}
}


