

#include "huaweicloud/iotda/v5/model/SearchDevice.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SearchDevice::SearchDevice()
{
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    gatewayId_ = "";
    gatewayIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    fwVersion_ = "";
    fwVersionIsSet_ = false;
    swVersion_ = "";
    swVersionIsSet_ = false;
    deviceSdkVersion_ = "";
    deviceSdkVersionIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    groupsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tagsIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

SearchDevice::~SearchDevice() = default;

void SearchDevice::validate()
{
}

web::json::value SearchDevice::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(gatewayIdIsSet_) {
        val[utility::conversions::to_string_t("gateway_id")] = ModelBase::toJson(gatewayId_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(fwVersionIsSet_) {
        val[utility::conversions::to_string_t("fw_version")] = ModelBase::toJson(fwVersion_);
    }
    if(swVersionIsSet_) {
        val[utility::conversions::to_string_t("sw_version")] = ModelBase::toJson(swVersion_);
    }
    if(deviceSdkVersionIsSet_) {
        val[utility::conversions::to_string_t("device_sdk_version")] = ModelBase::toJson(deviceSdkVersion_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool SearchDevice::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gateway_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sw_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sw_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_sdk_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_sdk_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceSdkVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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


std::string SearchDevice::getAppId() const
{
    return appId_;
}

void SearchDevice::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool SearchDevice::appIdIsSet() const
{
    return appIdIsSet_;
}

void SearchDevice::unsetappId()
{
    appIdIsSet_ = false;
}

std::string SearchDevice::getAppName() const
{
    return appName_;
}

void SearchDevice::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool SearchDevice::appNameIsSet() const
{
    return appNameIsSet_;
}

void SearchDevice::unsetappName()
{
    appNameIsSet_ = false;
}

std::string SearchDevice::getDeviceId() const
{
    return deviceId_;
}

void SearchDevice::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool SearchDevice::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void SearchDevice::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string SearchDevice::getNodeId() const
{
    return nodeId_;
}

void SearchDevice::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SearchDevice::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SearchDevice::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SearchDevice::getGatewayId() const
{
    return gatewayId_;
}

void SearchDevice::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool SearchDevice::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void SearchDevice::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

std::string SearchDevice::getDeviceName() const
{
    return deviceName_;
}

void SearchDevice::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool SearchDevice::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void SearchDevice::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string SearchDevice::getNodeType() const
{
    return nodeType_;
}

void SearchDevice::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool SearchDevice::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void SearchDevice::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string SearchDevice::getFwVersion() const
{
    return fwVersion_;
}

void SearchDevice::setFwVersion(const std::string& value)
{
    fwVersion_ = value;
    fwVersionIsSet_ = true;
}

bool SearchDevice::fwVersionIsSet() const
{
    return fwVersionIsSet_;
}

void SearchDevice::unsetfwVersion()
{
    fwVersionIsSet_ = false;
}

std::string SearchDevice::getSwVersion() const
{
    return swVersion_;
}

void SearchDevice::setSwVersion(const std::string& value)
{
    swVersion_ = value;
    swVersionIsSet_ = true;
}

bool SearchDevice::swVersionIsSet() const
{
    return swVersionIsSet_;
}

void SearchDevice::unsetswVersion()
{
    swVersionIsSet_ = false;
}

std::string SearchDevice::getDeviceSdkVersion() const
{
    return deviceSdkVersion_;
}

void SearchDevice::setDeviceSdkVersion(const std::string& value)
{
    deviceSdkVersion_ = value;
    deviceSdkVersionIsSet_ = true;
}

bool SearchDevice::deviceSdkVersionIsSet() const
{
    return deviceSdkVersionIsSet_;
}

void SearchDevice::unsetdeviceSdkVersion()
{
    deviceSdkVersionIsSet_ = false;
}

std::string SearchDevice::getProductId() const
{
    return productId_;
}

void SearchDevice::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool SearchDevice::productIdIsSet() const
{
    return productIdIsSet_;
}

void SearchDevice::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string SearchDevice::getProductName() const
{
    return productName_;
}

void SearchDevice::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool SearchDevice::productNameIsSet() const
{
    return productNameIsSet_;
}

void SearchDevice::unsetproductName()
{
    productNameIsSet_ = false;
}

Object SearchDevice::getGroups() const
{
    return groups_;
}

void SearchDevice::setGroups(const Object& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool SearchDevice::groupsIsSet() const
{
    return groupsIsSet_;
}

void SearchDevice::unsetgroups()
{
    groupsIsSet_ = false;
}

std::string SearchDevice::getStatus() const
{
    return status_;
}

void SearchDevice::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchDevice::statusIsSet() const
{
    return statusIsSet_;
}

void SearchDevice::unsetstatus()
{
    statusIsSet_ = false;
}

Object SearchDevice::getTags() const
{
    return tags_;
}

void SearchDevice::setTags(const Object& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SearchDevice::tagsIsSet() const
{
    return tagsIsSet_;
}

void SearchDevice::unsettags()
{
    tagsIsSet_ = false;
}

std::string SearchDevice::getMarker() const
{
    return marker_;
}

void SearchDevice::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchDevice::markerIsSet() const
{
    return markerIsSet_;
}

void SearchDevice::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


