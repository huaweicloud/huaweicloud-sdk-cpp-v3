

#include "huaweicloud/iotda/v5/model/DeleteDeviceMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceMessageRequest::DeleteDeviceMessageRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    messageId_ = "";
    messageIdIsSet_ = false;
}

DeleteDeviceMessageRequest::~DeleteDeviceMessageRequest() = default;

void DeleteDeviceMessageRequest::validate()
{
}

web::json::value DeleteDeviceMessageRequest::toJson() const
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
bool DeleteDeviceMessageRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceMessageRequest::getDeviceId() const
{
    return deviceId_;
}

void DeleteDeviceMessageRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeleteDeviceMessageRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeleteDeviceMessageRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string DeleteDeviceMessageRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceMessageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceMessageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceMessageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceMessageRequest::getMessageId() const
{
    return messageId_;
}

void DeleteDeviceMessageRequest::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool DeleteDeviceMessageRequest::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void DeleteDeviceMessageRequest::unsetmessageId()
{
    messageIdIsSet_ = false;
}

}
}
}
}
}


