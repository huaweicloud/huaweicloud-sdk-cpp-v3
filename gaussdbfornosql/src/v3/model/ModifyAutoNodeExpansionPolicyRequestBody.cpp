

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyAutoNodeExpansionPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyAutoNodeExpansionPolicyRequestBody::ModifyAutoNodeExpansionPolicyRequestBody()
{
    switchOption_ = false;
    switchOptionIsSet_ = false;
    overloadNodeThreshold_ = 0;
    overloadNodeThresholdIsSet_ = false;
    cpuThreshold_ = 0;
    cpuThresholdIsSet_ = false;
    memThreshold_ = 0;
    memThresholdIsSet_ = false;
    step_ = 0;
    stepIsSet_ = false;
    nodeLimit_ = 0;
    nodeLimitIsSet_ = false;
}

ModifyAutoNodeExpansionPolicyRequestBody::~ModifyAutoNodeExpansionPolicyRequestBody() = default;

void ModifyAutoNodeExpansionPolicyRequestBody::validate()
{
}

web::json::value ModifyAutoNodeExpansionPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchOptionIsSet_) {
        val[utility::conversions::to_string_t("switch_option")] = ModelBase::toJson(switchOption_);
    }
    if(overloadNodeThresholdIsSet_) {
        val[utility::conversions::to_string_t("overload_node_threshold")] = ModelBase::toJson(overloadNodeThreshold_);
    }
    if(cpuThresholdIsSet_) {
        val[utility::conversions::to_string_t("cpu_threshold")] = ModelBase::toJson(cpuThreshold_);
    }
    if(memThresholdIsSet_) {
        val[utility::conversions::to_string_t("mem_threshold")] = ModelBase::toJson(memThreshold_);
    }
    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(nodeLimitIsSet_) {
        val[utility::conversions::to_string_t("node_limit")] = ModelBase::toJson(nodeLimit_);
    }

    return val;
}
bool ModifyAutoNodeExpansionPolicyRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("overload_node_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overload_node_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverloadNodeThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemThreshold(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeLimit(refVal);
        }
    }
    return ok;
}


bool ModifyAutoNodeExpansionPolicyRequestBody::isSwitchOption() const
{
    return switchOption_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequestBody::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t ModifyAutoNodeExpansionPolicyRequestBody::getOverloadNodeThreshold() const
{
    return overloadNodeThreshold_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::setOverloadNodeThreshold(int32_t value)
{
    overloadNodeThreshold_ = value;
    overloadNodeThresholdIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequestBody::overloadNodeThresholdIsSet() const
{
    return overloadNodeThresholdIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::unsetoverloadNodeThreshold()
{
    overloadNodeThresholdIsSet_ = false;
}

int32_t ModifyAutoNodeExpansionPolicyRequestBody::getCpuThreshold() const
{
    return cpuThreshold_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::setCpuThreshold(int32_t value)
{
    cpuThreshold_ = value;
    cpuThresholdIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequestBody::cpuThresholdIsSet() const
{
    return cpuThresholdIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::unsetcpuThreshold()
{
    cpuThresholdIsSet_ = false;
}

int32_t ModifyAutoNodeExpansionPolicyRequestBody::getMemThreshold() const
{
    return memThreshold_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::setMemThreshold(int32_t value)
{
    memThreshold_ = value;
    memThresholdIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequestBody::memThresholdIsSet() const
{
    return memThresholdIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::unsetmemThreshold()
{
    memThresholdIsSet_ = false;
}

int32_t ModifyAutoNodeExpansionPolicyRequestBody::getStep() const
{
    return step_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::setStep(int32_t value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequestBody::stepIsSet() const
{
    return stepIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::unsetstep()
{
    stepIsSet_ = false;
}

int32_t ModifyAutoNodeExpansionPolicyRequestBody::getNodeLimit() const
{
    return nodeLimit_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::setNodeLimit(int32_t value)
{
    nodeLimit_ = value;
    nodeLimitIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequestBody::nodeLimitIsSet() const
{
    return nodeLimitIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequestBody::unsetnodeLimit()
{
    nodeLimitIsSet_ = false;
}

}
}
}
}
}


