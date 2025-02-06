

#include "huaweicloud/identitycenter/v1/model/ListPermissionSetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListPermissionSetsRequest::ListPermissionSetsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    permissionUrn_ = "";
    permissionUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListPermissionSetsRequest::~ListPermissionSetsRequest() = default;

void ListPermissionSetsRequest::validate()
{
}

web::json::value ListPermissionSetsRequest::toJson() const
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
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(permissionUrnIsSet_) {
        val[utility::conversions::to_string_t("permission_urn")] = ModelBase::toJson(permissionUrn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListPermissionSetsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListPermissionSetsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListPermissionSetsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListPermissionSetsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListPermissionSetsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListPermissionSetsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPermissionSetsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPermissionSetsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPermissionSetsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListPermissionSetsRequest::getLimit() const
{
    return limit_;
}

void ListPermissionSetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPermissionSetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPermissionSetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPermissionSetsRequest::getMarker() const
{
    return marker_;
}

void ListPermissionSetsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPermissionSetsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPermissionSetsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPermissionSetsRequest::getPermissionSetId() const
{
    return permissionSetId_;
}

void ListPermissionSetsRequest::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool ListPermissionSetsRequest::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void ListPermissionSetsRequest::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string ListPermissionSetsRequest::getPermissionUrn() const
{
    return permissionUrn_;
}

void ListPermissionSetsRequest::setPermissionUrn(const std::string& value)
{
    permissionUrn_ = value;
    permissionUrnIsSet_ = true;
}

bool ListPermissionSetsRequest::permissionUrnIsSet() const
{
    return permissionUrnIsSet_;
}

void ListPermissionSetsRequest::unsetpermissionUrn()
{
    permissionUrnIsSet_ = false;
}

std::string ListPermissionSetsRequest::getName() const
{
    return name_;
}

void ListPermissionSetsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPermissionSetsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListPermissionSetsRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


