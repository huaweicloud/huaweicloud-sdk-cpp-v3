

#include "huaweicloud/iotda/v5/model/ListDevicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDevicesRequest::ListDevicesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    gatewayId_ = "";
    gatewayIdIsSet_ = false;
    isCascadeQuery_ = false;
    isCascadeQueryIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ListDevicesRequest::~ListDevicesRequest() = default;

void ListDevicesRequest::validate()
{
}

web::json::value ListDevicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(gatewayIdIsSet_) {
        val[utility::conversions::to_string_t("gateway_id")] = ModelBase::toJson(gatewayId_);
    }
    if(isCascadeQueryIsSet_) {
        val[utility::conversions::to_string_t("is_cascade_query")] = ModelBase::toJson(isCascadeQuery_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool ListDevicesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_cascade_query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_cascade_query"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCascadeQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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


std::string ListDevicesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDevicesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDevicesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDevicesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDevicesRequest::getProductId() const
{
    return productId_;
}

void ListDevicesRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ListDevicesRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void ListDevicesRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string ListDevicesRequest::getGatewayId() const
{
    return gatewayId_;
}

void ListDevicesRequest::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool ListDevicesRequest::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void ListDevicesRequest::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

bool ListDevicesRequest::isIsCascadeQuery() const
{
    return isCascadeQuery_;
}

void ListDevicesRequest::setIsCascadeQuery(bool value)
{
    isCascadeQuery_ = value;
    isCascadeQueryIsSet_ = true;
}

bool ListDevicesRequest::isCascadeQueryIsSet() const
{
    return isCascadeQueryIsSet_;
}

void ListDevicesRequest::unsetisCascadeQuery()
{
    isCascadeQueryIsSet_ = false;
}

std::string ListDevicesRequest::getNodeId() const
{
    return nodeId_;
}

void ListDevicesRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListDevicesRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListDevicesRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListDevicesRequest::getDeviceName() const
{
    return deviceName_;
}

void ListDevicesRequest::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool ListDevicesRequest::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void ListDevicesRequest::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

int32_t ListDevicesRequest::getLimit() const
{
    return limit_;
}

void ListDevicesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDevicesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDevicesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDevicesRequest::getMarker() const
{
    return marker_;
}

void ListDevicesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDevicesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDevicesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDevicesRequest::getOffset() const
{
    return offset_;
}

void ListDevicesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDevicesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDevicesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDevicesRequest::getStartTime() const
{
    return startTime_;
}

void ListDevicesRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListDevicesRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListDevicesRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListDevicesRequest::getEndTime() const
{
    return endTime_;
}

void ListDevicesRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListDevicesRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListDevicesRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListDevicesRequest::getAppId() const
{
    return appId_;
}

void ListDevicesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListDevicesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListDevicesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


