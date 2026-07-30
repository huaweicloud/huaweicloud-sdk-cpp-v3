

#include "huaweicloud/modelarts/v1/model/MainContainerCustomizedFlavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MainContainerCustomizedFlavor::MainContainerCustomizedFlavor()
{
    cpuCoreNum_ = 0.0f;
    cpuCoreNumIsSet_ = false;
    memSize_ = 0.0f;
    memSizeIsSet_ = false;
    acceleratorNum_ = 0.0f;
    acceleratorNumIsSet_ = false;
}

MainContainerCustomizedFlavor::~MainContainerCustomizedFlavor() = default;

void MainContainerCustomizedFlavor::validate()
{
}

web::json::value MainContainerCustomizedFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuCoreNumIsSet_) {
        val[utility::conversions::to_string_t("cpu_core_num")] = ModelBase::toJson(cpuCoreNum_);
    }
    if(memSizeIsSet_) {
        val[utility::conversions::to_string_t("mem_size")] = ModelBase::toJson(memSize_);
    }
    if(acceleratorNumIsSet_) {
        val[utility::conversions::to_string_t("accelerator_num")] = ModelBase::toJson(acceleratorNum_);
    }

    return val;
}
bool MainContainerCustomizedFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


float MainContainerCustomizedFlavor::getCpuCoreNum() const
{
    return cpuCoreNum_;
}

void MainContainerCustomizedFlavor::setCpuCoreNum(float value)
{
    cpuCoreNum_ = value;
    cpuCoreNumIsSet_ = true;
}

bool MainContainerCustomizedFlavor::cpuCoreNumIsSet() const
{
    return cpuCoreNumIsSet_;
}

void MainContainerCustomizedFlavor::unsetcpuCoreNum()
{
    cpuCoreNumIsSet_ = false;
}

float MainContainerCustomizedFlavor::getMemSize() const
{
    return memSize_;
}

void MainContainerCustomizedFlavor::setMemSize(float value)
{
    memSize_ = value;
    memSizeIsSet_ = true;
}

bool MainContainerCustomizedFlavor::memSizeIsSet() const
{
    return memSizeIsSet_;
}

void MainContainerCustomizedFlavor::unsetmemSize()
{
    memSizeIsSet_ = false;
}

float MainContainerCustomizedFlavor::getAcceleratorNum() const
{
    return acceleratorNum_;
}

void MainContainerCustomizedFlavor::setAcceleratorNum(float value)
{
    acceleratorNum_ = value;
    acceleratorNumIsSet_ = true;
}

bool MainContainerCustomizedFlavor::acceleratorNumIsSet() const
{
    return acceleratorNumIsSet_;
}

void MainContainerCustomizedFlavor::unsetacceleratorNum()
{
    acceleratorNumIsSet_ = false;
}

}
}
}
}
}


