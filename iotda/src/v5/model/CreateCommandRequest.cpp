

#include "huaweicloud/iotda/v5/model/CreateCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateCommandRequest::CreateCommandRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCommandRequest::~CreateCommandRequest() = default;

void CreateCommandRequest::validate()
{
}

web::json::value CreateCommandRequest::toJson() const
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
bool CreateCommandRequest::fromJson(const web::json::value& val)
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
            DeviceCommandRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCommandRequest::getDeviceId() const
{
    return deviceId_;
}

void CreateCommandRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool CreateCommandRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void CreateCommandRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string CreateCommandRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateCommandRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateCommandRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateCommandRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeviceCommandRequest CreateCommandRequest::getBody() const
{
    return body_;
}

void CreateCommandRequest::setBody(const DeviceCommandRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCommandRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCommandRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


