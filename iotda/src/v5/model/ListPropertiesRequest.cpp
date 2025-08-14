

#include "huaweicloud/iotda/v5/model/ListPropertiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListPropertiesRequest::ListPropertiesRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
}

ListPropertiesRequest::~ListPropertiesRequest() = default;

void ListPropertiesRequest::validate()
{
}

web::json::value ListPropertiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }

    return val;
}
bool ListPropertiesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    return ok;
}


std::string ListPropertiesRequest::getDeviceId() const
{
    return deviceId_;
}

void ListPropertiesRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListPropertiesRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListPropertiesRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ListPropertiesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPropertiesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPropertiesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPropertiesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPropertiesRequest::getServiceId() const
{
    return serviceId_;
}

void ListPropertiesRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListPropertiesRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListPropertiesRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

}
}
}
}
}


