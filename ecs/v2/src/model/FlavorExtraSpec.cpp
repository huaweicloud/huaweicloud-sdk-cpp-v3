

#include "huaweicloud/ecs/model/FlavorExtraSpec.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FlavorExtraSpec::FlavorExtraSpec()
{
    ecsperformancetype_ = "";
    ecsperformancetypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    quotalocalDisk_ = "";
    quotalocalDiskIsSet_ = false;
    quotanvmeSsd_ = "";
    quotanvmeSsdIsSet_ = false;
    ecsgeneration_ = "";
    ecsgenerationIsSet_ = false;
    ecsvirtualizationEnvTypes_ = "";
    ecsvirtualizationEnvTypesIsSet_ = false;
    pciPassthroughenableGpu_ = "";
    pciPassthroughenableGpuIsSet_ = false;
    pciPassthroughgpuSpecs_ = "";
    pciPassthroughgpuSpecsIsSet_ = false;
    pciPassthroughalias_ = "";
    pciPassthroughaliasIsSet_ = false;
    condoperationstatus_ = "";
    condoperationstatusIsSet_ = false;
    condoperationaz_ = "";
    condoperationazIsSet_ = false;
    quotamaxRate_ = "";
    quotamaxRateIsSet_ = false;
    quotaminRate_ = "";
    quotaminRateIsSet_ = false;
    quotamaxPps_ = "";
    quotamaxPpsIsSet_ = false;
    condoperationcharge_ = "";
    condoperationchargeIsSet_ = false;
}

FlavorExtraSpec::~FlavorExtraSpec() = default;

void FlavorExtraSpec::validate()
{
}

web::json::value FlavorExtraSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ecsperformancetypeIsSet_) {
        val[utility::conversions::to_string_t("ecs:performancetype")] = ModelBase::toJson(ecsperformancetype_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(quotalocalDiskIsSet_) {
        val[utility::conversions::to_string_t("quota:local_disk")] = ModelBase::toJson(quotalocalDisk_);
    }
    if(quotanvmeSsdIsSet_) {
        val[utility::conversions::to_string_t("quota:nvme_ssd")] = ModelBase::toJson(quotanvmeSsd_);
    }
    if(ecsgenerationIsSet_) {
        val[utility::conversions::to_string_t("ecs:generation")] = ModelBase::toJson(ecsgeneration_);
    }
    if(ecsvirtualizationEnvTypesIsSet_) {
        val[utility::conversions::to_string_t("ecs:virtualization_env_types")] = ModelBase::toJson(ecsvirtualizationEnvTypes_);
    }
    if(pciPassthroughenableGpuIsSet_) {
        val[utility::conversions::to_string_t("pci_passthrough:enable_gpu")] = ModelBase::toJson(pciPassthroughenableGpu_);
    }
    if(pciPassthroughgpuSpecsIsSet_) {
        val[utility::conversions::to_string_t("pci_passthrough:gpu_specs")] = ModelBase::toJson(pciPassthroughgpuSpecs_);
    }
    if(pciPassthroughaliasIsSet_) {
        val[utility::conversions::to_string_t("pci_passthrough:alias")] = ModelBase::toJson(pciPassthroughalias_);
    }
    if(condoperationstatusIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:status")] = ModelBase::toJson(condoperationstatus_);
    }
    if(condoperationazIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:az")] = ModelBase::toJson(condoperationaz_);
    }
    if(quotamaxRateIsSet_) {
        val[utility::conversions::to_string_t("quota:max_rate")] = ModelBase::toJson(quotamaxRate_);
    }
    if(quotaminRateIsSet_) {
        val[utility::conversions::to_string_t("quota:min_rate")] = ModelBase::toJson(quotaminRate_);
    }
    if(quotamaxPpsIsSet_) {
        val[utility::conversions::to_string_t("quota:max_pps")] = ModelBase::toJson(quotamaxPps_);
    }
    if(condoperationchargeIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:charge")] = ModelBase::toJson(condoperationcharge_);
    }

    return val;
}

bool FlavorExtraSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ecs:performancetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:performancetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsperformancetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:local_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:local_disk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotalocalDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:nvme_ssd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:nvme_ssd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotanvmeSsd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs:generation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:generation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsgeneration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs:virtualization_env_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:virtualization_env_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsvirtualizationEnvTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_passthrough:enable_gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_passthrough:enable_gpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciPassthroughenableGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_passthrough:gpu_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_passthrough:gpu_specs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciPassthroughgpuSpecs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_passthrough:alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_passthrough:alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciPassthroughalias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondoperationstatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondoperationaz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:max_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:max_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotamaxRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:min_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:min_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaminRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:max_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:max_pps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotamaxPps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:charge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:charge"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondoperationcharge(refVal);
        }
    }
    return ok;
}


