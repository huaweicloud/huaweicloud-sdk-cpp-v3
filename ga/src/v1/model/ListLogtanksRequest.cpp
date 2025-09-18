

#include "huaweicloud/ga/v1/model/ListLogtanksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListLogtanksRequest::ListLogtanksRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    resourceIdsIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListLogtanksRequest::~ListLogtanksRequest() = default;

void ListLogtanksRequest::validate()
{
}

web::json::value ListLogtanksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resourceIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_ids")] = ModelBase::toJson(resourceIds_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListLogtanksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


int32_t ListLogtanksRequest::getLimit() const
{
    return limit_;
}

void ListLogtanksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLogtanksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLogtanksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLogtanksRequest::getMarker() const
{
    return marker_;
}

void ListLogtanksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListLogtanksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListLogtanksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListLogtanksRequest::getId() const
{
    return id_;
}

void ListLogtanksRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListLogtanksRequest::idIsSet() const
{
    return idIsSet_;
}

void ListLogtanksRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListLogtanksRequest::getStatus() const
{
    return status_;
}

void ListLogtanksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListLogtanksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListLogtanksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListLogtanksRequest::getResourceIds()
{
    return resourceIds_;
}

void ListLogtanksRequest::setResourceIds(const std::vector<std::string>& value)
{
    resourceIds_ = value;
    resourceIdsIsSet_ = true;
}

bool ListLogtanksRequest::resourceIdsIsSet() const
{
    return resourceIdsIsSet_;
}

void ListLogtanksRequest::unsetresourceIds()
{
    resourceIdsIsSet_ = false;
}

std::string ListLogtanksRequest::getResourceType() const
{
    return resourceType_;
}

void ListLogtanksRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListLogtanksRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListLogtanksRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


