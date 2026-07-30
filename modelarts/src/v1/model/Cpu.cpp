

#include "huaweicloud/modelarts/v1/model/Cpu.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Cpu::Cpu()
{
    arch_ = "";
    archIsSet_ = false;
    coreNum_ = 0;
    coreNumIsSet_ = false;
}

Cpu::~Cpu() = default;

void Cpu::validate()
{
}

web::json::value Cpu::toJson() const
{
    web::json::value val = web::json::value::object();

    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(coreNumIsSet_) {
        val[utility::conversions::to_string_t("core_num")] = ModelBase::toJson(coreNum_);
    }

    return val;
}
bool Cpu::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("core_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("core_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoreNum(refVal);
        }
    }
    return ok;
}


std::string Cpu::getArch() const
{
    return arch_;
}

void Cpu::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool Cpu::archIsSet() const
{
    return archIsSet_;
}

void Cpu::unsetarch()
{
    archIsSet_ = false;
}

int32_t Cpu::getCoreNum() const
{
    return coreNum_;
}

void Cpu::setCoreNum(int32_t value)
{
    coreNum_ = value;
    coreNumIsSet_ = true;
}

bool Cpu::coreNumIsSet() const
{
    return coreNumIsSet_;
}

void Cpu::unsetcoreNum()
{
    coreNumIsSet_ = false;
}

}
}
}
}
}


