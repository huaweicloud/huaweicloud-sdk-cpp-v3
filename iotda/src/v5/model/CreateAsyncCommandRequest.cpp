

#include "huaweicloud/iotda/v5/model/CreateAsyncCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateAsyncCommandRequest::CreateAsyncCommandRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAsyncCommandRequest::~CreateAsyncCommandRequest() = default;

void CreateAsyncCommandRequest::validate()
{
}

web::json::value CreateAsyncCommandRequest::toJson() const
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
bool CreateAsyncCommandRequest::fromJson(const web::json::value& val)
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
            AsyncDeviceCommandRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAsyncCommandRequest::getDeviceId() const
{
    return deviceId_;
}

void CreateAsyncCommandRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool CreateAsyncCommandRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void CreateAsyncCommandRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string CreateAsyncCommandRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateAsyncCommandRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateAsyncCommandRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateAsyncCommandRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AsyncDeviceCommandRequest CreateAsyncCommandRequest::getBody() const
{
    return body_;
}

void CreateAsyncCommandRequest::setBody(const AsyncDeviceCommandRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAsyncCommandRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAsyncCommandRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


