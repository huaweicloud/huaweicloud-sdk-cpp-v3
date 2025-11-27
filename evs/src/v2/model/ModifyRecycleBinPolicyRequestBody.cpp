

#include "huaweicloud/evs/v2/model/ModifyRecycleBinPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ModifyRecycleBinPolicyRequestBody::ModifyRecycleBinPolicyRequestBody()
{
    switch_ = false;
    switchIsSet_ = false;
    thresholdTime_ = 0;
    thresholdTimeIsSet_ = false;
    keepTime_ = 0;
    keepTimeIsSet_ = false;
}

ModifyRecycleBinPolicyRequestBody::~ModifyRecycleBinPolicyRequestBody() = default;

void ModifyRecycleBinPolicyRequestBody::validate()
{
}

web::json::value ModifyRecycleBinPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchIsSet_) {
        val[utility::conversions::to_string_t("switch")] = ModelBase::toJson(switch_);
    }
    if(thresholdTimeIsSet_) {
        val[utility::conversions::to_string_t("threshold_time")] = ModelBase::toJson(thresholdTime_);
    }
    if(keepTimeIsSet_) {
        val[utility::conversions::to_string_t("keep_time")] = ModelBase::toJson(keepTime_);
    }

    return val;
}
bool ModifyRecycleBinPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThresholdTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepTime(refVal);
        }
    }
    return ok;
}


bool ModifyRecycleBinPolicyRequestBody::isSwitch() const
{
    return switch_;
}

void ModifyRecycleBinPolicyRequestBody::setSwitch(bool value)
{
    switch_ = value;
    switchIsSet_ = true;
}

bool ModifyRecycleBinPolicyRequestBody::switchIsSet() const
{
    return switchIsSet_;
}

void ModifyRecycleBinPolicyRequestBody::unsetswitch()
{
    switchIsSet_ = false;
}

int32_t ModifyRecycleBinPolicyRequestBody::getThresholdTime() const
{
    return thresholdTime_;
}

void ModifyRecycleBinPolicyRequestBody::setThresholdTime(int32_t value)
{
    thresholdTime_ = value;
    thresholdTimeIsSet_ = true;
}

bool ModifyRecycleBinPolicyRequestBody::thresholdTimeIsSet() const
{
    return thresholdTimeIsSet_;
}

void ModifyRecycleBinPolicyRequestBody::unsetthresholdTime()
{
    thresholdTimeIsSet_ = false;
}

int32_t ModifyRecycleBinPolicyRequestBody::getKeepTime() const
{
    return keepTime_;
}

void ModifyRecycleBinPolicyRequestBody::setKeepTime(int32_t value)
{
    keepTime_ = value;
    keepTimeIsSet_ = true;
}

bool ModifyRecycleBinPolicyRequestBody::keepTimeIsSet() const
{
    return keepTimeIsSet_;
}

void ModifyRecycleBinPolicyRequestBody::unsetkeepTime()
{
    keepTimeIsSet_ = false;
}

}
}
}
}
}


