

#include "huaweicloud/modelarts/v1/model/NotebookCustomSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotebookCustomSpec::NotebookCustomSpec()
{
    gpu_ = 0.0f;
    gpuIsSet_ = false;
    cpu_ = 0.0f;
    cpuIsSet_ = false;
    memory_ = 0.0f;
    memoryIsSet_ = false;
    gpuType_ = "";
    gpuTypeIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
}

NotebookCustomSpec::~NotebookCustomSpec() = default;

void NotebookCustomSpec::validate()
{
}

web::json::value NotebookCustomSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(gpuTypeIsSet_) {
        val[utility::conversions::to_string_t("gpu_type")] = ModelBase::toJson(gpuType_);
    }
    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }

    return val;
}
bool NotebookCustomSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceFlavor(refVal);
        }
    }
    return ok;
}


float NotebookCustomSpec::getGpu() const
{
    return gpu_;
}

void NotebookCustomSpec::setGpu(float value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool NotebookCustomSpec::gpuIsSet() const
{
    return gpuIsSet_;
}

void NotebookCustomSpec::unsetgpu()
{
    gpuIsSet_ = false;
}

float NotebookCustomSpec::getCpu() const
{
    return cpu_;
}

void NotebookCustomSpec::setCpu(float value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool NotebookCustomSpec::cpuIsSet() const
{
    return cpuIsSet_;
}

void NotebookCustomSpec::unsetcpu()
{
    cpuIsSet_ = false;
}

float NotebookCustomSpec::getMemory() const
{
    return memory_;
}

void NotebookCustomSpec::setMemory(float value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool NotebookCustomSpec::memoryIsSet() const
{
    return memoryIsSet_;
}

void NotebookCustomSpec::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string NotebookCustomSpec::getGpuType() const
{
    return gpuType_;
}

void NotebookCustomSpec::setGpuType(const std::string& value)
{
    gpuType_ = value;
    gpuTypeIsSet_ = true;
}

bool NotebookCustomSpec::gpuTypeIsSet() const
{
    return gpuTypeIsSet_;
}

void NotebookCustomSpec::unsetgpuType()
{
    gpuTypeIsSet_ = false;
}

std::string NotebookCustomSpec::getArch() const
{
    return arch_;
}

void NotebookCustomSpec::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool NotebookCustomSpec::archIsSet() const
{
    return archIsSet_;
}

void NotebookCustomSpec::unsetarch()
{
    archIsSet_ = false;
}

std::string NotebookCustomSpec::getCategory() const
{
    return category_;
}

void NotebookCustomSpec::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool NotebookCustomSpec::categoryIsSet() const
{
    return categoryIsSet_;
}

void NotebookCustomSpec::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string NotebookCustomSpec::getResourceFlavor() const
{
    return resourceFlavor_;
}

void NotebookCustomSpec::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool NotebookCustomSpec::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void NotebookCustomSpec::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

}
}
}
}
}


