

#include "huaweicloud/modelarts/v1/model/PoolStatus_driver.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatus_driver::PoolStatus_driver()
{
    gpuIsSet_ = false;
    npuIsSet_ = false;
}

PoolStatus_driver::~PoolStatus_driver() = default;

void PoolStatus_driver::validate()
{
}

web::json::value PoolStatus_driver::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gpuIsSet_) {
        val[utility::conversions::to_string_t("gpu")] = ModelBase::toJson(gpu_);
    }
    if(npuIsSet_) {
        val[utility::conversions::to_string_t("npu")] = ModelBase::toJson(npu_);
    }

    return val;
}
bool PoolStatus_driver::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu"));
        if(!fieldValue.is_null())
        {
            PoolDriverStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu"));
        if(!fieldValue.is_null())
        {
            PoolDriverStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpu(refVal);
        }
    }
    return ok;
}


PoolDriverStatus PoolStatus_driver::getGpu() const
{
    return gpu_;
}

void PoolStatus_driver::setGpu(const PoolDriverStatus& value)
{
    gpu_ = value;
    gpuIsSet_ = true;
}

bool PoolStatus_driver::gpuIsSet() const
{
    return gpuIsSet_;
}

void PoolStatus_driver::unsetgpu()
{
    gpuIsSet_ = false;
}

PoolDriverStatus PoolStatus_driver::getNpu() const
{
    return npu_;
}

void PoolStatus_driver::setNpu(const PoolDriverStatus& value)
{
    npu_ = value;
    npuIsSet_ = true;
}

bool PoolStatus_driver::npuIsSet() const
{
    return npuIsSet_;
}

void PoolStatus_driver::unsetnpu()
{
    npuIsSet_ = false;
}

}
}
}
}
}


