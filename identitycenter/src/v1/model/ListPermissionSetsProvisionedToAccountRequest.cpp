

#include "huaweicloud/identitycenter/v1/model/ListPermissionSetsProvisionedToAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListPermissionSetsProvisionedToAccountRequest::ListPermissionSetsProvisionedToAccountRequest()
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
    provisioningStatus_ = "";
    provisioningStatusIsSet_ = false;
}

ListPermissionSetsProvisionedToAccountRequest::~ListPermissionSetsProvisionedToAccountRequest() = default;

void ListPermissionSetsProvisionedToAccountRequest::validate()
{
}

web::json::value ListPermissionSetsProvisionedToAccountRequest::toJson() const
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
    if(provisioningStatusIsSet_) {
        val[utility::conversions::to_string_t("provisioning_status")] = ModelBase::toJson(provisioningStatus_);
    }

    return val;
}
bool ListPermissionSetsProvisionedToAccountRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("provisioning_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provisioning_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvisioningStatus(refVal);
        }
    }
    return ok;
}


std::string ListPermissionSetsProvisionedToAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListPermissionSetsProvisionedToAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListPermissionSetsProvisionedToAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListPermissionSetsProvisionedToAccountRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPermissionSetsProvisionedToAccountRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPermissionSetsProvisionedToAccountRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListPermissionSetsProvisionedToAccountRequest::getLimit() const
{
    return limit_;
}

void ListPermissionSetsProvisionedToAccountRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPermissionSetsProvisionedToAccountRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPermissionSetsProvisionedToAccountRequest::getMarker() const
{
    return marker_;
}

void ListPermissionSetsProvisionedToAccountRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPermissionSetsProvisionedToAccountRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPermissionSetsProvisionedToAccountRequest::getAccountId() const
{
    return accountId_;
}

void ListPermissionSetsProvisionedToAccountRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListPermissionSetsProvisionedToAccountRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string ListPermissionSetsProvisionedToAccountRequest::getProvisioningStatus() const
{
    return provisioningStatus_;
}

void ListPermissionSetsProvisionedToAccountRequest::setProvisioningStatus(const std::string& value)
{
    provisioningStatus_ = value;
    provisioningStatusIsSet_ = true;
}

bool ListPermissionSetsProvisionedToAccountRequest::provisioningStatusIsSet() const
{
    return provisioningStatusIsSet_;
}

void ListPermissionSetsProvisionedToAccountRequest::unsetprovisioningStatus()
{
    provisioningStatusIsSet_ = false;
}

}
}
}
}
}


