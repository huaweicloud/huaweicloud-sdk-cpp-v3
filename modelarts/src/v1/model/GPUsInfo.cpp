

#include "huaweicloud/modelarts/v1/model/GPUsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GPUsInfo::GPUsInfo()
{
    type_ = "";
    typeIsSet_ = false;
    gpu_ = 0.0;
    gpuIsSet_ = false;
    gpuMemory_ = "";
    gpuMemoryIsSet_ = false;
}

GPUsInfo::~GPUsInfo() = default;

void GPUsInfo::validate()
{
}

web::json::value GPUsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(gpuMemoryIsSet_) {
        val[utility::conversions::to_string_t("gpu_memory")] = ModelBase::toJson(gpuMemory_);
    }

    return val;
}
bool GPUsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            double refVal;
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
    return ok;
}


std::string GPUsInfo::getType() const
{
    return type_;
}

void GPUsInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GPUsInfo::typeIsSet() const
{
    return typeIsSet_;
}

void GPUsInfo::unsettype()
{
    typeIsSet_ = false;
}

double GPUsInfo::getGpu() const
{
    return gpu_;
}

void GPUsInfo::setGpu(double value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool GPUsInfo::gpuIsSet() const
{
    return gpuIsSet_;
}

void GPUsInfo::unsetgpu()
{
    gpuIsSet_ = false;
}

std::string GPUsInfo::getGpuMemory() const
{
    return gpuMemory_;
}

void GPUsInfo::setGpuMemory(const std::string& value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool GPUsInfo::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void GPUsInfo::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

}
}
}
}
}


