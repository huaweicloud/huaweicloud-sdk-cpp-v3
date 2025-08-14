

#include "huaweicloud/iotda/v5/model/DeviceResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceResource::DeviceResource()
{
    deviceNameIsSet_ = false;
    deviceIdIsSet_ = false;
    nodeIdIsSet_ = false;
    productIdIsSet_ = false;
    tagsIsSet_ = false;
}

DeviceResource::~DeviceResource() = default;

void DeviceResource::validate()
{
}

web::json::value DeviceResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool DeviceResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            ParameterRef refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            ParameterRef refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            ParameterRef refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagRef> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


ParameterRef DeviceResource::getDeviceName() const
{
    return deviceName_;
}

void DeviceResource::setDeviceName(const ParameterRef& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool DeviceResource::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void DeviceResource::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

ParameterRef DeviceResource::getDeviceId() const
{
    return deviceId_;
}

void DeviceResource::setDeviceId(const ParameterRef& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeviceResource::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeviceResource::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

ParameterRef DeviceResource::getNodeId() const
{
    return nodeId_;
}

void DeviceResource::setNodeId(const ParameterRef& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeviceResource::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeviceResource::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

Object DeviceResource::getProductId() const
{
    return productId_;
}

void DeviceResource::setProductId(const Object& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool DeviceResource::productIdIsSet() const
{
    return productIdIsSet_;
}

void DeviceResource::unsetproductId()
{
    productIdIsSet_ = false;
}

std::vector<TagRef>& DeviceResource::getTags()
{
    return tags_;
}

void DeviceResource::setTags(const std::vector<TagRef>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeviceResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeviceResource::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


