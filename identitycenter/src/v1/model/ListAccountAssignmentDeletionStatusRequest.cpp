

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentDeletionStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentDeletionStatusRequest::ListAccountAssignmentDeletionStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListAccountAssignmentDeletionStatusRequest::~ListAccountAssignmentDeletionStatusRequest() = default;

void ListAccountAssignmentDeletionStatusRequest::validate()
{
}

web::json::value ListAccountAssignmentDeletionStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListAccountAssignmentDeletionStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListAccountAssignmentDeletionStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListAccountAssignmentDeletionStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListAccountAssignmentDeletionStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListAccountAssignmentDeletionStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAccountAssignmentDeletionStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAccountAssignmentDeletionStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAccountAssignmentDeletionStatusRequest::getStatus() const
{
    return status_;
}

void ListAccountAssignmentDeletionStatusRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAccountAssignmentDeletionStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListAccountAssignmentDeletionStatusRequest::getLimit() const
{
    return limit_;
}

void ListAccountAssignmentDeletionStatusRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountAssignmentDeletionStatusRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccountAssignmentDeletionStatusRequest::getMarker() const
{
    return marker_;
}

void ListAccountAssignmentDeletionStatusRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccountAssignmentDeletionStatusRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccountAssignmentDeletionStatusRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


