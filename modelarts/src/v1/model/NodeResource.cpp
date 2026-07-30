

#include "huaweicloud/modelarts/v1/model/NodeResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeResource::NodeResource()
{
    cpu_ = "";
    cpuIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
    nvidiaComGpu_ = "";
    nvidiaComGpuIsSet_ = false;
    huaweiComAscendSnt3_ = "";
    huaweiComAscendSnt3IsSet_ = false;
    huaweiComAscendSnt9_ = "";
    huaweiComAscendSnt9IsSet_ = false;
}

NodeResource::~NodeResource() = default;

void NodeResource::validate()
{
}

web::json::value NodeResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(nvidiaComGpuIsSet_) {
        val[utility::conversions::to_string_t("nvidia.com/gpu")] = ModelBase::toJson(nvidiaComGpu_);
    }
    if(huaweiComAscendSnt3IsSet_) {
        val[utility::conversions::to_string_t("huawei.com/ascend-snt3")] = ModelBase::toJson(huaweiComAscendSnt3_);
    }
    if(huaweiComAscendSnt9IsSet_) {
        val[utility::conversions::to_string_t("huawei.com/ascend-snt9")] = ModelBase::toJson(huaweiComAscendSnt9_);
    }

    return val;
}
bool NodeResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nvidia.com/gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nvidia.com/gpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNvidiaComGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huawei.com/ascend-snt3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huawei.com/ascend-snt3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHuaweiComAscendSnt3(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huawei.com/ascend-snt9"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huawei.com/ascend-snt9"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHuaweiComAscendSnt9(refVal);
        }
    }
    return ok;
}


std::string NodeResource::getCpu() const
{
    return cpu_;
}

void NodeResource::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool NodeResource::cpuIsSet() const
{
    return cpuIsSet_;
}

void NodeResource::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string NodeResource::getMemory() const
{
    return memory_;
}

void NodeResource::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool NodeResource::memoryIsSet() const
{
    return memoryIsSet_;
}

void NodeResource::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string NodeResource::getNvidiaComGpu() const
{
    return nvidiaComGpu_;
}

void NodeResource::setNvidiaComGpu(const std::string& value)
{
    nvidiaComGpu_ = value;
    nvidiaComGpuIsSet_ = true;
}

bool NodeResource::nvidiaComGpuIsSet() const
{
    return nvidiaComGpuIsSet_;
}

void NodeResource::unsetnvidiaComGpu()
{
    nvidiaComGpuIsSet_ = false;
}

std::string NodeResource::getHuaweiComAscendSnt3() const
{
    return huaweiComAscendSnt3_;
}

void NodeResource::setHuaweiComAscendSnt3(const std::string& value)
{
    huaweiComAscendSnt3_ = value;
    huaweiComAscendSnt3IsSet_ = true;
}

bool NodeResource::huaweiComAscendSnt3IsSet() const
{
    return huaweiComAscendSnt3IsSet_;
}

void NodeResource::unsethuaweiComAscendSnt3()
{
    huaweiComAscendSnt3IsSet_ = false;
}

std::string NodeResource::getHuaweiComAscendSnt9() const
{
    return huaweiComAscendSnt9_;
}

void NodeResource::setHuaweiComAscendSnt9(const std::string& value)
{
    huaweiComAscendSnt9_ = value;
    huaweiComAscendSnt9IsSet_ = true;
}

bool NodeResource::huaweiComAscendSnt9IsSet() const
{
    return huaweiComAscendSnt9IsSet_;
}

void NodeResource::unsethuaweiComAscendSnt9()
{
    huaweiComAscendSnt9IsSet_ = false;
}

}
}
}
}
}


