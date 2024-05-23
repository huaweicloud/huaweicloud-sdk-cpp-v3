

#include "huaweicloud/ecs/v2/model/CpuOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CpuOptions::CpuOptions()
{
    hwCpuThreads_ = 0;
    hwCpuThreadsIsSet_ = false;
}

CpuOptions::~CpuOptions() = default;

void CpuOptions::validate()
{
}

web::json::value CpuOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hwCpuThreadsIsSet_) {
        val[utility::conversions::to_string_t("hw:cpu_threads")] = ModelBase::toJson(hwCpuThreads_);
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
            setHwCpuThreads(refVal);
        }
    }
    return ok;
}


int32_t CpuOptions::getHwCpuThreads() const
{
    return hwCpuThreads_;
}

void CpuOptions::setHwCpuThreads(int32_t value)
{
    hwCpuThreads_ = value;
    hwCpuThreadsIsSet_ = true;
}

bool CpuOptions::hwCpuThreadsIsSet() const
{
    return hwCpuThreadsIsSet_;
}

void CpuOptions::unsethwCpuThreads()
{
    hwCpuThreadsIsSet_ = false;
}

}
}
}
}
}


