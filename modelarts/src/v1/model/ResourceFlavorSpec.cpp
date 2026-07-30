

#include "huaweicloud/modelarts/v1/model/ResourceFlavorSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorSpec::ResourceFlavorSpec()
{
    type_ = "";
    typeIsSet_ = false;
    cpuArch_ = "";
    cpuArchIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
    gpuIsSet_ = false;
    npuIsSet_ = false;
    dataVolumeIsSet_ = false;
    billingModesIsSet_ = false;
    billingCode_ = "";
    billingCodeIsSet_ = false;
    jobFlavorsIsSet_ = false;
}

ResourceFlavorSpec::~ResourceFlavorSpec() = default;

void ResourceFlavorSpec::validate()
{
}

web::json::value ResourceFlavorSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(cpuArchIsSet_) {
        val[utility::conversions::to_string_t("cpuArch")] = ModelBase::toJson(cpuArch_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(npuIsSet_) {
        val[utility::conversions::to_string_t("npu")] = ModelBase::toJson(npu_);
    }
    if(dataVolumeIsSet_) {
        val[utility::conversions::to_string_t("dataVolume")] = ModelBase::toJson(dataVolume_);
    }
    if(billingModesIsSet_) {
        val[utility::conversions::to_string_t("billingModes")] = ModelBase::toJson(billingModes_);
    }
    if(billingCodeIsSet_) {
        val[utility::conversions::to_string_t("billingCode")] = ModelBase::toJson(billingCode_);
    }
    if(jobFlavorsIsSet_) {
        val[utility::conversions::to_string_t("jobFlavors")] = ModelBase::toJson(jobFlavors_);
    }

    return val;
}
bool ResourceFlavorSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuArch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuArch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuArch(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            ResourceFlavorSpec_gpu refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu"));
        if(!fieldValue.is_null())
        {
            ResourceFlavorSpec_npu refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolume"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceFlavorSpec_dataVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billingModes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingModes"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingModes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billingCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobFlavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobFlavors"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFlavors(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorSpec::getType() const
{
    return type_;
}

void ResourceFlavorSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceFlavorSpec::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceFlavorSpec::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceFlavorSpec::getCpuArch() const
{
    return cpuArch_;
}

void ResourceFlavorSpec::setCpuArch(const std::string& value)
{
    cpuArch_ = value;
    cpuArchIsSet_ = true;
}

bool ResourceFlavorSpec::cpuArchIsSet() const
{
    return cpuArchIsSet_;
}

void ResourceFlavorSpec::unsetcpuArch()
{
    cpuArchIsSet_ = false;
}

std::string ResourceFlavorSpec::getCpu() const
{
    return cpu_;
}

void ResourceFlavorSpec::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ResourceFlavorSpec::cpuIsSet() const
{
    return cpuIsSet_;
}

void ResourceFlavorSpec::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ResourceFlavorSpec::getMemory() const
{
    return memory_;
}

void ResourceFlavorSpec::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool ResourceFlavorSpec::memoryIsSet() const
{
    return memoryIsSet_;
}

void ResourceFlavorSpec::unsetmemory()
{
    memoryIsSet_ = false;
}

ResourceFlavorSpec_gpu ResourceFlavorSpec::getGpu() const
{
    return gpu_;
}

void ResourceFlavorSpec::setGpu(const ResourceFlavorSpec_gpu& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool ResourceFlavorSpec::gpuIsSet() const
{
    return gpuIsSet_;
}

void ResourceFlavorSpec::unsetgpu()
{
    gpuIsSet_ = false;
}

ResourceFlavorSpec_npu ResourceFlavorSpec::getNpu() const
{
    return npu_;
}

void ResourceFlavorSpec::setNpu(const ResourceFlavorSpec_npu& value)
{
    npu_ = value;
    npuIsSet_ = true;
}

bool ResourceFlavorSpec::npuIsSet() const
{
    return npuIsSet_;
}

void ResourceFlavorSpec::unsetnpu()
{
    npuIsSet_ = false;
}

std::vector<ResourceFlavorSpec_dataVolume>& ResourceFlavorSpec::getDataVolume()
{
    return dataVolume_;
}

void ResourceFlavorSpec::setDataVolume(const std::vector<ResourceFlavorSpec_dataVolume>& value)
{
    dataVolume_ = value;
    dataVolumeIsSet_ = true;
}

bool ResourceFlavorSpec::dataVolumeIsSet() const
{
    return dataVolumeIsSet_;
}

void ResourceFlavorSpec::unsetdataVolume()
{
    dataVolumeIsSet_ = false;
}

std::vector<int32_t>& ResourceFlavorSpec::getBillingModes()
{
    return billingModes_;
}

void ResourceFlavorSpec::setBillingModes(std::vector<int32_t> value)
{
    billingModes_ = value;
    billingModesIsSet_ = true;
}

bool ResourceFlavorSpec::billingModesIsSet() const
{
    return billingModesIsSet_;
}

void ResourceFlavorSpec::unsetbillingModes()
{
    billingModesIsSet_ = false;
}

std::string ResourceFlavorSpec::getBillingCode() const
{
    return billingCode_;
}

void ResourceFlavorSpec::setBillingCode(const std::string& value)
{
    billingCode_ = value;
    billingCodeIsSet_ = true;
}

bool ResourceFlavorSpec::billingCodeIsSet() const
{
    return billingCodeIsSet_;
}

void ResourceFlavorSpec::unsetbillingCode()
{
    billingCodeIsSet_ = false;
}

std::vector<std::string>& ResourceFlavorSpec::getJobFlavors()
{
    return jobFlavors_;
}

void ResourceFlavorSpec::setJobFlavors(const std::vector<std::string>& value)
{
    jobFlavors_ = value;
    jobFlavorsIsSet_ = true;
}

bool ResourceFlavorSpec::jobFlavorsIsSet() const
{
    return jobFlavorsIsSet_;
}

void ResourceFlavorSpec::unsetjobFlavors()
{
    jobFlavorsIsSet_ = false;
}

}
}
}
}
}


