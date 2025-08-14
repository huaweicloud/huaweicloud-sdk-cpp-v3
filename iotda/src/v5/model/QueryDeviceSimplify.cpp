

#include "huaweicloud/iotda/v5/model/QueryDeviceSimplify.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




QueryDeviceSimplify::QueryDeviceSimplify()
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
    productId_ = "";
    productIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tagsIsSet_ = false;
}

QueryDeviceSimplify::~QueryDeviceSimplify() = default;

void QueryDeviceSimplify::validate()
{
}

web::json::value QueryDeviceSimplify::toJson() const
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
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool QueryDeviceSimplify::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagV5DTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string QueryDeviceSimplify::getAppId() const
{
    return appId_;
}

void QueryDeviceSimplify::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool QueryDeviceSimplify::appIdIsSet() const
{
    return appIdIsSet_;
}

void QueryDeviceSimplify::unsetappId()
{
    appIdIsSet_ = false;
}

std::string QueryDeviceSimplify::getAppName() const
{
    return appName_;
}

void QueryDeviceSimplify::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool QueryDeviceSimplify::appNameIsSet() const
{
    return appNameIsSet_;
}

void QueryDeviceSimplify::unsetappName()
{
    appNameIsSet_ = false;
}

std::string QueryDeviceSimplify::getDeviceId() const
{
    return deviceId_;
}

void QueryDeviceSimplify::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool QueryDeviceSimplify::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void QueryDeviceSimplify::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string QueryDeviceSimplify::getNodeId() const
{
    return nodeId_;
}

void QueryDeviceSimplify::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool QueryDeviceSimplify::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void QueryDeviceSimplify::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string QueryDeviceSimplify::getGatewayId() const
{
    return gatewayId_;
}

void QueryDeviceSimplify::setGatewayId(const std::string& value)
{
    gatewayId_ = value;
    gatewayIdIsSet_ = true;
}

bool QueryDeviceSimplify::gatewayIdIsSet() const
{
    return gatewayIdIsSet_;
}

void QueryDeviceSimplify::unsetgatewayId()
{
    gatewayIdIsSet_ = false;
}

std::string QueryDeviceSimplify::getDeviceName() const
{
    return deviceName_;
}

void QueryDeviceSimplify::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool QueryDeviceSimplify::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void QueryDeviceSimplify::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string QueryDeviceSimplify::getNodeType() const
{
    return nodeType_;
}

void QueryDeviceSimplify::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool QueryDeviceSimplify::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void QueryDeviceSimplify::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string QueryDeviceSimplify::getDescription() const
{
    return description_;
}

void QueryDeviceSimplify::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryDeviceSimplify::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryDeviceSimplify::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QueryDeviceSimplify::getFwVersion() const
{
    return fwVersion_;
}

void QueryDeviceSimplify::setFwVersion(const std::string& value)
{
    fwVersion_ = value;
    fwVersionIsSet_ = true;
}

bool QueryDeviceSimplify::fwVersionIsSet() const
{
    return fwVersionIsSet_;
}

void QueryDeviceSimplify::unsetfwVersion()
{
    fwVersionIsSet_ = false;
}

std::string QueryDeviceSimplify::getSwVersion() const
{
    return swVersion_;
}

void QueryDeviceSimplify::setSwVersion(const std::string& value)
{
    swVersion_ = value;
    swVersionIsSet_ = true;
}

bool QueryDeviceSimplify::swVersionIsSet() const
{
    return swVersionIsSet_;
}

void QueryDeviceSimplify::unsetswVersion()
{
    swVersionIsSet_ = false;
}

std::string QueryDeviceSimplify::getDeviceSdkVersion() const
{
    return deviceSdkVersion_;
}

void QueryDeviceSimplify::setDeviceSdkVersion(const std::string& value)
{
    deviceSdkVersion_ = value;
    deviceSdkVersionIsSet_ = true;
}

bool QueryDeviceSimplify::deviceSdkVersionIsSet() const
{
    return deviceSdkVersionIsSet_;
}

void QueryDeviceSimplify::unsetdeviceSdkVersion()
{
    deviceSdkVersionIsSet_ = false;
}

std::string QueryDeviceSimplify::getProductId() const
{
    return productId_;
}

void QueryDeviceSimplify::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool QueryDeviceSimplify::productIdIsSet() const
{
    return productIdIsSet_;
}

void QueryDeviceSimplify::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string QueryDeviceSimplify::getProductName() const
{
    return productName_;
}

void QueryDeviceSimplify::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool QueryDeviceSimplify::productNameIsSet() const
{
    return productNameIsSet_;
}

void QueryDeviceSimplify::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string QueryDeviceSimplify::getStatus() const
{
    return status_;
}

void QueryDeviceSimplify::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryDeviceSimplify::statusIsSet() const
{
    return statusIsSet_;
}

void QueryDeviceSimplify::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<TagV5DTO>& QueryDeviceSimplify::getTags()
{
    return tags_;
}

void QueryDeviceSimplify::setTags(const std::vector<TagV5DTO>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryDeviceSimplify::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryDeviceSimplify::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


