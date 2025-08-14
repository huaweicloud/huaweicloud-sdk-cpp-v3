

#include "huaweicloud/iotda/v5/model/ResetFingerprint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetFingerprint::ResetFingerprint()
{
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    forceDisconnect_ = false;
    forceDisconnectIsSet_ = false;
    fingerprintType_ = "";
    fingerprintTypeIsSet_ = false;
}

ResetFingerprint::~ResetFingerprint() = default;

void ResetFingerprint::validate()
{
}

web::json::value ResetFingerprint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(forceDisconnectIsSet_) {
        val[utility::conversions::to_string_t("force_disconnect")] = ModelBase::toJson(forceDisconnect_);
    }
    if(fingerprintTypeIsSet_) {
        val[utility::conversions::to_string_t("fingerprint_type")] = ModelBase::toJson(fingerprintType_);
    }

    return val;
}
bool ResetFingerprint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_disconnect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_disconnect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceDisconnect(refVal);
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


std::string ResetFingerprint::getFingerprint() const
{
    return fingerprint_;
}

void ResetFingerprint::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool ResetFingerprint::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void ResetFingerprint::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

bool ResetFingerprint::isForceDisconnect() const
{
    return forceDisconnect_;
}

void ResetFingerprint::setForceDisconnect(bool value)
{
    forceDisconnect_ = value;
    forceDisconnectIsSet_ = true;
}

bool ResetFingerprint::forceDisconnectIsSet() const
{
    return forceDisconnectIsSet_;
}

void ResetFingerprint::unsetforceDisconnect()
{
    forceDisconnectIsSet_ = false;
}

std::string ResetFingerprint::getFingerprintType() const
{
    return fingerprintType_;
}

void ResetFingerprint::setFingerprintType(const std::string& value)
{
    fingerprintType_ = value;
    fingerprintTypeIsSet_ = true;
}

bool ResetFingerprint::fingerprintTypeIsSet() const
{
    return fingerprintTypeIsSet_;
}

void ResetFingerprint::unsetfingerprintType()
{
    fingerprintTypeIsSet_ = false;
}

}
}
}
}
}


