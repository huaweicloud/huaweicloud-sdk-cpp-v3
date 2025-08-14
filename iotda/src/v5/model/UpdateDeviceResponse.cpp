

#include "huaweicloud/iotda/v5/model/UpdateDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceResponse::UpdateDeviceResponse()
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
    description_ = "";
    descriptionIsSet_ = false;
    fwVersion_ = "";
    fwVersionIsSet_ = false;
    swVersion_ = "";
    swVersionIsSet_ = false;
    deviceSdkVersion_ = "";
    deviceSdkVersionIsSet_ = false;
    authInfoIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    connectionStatusUpdateTime_ = "";
    connectionStatusUpdateTimeIsSet_ = false;
    activeTime_ = "";
    activeTimeIsSet_ = false;
    tagsIsSet_ = false;
    extensionInfoIsSet_ = false;
}

UpdateDeviceResponse::~UpdateDeviceResponse() = default;

void UpdateDeviceResponse::validate()
{
}

web::json::value UpdateDeviceResponse::toJson() const
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
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(authInfoIsSet_) {
        val[utility::conversions::to_string_t("auth_info")] = ModelBase::toJson(authInfo_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(connectionStatusUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("connection_status_update_time")] = ModelBase::toJson(connectionStatusUpdateTime_);
    }
    if(activeTimeIsSet_) {
        val[utility::conversions::to_string_t("active_time")] = ModelBase::toJson(activeTime_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(extensionInfoIsSet_) {
        val[utility::conversions::to_string_t("extension_info")] = ModelBase::toJson(extensionInfo_);
    }

    return val;
}
bool UpdateDeviceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_info"));
        if(!fieldValue.is_null())
        {
            AuthInfoRes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_status_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_status_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionStatusUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagV5DTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}


std::string UpdateDeviceResponse::getAppId() const
{
    return appId_;
}

void UpdateDeviceResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UpdateDeviceResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void UpdateDeviceResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UpdateDeviceResponse::getAppName() const
{
    return appName_;
}

void UpdateDeviceResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool UpdateDeviceResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void UpdateDeviceResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string UpdateDeviceResponse::getDeviceId() const
{
    return deviceId_;
}

void UpdateDeviceResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdateDeviceResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdateDeviceResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string UpdateDeviceResponse::getNodeId() const
{
    return nodeId_;
}

void UpdateDeviceResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool UpdateDeviceResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void UpdateDeviceResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string UpdateDeviceResponse::getGatewayId() const
{
    return gatewayId_;
}

void UpdateDeviceResponse::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool UpdateDeviceResponse::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void UpdateDeviceResponse::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

std::string UpdateDeviceResponse::getDeviceName() const
{
    return deviceName_;
}

void UpdateDeviceResponse::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool UpdateDeviceResponse::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void UpdateDeviceResponse::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string UpdateDeviceResponse::getNodeType() const
{
    return nodeType_;
}

void UpdateDeviceResponse::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool UpdateDeviceResponse::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void UpdateDeviceResponse::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string UpdateDeviceResponse::getDescription() const
{
    return description_;
}

void UpdateDeviceResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDeviceResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDeviceResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateDeviceResponse::getFwVersion() const
{
    return fwVersion_;
}

void UpdateDeviceResponse::setFwVersion(const std::string& value)
{
    fwVersion_ = value;
    fwVersionIsSet_ = true;
}

bool UpdateDeviceResponse::fwVersionIsSet() const
{
    return fwVersionIsSet_;
}

void UpdateDeviceResponse::unsetfwVersion()
{
    fwVersionIsSet_ = false;
}

std::string UpdateDeviceResponse::getSwVersion() const
{
    return swVersion_;
}

void UpdateDeviceResponse::setSwVersion(const std::string& value)
{
    swVersion_ = value;
    swVersionIsSet_ = true;
}

bool UpdateDeviceResponse::swVersionIsSet() const
{
    return swVersionIsSet_;
}

void UpdateDeviceResponse::unsetswVersion()
{
    swVersionIsSet_ = false;
}

std::string UpdateDeviceResponse::getDeviceSdkVersion() const
{
    return deviceSdkVersion_;
}

void UpdateDeviceResponse::setDeviceSdkVersion(const std::string& value)
{
    deviceSdkVersion_ = value;
    deviceSdkVersionIsSet_ = true;
}

bool UpdateDeviceResponse::deviceSdkVersionIsSet() const
{
    return deviceSdkVersionIsSet_;
}

void UpdateDeviceResponse::unsetdeviceSdkVersion()
{
    deviceSdkVersionIsSet_ = false;
}

AuthInfoRes UpdateDeviceResponse::getAuthInfo() const
{
    return authInfo_;
}

void UpdateDeviceResponse::setAuthInfo(const AuthInfoRes& value)
{
    authInfo_ = value;
    authInfoIsSet_ = true;
}

bool UpdateDeviceResponse::authInfoIsSet() const
{
    return authInfoIsSet_;
}

void UpdateDeviceResponse::unsetauthInfo()
{
    authInfoIsSet_ = false;
}

std::string UpdateDeviceResponse::getProductId() const
{
    return productId_;
}

void UpdateDeviceResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool UpdateDeviceResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void UpdateDeviceResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string UpdateDeviceResponse::getProductName() const
{
    return productName_;
}

void UpdateDeviceResponse::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool UpdateDeviceResponse::productNameIsSet() const
{
    return productNameIsSet_;
}

void UpdateDeviceResponse::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string UpdateDeviceResponse::getStatus() const
{
    return status_;
}

void UpdateDeviceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDeviceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDeviceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateDeviceResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateDeviceResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateDeviceResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateDeviceResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateDeviceResponse::getConnectionStatusUpdateTime() const
{
    return connectionStatusUpdateTime_;
}

void UpdateDeviceResponse::setConnectionStatusUpdateTime(const std::string& value)
{
    connectionStatusUpdateTime_ = value;
    connectionStatusUpdateTimeIsSet_ = true;
}

bool UpdateDeviceResponse::connectionStatusUpdateTimeIsSet() const
{
    return connectionStatusUpdateTimeIsSet_;
}

void UpdateDeviceResponse::unsetconnectionStatusUpdateTime()
{
    connectionStatusUpdateTimeIsSet_ = false;
}

std::string UpdateDeviceResponse::getActiveTime() const
{
    return activeTime_;
}

void UpdateDeviceResponse::setActiveTime(const std::string& value)
{
    activeTime_ = value;
    activeTimeIsSet_ = true;
}

bool UpdateDeviceResponse::activeTimeIsSet() const
{
    return activeTimeIsSet_;
}

void UpdateDeviceResponse::unsetactiveTime()
{
    activeTimeIsSet_ = false;
}

std::vector<TagV5DTO>& UpdateDeviceResponse::getTags()
{
    return tags_;
}

void UpdateDeviceResponse::setTags(const std::vector<TagV5DTO>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateDeviceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateDeviceResponse::unsettags()
{
    tagsIsSet_ = false;
}

Object UpdateDeviceResponse::getExtensionInfo() const
{
    return extensionInfo_;
}

void UpdateDeviceResponse::setExtensionInfo(const Object& value)
{
    extensionInfo_ = value;
    extensionInfoIsSet_ = true;
}

bool UpdateDeviceResponse::extensionInfoIsSet() const
{
    return extensionInfoIsSet_;
}

void UpdateDeviceResponse::unsetextensionInfo()
{
    extensionInfoIsSet_ = false;
}

}
}
}
}
}


