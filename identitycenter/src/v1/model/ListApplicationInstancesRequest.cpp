

#include "huaweicloud/identitycenter/v1/model/ListApplicationInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationInstancesRequest::ListApplicationInstancesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListApplicationInstancesRequest::~ListApplicationInstancesRequest() = default;

void ListApplicationInstancesRequest::validate()
{
}

web::json::value ListApplicationInstancesRequest::toJson() const
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

    return val;
}
bool ListApplicationInstancesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListApplicationInstancesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationInstancesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationInstancesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationInstancesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListApplicationInstancesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListApplicationInstancesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListApplicationInstancesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListApplicationInstancesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListApplicationInstancesRequest::getLimit() const
{
    return limit_;
}

void ListApplicationInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationInstancesRequest::getMarker() const
{
    return marker_;
}

void ListApplicationInstancesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListApplicationInstancesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListApplicationInstancesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


