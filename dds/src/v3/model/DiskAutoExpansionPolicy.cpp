

#include "huaweicloud/dds/v3/model/DiskAutoExpansionPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DiskAutoExpansionPolicy::DiskAutoExpansionPolicy()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    threshold_ = 0;
    thresholdIsSet_ = false;
    step_ = 0;
    stepIsSet_ = false;
}

DiskAutoExpansionPolicy::~DiskAutoExpansionPolicy() = default;

void DiskAutoExpansionPolicy::validate()
{
}

web::json::value DiskAutoExpansionPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }

    return val;
}
bool DiskAutoExpansionPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
        }
    }
    return ok;
}


std::string DiskAutoExpansionPolicy::getInstanceId() const
{
    return instanceId_;
}

void DiskAutoExpansionPolicy::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DiskAutoExpansionPolicy::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DiskAutoExpansionPolicy::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t DiskAutoExpansionPolicy::getThreshold() const
{
    return threshold_;
}

void DiskAutoExpansionPolicy::setThreshold(int32_t value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool DiskAutoExpansionPolicy::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void DiskAutoExpansionPolicy::unsetthreshold()
{
    thresholdIsSet_ = false;
}

int32_t DiskAutoExpansionPolicy::getStep() const
{
    return step_;
}

void DiskAutoExpansionPolicy::setStep(int32_t value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool DiskAutoExpansionPolicy::stepIsSet() const
{
    return stepIsSet_;
}

void DiskAutoExpansionPolicy::unsetstep()
{
    stepIsSet_ = false;
}

}
}
}
}
}


