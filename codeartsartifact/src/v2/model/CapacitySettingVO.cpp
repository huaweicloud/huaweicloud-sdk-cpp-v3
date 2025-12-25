

#include "huaweicloud/codeartsartifact/v2/model/CapacitySettingVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CapacitySettingVO::CapacitySettingVO()
{
    capacityThreshold_ = 0;
    capacityThresholdIsSet_ = false;
    messageType_ = 0;
    messageTypeIsSet_ = false;
    isMailEnabled_ = 0;
    isMailEnabledIsSet_ = false;
    isSmsEnabled_ = 0;
    isSmsEnabledIsSet_ = false;
}

CapacitySettingVO::~CapacitySettingVO() = default;

void CapacitySettingVO::validate()
{
}

web::json::value CapacitySettingVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(capacityThresholdIsSet_) {
        val[utility::conversions::to_string_t("capacity_threshold")] = ModelBase::toJson(capacityThreshold_);
    }
    if(messageTypeIsSet_) {
        val[utility::conversions::to_string_t("message_type")] = ModelBase::toJson(messageType_);
    }
    if(isMailEnabledIsSet_) {
        val[utility::conversions::to_string_t("is_mail_enabled")] = ModelBase::toJson(isMailEnabled_);
    }
    if(isSmsEnabledIsSet_) {
        val[utility::conversions::to_string_t("is_sms_enabled")] = ModelBase::toJson(isSmsEnabled_);
    }

    return val;
}
bool CapacitySettingVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("capacity_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacityThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_mail_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_mail_enabled"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMailEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sms_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sms_enabled"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSmsEnabled(refVal);
        }
    }
    return ok;
}


int32_t CapacitySettingVO::getCapacityThreshold() const
{
    return capacityThreshold_;
}

void CapacitySettingVO::setCapacityThreshold(int32_t value)
{
    capacityThreshold_ = value;
    capacityThresholdIsSet_ = true;
}

bool CapacitySettingVO::capacityThresholdIsSet() const
{
    return capacityThresholdIsSet_;
}

void CapacitySettingVO::unsetcapacityThreshold()
{
    capacityThresholdIsSet_ = false;
}

int32_t CapacitySettingVO::getMessageType() const
{
    return messageType_;
}

void CapacitySettingVO::setMessageType(int32_t value)
{
    messageType_ = value;
    messageTypeIsSet_ = true;
}

bool CapacitySettingVO::messageTypeIsSet() const
{
    return messageTypeIsSet_;
}

void CapacitySettingVO::unsetmessageType()
{
    messageTypeIsSet_ = false;
}

int32_t CapacitySettingVO::getIsMailEnabled() const
{
    return isMailEnabled_;
}

void CapacitySettingVO::setIsMailEnabled(int32_t value)
{
    isMailEnabled_ = value;
    isMailEnabledIsSet_ = true;
}

bool CapacitySettingVO::isMailEnabledIsSet() const
{
    return isMailEnabledIsSet_;
}

void CapacitySettingVO::unsetisMailEnabled()
{
    isMailEnabledIsSet_ = false;
}

int32_t CapacitySettingVO::getIsSmsEnabled() const
{
    return isSmsEnabled_;
}

void CapacitySettingVO::setIsSmsEnabled(int32_t value)
{
    isSmsEnabled_ = value;
    isSmsEnabledIsSet_ = true;
}

bool CapacitySettingVO::isSmsEnabledIsSet() const
{
    return isSmsEnabledIsSet_;
}

void CapacitySettingVO::unsetisSmsEnabled()
{
    isSmsEnabledIsSet_ = false;
}

}
}
}
}
}


