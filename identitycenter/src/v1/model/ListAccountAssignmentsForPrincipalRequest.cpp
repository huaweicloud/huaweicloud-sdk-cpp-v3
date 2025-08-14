

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentsForPrincipalRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentsForPrincipalRequest::ListAccountAssignmentsForPrincipalRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
}

ListAccountAssignmentsForPrincipalRequest::~ListAccountAssignmentsForPrincipalRequest() = default;

void ListAccountAssignmentsForPrincipalRequest::validate()
{
}

web::json::value ListAccountAssignmentsForPrincipalRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalTypeIsSet_) {
        val[utility::conversions::to_string_t("principal_type")] = ModelBase::toJson(principalType_);
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

    return val;
}
bool ListAccountAssignmentsForPrincipalRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalType(refVal);
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
    return ok;
}


std::string ListAccountAssignmentsForPrincipalRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListAccountAssignmentsForPrincipalRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListAccountAssignmentsForPrincipalRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAccountAssignmentsForPrincipalRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAccountAssignmentsForPrincipalRequest::getPrincipalId() const
{
    return principalId_;
}

void ListAccountAssignmentsForPrincipalRequest::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string ListAccountAssignmentsForPrincipalRequest::getPrincipalType() const
{
    return principalType_;
}

void ListAccountAssignmentsForPrincipalRequest::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

int32_t ListAccountAssignmentsForPrincipalRequest::getLimit() const
{
    return limit_;
}

void ListAccountAssignmentsForPrincipalRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccountAssignmentsForPrincipalRequest::getMarker() const
{
    return marker_;
}

void ListAccountAssignmentsForPrincipalRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAccountAssignmentsForPrincipalRequest::getAccountId() const
{
    return accountId_;
}

void ListAccountAssignmentsForPrincipalRequest::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool ListAccountAssignmentsForPrincipalRequest::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void ListAccountAssignmentsForPrincipalRequest::unsetaccountId()
{
    accountIdIsSet_ = false;
}

}
}
}
}
}


