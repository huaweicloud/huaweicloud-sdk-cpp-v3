

#include "huaweicloud/iotda/v5/model/AddDevice.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddDevice::AddDevice()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    authInfoIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    gatewayId_ = "";
    gatewayIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    extensionInfoIsSet_ = false;
    shadowIsSet_ = false;
}

AddDevice::~AddDevice() = default;

void AddDevice::validate()
{
}

web::json::value AddDevice::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(authInfoIsSet_) {
        val[utility::conversions::to_string_t("auth_info")] = ModelBase::toJson(authInfo_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(gatewayIdIsSet_) {
        val[utility::conversions::to_string_t("gateway_id")] = ModelBase::toJson(gatewayId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(extensionInfoIsSet_) {
        val[utility::conversions::to_string_t("extension_info")] = ModelBase::toJson(extensionInfo_);
    }
    if(shadowIsSet_) {
        val[utility::conversions::to_string_t("shadow")] = ModelBase::toJson(shadow_);
    }

    return val;
}
bool AddDevice::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("auth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_info"));
        if(!fieldValue.is_null())
        {
            AuthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gateway_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extension_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shadow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shadow"));
        if(!fieldValue.is_null())
        {
            std::vector<InitialDesired> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShadow(refVal);
        }
    }
    return ok;
}


std::string AddDevice::getDeviceId() const
{
    return deviceId_;
}

void AddDevice::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool AddDevice::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void AddDevice::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string AddDevice::getNodeId() const
{
    return nodeId_;
}

void AddDevice::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AddDevice::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AddDevice::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string AddDevice::getDeviceName() const
{
    return deviceName_;
}

void AddDevice::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool AddDevice::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void AddDevice::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string AddDevice::getProductId() const
{
    return productId_;
}

void AddDevice::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool AddDevice::productIdIsSet() const
{
    return productIdIsSet_;
}

void AddDevice::unsetproductId()
{
    productIdIsSet_ = false;
}

AuthInfo AddDevice::getAuthInfo() const
{
    return authInfo_;
}

void AddDevice::setAuthInfo(const AuthInfo& value)
{
    authInfo_ = value;
    authInfoIsSet_ = true;
}

bool AddDevice::authInfoIsSet() const
{
    return authInfoIsSet_;
}

void AddDevice::unsetauthInfo()
{
    authInfoIsSet_ = false;
}

std::string AddDevice::getDescription() const
{
    return description_;
}

void AddDevice::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddDevice::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddDevice::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddDevice::getGatewayId() const
{
    return gatewayId_;
}

void AddDevice::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool AddDevice::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void AddDevice::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

std::string AddDevice::getAppId() const
{
    return appId_;
}

void AddDevice::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddDevice::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddDevice::unsetappId()
{
    appIdIsSet_ = false;
}

Object AddDevice::getExtensionInfo() const
{
    return extensionInfo_;
}

void AddDevice::setExtensionInfo(const Object& value)
{
    extensionInfo_ = value;
    extensionInfoIsSet_ = true;
}

bool AddDevice::extensionInfoIsSet() const
{
    return extensionInfoIsSet_;
}

void AddDevice::unsetextensionInfo()
{
    extensionInfoIsSet_ = false;
}

std::vector<InitialDesired>& AddDevice::getShadow()
{
    return shadow_;
}

void AddDevice::setShadow(const std::vector<InitialDesired>& value)
{
    shadow_ = value;
    shadowIsSet_ = true;
}

bool AddDevice::shadowIsSet() const
{
    return shadowIsSet_;
}

void AddDevice::unsetshadow()
{
    shadowIsSet_ = false;
}

}
}
}
}
}


