

#include "huaweicloud/kms/v2/model/ShowKeyRotationStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyRotationStatusResponse::ShowKeyRotationStatusResponse()
{
    keyRotationEnabled_ = false;
    keyRotationEnabledIsSet_ = false;
    rotationInterval_ = 0;
    rotationIntervalIsSet_ = false;
    lastRotationTime_ = "";
    lastRotationTimeIsSet_ = false;
    numberOfRotations_ = 0;
    numberOfRotationsIsSet_ = false;
}

ShowKeyRotationStatusResponse::~ShowKeyRotationStatusResponse() = default;

void ShowKeyRotationStatusResponse::validate()
{
}

web::json::value ShowKeyRotationStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyRotationEnabledIsSet_) {
        val[utility::conversions::to_string_t("key_rotation_enabled")] = ModelBase::toJson(keyRotationEnabled_);
    }
    if(rotationIntervalIsSet_) {
        val[utility::conversions::to_string_t("rotation_interval")] = ModelBase::toJson(rotationInterval_);
    }
    if(lastRotationTimeIsSet_) {
        val[utility::conversions::to_string_t("last_rotation_time")] = ModelBase::toJson(lastRotationTime_);
    }
    if(numberOfRotationsIsSet_) {
        val[utility::conversions::to_string_t("number_of_rotations")] = ModelBase::toJson(numberOfRotations_);
    }

    return val;
}
bool ShowKeyRotationStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_rotation_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_rotation_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyRotationEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_rotation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_rotation_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastRotationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number_of_rotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number_of_rotations"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumberOfRotations(refVal);
        }
    }
    return ok;
}


bool ShowKeyRotationStatusResponse::isKeyRotationEnabled() const
{
    return keyRotationEnabled_;
}

void ShowKeyRotationStatusResponse::setKeyRotationEnabled(bool value)
{
    keyRotationEnabled_ = value;
    keyRotationEnabledIsSet_ = true;
}

bool ShowKeyRotationStatusResponse::keyRotationEnabledIsSet() const
{
    return keyRotationEnabledIsSet_;
}

void ShowKeyRotationStatusResponse::unsetkeyRotationEnabled()
{
    keyRotationEnabledIsSet_ = false;
}

int32_t ShowKeyRotationStatusResponse::getRotationInterval() const
{
    return rotationInterval_;
}

void ShowKeyRotationStatusResponse::setRotationInterval(int32_t value)
{
    rotationInterval_ = value;
    rotationIntervalIsSet_ = true;
}

bool ShowKeyRotationStatusResponse::rotationIntervalIsSet() const
{
    return rotationIntervalIsSet_;
}

void ShowKeyRotationStatusResponse::unsetrotationInterval()
{
    rotationIntervalIsSet_ = false;
}

std::string ShowKeyRotationStatusResponse::getLastRotationTime() const
{
    return lastRotationTime_;
}

void ShowKeyRotationStatusResponse::setLastRotationTime(const std::string& value)
{
    lastRotationTime_ = value;
    lastRotationTimeIsSet_ = true;
}

bool ShowKeyRotationStatusResponse::lastRotationTimeIsSet() const
{
    return lastRotationTimeIsSet_;
}

void ShowKeyRotationStatusResponse::unsetlastRotationTime()
{
    lastRotationTimeIsSet_ = false;
}

int32_t ShowKeyRotationStatusResponse::getNumberOfRotations() const
{
    return numberOfRotations_;
}

void ShowKeyRotationStatusResponse::setNumberOfRotations(int32_t value)
{
    numberOfRotations_ = value;
    numberOfRotationsIsSet_ = true;
}

bool ShowKeyRotationStatusResponse::numberOfRotationsIsSet() const
{
    return numberOfRotationsIsSet_;
}

void ShowKeyRotationStatusResponse::unsetnumberOfRotations()
{
    numberOfRotationsIsSet_ = false;
}

}
}
}
}
}


