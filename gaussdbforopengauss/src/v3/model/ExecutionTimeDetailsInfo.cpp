

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecutionTimeDetailsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecutionTimeDetailsInfo::ExecutionTimeDetailsInfo()
{
    resourceTimeIsSet_ = false;
    kernelTimeIsSet_ = false;
    kernelExecutionTimeIsSet_ = false;
    waitEventTimeIsSet_ = false;
}

ExecutionTimeDetailsInfo::~ExecutionTimeDetailsInfo() = default;

void ExecutionTimeDetailsInfo::validate()
{
}

web::json::value ExecutionTimeDetailsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_time")] = ModelBase::toJson(resourceTime_);
    }
    if(kernelTimeIsSet_) {
        val[utility::conversions::to_string_t("kernel_time")] = ModelBase::toJson(kernelTime_);
    }
    if(kernelExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("kernel_execution_time")] = ModelBase::toJson(kernelExecutionTime_);
    }
    if(waitEventTimeIsSet_) {
        val[utility::conversions::to_string_t("wait_event_time")] = ModelBase::toJson(waitEventTime_);
    }

    return val;
}
bool ExecutionTimeDetailsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_time"));
        if(!fieldValue.is_null())
        {
            ResourceTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kernel_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_time"));
        if(!fieldValue.is_null())
        {
            KernelTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kernel_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_execution_time"));
        if(!fieldValue.is_null())
        {
            KernelExecutionTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_time"));
        if(!fieldValue.is_null())
        {
            WaitEventTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventTime(refVal);
        }
    }
    return ok;
}


ResourceTime ExecutionTimeDetailsInfo::getResourceTime() const
{
    return resourceTime_;
}

void ExecutionTimeDetailsInfo::setResourceTime(const ResourceTime& value)
{
    resourceTime_ = value;
    resourceTimeIsSet_ = true;
}

bool ExecutionTimeDetailsInfo::resourceTimeIsSet() const
{
    return resourceTimeIsSet_;
}

void ExecutionTimeDetailsInfo::unsetresourceTime()
{
    resourceTimeIsSet_ = false;
}

KernelTime ExecutionTimeDetailsInfo::getKernelTime() const
{
    return kernelTime_;
}

void ExecutionTimeDetailsInfo::setKernelTime(const KernelTime& value)
{
    kernelTime_ = value;
    kernelTimeIsSet_ = true;
}

bool ExecutionTimeDetailsInfo::kernelTimeIsSet() const
{
    return kernelTimeIsSet_;
}

void ExecutionTimeDetailsInfo::unsetkernelTime()
{
    kernelTimeIsSet_ = false;
}

KernelExecutionTime ExecutionTimeDetailsInfo::getKernelExecutionTime() const
{
    return kernelExecutionTime_;
}

void ExecutionTimeDetailsInfo::setKernelExecutionTime(const KernelExecutionTime& value)
{
    kernelExecutionTime_ = value;
    kernelExecutionTimeIsSet_ = true;
}

bool ExecutionTimeDetailsInfo::kernelExecutionTimeIsSet() const
{
    return kernelExecutionTimeIsSet_;
}

void ExecutionTimeDetailsInfo::unsetkernelExecutionTime()
{
    kernelExecutionTimeIsSet_ = false;
}

WaitEventTime ExecutionTimeDetailsInfo::getWaitEventTime() const
{
    return waitEventTime_;
}

void ExecutionTimeDetailsInfo::setWaitEventTime(const WaitEventTime& value)
{
    waitEventTime_ = value;
    waitEventTimeIsSet_ = true;
}

bool ExecutionTimeDetailsInfo::waitEventTimeIsSet() const
{
    return waitEventTimeIsSet_;
}

void ExecutionTimeDetailsInfo::unsetwaitEventTime()
{
    waitEventTimeIsSet_ = false;
}

}
}
}
}
}


