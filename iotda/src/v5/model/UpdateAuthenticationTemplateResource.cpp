

#include "huaweicloud/iotda/v5/model/UpdateAuthenticationTemplateResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateAuthenticationTemplateResource::UpdateAuthenticationTemplateResource()
{
    deviceIdIsSet_ = false;
    timestampIsSet_ = false;
    passwordIsSet_ = false;
}

UpdateAuthenticationTemplateResource::~UpdateAuthenticationTemplateResource() = default;

void UpdateAuthenticationTemplateResource::validate()
{
}

web::json::value UpdateAuthenticationTemplateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool UpdateAuthenticationTemplateResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            TimestampResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}


Object UpdateAuthenticationTemplateResource::getDeviceId() const
{
    return deviceId_;
}

void UpdateAuthenticationTemplateResource::setDeviceId(const Object& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool UpdateAuthenticationTemplateResource::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void UpdateAuthenticationTemplateResource::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

TimestampResource UpdateAuthenticationTemplateResource::getTimestamp() const
{
    return timestamp_;
}

void UpdateAuthenticationTemplateResource::setTimestamp(const TimestampResource& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool UpdateAuthenticationTemplateResource::timestampIsSet() const
{
    return timestampIsSet_;
}

void UpdateAuthenticationTemplateResource::unsettimestamp()
{
    timestampIsSet_ = false;
}

Object UpdateAuthenticationTemplateResource::getPassword() const
{
    return password_;
}

void UpdateAuthenticationTemplateResource::setPassword(const Object& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UpdateAuthenticationTemplateResource::passwordIsSet() const
{
    return passwordIsSet_;
}

void UpdateAuthenticationTemplateResource::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


