

#include "huaweicloud/kms/v2/model/ScheduleKeyDeletionRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ScheduleKeyDeletionRequestBody::ScheduleKeyDeletionRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    pendingDays_ = "";
    pendingDaysIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

ScheduleKeyDeletionRequestBody::~ScheduleKeyDeletionRequestBody() = default;

void ScheduleKeyDeletionRequestBody::validate()
{
}

web::json::value ScheduleKeyDeletionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(pendingDaysIsSet_) {
        val[utility::conversions::to_string_t("pending_days")] = ModelBase::toJson(pendingDays_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool ScheduleKeyDeletionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pending_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pending_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPendingDays(refVal);
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

std::string ScheduleKeyDeletionRequestBody::getKeyId() const
{
    return keyId_;
}

void ScheduleKeyDeletionRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ScheduleKeyDeletionRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ScheduleKeyDeletionRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ScheduleKeyDeletionRequestBody::getPendingDays() const
{
    return pendingDays_;
}

void ScheduleKeyDeletionRequestBody::setPendingDays(const std::string& value)
{
    pendingDays_ = value;
    pendingDaysIsSet_ = true;
}

bool ScheduleKeyDeletionRequestBody::pendingDaysIsSet() const
{
    return pendingDaysIsSet_;
}

void ScheduleKeyDeletionRequestBody::unsetpendingDays()
{
    pendingDaysIsSet_ = false;
}

std::string ScheduleKeyDeletionRequestBody::getSequence() const
{
    return sequence_;
}

void ScheduleKeyDeletionRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ScheduleKeyDeletionRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ScheduleKeyDeletionRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


