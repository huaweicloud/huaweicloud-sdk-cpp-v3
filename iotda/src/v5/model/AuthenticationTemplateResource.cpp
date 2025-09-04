

#include "huaweicloud/iotda/v5/model/AuthenticationTemplateResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AuthenticationTemplateResource::AuthenticationTemplateResource()
{
    deviceIdIsSet_ = false;
    timestampIsSet_ = false;
    passwordIsSet_ = false;
}

AuthenticationTemplateResource::~AuthenticationTemplateResource() = default;

void AuthenticationTemplateResource::validate()
{
}

web::json::value AuthenticationTemplateResource::toJson() const
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
bool AuthenticationTemplateResource::fromJson(const web::json::value& val)
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


Object AuthenticationTemplateResource::getDeviceId() const
{
    return deviceId_;
}

void AuthenticationTemplateResource::setDeviceId(const Object& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool AuthenticationTemplateResource::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void AuthenticationTemplateResource::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

TimestampResource AuthenticationTemplateResource::getTimestamp() const
{
    return timestamp_;
}

void AuthenticationTemplateResource::setTimestamp(const TimestampResource& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool AuthenticationTemplateResource::timestampIsSet() const
{
    return timestampIsSet_;
}

void AuthenticationTemplateResource::unsettimestamp()
{
    timestampIsSet_ = false;
}

Object AuthenticationTemplateResource::getPassword() const
{
    return password_;
}

void AuthenticationTemplateResource::setPassword(const Object& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool AuthenticationTemplateResource::passwordIsSet() const
{
    return passwordIsSet_;
}

void AuthenticationTemplateResource::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


