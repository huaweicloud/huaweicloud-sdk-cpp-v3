

#include "huaweicloud/modelarts/v1/model/GPUInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GPUInfo::GPUInfo()
{
    gpu_ = 0;
    gpuIsSet_ = false;
    gpuMemory_ = "";
    gpuMemoryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

GPUInfo::~GPUInfo() = default;

void GPUInfo::validate()
{
}

web::json::value GPUInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(gpuMemoryIsSet_) {
        val[utility::conversions::to_string_t("gpu_memory")] = ModelBase::toJson(gpuMemory_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool GPUInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t GPUInfo::getGpu() const
{
    return gpu_;
}

void GPUInfo::setGpu(int32_t value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool GPUInfo::gpuIsSet() const
{
    return gpuIsSet_;
}

void GPUInfo::unsetgpu()
{
    gpuIsSet_ = false;
}

std::string GPUInfo::getGpuMemory() const
{
    return gpuMemory_;
}

void GPUInfo::setGpuMemory(const std::string& value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool GPUInfo::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void GPUInfo::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

std::string GPUInfo::getType() const
{
    return type_;
}

void GPUInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GPUInfo::typeIsSet() const
{
    return typeIsSet_;
}

void GPUInfo::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


