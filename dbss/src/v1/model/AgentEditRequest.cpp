

#include "huaweicloud/dbss/v1/model/AgentEditRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AgentEditRequest::AgentEditRequest()
{
    cpuThreshold_ = 0;
    cpuThresholdIsSet_ = false;
    memThreshold_ = 0;
    memThresholdIsSet_ = false;
}

AgentEditRequest::~AgentEditRequest() = default;

void AgentEditRequest::validate()
{
}

web::json::value AgentEditRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuThresholdIsSet_) {
        val[utility::conversions::to_string_t("cpu_threshold")] = ModelBase::toJson(cpuThreshold_);
    }
    if(memThresholdIsSet_) {
        val[utility::conversions::to_string_t("mem_threshold")] = ModelBase::toJson(memThreshold_);
    }

    return val;
}
bool AgentEditRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


int32_t AgentEditRequest::getCpuThreshold() const
{
    return cpuThreshold_;
}

void AgentEditRequest::setCpuThreshold(int32_t value)
{
    cpuThreshold_ = value;
    cpuThresholdIsSet_ = true;
}

bool AgentEditRequest::cpuThresholdIsSet() const
{
    return cpuThresholdIsSet_;
}

void AgentEditRequest::unsetcpuThreshold()
{
    cpuThresholdIsSet_ = false;
}

int32_t AgentEditRequest::getMemThreshold() const
{
    return memThreshold_;
}

void AgentEditRequest::setMemThreshold(int32_t value)
{
    memThreshold_ = value;
    memThresholdIsSet_ = true;
}

bool AgentEditRequest::memThresholdIsSet() const
{
    return memThresholdIsSet_;
}

void AgentEditRequest::unsetmemThreshold()
{
    memThresholdIsSet_ = false;
}

}
}
}
}
}


