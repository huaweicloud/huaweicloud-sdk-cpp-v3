

#include "huaweicloud/gaussdbforopengauss/v3/model/KernelExecTimeDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




KernelExecTimeDetails::KernelExecTimeDetails()
{
    executionTime_ = 0L;
    executionTimeIsSet_ = false;
    otherTime_ = 0L;
    otherTimeIsSet_ = false;
}

KernelExecTimeDetails::~KernelExecTimeDetails() = default;

void KernelExecTimeDetails::validate()
{
}

web::json::value KernelExecTimeDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(otherTimeIsSet_) {
        val[utility::conversions::to_string_t("other_time")] = ModelBase::toJson(otherTime_);
    }

    return val;
}
bool KernelExecTimeDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTime(refVal);
        }
    }
    return ok;
}


int64_t KernelExecTimeDetails::getExecutionTime() const
{
    return executionTime_;
}

void KernelExecTimeDetails::setExecutionTime(int64_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool KernelExecTimeDetails::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void KernelExecTimeDetails::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

int64_t KernelExecTimeDetails::getOtherTime() const
{
    return otherTime_;
}

void KernelExecTimeDetails::setOtherTime(int64_t value)
{
    otherTime_ = value;
    otherTimeIsSet_ = true;
}

bool KernelExecTimeDetails::otherTimeIsSet() const
{
    return otherTimeIsSet_;
}

void KernelExecTimeDetails::unsetotherTime()
{
    otherTimeIsSet_ = false;
}

}
}
}
}
}


