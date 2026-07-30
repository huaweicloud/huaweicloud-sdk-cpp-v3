

#include "huaweicloud/modelarts/v1/model/CustomResourceSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CustomResourceSpec::CustomResourceSpec()
{
    gpu_ = 0.0f;
    gpuIsSet_ = false;
    memory_ = 0;
    memoryIsSet_ = false;
    cpu_ = 0.0f;
    cpuIsSet_ = false;
    ascend_ = 0;
    ascendIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
}

CustomResourceSpec::~CustomResourceSpec() = default;

void CustomResourceSpec::validate()
{
}

web::json::value CustomResourceSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(ascendIsSet_) {
        val[utility::conversions::to_string_t("ascend")] = ModelBase::toJson(ascend_);
    }
    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }

    return val;
}
bool CustomResourceSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ascend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ascend"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAscend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    return ok;
}


float CustomResourceSpec::getGpu() const
{
    return gpu_;
}

void CustomResourceSpec::setGpu(float value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool CustomResourceSpec::gpuIsSet() const
{
    return gpuIsSet_;
}

void CustomResourceSpec::unsetgpu()
{
    gpuIsSet_ = false;
}

int32_t CustomResourceSpec::getMemory() const
{
    return memory_;
}

void CustomResourceSpec::setMemory(int32_t value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool CustomResourceSpec::memoryIsSet() const
{
    return memoryIsSet_;
}

void CustomResourceSpec::unsetmemory()
{
    memoryIsSet_ = false;
}

float CustomResourceSpec::getCpu() const
{
    return cpu_;
}

void CustomResourceSpec::setCpu(float value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool CustomResourceSpec::cpuIsSet() const
{
    return cpuIsSet_;
}

void CustomResourceSpec::unsetcpu()
{
    cpuIsSet_ = false;
}

int32_t CustomResourceSpec::getAscend() const
{
    return ascend_;
}

void CustomResourceSpec::setAscend(int32_t value)
{
    ascend_ = value;
    ascendIsSet_ = true;
}

bool CustomResourceSpec::ascendIsSet() const
{
    return ascendIsSet_;
}

void CustomResourceSpec::unsetascend()
{
    ascendIsSet_ = false;
}

std::string CustomResourceSpec::getArch() const
{
    return arch_;
}

void CustomResourceSpec::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool CustomResourceSpec::archIsSet() const
{
    return archIsSet_;
}

void CustomResourceSpec::unsetarch()
{
    archIsSet_ = false;
}

}
}
}
}
}


