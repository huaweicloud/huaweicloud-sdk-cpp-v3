

#include "huaweicloud/vpc/v2/model/ListFlowLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListFlowLogsRequest::ListFlowLogsRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    trafficType_ = "";
    trafficTypeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logTopicId_ = "";
    logTopicIdIsSet_ = false;
    logStoreType_ = "";
    logStoreTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListFlowLogsRequest::~ListFlowLogsRequest() = default;

void ListFlowLogsRequest::validate()
{
}

web::json::value ListFlowLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(trafficTypeIsSet_) {
        val[utility::conversions::to_string_t("traffic_type")] = ModelBase::toJson(trafficType_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logTopicIdIsSet_) {
        val[utility::conversions::to_string_t("log_topic_id")] = ModelBase::toJson(logTopicId_);
    }
    if(logStoreTypeIsSet_) {
        val[utility::conversions::to_string_t("log_store_type")] = ModelBase::toJson(logStoreType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}

bool ListFlowLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_store_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_store_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStoreType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string ListFlowLogsRequest::getId() const
{
    return id_;
}

void ListFlowLogsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListFlowLogsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListFlowLogsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListFlowLogsRequest::getName() const
{
    return name_;
}

void ListFlowLogsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListFlowLogsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListFlowLogsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListFlowLogsRequest::getTenantId() const
{
    return tenantId_;
}

void ListFlowLogsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListFlowLogsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListFlowLogsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListFlowLogsRequest::getDescription() const
{
    return description_;
}

void ListFlowLogsRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListFlowLogsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListFlowLogsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListFlowLogsRequest::getResourceType() const
{
    return resourceType_;
}

void ListFlowLogsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListFlowLogsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListFlowLogsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListFlowLogsRequest::getResourceId() const
{
    return resourceId_;
}

void ListFlowLogsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListFlowLogsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListFlowLogsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListFlowLogsRequest::getTrafficType() const
{
    return trafficType_;
}

void ListFlowLogsRequest::setTrafficType(const std::string& value)
{
    trafficType_ = value;
    trafficTypeIsSet_ = true;
}

bool ListFlowLogsRequest::trafficTypeIsSet() const
{
    return trafficTypeIsSet_;
}

void ListFlowLogsRequest::unsettrafficType()
{
    trafficTypeIsSet_ = false;
}

std::string ListFlowLogsRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListFlowLogsRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListFlowLogsRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListFlowLogsRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListFlowLogsRequest::getLogTopicId() const
{
    return logTopicId_;
}

void ListFlowLogsRequest::setLogTopicId(const std::string& value)
{
    logTopicId_ = value;
    logTopicIdIsSet_ = true;
}

bool ListFlowLogsRequest::logTopicIdIsSet() const
{
    return logTopicIdIsSet_;
}

void ListFlowLogsRequest::unsetlogTopicId()
{
    logTopicIdIsSet_ = false;
}

std::string ListFlowLogsRequest::getLogStoreType() const
{
    return logStoreType_;
}

void ListFlowLogsRequest::setLogStoreType(const std::string& value)
{
    logStoreType_ = value;
    logStoreTypeIsSet_ = true;
}

bool ListFlowLogsRequest::logStoreTypeIsSet() const
{
    return logStoreTypeIsSet_;
}

void ListFlowLogsRequest::unsetlogStoreType()
{
    logStoreTypeIsSet_ = false;
}

std::string ListFlowLogsRequest::getStatus() const
{
    return status_;
}

void ListFlowLogsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFlowLogsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListFlowLogsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListFlowLogsRequest::getLimit() const
{
    return limit_;
}

void ListFlowLogsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlowLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlowLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFlowLogsRequest::getMarker() const
{
    return marker_;
}

void ListFlowLogsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFlowLogsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFlowLogsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


