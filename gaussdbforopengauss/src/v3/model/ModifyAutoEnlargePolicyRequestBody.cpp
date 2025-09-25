

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyAutoEnlargePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyAutoEnlargePolicyRequestBody::ModifyAutoEnlargePolicyRequestBody()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    limitVolumeSize_ = 0;
    limitVolumeSizeIsSet_ = false;
    triggerAvailablePercent_ = 0;
    triggerAvailablePercentIsSet_ = false;
    stepSize_ = 0;
    stepSizeIsSet_ = false;
    stepPercent_ = 0;
    stepPercentIsSet_ = false;
}

ModifyAutoEnlargePolicyRequestBody::~ModifyAutoEnlargePolicyRequestBody() = default;

void ModifyAutoEnlargePolicyRequestBody::validate()
{
}

web::json::value ModifyAutoEnlargePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(limitVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("limit_volume_size")] = ModelBase::toJson(limitVolumeSize_);
    }
    if(triggerAvailablePercentIsSet_) {
        val[utility::conversions::to_string_t("trigger_available_percent")] = ModelBase::toJson(triggerAvailablePercent_);
    }
    if(stepSizeIsSet_) {
        val[utility::conversions::to_string_t("step_size")] = ModelBase::toJson(stepSize_);
    }
    if(stepPercentIsSet_) {
        val[utility::conversions::to_string_t("step_percent")] = ModelBase::toJson(stepPercent_);
    }

    return val;
}
bool ModifyAutoEnlargePolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_available_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_available_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerAvailablePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepPercent(refVal);
        }
    }
    return ok;
}


bool ModifyAutoEnlargePolicyRequestBody::isSwitchOption() const
{
    return switchOption_;
}

void ModifyAutoEnlargePolicyRequestBody::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequestBody::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ModifyAutoEnlargePolicyRequestBody::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t ModifyAutoEnlargePolicyRequestBody::getLimitVolumeSize() const
{
    return limitVolumeSize_;
}

void ModifyAutoEnlargePolicyRequestBody::setLimitVolumeSize(int32_t value)
{
    limitVolumeSize_ = value;
    limitVolumeSizeIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequestBody::limitVolumeSizeIsSet() const
{
    return limitVolumeSizeIsSet_;
}

void ModifyAutoEnlargePolicyRequestBody::unsetlimitVolumeSize()
{
    limitVolumeSizeIsSet_ = false;
}

int32_t ModifyAutoEnlargePolicyRequestBody::getTriggerAvailablePercent() const
{
    return triggerAvailablePercent_;
}

void ModifyAutoEnlargePolicyRequestBody::setTriggerAvailablePercent(int32_t value)
{
    triggerAvailablePercent_ = value;
    triggerAvailablePercentIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequestBody::triggerAvailablePercentIsSet() const
{
    return triggerAvailablePercentIsSet_;
}

void ModifyAutoEnlargePolicyRequestBody::unsettriggerAvailablePercent()
{
    triggerAvailablePercentIsSet_ = false;
}

int32_t ModifyAutoEnlargePolicyRequestBody::getStepSize() const
{
    return stepSize_;
}

void ModifyAutoEnlargePolicyRequestBody::setStepSize(int32_t value)
{
    stepSize_ = value;
    stepSizeIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequestBody::stepSizeIsSet() const
{
    return stepSizeIsSet_;
}

void ModifyAutoEnlargePolicyRequestBody::unsetstepSize()
{
    stepSizeIsSet_ = false;
}

int32_t ModifyAutoEnlargePolicyRequestBody::getStepPercent() const
{
    return stepPercent_;
}

void ModifyAutoEnlargePolicyRequestBody::setStepPercent(int32_t value)
{
    stepPercent_ = value;
    stepPercentIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequestBody::stepPercentIsSet() const
{
    return stepPercentIsSet_;
}

void ModifyAutoEnlargePolicyRequestBody::unsetstepPercent()
{
    stepPercentIsSet_ = false;
}

}
}
}
}
}


