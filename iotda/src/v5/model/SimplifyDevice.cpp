

#include "huaweicloud/iotda/v5/model/SimplifyDevice.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SimplifyDevice::SimplifyDevice()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
}

SimplifyDevice::~SimplifyDevice() = default;

void SimplifyDevice::validate()
{
}

web::json::value SimplifyDevice::toJson() const
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

    return val;
}
bool SimplifyDevice::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SimplifyDevice::getDeviceId() const
{
    return deviceId_;
}

void SimplifyDevice::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool SimplifyDevice::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void SimplifyDevice::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string SimplifyDevice::getNodeId() const
{
    return nodeId_;
}

void SimplifyDevice::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SimplifyDevice::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SimplifyDevice::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string SimplifyDevice::getDeviceName() const
{
    return deviceName_;
}

void SimplifyDevice::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool SimplifyDevice::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void SimplifyDevice::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string SimplifyDevice::getProductId() const
{
    return productId_;
}

void SimplifyDevice::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool SimplifyDevice::productIdIsSet() const
{
    return productIdIsSet_;
}

void SimplifyDevice::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


