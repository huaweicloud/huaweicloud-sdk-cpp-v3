

#include "huaweicloud/gaussdb/v3/model/ModifyAutoExpandPolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyAutoExpandPolicyReq::ModifyAutoExpandPolicyReq()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    limitSize_ = 0;
    limitSizeIsSet_ = false;
    triggerAvailablePercent_ = 0;
    triggerAvailablePercentIsSet_ = false;
    stepPercent_ = 0;
    stepPercentIsSet_ = false;
}

ModifyAutoExpandPolicyReq::~ModifyAutoExpandPolicyReq() = default;

void ModifyAutoExpandPolicyReq::validate()
{
}

web::json::value ModifyAutoExpandPolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(limitSizeIsSet_) {
        val[utility::conversions::to_string_t("limit_size")] = ModelBase::toJson(limitSize_);
    }
    if(triggerAvailablePercentIsSet_) {
        val[utility::conversions::to_string_t("trigger_available_percent")] = ModelBase::toJson(triggerAvailablePercent_);
    }
    if(stepPercentIsSet_) {
        val[utility::conversions::to_string_t("step_percent")] = ModelBase::toJson(stepPercent_);
    }

    return val;
}
bool ModifyAutoExpandPolicyReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("trigger_available_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_available_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerAvailablePercent(refVal);
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


bool ModifyAutoExpandPolicyReq::isSwitchOption() const
{
    return switchOption_;
}

void ModifyAutoExpandPolicyReq::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ModifyAutoExpandPolicyReq::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ModifyAutoExpandPolicyReq::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t ModifyAutoExpandPolicyReq::getLimitSize() const
{
    return limitSize_;
}

void ModifyAutoExpandPolicyReq::setLimitSize(int32_t value)
{
    limitSize_ = value;
    limitSizeIsSet_ = true;
}

bool ModifyAutoExpandPolicyReq::limitSizeIsSet() const
{
    return limitSizeIsSet_;
}

void ModifyAutoExpandPolicyReq::unsetlimitSize()
{
    limitSizeIsSet_ = false;
}

int32_t ModifyAutoExpandPolicyReq::getTriggerAvailablePercent() const
{
    return triggerAvailablePercent_;
}

void ModifyAutoExpandPolicyReq::setTriggerAvailablePercent(int32_t value)
{
    triggerAvailablePercent_ = value;
    triggerAvailablePercentIsSet_ = true;
}

bool ModifyAutoExpandPolicyReq::triggerAvailablePercentIsSet() const
{
    return triggerAvailablePercentIsSet_;
}

void ModifyAutoExpandPolicyReq::unsettriggerAvailablePercent()
{
    triggerAvailablePercentIsSet_ = false;
}

int32_t ModifyAutoExpandPolicyReq::getStepPercent() const
{
    return stepPercent_;
}

void ModifyAutoExpandPolicyReq::setStepPercent(int32_t value)
{
    stepPercent_ = value;
    stepPercentIsSet_ = true;
}

bool ModifyAutoExpandPolicyReq::stepPercentIsSet() const
{
    return stepPercentIsSet_;
}

void ModifyAutoExpandPolicyReq::unsetstepPercent()
{
    stepPercentIsSet_ = false;
}

}
}
}
}
}


