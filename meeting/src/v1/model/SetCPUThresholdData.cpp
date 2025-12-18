

#include "huaweicloud/meeting/v1/model/SetCPUThresholdData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetCPUThresholdData::SetCPUThresholdData()
{
    cpu_ = 0;
    cpuIsSet_ = false;
}

SetCPUThresholdData::~SetCPUThresholdData() = default;

void SetCPUThresholdData::validate()
{
}

web::json::value SetCPUThresholdData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }

    return val;
}
bool SetCPUThresholdData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    return ok;
}


int32_t SetCPUThresholdData::getCpu() const
{
    return cpu_;
}

void SetCPUThresholdData::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool SetCPUThresholdData::cpuIsSet() const
{
    return cpuIsSet_;
}

void SetCPUThresholdData::unsetcpu()
{
    cpuIsSet_ = false;
}

}
}
}
}
}


