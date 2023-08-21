

#include "huaweicloud/kms/v2/model/UpdateKeyRotationIntervalRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyRotationIntervalRequestBody::UpdateKeyRotationIntervalRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    rotationInterval_ = 0;
    rotationIntervalIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

UpdateKeyRotationIntervalRequestBody::~UpdateKeyRotationIntervalRequestBody() = default;

void UpdateKeyRotationIntervalRequestBody::validate()
{
}

web::json::value UpdateKeyRotationIntervalRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(rotationIntervalIsSet_) {
        val[utility::conversions::to_string_t("rotation_interval")] = ModelBase::toJson(rotationInterval_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool UpdateKeyRotationIntervalRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}

std::string UpdateKeyRotationIntervalRequestBody::getKeyId() const
{
    return keyId_;
}

void UpdateKeyRotationIntervalRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdateKeyRotationIntervalRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdateKeyRotationIntervalRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

int32_t UpdateKeyRotationIntervalRequestBody::getRotationInterval() const
{
    return rotationInterval_;
}

void UpdateKeyRotationIntervalRequestBody::setRotationInterval(int32_t value)
{
    rotationInterval_ = value;
    rotationIntervalIsSet_ = true;
}

bool UpdateKeyRotationIntervalRequestBody::rotationIntervalIsSet() const
{
    return rotationIntervalIsSet_;
}

void UpdateKeyRotationIntervalRequestBody::unsetrotationInterval()
{
    rotationIntervalIsSet_ = false;
}

std::string UpdateKeyRotationIntervalRequestBody::getSequence() const
{
    return sequence_;
}

void UpdateKeyRotationIntervalRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool UpdateKeyRotationIntervalRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void UpdateKeyRotationIntervalRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


