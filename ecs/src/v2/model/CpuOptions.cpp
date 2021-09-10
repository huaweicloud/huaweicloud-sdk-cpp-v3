

#include "huaweicloud/ecs/v2/model/CpuOptions.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CpuOptions::CpuOptions()
{
    hwcpuThreads_ = 0;
    hwcpuThreadsIsSet_ = false;
}

CpuOptions::~CpuOptions() = default;

void CpuOptions::validate()
{
}

web::json::value CpuOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hwcpuThreadsIsSet_) {
        val[utility::conversions::to_string_t("hw:cpu_threads")] = ModelBase::toJson(hwcpuThreads_);
    }

    return val;
}

bool CpuOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hw:cpu_threads"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:cpu_threads"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwcpuThreads(refVal);
        }
    }
    return ok;
}


int32_t CpuOptions::getHwcpuThreads() const
{
    return hwcpuThreads_;
}

void CpuOptions::setHwcpuThreads(int32_t value)
{
    hwcpuThreads_ = value;
    hwcpuThreadsIsSet_ = true;
}

bool CpuOptions::hwcpuThreadsIsSet() const
{
    return hwcpuThreadsIsSet_;
}

void CpuOptions::unsethwcpuThreads()
{
    hwcpuThreadsIsSet_ = false;
}

}
}
}
}
}


