

#include "huaweicloud/rds/v3/model/ShowAutoEnlargePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAutoEnlargePolicyResponse::ShowAutoEnlargePolicyResponse()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    limitSize_ = 0;
    limitSizeIsSet_ = false;
    triggerThreshold_ = 0;
    triggerThresholdIsSet_ = false;
    stepPercent_ = 0;
    stepPercentIsSet_ = false;
}

ShowAutoEnlargePolicyResponse::~ShowAutoEnlargePolicyResponse() = default;

void ShowAutoEnlargePolicyResponse::validate()
{
}

web::json::value ShowAutoEnlargePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(limitSizeIsSet_) {
        val[utility::conversions::to_string_t("limit_size")] = ModelBase::toJson(limitSize_);
    }
    if(triggerThresholdIsSet_) {
        val[utility::conversions::to_string_t("trigger_threshold")] = ModelBase::toJson(triggerThreshold_);
    }
    if(stepPercentIsSet_) {
        val[utility::conversions::to_string_t("step_percent")] = ModelBase::toJson(stepPercent_);
    }

    return val;
}
bool ShowAutoEnlargePolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerThreshold(refVal);
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


bool ShowAutoEnlargePolicyResponse::isSwitchOption() const
{
    return switchOption_;
}

void ShowAutoEnlargePolicyResponse::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t ShowAutoEnlargePolicyResponse::getLimitSize() const
{
    return limitSize_;
}

void ShowAutoEnlargePolicyResponse::setLimitSize(int32_t value)
{
    limitSize_ = value;
    limitSizeIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::limitSizeIsSet() const
{
    return limitSizeIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsetlimitSize()
{
    limitSizeIsSet_ = false;
}

int32_t ShowAutoEnlargePolicyResponse::getTriggerThreshold() const
{
    return triggerThreshold_;
}

void ShowAutoEnlargePolicyResponse::setTriggerThreshold(int32_t value)
{
    triggerThreshold_ = value;
    triggerThresholdIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::triggerThresholdIsSet() const
{
    return triggerThresholdIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsettriggerThreshold()
{
    triggerThresholdIsSet_ = false;
}

int32_t ShowAutoEnlargePolicyResponse::getStepPercent() const
{
    return stepPercent_;
}

void ShowAutoEnlargePolicyResponse::setStepPercent(int32_t value)
{
    stepPercent_ = value;
    stepPercentIsSet_ = true;
}

bool ShowAutoEnlargePolicyResponse::stepPercentIsSet() const
{
    return stepPercentIsSet_;
}

void ShowAutoEnlargePolicyResponse::unsetstepPercent()
{
    stepPercentIsSet_ = false;
}

}
}
}
}
}


