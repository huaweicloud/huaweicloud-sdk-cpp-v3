

#include "huaweicloud/iotda/v5/model/ShowDeviceMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceMessageRequest::ShowDeviceMessageRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    messageId_ = "";
    messageIdIsSet_ = false;
}

ShowDeviceMessageRequest::~ShowDeviceMessageRequest() = default;

void ShowDeviceMessageRequest::validate()
{
}

web::json::value ShowDeviceMessageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }

    return val;
}
bool ShowDeviceMessageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageId(refVal);
        }
    }
    return ok;
}


std::string ShowDeviceMessageRequest::getDeviceId() const
{
    return deviceId_;
}

void ShowDeviceMessageRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowDeviceMessageRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowDeviceMessageRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ShowDeviceMessageRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceMessageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceMessageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceMessageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceMessageRequest::getMessageId() const
{
    return messageId_;
}

void ShowDeviceMessageRequest::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool ShowDeviceMessageRequest::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void ShowDeviceMessageRequest::unsetmessageId()
{
    messageIdIsSet_ = false;
}

}
}
}
}
}


