

#include "huaweicloud/modelarts/v1/model/ResourceRequirementVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceRequirementVO::ResourceRequirementVO()
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

ResourceRequirementVO::~ResourceRequirementVO() = default;

void ResourceRequirementVO::validate()
{
}

web::json::value ResourceRequirementVO::toJson() const
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
bool ResourceRequirementVO::fromJson(const web::json::value& val)
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


std::string ResourceRequirementVO::getCpu() const
{
    return cpu_;
}

void ResourceRequirementVO::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ResourceRequirementVO::cpuIsSet() const
{
    return cpuIsSet_;
}

void ResourceRequirementVO::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ResourceRequirementVO::getMemory() const
{
    return memory_;
}

void ResourceRequirementVO::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool ResourceRequirementVO::memoryIsSet() const
{
    return memoryIsSet_;
}

void ResourceRequirementVO::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string ResourceRequirementVO::getNvidiaComGpu() const
{
    return nvidiaComGpu_;
}

void ResourceRequirementVO::setNvidiaComGpu(const std::string& value)
{
    nvidiaComGpu_ = value;
    nvidiaComGpuIsSet_ = true;
}

bool ResourceRequirementVO::nvidiaComGpuIsSet() const
{
    return nvidiaComGpuIsSet_;
}

void ResourceRequirementVO::unsetnvidiaComGpu()
{
    nvidiaComGpuIsSet_ = false;
}

std::string ResourceRequirementVO::getHuaweiComAscend310() const
{
    return huaweiComAscend310_;
}

void ResourceRequirementVO::setHuaweiComAscend310(const std::string& value)
{
    huaweiComAscend310_ = value;
    huaweiComAscend310IsSet_ = true;
}

bool ResourceRequirementVO::huaweiComAscend310IsSet() const
{
    return huaweiComAscend310IsSet_;
}

void ResourceRequirementVO::unsethuaweiComAscend310()
{
    huaweiComAscend310IsSet_ = false;
}

std::string ResourceRequirementVO::getHuaweiComAscend1980() const
{
    return huaweiComAscend1980_;
}

void ResourceRequirementVO::setHuaweiComAscend1980(const std::string& value)
{
    huaweiComAscend1980_ = value;
    huaweiComAscend1980IsSet_ = true;
}

bool ResourceRequirementVO::huaweiComAscend1980IsSet() const
{
    return huaweiComAscend1980IsSet_;
}

void ResourceRequirementVO::unsethuaweiComAscend1980()
{
    huaweiComAscend1980IsSet_ = false;
}

}
}
}
}
}


