

#include "huaweicloud/ga/v1/model/ListEndpointGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListEndpointGroupsRequest::ListEndpointGroupsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    listenerId_ = "";
    listenerIdIsSet_ = false;
}

ListEndpointGroupsRequest::~ListEndpointGroupsRequest() = default;

void ListEndpointGroupsRequest::validate()
{
}

web::json::value ListEndpointGroupsRequest::toJson() const
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
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }

    return val;
}
bool ListEndpointGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("listener_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenerId(refVal);
        }
    }
    return ok;
}


int32_t ListEndpointGroupsRequest::getLimit() const
{
    return limit_;
}

void ListEndpointGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEndpointGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEndpointGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEndpointGroupsRequest::getMarker() const
{
    return marker_;
}

void ListEndpointGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEndpointGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEndpointGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListEndpointGroupsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListEndpointGroupsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListEndpointGroupsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListEndpointGroupsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::string ListEndpointGroupsRequest::getId() const
{
    return id_;
}

void ListEndpointGroupsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListEndpointGroupsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListEndpointGroupsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListEndpointGroupsRequest::getName() const
{
    return name_;
}

void ListEndpointGroupsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListEndpointGroupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListEndpointGroupsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListEndpointGroupsRequest::getStatus() const
{
    return status_;
}

void ListEndpointGroupsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEndpointGroupsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEndpointGroupsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListEndpointGroupsRequest::getListenerId() const
{
    return listenerId_;
}

void ListEndpointGroupsRequest::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool ListEndpointGroupsRequest::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void ListEndpointGroupsRequest::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

}
}
}
}
}


