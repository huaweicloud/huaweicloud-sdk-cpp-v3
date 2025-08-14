

#include "huaweicloud/iotda/v5/model/UpdateDevice.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDevice::UpdateDevice()
{
    deviceName_ = "";
    deviceNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    extensionInfoIsSet_ = false;
    authInfoIsSet_ = false;
}

UpdateDevice::~UpdateDevice() = default;

void UpdateDevice::validate()
{
}

web::json::value UpdateDevice::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(extensionInfoIsSet_) {
        val[utility::conversions::to_string_t("extension_info")] = ModelBase::toJson(extensionInfo_);
    }
    if(authInfoIsSet_) {
        val[utility::conversions::to_string_t("auth_info")] = ModelBase::toJson(authInfo_);
    }

    return val;
}
bool UpdateDevice::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_info"));
        if(!fieldValue.is_null())
        {
            AuthInfoWithoutSecret refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthInfo(refVal);
        }
    }
    return ok;
}


std::string UpdateDevice::getDeviceName() const
{
    return deviceName_;
}

void UpdateDevice::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool UpdateDevice::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void UpdateDevice::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string UpdateDevice::getDescription() const
{
    return description_;
}

void UpdateDevice::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateDevice::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateDevice::unsetdescription()
{
    descriptionIsSet_ = false;
}

Object UpdateDevice::getExtensionInfo() const
{
    return extensionInfo_;
}

void UpdateDevice::setExtensionInfo(const Object& value)
{
    extensionInfo_ = value;
    extensionInfoIsSet_ = true;
}

bool UpdateDevice::extensionInfoIsSet() const
{
    return extensionInfoIsSet_;
}

void UpdateDevice::unsetextensionInfo()
{
    extensionInfoIsSet_ = false;
}

AuthInfoWithoutSecret UpdateDevice::getAuthInfo() const
{
    return authInfo_;
}

void UpdateDevice::setAuthInfo(const AuthInfoWithoutSecret& value)
{
    authInfo_ = value;
    authInfoIsSet_ = true;
}

bool UpdateDevice::authInfoIsSet() const
{
    return authInfoIsSet_;
}

void UpdateDevice::unsetauthInfo()
{
    authInfoIsSet_ = false;
}

}
}
}
}
}


