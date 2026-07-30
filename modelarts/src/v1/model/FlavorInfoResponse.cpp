

#include "huaweicloud/modelarts/v1/model/FlavorInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FlavorInfoResponse::FlavorInfoResponse()
{
    maxNum_ = 0;
    maxNumIsSet_ = false;
    cpuIsSet_ = false;
    gpuIsSet_ = false;
    npuIsSet_ = false;
    memoryIsSet_ = false;
    diskIsSet_ = false;
}

FlavorInfoResponse::~FlavorInfoResponse() = default;

void FlavorInfoResponse::validate()
{
}

web::json::value FlavorInfoResponse::toJson() const
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
bool FlavorInfoResponse::fromJson(const web::json::value& val)
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
            DiskResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisk(refVal);
        }
    }
    return ok;
}


int32_t FlavorInfoResponse::getMaxNum() const
{
    return maxNum_;
}

void FlavorInfoResponse::setMaxNum(int32_t value)
{
    maxNum_ = value;
    maxNumIsSet_ = true;
}

bool FlavorInfoResponse::maxNumIsSet() const
{
    return maxNumIsSet_;
}

void FlavorInfoResponse::unsetmaxNum()
{
    maxNumIsSet_ = false;
}

Cpu FlavorInfoResponse::getCpu() const
{
    return cpu_;
}

void FlavorInfoResponse::setCpu(const Cpu& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool FlavorInfoResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void FlavorInfoResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

Gpu FlavorInfoResponse::getGpu() const
{
    return gpu_;
}

void FlavorInfoResponse::setGpu(const Gpu& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool FlavorInfoResponse::gpuIsSet() const
{
    return gpuIsSet_;
}

void FlavorInfoResponse::unsetgpu()
{
    gpuIsSet_ = false;
}

Npu FlavorInfoResponse::getNpu() const
{
    return npu_;
}

void FlavorInfoResponse::setNpu(const Npu& value)
{
    npu_ = value;
    npuIsSet_ = true;
}

bool FlavorInfoResponse::npuIsSet() const
{
    return npuIsSet_;
}

void FlavorInfoResponse::unsetnpu()
{
    npuIsSet_ = false;
}

Memory FlavorInfoResponse::getMemory() const
{
    return memory_;
}

void FlavorInfoResponse::setMemory(const Memory& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool FlavorInfoResponse::memoryIsSet() const
{
    return memoryIsSet_;
}

void FlavorInfoResponse::unsetmemory()
{
    memoryIsSet_ = false;
}

DiskResponse FlavorInfoResponse::getDisk() const
{
    return disk_;
}

void FlavorInfoResponse::setDisk(const DiskResponse& value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool FlavorInfoResponse::diskIsSet() const
{
    return diskIsSet_;
}

void FlavorInfoResponse::unsetdisk()
{
    diskIsSet_ = false;
}

}
}
}
}
}


