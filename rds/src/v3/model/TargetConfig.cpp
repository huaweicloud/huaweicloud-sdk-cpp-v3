

#include "huaweicloud/rds/v3/model/TargetConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TargetConfig::TargetConfig()
{
    flavor_ = "";
    flavorIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
}

TargetConfig::~TargetConfig() = default;

void TargetConfig::validate()
{
}

web::json::value TargetConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }

    return val;
}
bool TargetConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
        }
    }
    return ok;
}


std::string TargetConfig::getFlavor() const
{
    return flavor_;
}

void TargetConfig::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool TargetConfig::flavorIsSet() const
{
    return flavorIsSet_;
}

void TargetConfig::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string TargetConfig::getCpu() const
{
    return cpu_;
}

void TargetConfig::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool TargetConfig::cpuIsSet() const
{
    return cpuIsSet_;
}

void TargetConfig::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string TargetConfig::getMem() const
{
    return mem_;
}

void TargetConfig::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool TargetConfig::memIsSet() const
{
    return memIsSet_;
}

void TargetConfig::unsetmem()
{
    memIsSet_ = false;
}

}
}
}
}
}


