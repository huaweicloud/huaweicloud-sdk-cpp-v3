

#include "huaweicloud/identitycenter/v1/model/ListPermissionSetProvisioningStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListPermissionSetProvisioningStatusRequest::ListPermissionSetProvisioningStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListPermissionSetProvisioningStatusRequest::~ListPermissionSetProvisioningStatusRequest() = default;

void ListPermissionSetProvisioningStatusRequest::validate()
{
}

web::json::value ListPermissionSetProvisioningStatusRequest::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListPermissionSetProvisioningStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListPermissionSetProvisioningStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListPermissionSetProvisioningStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListPermissionSetProvisioningStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListPermissionSetProvisioningStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPermissionSetProvisioningStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPermissionSetProvisioningStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListPermissionSetProvisioningStatusRequest::getLimit() const
{
    return limit_;
}

void ListPermissionSetProvisioningStatusRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPermissionSetProvisioningStatusRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPermissionSetProvisioningStatusRequest::getMarker() const
{
    return marker_;
}

void ListPermissionSetProvisioningStatusRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPermissionSetProvisioningStatusRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPermissionSetProvisioningStatusRequest::getStatus() const
{
    return status_;
}

void ListPermissionSetProvisioningStatusRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPermissionSetProvisioningStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListPermissionSetProvisioningStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


