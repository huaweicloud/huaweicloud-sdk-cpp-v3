

#include "huaweicloud/gaussdbforopengauss/v3/model/KernelExecutionTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




KernelExecutionTime::KernelExecutionTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    kernelExecutionTimeDetailsIsSet_ = false;
}

KernelExecutionTime::~KernelExecutionTime() = default;

void KernelExecutionTime::validate()
{
}

web::json::value KernelExecutionTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(kernelExecutionTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("kernel_execution_time_details")] = ModelBase::toJson(kernelExecutionTimeDetails_);
    }

    return val;
}
bool KernelExecutionTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kernel_execution_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_execution_time_details"));
        if(!fieldValue.is_null())
        {
            KernelExecTimeDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelExecutionTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t KernelExecutionTime::getAllTime() const
{
    return allTime_;
}

void KernelExecutionTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool KernelExecutionTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void KernelExecutionTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

KernelExecTimeDetails KernelExecutionTime::getKernelExecutionTimeDetails() const
{
    return kernelExecutionTimeDetails_;
}

void KernelExecutionTime::setKernelExecutionTimeDetails(const KernelExecTimeDetails& value)
{
    kernelExecutionTimeDetails_ = value;
    kernelExecutionTimeDetailsIsSet_ = true;
}

bool KernelExecutionTime::kernelExecutionTimeDetailsIsSet() const
{
    return kernelExecutionTimeDetailsIsSet_;
}

void KernelExecutionTime::unsetkernelExecutionTimeDetails()
{
    kernelExecutionTimeDetailsIsSet_ = false;
}

}
}
}
}
}


