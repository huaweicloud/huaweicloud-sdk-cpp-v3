

#include "huaweicloud/iotda/v5/model/CreateMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateMessageRequest::CreateMessageRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMessageRequest::~CreateMessageRequest() = default;

void CreateMessageRequest::validate()
{
}

web::json::value CreateMessageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMessageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeviceMessageRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateMessageRequest::getDeviceId() const
{
    return deviceId_;
}

void CreateMessageRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool CreateMessageRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void CreateMessageRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string CreateMessageRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateMessageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateMessageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateMessageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeviceMessageRequest CreateMessageRequest::getBody() const
{
    return body_;
}

void CreateMessageRequest::setBody(const DeviceMessageRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMessageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMessageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


