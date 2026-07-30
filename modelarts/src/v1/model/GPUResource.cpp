

#include "huaweicloud/modelarts/v1/model/GPUResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GPUResource::GPUResource()
{
    gpu_ = 0;
    gpuIsSet_ = false;
    gpuMemory_ = "";
    gpuMemoryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

GPUResource::~GPUResource() = default;

void GPUResource::validate()
{
}

web::json::value GPUResource::toJson() const
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
bool GPUResource::fromJson(const web::json::value& val)
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


int32_t GPUResource::getGpu() const
{
    return gpu_;
}

void GPUResource::setGpu(int32_t value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool GPUResource::gpuIsSet() const
{
    return gpuIsSet_;
}

void GPUResource::unsetgpu()
{
    gpuIsSet_ = false;
}

std::string GPUResource::getGpuMemory() const
{
    return gpuMemory_;
}

void GPUResource::setGpuMemory(const std::string& value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool GPUResource::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void GPUResource::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

std::string GPUResource::getType() const
{
    return type_;
}

void GPUResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GPUResource::typeIsSet() const
{
    return typeIsSet_;
}

void GPUResource::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


