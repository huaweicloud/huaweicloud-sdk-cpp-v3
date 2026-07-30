

#include "huaweicloud/modelarts/v1/model/MainContainerAllocatedResources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MainContainerAllocatedResources::MainContainerAllocatedResources()
{
    cpuArch_ = "";
    cpuArchIsSet_ = false;
    cpuCoreNum_ = 0.0f;
    cpuCoreNumIsSet_ = false;
    memSize_ = 0.0f;
    memSizeIsSet_ = false;
    acceleratorNum_ = 0.0f;
    acceleratorNumIsSet_ = false;
    acceleratorType_ = "";
    acceleratorTypeIsSet_ = false;
}

MainContainerAllocatedResources::~MainContainerAllocatedResources() = default;

void MainContainerAllocatedResources::validate()
{
}

web::json::value MainContainerAllocatedResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuArchIsSet_) {
        val[utility::conversions::to_string_t("cpu_arch")] = ModelBase::toJson(cpuArch_);
    }
    if(cpuCoreNumIsSet_) {
        val[utility::conversions::to_string_t("cpu_core_num")] = ModelBase::toJson(cpuCoreNum_);
    }
    if(memSizeIsSet_) {
        val[utility::conversions::to_string_t("mem_size")] = ModelBase::toJson(memSize_);
    }
    if(acceleratorNumIsSet_) {
        val[utility::conversions::to_string_t("accelerator_num")] = ModelBase::toJson(acceleratorNum_);
    }
    if(acceleratorTypeIsSet_) {
        val[utility::conversions::to_string_t("accelerator_type")] = ModelBase::toJson(acceleratorType_);
    }

    return val;
}
bool MainContainerAllocatedResources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu_arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_core_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_core_num"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuCoreNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_size"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accelerator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator_num"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceleratorNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accelerator_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceleratorType(refVal);
        }
    }
    return ok;
}


std::string MainContainerAllocatedResources::getCpuArch() const
{
    return cpuArch_;
}

void MainContainerAllocatedResources::setCpuArch(const std::string& value)
{
    cpuArch_ = value;
    cpuArchIsSet_ = true;
}

bool MainContainerAllocatedResources::cpuArchIsSet() const
{
    return cpuArchIsSet_;
}

void MainContainerAllocatedResources::unsetcpuArch()
{
    cpuArchIsSet_ = false;
}

float MainContainerAllocatedResources::getCpuCoreNum() const
{
    return cpuCoreNum_;
}

void MainContainerAllocatedResources::setCpuCoreNum(float value)
{
    cpuCoreNum_ = value;
    cpuCoreNumIsSet_ = true;
}

bool MainContainerAllocatedResources::cpuCoreNumIsSet() const
{
    return cpuCoreNumIsSet_;
}

void MainContainerAllocatedResources::unsetcpuCoreNum()
{
    cpuCoreNumIsSet_ = false;
}

float MainContainerAllocatedResources::getMemSize() const
{
    return memSize_;
}

void MainContainerAllocatedResources::setMemSize(float value)
{
    memSize_ = value;
    memSizeIsSet_ = true;
}

bool MainContainerAllocatedResources::memSizeIsSet() const
{
    return memSizeIsSet_;
}

void MainContainerAllocatedResources::unsetmemSize()
{
    memSizeIsSet_ = false;
}

float MainContainerAllocatedResources::getAcceleratorNum() const
{
    return acceleratorNum_;
}

void MainContainerAllocatedResources::setAcceleratorNum(float value)
{
    acceleratorNum_ = value;
    acceleratorNumIsSet_ = true;
}

bool MainContainerAllocatedResources::acceleratorNumIsSet() const
{
    return acceleratorNumIsSet_;
}

void MainContainerAllocatedResources::unsetacceleratorNum()
{
    acceleratorNumIsSet_ = false;
}

std::string MainContainerAllocatedResources::getAcceleratorType() const
{
    return acceleratorType_;
}

void MainContainerAllocatedResources::setAcceleratorType(const std::string& value)
{
    acceleratorType_ = value;
    acceleratorTypeIsSet_ = true;
}

bool MainContainerAllocatedResources::acceleratorTypeIsSet() const
{
    return acceleratorTypeIsSet_;
}

void MainContainerAllocatedResources::unsetacceleratorType()
{
    acceleratorTypeIsSet_ = false;
}

}
}
}
}
}


