

#include "huaweicloud/iotda/v5/model/ChangeGatewayRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ChangeGatewayRequest::ChangeGatewayRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeGatewayRequest::~ChangeGatewayRequest() = default;

void ChangeGatewayRequest::validate()
{
}

web::json::value ChangeGatewayRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeGatewayRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeGateway refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeGatewayRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeGatewayRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeGatewayRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeGatewayRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ChangeGatewayRequest::getDeviceId() const
{
    return deviceId_;
}

void ChangeGatewayRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ChangeGatewayRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ChangeGatewayRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

ChangeGateway ChangeGatewayRequest::getBody() const
{
    return body_;
}

void ChangeGatewayRequest::setBody(const ChangeGateway& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeGatewayRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeGatewayRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


