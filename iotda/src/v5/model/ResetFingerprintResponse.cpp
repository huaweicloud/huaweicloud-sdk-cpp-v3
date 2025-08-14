

#include "huaweicloud/iotda/v5/model/ResetFingerprintResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetFingerprintResponse::ResetFingerprintResponse()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    fingerprintType_ = "";
    fingerprintTypeIsSet_ = false;
}

ResetFingerprintResponse::~ResetFingerprintResponse() = default;

void ResetFingerprintResponse::validate()
{
}

web::json::value ResetFingerprintResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(fingerprintTypeIsSet_) {
        val[utility::conversions::to_string_t("fingerprint_type")] = ModelBase::toJson(fingerprintType_);
    }

    return val;
}
bool ResetFingerprintResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprintType(refVal);
        }
    }
    return ok;
}


std::string ResetFingerprintResponse::getDeviceId() const
{
    return deviceId_;
}

void ResetFingerprintResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ResetFingerprintResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ResetFingerprintResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ResetFingerprintResponse::getFingerprint() const
{
    return fingerprint_;
}

void ResetFingerprintResponse::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool ResetFingerprintResponse::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void ResetFingerprintResponse::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string ResetFingerprintResponse::getFingerprintType() const
{
    return fingerprintType_;
}

void ResetFingerprintResponse::setFingerprintType(const std::string& value)
{
    fingerprintType_ = value;
    fingerprintTypeIsSet_ = true;
}

bool ResetFingerprintResponse::fingerprintTypeIsSet() const
{
    return fingerprintTypeIsSet_;
}

void ResetFingerprintResponse::unsetfingerprintType()
{
    fingerprintTypeIsSet_ = false;
}

}
}
}
}
}


