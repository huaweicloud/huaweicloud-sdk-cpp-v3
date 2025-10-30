

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAutoNodeExpansionPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAutoNodeExpansionPolicyResponse::ShowAutoNodeExpansionPolicyResponse()
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

ShowAutoNodeExpansionPolicyResponse::~ShowAutoNodeExpansionPolicyResponse() = default;

void ShowAutoNodeExpansionPolicyResponse::validate()
{
}

web::json::value ShowAutoNodeExpansionPolicyResponse::toJson() const
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
bool ShowAutoNodeExpansionPolicyResponse::fromJson(const web::json::value& val)
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


bool ShowAutoNodeExpansionPolicyResponse::isSwitchOption() const
{
    return switchOption_;
}

void ShowAutoNodeExpansionPolicyResponse::setSwitchOption(bool value)
{
    switchOption_ = value;
    switchOptionIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyResponse::switchOptionIsSet() const
{
    return switchOptionIsSet_;
}

void ShowAutoNodeExpansionPolicyResponse::unsetswitchOption()
{
    switchOptionIsSet_ = false;
}

int32_t ShowAutoNodeExpansionPolicyResponse::getOverloadNodeThreshold() const
{
    return overloadNodeThreshold_;
}

void ShowAutoNodeExpansionPolicyResponse::setOverloadNodeThreshold(int32_t value)
{
    overloadNodeThreshold_ = value;
    overloadNodeThresholdIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyResponse::overloadNodeThresholdIsSet() const
{
    return overloadNodeThresholdIsSet_;
}

void ShowAutoNodeExpansionPolicyResponse::unsetoverloadNodeThreshold()
{
    overloadNodeThresholdIsSet_ = false;
}

int32_t ShowAutoNodeExpansionPolicyResponse::getCpuThreshold() const
{
    return cpuThreshold_;
}

void ShowAutoNodeExpansionPolicyResponse::setCpuThreshold(int32_t value)
{
    cpuThreshold_ = value;
    cpuThresholdIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyResponse::cpuThresholdIsSet() const
{
    return cpuThresholdIsSet_;
}

void ShowAutoNodeExpansionPolicyResponse::unsetcpuThreshold()
{
    cpuThresholdIsSet_ = false;
}

int32_t ShowAutoNodeExpansionPolicyResponse::getMemThreshold() const
{
    return memThreshold_;
}

void ShowAutoNodeExpansionPolicyResponse::setMemThreshold(int32_t value)
{
    memThreshold_ = value;
    memThresholdIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyResponse::memThresholdIsSet() const
{
    return memThresholdIsSet_;
}

void ShowAutoNodeExpansionPolicyResponse::unsetmemThreshold()
{
    memThresholdIsSet_ = false;
}

int32_t ShowAutoNodeExpansionPolicyResponse::getStep() const
{
    return step_;
}

void ShowAutoNodeExpansionPolicyResponse::setStep(int32_t value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyResponse::stepIsSet() const
{
    return stepIsSet_;
}

void ShowAutoNodeExpansionPolicyResponse::unsetstep()
{
    stepIsSet_ = false;
}

int32_t ShowAutoNodeExpansionPolicyResponse::getNodeLimit() const
{
    return nodeLimit_;
}

void ShowAutoNodeExpansionPolicyResponse::setNodeLimit(int32_t value)
{
    nodeLimit_ = value;
    nodeLimitIsSet_ = true;
}

bool ShowAutoNodeExpansionPolicyResponse::nodeLimitIsSet() const
{
    return nodeLimitIsSet_;
}

void ShowAutoNodeExpansionPolicyResponse::unsetnodeLimit()
{
    nodeLimitIsSet_ = false;
}

}
}
}
}
}


