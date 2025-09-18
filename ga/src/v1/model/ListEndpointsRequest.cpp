

#include "huaweicloud/ga/v1/model/ListEndpointsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListEndpointsRequest::ListEndpointsRequest()
{
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListEndpointsRequest::~ListEndpointsRequest() = default;

void ListEndpointsRequest::validate()
{
}

web::json::value ListEndpointsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListEndpointsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_reverse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_reverse"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReverse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}


std::string ListEndpointsRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void ListEndpointsRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool ListEndpointsRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void ListEndpointsRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

int32_t ListEndpointsRequest::getLimit() const
{
    return limit_;
}

void ListEndpointsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEndpointsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEndpointsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEndpointsRequest::getMarker() const
{
    return marker_;
}

void ListEndpointsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEndpointsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEndpointsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListEndpointsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListEndpointsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListEndpointsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListEndpointsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::string ListEndpointsRequest::getId() const
{
    return id_;
}

void ListEndpointsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListEndpointsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListEndpointsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListEndpointsRequest::getStatus() const
{
    return status_;
}

void ListEndpointsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEndpointsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEndpointsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


