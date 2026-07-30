

#include "huaweicloud/modelarts/v1/model/Workload_resourceRequirement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Workload_resourceRequirement::Workload_resourceRequirement()
{
    cpu_ = "";
    cpuIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
    nvidiaComGpu_ = "";
    nvidiaComGpuIsSet_ = false;
    huaweiComAscend310_ = "";
    huaweiComAscend310IsSet_ = false;
    huaweiComAscend1980_ = "";
    huaweiComAscend1980IsSet_ = false;
}

Workload_resourceRequirement::~Workload_resourceRequirement() = default;

void Workload_resourceRequirement::validate()
{
}

web::json::value Workload_resourceRequirement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(nvidiaComGpuIsSet_) {
        val[utility::conversions::to_string_t("nvidia.com/gpu")] = ModelBase::toJson(nvidiaComGpu_);
    }
    if(huaweiComAscend310IsSet_) {
        val[utility::conversions::to_string_t("huawei.com/ascend-310")] = ModelBase::toJson(huaweiComAscend310_);
    }
    if(huaweiComAscend1980IsSet_) {
        val[utility::conversions::to_string_t("huawei.com/ascend-1980")] = ModelBase::toJson(huaweiComAscend1980_);
    }

    return val;
}
bool Workload_resourceRequirement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nvidia.com/gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nvidia.com/gpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNvidiaComGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huawei.com/ascend-310"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huawei.com/ascend-310"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHuaweiComAscend310(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huawei.com/ascend-1980"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huawei.com/ascend-1980"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHuaweiComAscend1980(refVal);
        }
    }
    return ok;
}


std::string Workload_resourceRequirement::getCpu() const
{
    return cpu_;
}

void Workload_resourceRequirement::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool Workload_resourceRequirement::cpuIsSet() const
{
    return cpuIsSet_;
}

void Workload_resourceRequirement::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string Workload_resourceRequirement::getMemory() const
{
    return memory_;
}

void Workload_resourceRequirement::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool Workload_resourceRequirement::memoryIsSet() const
{
    return memoryIsSet_;
}

void Workload_resourceRequirement::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string Workload_resourceRequirement::getNvidiaComGpu() const
{
    return nvidiaComGpu_;
}

void Workload_resourceRequirement::setNvidiaComGpu(const std::string& value)
{
    nvidiaComGpu_ = value;
    nvidiaComGpuIsSet_ = true;
}

bool Workload_resourceRequirement::nvidiaComGpuIsSet() const
{
    return nvidiaComGpuIsSet_;
}

void Workload_resourceRequirement::unsetnvidiaComGpu()
{
    nvidiaComGpuIsSet_ = false;
}

std::string Workload_resourceRequirement::getHuaweiComAscend310() const
{
    return huaweiComAscend310_;
}

void Workload_resourceRequirement::setHuaweiComAscend310(const std::string& value)
{
    huaweiComAscend310_ = value;
    huaweiComAscend310IsSet_ = true;
}

bool Workload_resourceRequirement::huaweiComAscend310IsSet() const
{
    return huaweiComAscend310IsSet_;
}

void Workload_resourceRequirement::unsethuaweiComAscend310()
{
    huaweiComAscend310IsSet_ = false;
}

std::string Workload_resourceRequirement::getHuaweiComAscend1980() const
{
    return huaweiComAscend1980_;
}

void Workload_resourceRequirement::setHuaweiComAscend1980(const std::string& value)
{
    huaweiComAscend1980_ = value;
    huaweiComAscend1980IsSet_ = true;
}

bool Workload_resourceRequirement::huaweiComAscend1980IsSet() const
{
    return huaweiComAscend1980IsSet_;
}

void Workload_resourceRequirement::unsethuaweiComAscend1980()
{
    huaweiComAscend1980IsSet_ = false;
}

}
}
}
}
}


