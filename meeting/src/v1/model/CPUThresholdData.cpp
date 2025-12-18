

#include "huaweicloud/meeting/v1/model/CPUThresholdData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CPUThresholdData::CPUThresholdData()
{
    cpu_ = 0;
    cpuIsSet_ = false;
    cpuDefault_ = 0;
    cpuDefaultIsSet_ = false;
}

CPUThresholdData::~CPUThresholdData() = default;

void CPUThresholdData::validate()
{
}

web::json::value CPUThresholdData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(cpuDefaultIsSet_) {
        val[utility::conversions::to_string_t("cpuDefault")] = ModelBase::toJson(cpuDefault_);
    }

    return val;
}
bool CPUThresholdData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cpuDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuDefault(refVal);
        }
    }
    return ok;
}


int32_t CPUThresholdData::getCpu() const
{
    return cpu_;
}

void CPUThresholdData::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool CPUThresholdData::cpuIsSet() const
{
    return cpuIsSet_;
}

void CPUThresholdData::unsetcpu()
{
    cpuIsSet_ = false;
}

int32_t CPUThresholdData::getCpuDefault() const
{
    return cpuDefault_;
}

void CPUThresholdData::setCpuDefault(int32_t value)
{
    cpuDefault_ = value;
    cpuDefaultIsSet_ = true;
}

bool CPUThresholdData::cpuDefaultIsSet() const
{
    return cpuDefaultIsSet_;
}

void CPUThresholdData::unsetcpuDefault()
{
    cpuDefaultIsSet_ = false;
}

}
}
}
}
}


