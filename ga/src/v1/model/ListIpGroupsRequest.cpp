

#include "huaweicloud/ga/v1/model/ListIpGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListIpGroupsRequest::ListIpGroupsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    listenerId_ = "";
    listenerIdIsSet_ = false;
}

ListIpGroupsRequest::~ListIpGroupsRequest() = default;

void ListIpGroupsRequest::validate()
{
}

web::json::value ListIpGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(listenerIdIsSet_) {
        val[utility::conversions::to_string_t("listener_id")] = ModelBase::toJson(listenerId_);
    }

    return val;
}
bool ListIpGroupsRequest::fromJson(const web::json::value& val)
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


int32_t ListIpGroupsRequest::getLimit() const
{
    return limit_;
}

void ListIpGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIpGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIpGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListIpGroupsRequest::getMarker() const
{
    return marker_;
}

void ListIpGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListIpGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListIpGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListIpGroupsRequest::getListenerId() const
{
    return listenerId_;
}

void ListIpGroupsRequest::setListenerId(const std::string& value)
{
    listenerId_ = value;
    listenerIdIsSet_ = true;
}

bool ListIpGroupsRequest::listenerIdIsSet() const
{
    return listenerIdIsSet_;
}

void ListIpGroupsRequest::unsetlistenerId()
{
    listenerIdIsSet_ = false;
}

}
}
}
}
}


