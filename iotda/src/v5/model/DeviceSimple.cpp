

#include "huaweicloud/iotda/v5/model/DeviceSimple.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceSimple::DeviceSimple()
{
    appId_ = "";
    appIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    gatewayId_ = "";
    gatewayIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
}

DeviceSimple::~DeviceSimple() = default;

void DeviceSimple::validate()
{
}

web::json::value DeviceSimple::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
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
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }

    return val;
}
bool DeviceSimple::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    return ok;
}


std::string DeviceSimple::getAppId() const
{
    return appId_;
}

void DeviceSimple::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool DeviceSimple::appIdIsSet() const
{
    return appIdIsSet_;
}

void DeviceSimple::unsetappId()
{
    appIdIsSet_ = false;
}

std::string DeviceSimple::getDeviceId() const
{
    return deviceId_;
}

void DeviceSimple::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeviceSimple::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeviceSimple::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string DeviceSimple::getNodeId() const
{
    return nodeId_;
}

void DeviceSimple::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeviceSimple::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeviceSimple::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string DeviceSimple::getGatewayId() const
{
    return gatewayId_;
}

void DeviceSimple::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool DeviceSimple::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void DeviceSimple::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

std::string DeviceSimple::getDeviceName() const
{
    return deviceName_;
}

void DeviceSimple::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool DeviceSimple::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void DeviceSimple::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string DeviceSimple::getProductId() const
{
    return productId_;
}

void DeviceSimple::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool DeviceSimple::productIdIsSet() const
{
    return productIdIsSet_;
}

void DeviceSimple::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


