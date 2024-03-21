

#include "huaweicloud/rds/v3/model/CustomerModifyAutoEnlargePolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerModifyAutoEnlargePolicyReq::CustomerModifyAutoEnlargePolicyReq()
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

CustomerModifyAutoEnlargePolicyReq::~CustomerModifyAutoEnlargePolicyReq() = default;

void CustomerModifyAutoEnlargePolicyReq::validate()
{
}

web::json::value CustomerModifyAutoEnlargePolicyReq::toJson() const
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
bool CustomerModifyAutoEnlargePolicyReq::fromJson(const web::json::value& val)
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


bool CustomerModifyAutoEnlargePolicyReq::isSwitchOption() const
{
    return switchOption_;
}

void CustomerModifyAutoEnlargePolicyReq::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool CustomerModifyAutoEnlargePolicyReq::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void CustomerModifyAutoEnlargePolicyReq::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t CustomerModifyAutoEnlargePolicyReq::getLimitSize() const
{
    return limitSize_;
}

void CustomerModifyAutoEnlargePolicyReq::setLimitSize(int32_t value)
{
    limitSize_ = value;
    limitSizeIsSet_ = true;
}

bool CustomerModifyAutoEnlargePolicyReq::limitSizeIsSet() const
{
    return limitSizeIsSet_;
}

void CustomerModifyAutoEnlargePolicyReq::unsetlimitSize()
{
    limitSizeIsSet_ = false;
}

int32_t CustomerModifyAutoEnlargePolicyReq::getTriggerThreshold() const
{
    return triggerThreshold_;
}

void CustomerModifyAutoEnlargePolicyReq::setTriggerThreshold(int32_t value)
{
    triggerThreshold_ = value;
    triggerThresholdIsSet_ = true;
}

bool CustomerModifyAutoEnlargePolicyReq::triggerThresholdIsSet() const
{
    return triggerThresholdIsSet_;
}

void CustomerModifyAutoEnlargePolicyReq::unsettriggerThreshold()
{
    triggerThresholdIsSet_ = false;
}

int32_t CustomerModifyAutoEnlargePolicyReq::getStepPercent() const
{
    return stepPercent_;
}

void CustomerModifyAutoEnlargePolicyReq::setStepPercent(int32_t value)
{
    stepPercent_ = value;
    stepPercentIsSet_ = true;
}

bool CustomerModifyAutoEnlargePolicyReq::stepPercentIsSet() const
{
    return stepPercentIsSet_;
}

void CustomerModifyAutoEnlargePolicyReq::unsetstepPercent()
{
    stepPercentIsSet_ = false;
}

}
}
}
}
}


