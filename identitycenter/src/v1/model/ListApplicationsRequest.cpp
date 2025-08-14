

#include "huaweicloud/identitycenter/v1/model/ListApplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationsRequest::ListApplicationsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListApplicationsRequest::~ListApplicationsRequest() = default;

void ListApplicationsRequest::validate()
{
}

web::json::value ListApplicationsRequest::toJson() const
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

    return val;
}
bool ListApplicationsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListApplicationsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

int32_t ListApplicationsRequest::getLimit() const
{
    return limit_;
}

void ListApplicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationsRequest::getMarker() const
{
    return marker_;
}

void ListApplicationsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListApplicationsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListApplicationsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListApplicationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListApplicationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListApplicationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListApplicationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


