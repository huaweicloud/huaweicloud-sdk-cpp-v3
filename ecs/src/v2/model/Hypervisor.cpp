

#include "huaweicloud/ecs/v2/model/Hypervisor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




Hypervisor::Hypervisor()
{
    hypervisorType_ = "";
    hypervisorTypeIsSet_ = false;
    csdHypervisor_ = "";
    csdHypervisorIsSet_ = false;
}

Hypervisor::~Hypervisor() = default;

void Hypervisor::validate()
{
}

web::json::value Hypervisor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hypervisorTypeIsSet_) {
        val[utility::conversions::to_string_t("hypervisor_type")] = ModelBase::toJson(hypervisorType_);
    }
    if(csdHypervisorIsSet_) {
        val[utility::conversions::to_string_t("csd_hypervisor")] = ModelBase::toJson(csdHypervisor_);
    }

    return val;
}

bool Hypervisor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hypervisor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hypervisor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHypervisorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("csd_hypervisor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("csd_hypervisor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCsdHypervisor(refVal);
        }
    }
    return ok;
}

std::string Hypervisor::getHypervisorType() const
{
    return hypervisorType_;
}

void Hypervisor::setHypervisorType(const std::string& value)
{
    hypervisorType_ = value;
    hypervisorTypeIsSet_ = true;
}

bool Hypervisor::hypervisorTypeIsSet() const
{
    return hypervisorTypeIsSet_;
}

void Hypervisor::unsethypervisorType()
{
    hypervisorTypeIsSet_ = false;
}

std::string Hypervisor::getCsdHypervisor() const
{
    return csdHypervisor_;
}

void Hypervisor::setCsdHypervisor(const std::string& value)
{
    csdHypervisor_ = value;
    csdHypervisorIsSet_ = true;
}

bool Hypervisor::csdHypervisorIsSet() const
{
    return csdHypervisorIsSet_;
}

void Hypervisor::unsetcsdHypervisor()
{
    csdHypervisorIsSet_ = false;
}

}
}
}
}
}


