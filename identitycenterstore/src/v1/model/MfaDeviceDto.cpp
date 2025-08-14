

#include "huaweicloud/identitycenterstore/v1/model/MfaDeviceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




MfaDeviceDto::MfaDeviceDto()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    mfaType_ = "";
    mfaTypeIsSet_ = false;
    registeredDate_ = 0L;
    registeredDateIsSet_ = false;
}

MfaDeviceDto::~MfaDeviceDto() = default;

void MfaDeviceDto::validate()
{
}

web::json::value MfaDeviceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(mfaTypeIsSet_) {
        val[utility::conversions::to_string_t("mfa_type")] = ModelBase::toJson(mfaType_);
    }
    if(registeredDateIsSet_) {
        val[utility::conversions::to_string_t("registered_date")] = ModelBase::toJson(registeredDate_);
    }

    return val;
}
bool MfaDeviceDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mfa_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mfa_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMfaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("registered_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registered_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegisteredDate(refVal);
        }
    }
    return ok;
}


std::string MfaDeviceDto::getDeviceId() const
{
    return deviceId_;
}

void MfaDeviceDto::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool MfaDeviceDto::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void MfaDeviceDto::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string MfaDeviceDto::getDeviceName() const
{
    return deviceName_;
}

void MfaDeviceDto::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool MfaDeviceDto::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void MfaDeviceDto::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string MfaDeviceDto::getDisplayName() const
{
    return displayName_;
}

void MfaDeviceDto::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool MfaDeviceDto::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void MfaDeviceDto::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string MfaDeviceDto::getMfaType() const
{
    return mfaType_;
}

void MfaDeviceDto::setMfaType(const std::string& value)
{
    mfaType_ = value;
    mfaTypeIsSet_ = true;
}

bool MfaDeviceDto::mfaTypeIsSet() const
{
    return mfaTypeIsSet_;
}

void MfaDeviceDto::unsetmfaType()
{
    mfaTypeIsSet_ = false;
}

int64_t MfaDeviceDto::getRegisteredDate() const
{
    return registeredDate_;
}

void MfaDeviceDto::setRegisteredDate(int64_t value)
{
    registeredDate_ = value;
    registeredDateIsSet_ = true;
}

bool MfaDeviceDto::registeredDateIsSet() const
{
    return registeredDateIsSet_;
}

void MfaDeviceDto::unsetregisteredDate()
{
    registeredDateIsSet_ = false;
}

}
}
}
}
}


