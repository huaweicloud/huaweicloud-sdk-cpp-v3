

#include "huaweicloud/identitycenter/v1/model/ListAccountAssignmentCreationStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListAccountAssignmentCreationStatusRequest::ListAccountAssignmentCreationStatusRequest()
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

ListAccountAssignmentCreationStatusRequest::~ListAccountAssignmentCreationStatusRequest() = default;

void ListAccountAssignmentCreationStatusRequest::validate()
{
}

web::json::value ListAccountAssignmentCreationStatusRequest::toJson() const
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
bool ListAccountAssignmentCreationStatusRequest::fromJson(const web::json::value& val)
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


std::string ListAccountAssignmentCreationStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListAccountAssignmentCreationStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListAccountAssignmentCreationStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListAccountAssignmentCreationStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAccountAssignmentCreationStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAccountAssignmentCreationStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAccountAssignmentCreationStatusRequest::getStatus() const
{
    return status_;
}

void ListAccountAssignmentCreationStatusRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAccountAssignmentCreationStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListAccountAssignmentCreationStatusRequest::getLimit() const
{
    return limit_;
}

void ListAccountAssignmentCreationStatusRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccountAssignmentCreationStatusRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAccountAssignmentCreationStatusRequest::getMarker() const
{
    return marker_;
}

void ListAccountAssignmentCreationStatusRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccountAssignmentCreationStatusRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccountAssignmentCreationStatusRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