std::string FlavorExtraSpec::getEcsperformancetype() const
{
    return ecsperformancetype_;
}

void FlavorExtraSpec::setEcsperformancetype(const std::string& value)
{
    ecsperformancetype_ = value;
    ecsperformancetypeIsSet_ = true;
}

bool FlavorExtraSpec::ecsperformancetypeIsSet() const
{
    return ecsperformancetypeIsSet_;
}

void FlavorExtraSpec::unsetecsperformancetype()
{
    ecsperformancetypeIsSet_ = false;
}

std::string FlavorExtraSpec::getResourceType() const
{
    return resourceType_;
}

void FlavorExtraSpec::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool FlavorExtraSpec::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void FlavorExtraSpec::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotalocalDisk() const
{
    return quotalocalDisk_;
}

void FlavorExtraSpec::setQuotalocalDisk(const std::string& value)
{
    quotalocalDisk_ = value;
    quotalocalDiskIsSet_ = true;
}

bool FlavorExtraSpec::quotalocalDiskIsSet() const
{
    return quotalocalDiskIsSet_;
}

void FlavorExtraSpec::unsetquotalocalDisk()
{
    quotalocalDiskIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotanvmeSsd() const
{
    return quotanvmeSsd_;
}

void FlavorExtraSpec::setQuotanvmeSsd(const std::string& value)
{
    quotanvmeSsd_ = value;
    quotanvmeSsdIsSet_ = true;
}

bool FlavorExtraSpec::quotanvmeSsdIsSet() const
{
    return quotanvmeSsdIsSet_;
}

void FlavorExtraSpec::unsetquotanvmeSsd()
{
    quotanvmeSsdIsSet_ = false;
}

std::string FlavorExtraSpec::getEcsgeneration() const
{
    return ecsgeneration_;
}

void FlavorExtraSpec::setEcsgeneration(const std::string& value)
{
    ecsgeneration_ = value;
    ecsgenerationIsSet_ = true;
}

bool FlavorExtraSpec::ecsgenerationIsSet() const
{
    return ecsgenerationIsSet_;
}

void FlavorExtraSpec::unsetecsgeneration()
{
    ecsgenerationIsSet_ = false;
}

std::string FlavorExtraSpec::getEcsvirtualizationEnvTypes() const
{
    return ecsvirtualizationEnvTypes_;
}

void FlavorExtraSpec::setEcsvirtualizationEnvTypes(const std::string& value)
{
    ecsvirtualizationEnvTypes_ = value;
    ecsvirtualizationEnvTypesIsSet_ = true;
}

bool FlavorExtraSpec::ecsvirtualizationEnvTypesIsSet() const
{
    return ecsvirtualizationEnvTypesIsSet_;
}

void FlavorExtraSpec::unsetecsvirtualizationEnvTypes()
{
    ecsvirtualizationEnvTypesIsSet_ = false;
}

std::string FlavorExtraSpec::getPciPassthroughenableGpu() const
{
    return pciPassthroughenableGpu_;
}

void FlavorExtraSpec::setPciPassthroughenableGpu(const std::string& value)
{
    pciPassthroughenableGpu_ = value;
    pciPassthroughenableGpuIsSet_ = true;
}

bool FlavorExtraSpec::pciPassthroughenableGpuIsSet() const
{
    return pciPassthroughenableGpuIsSet_;
}

void FlavorExtraSpec::unsetpciPassthroughenableGpu()
{
    pciPassthroughenableGpuIsSet_ = false;
}

std::string FlavorExtraSpec::getPciPassthroughgpuSpecs() const
{
    return pciPassthroughgpuSpecs_;
}

void FlavorExtraSpec::setPciPassthroughgpuSpecs(const std::string& value)
{
    pciPassthroughgpuSpecs_ = value;
    pciPassthroughgpuSpecsIsSet_ = true;
}

bool FlavorExtraSpec::pciPassthroughgpuSpecsIsSet() const
{
    return pciPassthroughgpuSpecsIsSet_;
}

void FlavorExtraSpec::unsetpciPassthroughgpuSpecs()
{
    pciPassthroughgpuSpecsIsSet_ = false;
}

std::string FlavorExtraSpec::getPciPassthroughalias() const
{
    return pciPassthroughalias_;
}

void FlavorExtraSpec::setPciPassthroughalias(const std::string& value)
{
    pciPassthroughalias_ = value;
    pciPassthroughaliasIsSet_ = true;
}

bool FlavorExtraSpec::pciPassthroughaliasIsSet() const
{
    return pciPassthroughaliasIsSet_;
}

void FlavorExtraSpec::unsetpciPassthroughalias()
{
    pciPassthroughaliasIsSet_ = false;
}

std::string FlavorExtraSpec::getCondoperationstatus() const
{
    return condoperationstatus_;
}

void FlavorExtraSpec::setCondoperationstatus(const std::string& value)
{
    condoperationstatus_ = value;
    condoperationstatusIsSet_ = true;
}

bool FlavorExtraSpec::condoperationstatusIsSet() const
{
    return condoperationstatusIsSet_;
}

void FlavorExtraSpec::unsetcondoperationstatus()
{
    condoperationstatusIsSet_ = false;
}

std::string FlavorExtraSpec::getCondoperationaz() const
{
    return condoperationaz_;
}

void FlavorExtraSpec::setCondoperationaz(const std::string& value)
{
    condoperationaz_ = value;
    condoperationazIsSet_ = true;
}

bool FlavorExtraSpec::condoperationazIsSet() const
{
    return condoperationazIsSet_;
}

void FlavorExtraSpec::unsetcondoperationaz()
{
    condoperationazIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotamaxRate() const
{
    return quotamaxRate_;
}

void FlavorExtraSpec::setQuotamaxRate(const std::string& value)
{
    quotamaxRate_ = value;
    quotamaxRateIsSet_ = true;
}

bool FlavorExtraSpec::quotamaxRateIsSet() const
{
    return quotamaxRateIsSet_;
}

void FlavorExtraSpec::unsetquotamaxRate()
{
    quotamaxRateIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaminRate() const
{
    return quotaminRate_;
}

void FlavorExtraSpec::setQuotaminRate(const std::string& value)
{
    quotaminRate_ = value;
    quotaminRateIsSet_ = true;
}

bool FlavorExtraSpec::quotaminRateIsSet() const
{
    return quotaminRateIsSet_;
}

void FlavorExtraSpec::unsetquotaminRate()
{
    quotaminRateIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotamaxPps() const
{
    return quotamaxPps_;
}

void FlavorExtraSpec::setQuotamaxPps(const std::string& value)
{
    quotamaxPps_ = value;
    quotamaxPpsIsSet_ = true;
}

bool FlavorExtraSpec::quotamaxPpsIsSet() const
{
    return quotamaxPpsIsSet_;
}

void FlavorExtraSpec::unsetquotamaxPps()
{
    quotamaxPpsIsSet_ = false;
}

std::string FlavorExtraSpec::getCondoperationcharge() const
{
    return condoperationcharge_;
}

void FlavorExtraSpec::setCondoperationcharge(const std::string& value)
{
    condoperationcharge_ = value;
    condoperationchargeIsSet_ = true;
}

bool FlavorExtraSpec::condoperationchargeIsSet() const
{
    return condoperationchargeIsSet_;
}

void FlavorExtraSpec::unsetcondoperationcharge()
{
    condoperationchargeIsSet_ = false;
}

}
}
}
}
}


