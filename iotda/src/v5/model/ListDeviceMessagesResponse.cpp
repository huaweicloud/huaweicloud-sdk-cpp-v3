

#include "huaweicloud/iotda/v5/model/ListDeviceMessagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceMessagesResponse::ListDeviceMessagesResponse()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    messagesIsSet_ = false;
}

ListDeviceMessagesResponse::~ListDeviceMessagesResponse() = default;

void ListDeviceMessagesResponse::validate()
{
}

web::json::value ListDeviceMessagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(messagesIsSet_) {
        val[utility::conversions::to_string_t("messages")] = ModelBase::toJson(messages_);
    }

    return val;
}
bool ListDeviceMessagesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("messages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("messages"));
        if(!fieldValue.is_null())
        {
            std::vector<DeviceMessage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessages(refVal);
        }
    }
    return ok;
}


std::string ListDeviceMessagesResponse::getDeviceId() const
{
    return deviceId_;
}

void ListDeviceMessagesResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListDeviceMessagesResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListDeviceMessagesResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::vector<DeviceMessage>& ListDeviceMessagesResponse::getMessages()
{
    return messages_;
}

void ListDeviceMessagesResponse::setMessages(const std::vector<DeviceMessage>& value)
{
    messages_ = value;
    messagesIsSet_ = true;
}

bool ListDeviceMessagesResponse::messagesIsSet() const
{
    return messagesIsSet_;
}

void ListDeviceMessagesResponse::unsetmessages()
{
    messagesIsSet_ = false;
}

}
}
}
}
}


