

#include "huaweicloud/modelarts/v1/model/NotebookCustomSpecRep.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotebookCustomSpecRep::NotebookCustomSpecRep()
{
    gpu_ = 0.0f;
    gpuIsSet_ = false;
    gpuType_ = "";
    gpuTypeIsSet_ = false;
    cpu_ = 0.0f;
    cpuIsSet_ = false;
    memory_ = 0.0f;
    memoryIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
}

NotebookCustomSpecRep::~NotebookCustomSpecRep() = default;

void NotebookCustomSpecRep::validate()
{
}

web::json::value NotebookCustomSpecRep::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(gpuTypeIsSet_) {
        val[utility::conversions::to_string_t("gpu_type")] = ModelBase::toJson(gpuType_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
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
bool NotebookCustomSpecRep::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuType(refVal);
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


float NotebookCustomSpecRep::getGpu() const
{
    return gpu_;
}

void NotebookCustomSpecRep::setGpu(float value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool NotebookCustomSpecRep::gpuIsSet() const
{
    return gpuIsSet_;
}

void NotebookCustomSpecRep::unsetgpu()
{
    gpuIsSet_ = false;
}

std::string NotebookCustomSpecRep::getGpuType() const
{
    return gpuType_;
}

void NotebookCustomSpecRep::setGpuType(const std::string& value)
{
    gpuType_ = value;
    gpuTypeIsSet_ = true;
}

bool NotebookCustomSpecRep::gpuTypeIsSet() const
{
    return gpuTypeIsSet_;
}

void NotebookCustomSpecRep::unsetgpuType()
{
    gpuTypeIsSet_ = false;
}

float NotebookCustomSpecRep::getCpu() const
{
    return cpu_;
}

void NotebookCustomSpecRep::setCpu(float value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool NotebookCustomSpecRep::cpuIsSet() const
{
    return cpuIsSet_;
}

void NotebookCustomSpecRep::unsetcpu()
{
    cpuIsSet_ = false;
}

float NotebookCustomSpecRep::getMemory() const
{
    return memory_;
}

void NotebookCustomSpecRep::setMemory(float value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool NotebookCustomSpecRep::memoryIsSet() const
{
    return memoryIsSet_;
}

void NotebookCustomSpecRep::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string NotebookCustomSpecRep::getArch() const
{
    return arch_;
}

void NotebookCustomSpecRep::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool NotebookCustomSpecRep::archIsSet() const
{
    return archIsSet_;
}

void NotebookCustomSpecRep::unsetarch()
{
    archIsSet_ = false;
}

std::string NotebookCustomSpecRep::getCategory() const
{
    return category_;
}

void NotebookCustomSpecRep::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool NotebookCustomSpecRep::categoryIsSet() const
{
    return categoryIsSet_;
}

void NotebookCustomSpecRep::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string NotebookCustomSpecRep::getResourceFlavor() const
{
    return resourceFlavor_;
}

void NotebookCustomSpecRep::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool NotebookCustomSpecRep::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void NotebookCustomSpecRep::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

}
}
}
}
}


