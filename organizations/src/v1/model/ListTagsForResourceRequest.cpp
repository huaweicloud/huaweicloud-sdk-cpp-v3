

#include "huaweicloud/organizations/v1/model/ListTagsForResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTagsForResourceRequest::ListTagsForResourceRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListTagsForResourceRequest::~ListTagsForResourceRequest() = default;

void ListTagsForResourceRequest::validate()
{
}

web::json::value ListTagsForResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListTagsForResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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


std::string ListTagsForResourceRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListTagsForResourceRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListTagsForResourceRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListTagsForResourceRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListTagsForResourceRequest::getResourceId() const
{
    return resourceId_;
}

void ListTagsForResourceRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListTagsForResourceRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListTagsForResourceRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

int32_t ListTagsForResourceRequest::getLimit() const
{
    return limit_;
}

void ListTagsForResourceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTagsForResourceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTagsForResourceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTagsForResourceRequest::getMarker() const
{
    return marker_;
}

void ListTagsForResourceRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTagsForResourceRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTagsForResourceRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


