

#include "huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsForPrincipalRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationAssignmentsForPrincipalRequest::ListApplicationAssignmentsForPrincipalRequest()
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
}

ListApplicationAssignmentsForPrincipalRequest::~ListApplicationAssignmentsForPrincipalRequest() = default;

void ListApplicationAssignmentsForPrincipalRequest::validate()
{
}

web::json::value ListApplicationAssignmentsForPrincipalRequest::toJson() const
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

    return val;
}
bool ListApplicationAssignmentsForPrincipalRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListApplicationAssignmentsForPrincipalRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationAssignmentsForPrincipalRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationAssignmentsForPrincipalRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListApplicationAssignmentsForPrincipalRequest::getInstanceId() const
{
    return instanceId_;
}

void ListApplicationAssignmentsForPrincipalRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListApplicationAssignmentsForPrincipalRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListApplicationAssignmentsForPrincipalRequest::getPrincipalId() const
{
    return principalId_;
}

void ListApplicationAssignmentsForPrincipalRequest::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalRequest::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void ListApplicationAssignmentsForPrincipalRequest::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string ListApplicationAssignmentsForPrincipalRequest::getPrincipalType() const
{
    return principalType_;
}

void ListApplicationAssignmentsForPrincipalRequest::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalRequest::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void ListApplicationAssignmentsForPrincipalRequest::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

int32_t ListApplicationAssignmentsForPrincipalRequest::getLimit() const
{
    return limit_;
}

void ListApplicationAssignmentsForPrincipalRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationAssignmentsForPrincipalRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationAssignmentsForPrincipalRequest::getMarker() const
{
    return marker_;
}

void ListApplicationAssignmentsForPrincipalRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListApplicationAssignmentsForPrincipalRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


