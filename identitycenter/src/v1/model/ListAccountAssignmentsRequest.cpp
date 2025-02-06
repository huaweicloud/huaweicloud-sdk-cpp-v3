

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentsRequest::ListAccountAssignmentsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
}

ListAccountAssignmentsRequest::~ListAccountAssignmentsRequest() = default;

void ListAccountAssignmentsRequest::validate()
{
}

web::json::value ListAccountAssignmentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }

    return val;
}
bool ListAccountAssignmentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    return ok;
}


std::string ListAccountAssignmentsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListAccountAssignmentsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListAccountAssignmentsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListAccountAssignmentsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListAccountAssignmentsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAccountAssignmentsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAccountAssignmentsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAccountAssignmentsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListAccountAssignmentsRequest::getLimit() const
{
    return limit_;
}

void ListAccountAssignmentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountAssignmentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountAssignmentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccountAssignmentsRequest::getMarker() const
{
    return marker_;
}

void ListAccountAssignmentsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccountAssignmentsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccountAssignmentsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAccountAssignmentsRequest::getAccountId() const
{
    return accountId_;
}

void ListAccountAssignmentsRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListAccountAssignmentsRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListAccountAssignmentsRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ListAccountAssignmentsRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void ListAccountAssignmentsRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool ListAccountAssignmentsRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void ListAccountAssignmentsRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

}
}
}
}
}


