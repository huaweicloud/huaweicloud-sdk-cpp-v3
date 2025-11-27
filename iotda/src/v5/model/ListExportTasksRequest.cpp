

#include "huaweicloud/iotda/v5/model/ListExportTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListExportTasksRequest::ListExportTasksRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceCondition_ = "";
    resourceConditionIsSet_ = false;
    appType_ = "";
    appTypeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ListExportTasksRequest::~ListExportTasksRequest() = default;

void ListExportTasksRequest::validate()
{
}

web::json::value ListExportTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceConditionIsSet_) {
        val[utility::conversions::to_string_t("resource_condition")] = ModelBase::toJson(resourceCondition_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool ListExportTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    return ok;
}


std::string ListExportTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListExportTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListExportTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListExportTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListExportTasksRequest::getLimit() const
{
    return limit_;
}

void ListExportTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListExportTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListExportTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListExportTasksRequest::getMarker() const
{
    return marker_;
}

void ListExportTasksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListExportTasksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListExportTasksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListExportTasksRequest::getOffset() const
{
    return offset_;
}

void ListExportTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListExportTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListExportTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListExportTasksRequest::getResourceType() const
{
    return resourceType_;
}

void ListExportTasksRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListExportTasksRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListExportTasksRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListExportTasksRequest::getResourceCondition() const
{
    return resourceCondition_;
}

void ListExportTasksRequest::setResourceCondition(const std::string& value)
{
    resourceCondition_ = value;
    resourceConditionIsSet_ = true;
}

bool ListExportTasksRequest::resourceConditionIsSet() const
{
    return resourceConditionIsSet_;
}

void ListExportTasksRequest::unsetresourceCondition()
{
    resourceConditionIsSet_ = false;
}

std::string ListExportTasksRequest::getAppType() const
{
    return appType_;
}

void ListExportTasksRequest::setAppType(const std::string& value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ListExportTasksRequest::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ListExportTasksRequest::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string ListExportTasksRequest::getAppId() const
{
    return appId_;
}

void ListExportTasksRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListExportTasksRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListExportTasksRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


