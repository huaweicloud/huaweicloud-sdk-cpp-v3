

#include "huaweicloud/organizations/v1/model/ListTagResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListTagResourcesRequest::ListTagResourcesRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListTagResourcesRequest::~ListTagResourcesRequest() = default;

void ListTagResourcesRequest::validate()
{
}

web::json::value ListTagResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
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
bool ListTagResourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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


std::string ListTagResourcesRequest::getResourceType() const
{
    return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListTagResourcesRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListTagResourcesRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListTagResourcesRequest::getResourceId() const
{
    return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListTagResourcesRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListTagResourcesRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

int32_t ListTagResourcesRequest::getLimit() const
{
    return limit_;
}

void ListTagResourcesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTagResourcesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTagResourcesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTagResourcesRequest::getMarker() const
{
    return marker_;
}

void ListTagResourcesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTagResourcesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTagResourcesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


