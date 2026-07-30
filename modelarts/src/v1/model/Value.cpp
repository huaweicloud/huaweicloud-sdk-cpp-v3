

#include "huaweicloud/modelarts/v1/model/Value.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Value::Value()
{
    cpu_ = "";
    cpuIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
    tnt004_ = "";
    tnt004IsSet_ = false;
}

Value::~Value() = default;

void Value::validate()
{
}

web::json::value Value::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(tnt004IsSet_) {
        val[utility::conversions::to_string_t("tnt004")] = ModelBase::toJson(tnt004_);
    }

    return val;
}
bool Value::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tnt004"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tnt004"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTnt004(refVal);
        }
    }
    return ok;
}


std::string Value::getCpu() const
{
    return cpu_;
}

void Value::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool Value::cpuIsSet() const
{
    return cpuIsSet_;
}

void Value::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string Value::getMemory() const
{
    return memory_;
}

void Value::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool Value::memoryIsSet() const
{
    return memoryIsSet_;
}

void Value::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string Value::getTnt004() const
{
    return tnt004_;
}

void Value::setTnt004(const std::string& value)
{
    tnt004_ = value;
    tnt004IsSet_ = true;
}

bool Value::tnt004IsSet() const
{
    return tnt004IsSet_;
}

void Value::unsettnt004()
{
    tnt004IsSet_ = false;
}

}
}
}
}
}


