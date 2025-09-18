

#include "huaweicloud/ga/v1/model/ListHealthChecksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListHealthChecksRequest::ListHealthChecksRequest()
{
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
    endpointGroupId_ = "";
    endpointGroupIdIsSet_ = false;
}

ListHealthChecksRequest::~ListHealthChecksRequest() = default;

void ListHealthChecksRequest::validate()
{
}

web::json::value ListHealthChecksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(endpointGroupIdIsSet_) {
        val[utility::conversions::to_string_t("endpoint_group_id")] = ModelBase::toJson(endpointGroupId_);
    }

    return val;
}
bool ListHealthChecksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("endpoint_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointGroupId(refVal);
        }
    }
    return ok;
}


int32_t ListHealthChecksRequest::getLimit() const
{
    return limit_;
}

void ListHealthChecksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHealthChecksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHealthChecksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHealthChecksRequest::getMarker() const
{
    return marker_;
}

void ListHealthChecksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListHealthChecksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListHealthChecksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListHealthChecksRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListHealthChecksRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListHealthChecksRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListHealthChecksRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::string ListHealthChecksRequest::getId() const
{
    return id_;
}

void ListHealthChecksRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListHealthChecksRequest::idIsSet() const
{
    return idIsSet_;
}

void ListHealthChecksRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListHealthChecksRequest::getStatus() const
{
    return status_;
}

void ListHealthChecksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListHealthChecksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListHealthChecksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListHealthChecksRequest::getEndpointGroupId() const
{
    return endpointGroupId_;
}

void ListHealthChecksRequest::setEndpointGroupId(const std::string& value)
{
    endpointGroupId_ = value;
    endpointGroupIdIsSet_ = true;
}

bool ListHealthChecksRequest::endpointGroupIdIsSet() const
{
    return endpointGroupIdIsSet_;
}

void ListHealthChecksRequest::unsetendpointGroupId()
{
    endpointGroupIdIsSet_ = false;
}

}
}
}
}
}


