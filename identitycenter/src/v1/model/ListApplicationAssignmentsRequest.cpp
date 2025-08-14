

#include "huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationAssignmentsRequest::ListApplicationAssignmentsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
}

ListApplicationAssignmentsRequest::~ListApplicationAssignmentsRequest() = default;

void ListApplicationAssignmentsRequest::validate()
{
}

web::json::value ListApplicationAssignmentsRequest::toJson() const
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
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }

    return val;
}
bool ListApplicationAssignmentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListApplicationAssignmentsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationAssignmentsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationAssignmentsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationAssignmentsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

int32_t ListApplicationAssignmentsRequest::getLimit() const
{
    return limit_;
}

void ListApplicationAssignmentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationAssignmentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationAssignmentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationAssignmentsRequest::getMarker() const
{
    return marker_;
}

void ListApplicationAssignmentsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListApplicationAssignmentsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListApplicationAssignmentsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListApplicationAssignmentsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListApplicationAssignmentsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListApplicationAssignmentsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListApplicationAssignmentsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListApplicationAssignmentsRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void ListApplicationAssignmentsRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool ListApplicationAssignmentsRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void ListApplicationAssignmentsRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

}
}
}
}
}


