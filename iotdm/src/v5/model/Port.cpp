

#include "huaweicloud/iotdm/v5/model/Port.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




Port::Port()
{
    appHttpsPort_ = 0;
    appHttpsPortIsSet_ = false;
    appAmqpsPort_ = 0;
    appAmqpsPortIsSet_ = false;
    appMqttsPort_ = 0;
    appMqttsPortIsSet_ = false;
    deviceCoapPort_ = 0;
    deviceCoapPortIsSet_ = false;
    deviceCoapsPort_ = 0;
    deviceCoapsPortIsSet_ = false;
    deviceMqttPort_ = 0;
    deviceMqttPortIsSet_ = false;
    deviceMqttsPort_ = 0;
    deviceMqttsPortIsSet_ = false;
    deviceHttpsPort_ = 0;
    deviceHttpsPortIsSet_ = false;
}

Port::~Port() = default;

void Port::validate()
{
}

web::json::value Port::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appHttpsPortIsSet_) {
        val[utility::conversions::to_string_t("app_https_port")] = ModelBase::toJson(appHttpsPort_);
    }
    if(appAmqpsPortIsSet_) {
        val[utility::conversions::to_string_t("app_amqps_port")] = ModelBase::toJson(appAmqpsPort_);
    }
    if(appMqttsPortIsSet_) {
        val[utility::conversions::to_string_t("app_mqtts_port")] = ModelBase::toJson(appMqttsPort_);
    }
    if(deviceCoapPortIsSet_) {
        val[utility::conversions::to_string_t("device_coap_port")] = ModelBase::toJson(deviceCoapPort_);
    }
    if(deviceCoapsPortIsSet_) {
        val[utility::conversions::to_string_t("device_coaps_port")] = ModelBase::toJson(deviceCoapsPort_);
    }
    if(deviceMqttPortIsSet_) {
        val[utility::conversions::to_string_t("device_mqtt_port")] = ModelBase::toJson(deviceMqttPort_);
    }
    if(deviceMqttsPortIsSet_) {
        val[utility::conversions::to_string_t("device_mqtts_port")] = ModelBase::toJson(deviceMqttsPort_);
    }
    if(deviceHttpsPortIsSet_) {
        val[utility::conversions::to_string_t("device_https_port")] = ModelBase::toJson(deviceHttpsPort_);
    }

    return val;
}
bool Port::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_https_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_https_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppHttpsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_amqps_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_amqps_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppAmqpsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_mqtts_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_mqtts_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppMqttsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_coap_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_coap_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceCoapPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_coaps_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_coaps_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceCoapsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_mqtt_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_mqtt_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceMqttPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_mqtts_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_mqtts_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceMqttsPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_https_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_https_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceHttpsPort(refVal);
        }
    }
    return ok;
}


int32_t Port::getAppHttpsPort() const
{
    return appHttpsPort_;
}

void Port::setAppHttpsPort(int32_t value)
{
    appHttpsPort_ = value;
    appHttpsPortIsSet_ = true;
}

bool Port::appHttpsPortIsSet() const
{
    return appHttpsPortIsSet_;
}

void Port::unsetappHttpsPort()
{
    appHttpsPortIsSet_ = false;
}

int32_t Port::getAppAmqpsPort() const
{
    return appAmqpsPort_;
}

void Port::setAppAmqpsPort(int32_t value)
{
    appAmqpsPort_ = value;
    appAmqpsPortIsSet_ = true;
}

bool Port::appAmqpsPortIsSet() const
{
    return appAmqpsPortIsSet_;
}

void Port::unsetappAmqpsPort()
{
    appAmqpsPortIsSet_ = false;
}

int32_t Port::getAppMqttsPort() const
{
    return appMqttsPort_;
}

void Port::setAppMqttsPort(int32_t value)
{
    appMqttsPort_ = value;
    appMqttsPortIsSet_ = true;
}

bool Port::appMqttsPortIsSet() const
{
    return appMqttsPortIsSet_;
}

void Port::unsetappMqttsPort()
{
    appMqttsPortIsSet_ = false;
}

int32_t Port::getDeviceCoapPort() const
{
    return deviceCoapPort_;
}

void Port::setDeviceCoapPort(int32_t value)
{
    deviceCoapPort_ = value;
    deviceCoapPortIsSet_ = true;
}

bool Port::deviceCoapPortIsSet() const
{
    return deviceCoapPortIsSet_;
}

void Port::unsetdeviceCoapPort()
{
    deviceCoapPortIsSet_ = false;
}

int32_t Port::getDeviceCoapsPort() const
{
    return deviceCoapsPort_;
}

void Port::setDeviceCoapsPort(int32_t value)
{
    deviceCoapsPort_ = value;
    deviceCoapsPortIsSet_ = true;
}

bool Port::deviceCoapsPortIsSet() const
{
    return deviceCoapsPortIsSet_;
}

void Port::unsetdeviceCoapsPort()
{
    deviceCoapsPortIsSet_ = false;
}

int32_t Port::getDeviceMqttPort() const
{
    return deviceMqttPort_;
}

void Port::setDeviceMqttPort(int32_t value)
{
    deviceMqttPort_ = value;
    deviceMqttPortIsSet_ = true;
}

bool Port::deviceMqttPortIsSet() const
{
    return deviceMqttPortIsSet_;
}

void Port::unsetdeviceMqttPort()
{
    deviceMqttPortIsSet_ = false;
}

int32_t Port::getDeviceMqttsPort() const
{
    return deviceMqttsPort_;
}

void Port::setDeviceMqttsPort(int32_t value)
{
    deviceMqttsPort_ = value;
    deviceMqttsPortIsSet_ = true;
}

bool Port::deviceMqttsPortIsSet() const
{
    return deviceMqttsPortIsSet_;
}

void Port::unsetdeviceMqttsPort()
{
    deviceMqttsPortIsSet_ = false;
}

int32_t Port::getDeviceHttpsPort() const
{
    return deviceHttpsPort_;
}

void Port::setDeviceHttpsPort(int32_t value)
{
    deviceHttpsPort_ = value;
    deviceHttpsPortIsSet_ = true;
}

bool Port::deviceHttpsPortIsSet() const
{
    return deviceHttpsPortIsSet_;
}

void Port::unsetdeviceHttpsPort()
{
    deviceHttpsPortIsSet_ = false;
}

}
}
}
}
}


