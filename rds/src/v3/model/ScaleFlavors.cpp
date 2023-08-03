

#include "huaweicloud/rds/v3/model/ScaleFlavors.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ScaleFlavors::ScaleFlavors()
{
    code_ = "";
    codeIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
}

ScaleFlavors::~ScaleFlavors() = default;

void ScaleFlavors::validate()
{
}

web::json::value ScaleFlavors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }

    return val;
}

bool ScaleFlavors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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

std::string ScaleFlavors::getCode() const
{
    return code_;
}

void ScaleFlavors::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ScaleFlavors::codeIsSet() const
{
    return codeIsSet_;
}

void ScaleFlavors::unsetcode()
{
    codeIsSet_ = false;
}

std::string ScaleFlavors::getCpu() const
{
    return cpu_;
}

void ScaleFlavors::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ScaleFlavors::cpuIsSet() const
{
    return cpuIsSet_;
}

void ScaleFlavors::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ScaleFlavors::getMem() const
{
    return mem_;
}

void ScaleFlavors::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool ScaleFlavors::memIsSet() const
{
    return memIsSet_;
}

void ScaleFlavors::unsetmem()
{
    memIsSet_ = false;
}

}
}
}
}
}


