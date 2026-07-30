

#include "huaweicloud/modelarts/v1/model/FlavorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FlavorInfo::FlavorInfo()
{
    maxNum_ = 0;
    maxNumIsSet_ = false;
    cpuIsSet_ = false;
    gpuIsSet_ = false;
    npuIsSet_ = false;
    memoryIsSet_ = false;
    diskIsSet_ = false;
}

FlavorInfo::~FlavorInfo() = default;

void FlavorInfo::validate()
{
}

web::json::value FlavorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxNumIsSet_) {
        val[utility::conversions::to_string_t("max_num")] = ModelBase::toJson(maxNum_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(npuIsSet_) {
        val[utility::conversions::to_string_t("npu")] = ModelBase::toJson(npu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(diskIsSet_) {
        val[utility::conversions::to_string_t("disk")] = ModelBase::toJson(disk_);
    }

    return val;
}
bool FlavorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            Cpu refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            Gpu refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu"));
        if(!fieldValue.is_null())
        {
            Npu refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            Memory refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk"));
        if(!fieldValue.is_null())
        {
            Disk refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisk(refVal);
        }
    }
    return ok;
}


int32_t FlavorInfo::getMaxNum() const
{
    return maxNum_;
}

void FlavorInfo::setMaxNum(int32_t value)
{
    maxNum_ = value;
    maxNumIsSet_ = true;
}

bool FlavorInfo::maxNumIsSet() const
{
    return maxNumIsSet_;
}

void FlavorInfo::unsetmaxNum()
{
    maxNumIsSet_ = false;
}

Cpu FlavorInfo::getCpu() const
{
    return cpu_;
}

void FlavorInfo::setCpu(const Cpu& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool FlavorInfo::cpuIsSet() const
{
    return cpuIsSet_;
}

void FlavorInfo::unsetcpu()
{
    cpuIsSet_ = false;
}

Gpu FlavorInfo::getGpu() const
{
    return gpu_;
}

void FlavorInfo::setGpu(const Gpu& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool FlavorInfo::gpuIsSet() const
{
    return gpuIsSet_;
}

void FlavorInfo::unsetgpu()
{
    gpuIsSet_ = false;
}

Npu FlavorInfo::getNpu() const
{
    return npu_;
}

void FlavorInfo::setNpu(const Npu& value)
{
    npu_ = value;
    npuIsSet_ = true;
}

bool FlavorInfo::npuIsSet() const
{
    return npuIsSet_;
}

void FlavorInfo::unsetnpu()
{
    npuIsSet_ = false;
}

Memory FlavorInfo::getMemory() const
{
    return memory_;
}

void FlavorInfo::setMemory(const Memory& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool FlavorInfo::memoryIsSet() const
{
    return memoryIsSet_;
}

void FlavorInfo::unsetmemory()
{
    memoryIsSet_ = false;
}

Disk FlavorInfo::getDisk() const
{
    return disk_;
}

void FlavorInfo::setDisk(const Disk& value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool FlavorInfo::diskIsSet() const
{
    return diskIsSet_;
}

void FlavorInfo::unsetdisk()
{
    diskIsSet_ = false;
}

}
}
}
}
}


