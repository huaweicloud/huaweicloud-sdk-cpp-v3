

#include "huaweicloud/gaussdbforopengauss/v3/model/KernelTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




KernelTime::KernelTime()
{
    allTime_ = 0L;
    allTimeIsSet_ = false;
    kernelTimeDetailsIsSet_ = false;
}

KernelTime::~KernelTime() = default;

void KernelTime::validate()
{
}

web::json::value KernelTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(kernelTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("kernel_time_details")] = ModelBase::toJson(kernelTimeDetails_);
    }

    return val;
}
bool KernelTime::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("kernel_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kernel_time_details"));
        if(!fieldValue.is_null())
        {
            KernelTimeDetails refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKernelTimeDetails(refVal);
        }
    }
    return ok;
}


int64_t KernelTime::getAllTime() const
{
    return allTime_;
}

void KernelTime::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool KernelTime::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void KernelTime::unsetallTime()
{
    allTimeIsSet_ = false;
}

KernelTimeDetails KernelTime::getKernelTimeDetails() const
{
    return kernelTimeDetails_;
}

void KernelTime::setKernelTimeDetails(const KernelTimeDetails& value)
{
    kernelTimeDetails_ = value;
    kernelTimeDetailsIsSet_ = true;
}

bool KernelTime::kernelTimeDetailsIsSet() const
{
    return kernelTimeDetailsIsSet_;
}

void KernelTime::unsetkernelTimeDetails()
{
    kernelTimeDetailsIsSet_ = false;
}

}
}
}
}
}


