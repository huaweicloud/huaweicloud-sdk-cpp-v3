

#include "huaweicloud/ecs/v2/model/FlavorExtraSpec.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FlavorExtraSpec::FlavorExtraSpec()
{
    ecsperformancetype_ = "";
    ecsperformancetypeIsSet_ = false;
    hwnumaNodes_ = "";
    hwnumaNodesIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    hpetSupport_ = "";
    hpetSupportIsSet_ = false;
    instanceVnictype_ = "";
    instanceVnictypeIsSet_ = false;
    instanceVnicinstanceBandwidth_ = "";
    instanceVnicinstanceBandwidthIsSet_ = false;
    instanceVnicmaxCount_ = "";
    instanceVnicmaxCountIsSet_ = false;
    quotalocalDisk_ = "";
    quotalocalDiskIsSet_ = false;
    quotanvmeSsd_ = "";
    quotanvmeSsdIsSet_ = false;
    extraSpeciopersistentGrant_ = "";
    extraSpeciopersistentGrantIsSet_ = false;
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
    condoperationchargestop_ = "";
    condoperationchargestopIsSet_ = false;
    condspotoperationaz_ = "";
    condspotoperationazIsSet_ = false;
    condoperationroles_ = "";
    condoperationrolesIsSet_ = false;
    condspotoperationstatus_ = "";
    condspotoperationstatusIsSet_ = false;
    condnetwork_ = "";
    condnetworkIsSet_ = false;
    condstorage_ = "";
    condstorageIsSet_ = false;
    condcomputeliveResizable_ = "";
    condcomputeliveResizableIsSet_ = false;
    condcompute_ = "";
    condcomputeIsSet_ = false;
    infogpuname_ = "";
    infogpunameIsSet_ = false;
    infocpuname_ = "";
    infocpunameIsSet_ = false;
    quotagpu_ = "";
    quotagpuIsSet_ = false;
    ecsinstanceArchitecture_ = "";
    ecsinstanceArchitectureIsSet_ = false;
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
    if(hwnumaNodesIsSet_) {
        val[utility::conversions::to_string_t("hw:numa_nodes")] = ModelBase::toJson(hwnumaNodes_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(hpetSupportIsSet_) {
        val[utility::conversions::to_string_t("hpet_support")] = ModelBase::toJson(hpetSupport_);
    }
    if(instanceVnictypeIsSet_) {
        val[utility::conversions::to_string_t("instance_vnic:type")] = ModelBase::toJson(instanceVnictype_);
    }
    if(instanceVnicinstanceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("instance_vnic:instance_bandwidth")] = ModelBase::toJson(instanceVnicinstanceBandwidth_);
    }
    if(instanceVnicmaxCountIsSet_) {
        val[utility::conversions::to_string_t("instance_vnic:max_count")] = ModelBase::toJson(instanceVnicmaxCount_);
    }
    if(quotalocalDiskIsSet_) {
        val[utility::conversions::to_string_t("quota:local_disk")] = ModelBase::toJson(quotalocalDisk_);
    }
    if(quotanvmeSsdIsSet_) {
        val[utility::conversions::to_string_t("quota:nvme_ssd")] = ModelBase::toJson(quotanvmeSsd_);
    }
    if(extraSpeciopersistentGrantIsSet_) {
        val[utility::conversions::to_string_t("extra_spec:io:persistent_grant")] = ModelBase::toJson(extraSpeciopersistentGrant_);
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
    if(condoperationchargestopIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:charge:stop")] = ModelBase::toJson(condoperationchargestop_);
    }
    if(condspotoperationazIsSet_) {
        val[utility::conversions::to_string_t("cond:spot:operation:az")] = ModelBase::toJson(condspotoperationaz_);
    }
    if(condoperationrolesIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:roles")] = ModelBase::toJson(condoperationroles_);
    }
    if(condspotoperationstatusIsSet_) {
        val[utility::conversions::to_string_t("cond:spot:operation:status")] = ModelBase::toJson(condspotoperationstatus_);
    }
    if(condnetworkIsSet_) {
        val[utility::conversions::to_string_t("cond:network")] = ModelBase::toJson(condnetwork_);
    }
    if(condstorageIsSet_) {
        val[utility::conversions::to_string_t("cond:storage")] = ModelBase::toJson(condstorage_);
    }
    if(condcomputeliveResizableIsSet_) {
        val[utility::conversions::to_string_t("cond:compute:live_resizable")] = ModelBase::toJson(condcomputeliveResizable_);
    }
    if(condcomputeIsSet_) {
        val[utility::conversions::to_string_t("cond:compute")] = ModelBase::toJson(condcompute_);
    }
    if(infogpunameIsSet_) {
        val[utility::conversions::to_string_t("info:gpu:name")] = ModelBase::toJson(infogpuname_);
    }
    if(infocpunameIsSet_) {
        val[utility::conversions::to_string_t("info:cpu:name")] = ModelBase::toJson(infocpuname_);
    }
    if(quotagpuIsSet_) {
        val[utility::conversions::to_string_t("quota:gpu")] = ModelBase::toJson(quotagpu_);
    }
    if(ecsinstanceArchitectureIsSet_) {
        val[utility::conversions::to_string_t("ecs:instance_architecture")] = ModelBase::toJson(ecsinstanceArchitecture_);
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
    if(val.has_field(utility::conversions::to_string_t("hw:numa_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:numa_nodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwnumaNodes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hpet_support"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hpet_support"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpetSupport(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_vnic:type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_vnic:type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceVnictype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_vnic:instance_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_vnic:instance_bandwidth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceVnicinstanceBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_vnic:max_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_vnic:max_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceVnicmaxCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extra_spec:io:persistent_grant"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_spec:io:persistent_grant"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraSpeciopersistentGrant(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cond:operation:charge:stop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:charge:stop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondoperationchargestop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:spot:operation:az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:spot:operation:az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondspotoperationaz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:roles"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondoperationroles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:spot:operation:status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:spot:operation:status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondspotoperationstatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:network"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondnetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:storage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondstorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:compute:live_resizable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:compute:live_resizable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondcomputeliveResizable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:compute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:compute"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondcompute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:gpu:name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:gpu:name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfogpuname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:cpu:name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:cpu:name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfocpuname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:gpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotagpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs:instance_architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:instance_architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsinstanceArchitecture(refVal);
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

std::string FlavorExtraSpec::getHwnumaNodes() const
{
    return hwnumaNodes_;
}

void FlavorExtraSpec::setHwnumaNodes(const std::string& value)
{
    hwnumaNodes_ = value;
    hwnumaNodesIsSet_ = true;
}

bool FlavorExtraSpec::hwnumaNodesIsSet() const
{
    return hwnumaNodesIsSet_;
}

void FlavorExtraSpec::unsethwnumaNodes()
{
    hwnumaNodesIsSet_ = false;
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

std::string FlavorExtraSpec::getHpetSupport() const
{
    return hpetSupport_;
}

void FlavorExtraSpec::setHpetSupport(const std::string& value)
{
    hpetSupport_ = value;
    hpetSupportIsSet_ = true;
}

bool FlavorExtraSpec::hpetSupportIsSet() const
{
    return hpetSupportIsSet_;
}

void FlavorExtraSpec::unsethpetSupport()
{
    hpetSupportIsSet_ = false;
}

std::string FlavorExtraSpec::getInstanceVnictype() const
{
    return instanceVnictype_;
}

void FlavorExtraSpec::setInstanceVnictype(const std::string& value)
{
    instanceVnictype_ = value;
    instanceVnictypeIsSet_ = true;
}

bool FlavorExtraSpec::instanceVnictypeIsSet() const
{
    return instanceVnictypeIsSet_;
}

void FlavorExtraSpec::unsetinstanceVnictype()
{
    instanceVnictypeIsSet_ = false;
}

std::string FlavorExtraSpec::getInstanceVnicinstanceBandwidth() const
{
    return instanceVnicinstanceBandwidth_;
}

void FlavorExtraSpec::setInstanceVnicinstanceBandwidth(const std::string& value)
{
    instanceVnicinstanceBandwidth_ = value;
    instanceVnicinstanceBandwidthIsSet_ = true;
}

bool FlavorExtraSpec::instanceVnicinstanceBandwidthIsSet() const
{
    return instanceVnicinstanceBandwidthIsSet_;
}

void FlavorExtraSpec::unsetinstanceVnicinstanceBandwidth()
{
    instanceVnicinstanceBandwidthIsSet_ = false;
}

std::string FlavorExtraSpec::getInstanceVnicmaxCount() const
{
    return instanceVnicmaxCount_;
}

void FlavorExtraSpec::setInstanceVnicmaxCount(const std::string& value)
{
    instanceVnicmaxCount_ = value;
    instanceVnicmaxCountIsSet_ = true;
}

bool FlavorExtraSpec::instanceVnicmaxCountIsSet() const
{
    return instanceVnicmaxCountIsSet_;
}

void FlavorExtraSpec::unsetinstanceVnicmaxCount()
{
    instanceVnicmaxCountIsSet_ = false;
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

std::string FlavorExtraSpec::getExtraSpeciopersistentGrant() const
{
    return extraSpeciopersistentGrant_;
}

void FlavorExtraSpec::setExtraSpeciopersistentGrant(const std::string& value)
{
    extraSpeciopersistentGrant_ = value;
    extraSpeciopersistentGrantIsSet_ = true;
}

bool FlavorExtraSpec::extraSpeciopersistentGrantIsSet() const
{
    return extraSpeciopersistentGrantIsSet_;
}

void FlavorExtraSpec::unsetextraSpeciopersistentGrant()
{
    extraSpeciopersistentGrantIsSet_ = false;
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

std::string FlavorExtraSpec::getCondoperationchargestop() const
{
    return condoperationchargestop_;
}

void FlavorExtraSpec::setCondoperationchargestop(const std::string& value)
{
    condoperationchargestop_ = value;
    condoperationchargestopIsSet_ = true;
}

bool FlavorExtraSpec::condoperationchargestopIsSet() const
{
    return condoperationchargestopIsSet_;
}

void FlavorExtraSpec::unsetcondoperationchargestop()
{
    condoperationchargestopIsSet_ = false;
}

std::string FlavorExtraSpec::getCondspotoperationaz() const
{
    return condspotoperationaz_;
}

void FlavorExtraSpec::setCondspotoperationaz(const std::string& value)
{
    condspotoperationaz_ = value;
    condspotoperationazIsSet_ = true;
}

bool FlavorExtraSpec::condspotoperationazIsSet() const
{
    return condspotoperationazIsSet_;
}

void FlavorExtraSpec::unsetcondspotoperationaz()
{
    condspotoperationazIsSet_ = false;
}

std::string FlavorExtraSpec::getCondoperationroles() const
{
    return condoperationroles_;
}

void FlavorExtraSpec::setCondoperationroles(const std::string& value)
{
    condoperationroles_ = value;
    condoperationrolesIsSet_ = true;
}

bool FlavorExtraSpec::condoperationrolesIsSet() const
{
    return condoperationrolesIsSet_;
}

void FlavorExtraSpec::unsetcondoperationroles()
{
    condoperationrolesIsSet_ = false;
}

std::string FlavorExtraSpec::getCondspotoperationstatus() const
{
    return condspotoperationstatus_;
}

void FlavorExtraSpec::setCondspotoperationstatus(const std::string& value)
{
    condspotoperationstatus_ = value;
    condspotoperationstatusIsSet_ = true;
}

bool FlavorExtraSpec::condspotoperationstatusIsSet() const
{
    return condspotoperationstatusIsSet_;
}

void FlavorExtraSpec::unsetcondspotoperationstatus()
{
    condspotoperationstatusIsSet_ = false;
}

std::string FlavorExtraSpec::getCondnetwork() const
{
    return condnetwork_;
}

void FlavorExtraSpec::setCondnetwork(const std::string& value)
{
    condnetwork_ = value;
    condnetworkIsSet_ = true;
}

bool FlavorExtraSpec::condnetworkIsSet() const
{
    return condnetworkIsSet_;
}

void FlavorExtraSpec::unsetcondnetwork()
{
    condnetworkIsSet_ = false;
}

std::string FlavorExtraSpec::getCondstorage() const
{
    return condstorage_;
}

void FlavorExtraSpec::setCondstorage(const std::string& value)
{
    condstorage_ = value;
    condstorageIsSet_ = true;
}

bool FlavorExtraSpec::condstorageIsSet() const
{
    return condstorageIsSet_;
}

void FlavorExtraSpec::unsetcondstorage()
{
    condstorageIsSet_ = false;
}

std::string FlavorExtraSpec::getCondcomputeliveResizable() const
{
    return condcomputeliveResizable_;
}

void FlavorExtraSpec::setCondcomputeliveResizable(const std::string& value)
{
    condcomputeliveResizable_ = value;
    condcomputeliveResizableIsSet_ = true;
}

bool FlavorExtraSpec::condcomputeliveResizableIsSet() const
{
    return condcomputeliveResizableIsSet_;
}

void FlavorExtraSpec::unsetcondcomputeliveResizable()
{
    condcomputeliveResizableIsSet_ = false;
}

std::string FlavorExtraSpec::getCondcompute() const
{
    return condcompute_;
}

void FlavorExtraSpec::setCondcompute(const std::string& value)
{
    condcompute_ = value;
    condcomputeIsSet_ = true;
}

bool FlavorExtraSpec::condcomputeIsSet() const
{
    return condcomputeIsSet_;
}

void FlavorExtraSpec::unsetcondcompute()
{
    condcomputeIsSet_ = false;
}

std::string FlavorExtraSpec::getInfogpuname() const
{
    return infogpuname_;
}

void FlavorExtraSpec::setInfogpuname(const std::string& value)
{
    infogpuname_ = value;
    infogpunameIsSet_ = true;
}

bool FlavorExtraSpec::infogpunameIsSet() const
{
    return infogpunameIsSet_;
}

void FlavorExtraSpec::unsetinfogpuname()
{
    infogpunameIsSet_ = false;
}

std::string FlavorExtraSpec::getInfocpuname() const
{
    return infocpuname_;
}

void FlavorExtraSpec::setInfocpuname(const std::string& value)
{
    infocpuname_ = value;
    infocpunameIsSet_ = true;
}

bool FlavorExtraSpec::infocpunameIsSet() const
{
    return infocpunameIsSet_;
}

void FlavorExtraSpec::unsetinfocpuname()
{
    infocpunameIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotagpu() const
{
    return quotagpu_;
}

void FlavorExtraSpec::setQuotagpu(const std::string& value)
{
    quotagpu_ = value;
    quotagpuIsSet_ = true;
}

bool FlavorExtraSpec::quotagpuIsSet() const
{
    return quotagpuIsSet_;
}

void FlavorExtraSpec::unsetquotagpu()
{
    quotagpuIsSet_ = false;
}

std::string FlavorExtraSpec::getEcsinstanceArchitecture() const
{
    return ecsinstanceArchitecture_;
}

void FlavorExtraSpec::setEcsinstanceArchitecture(const std::string& value)
{
    ecsinstanceArchitecture_ = value;
    ecsinstanceArchitectureIsSet_ = true;
}

bool FlavorExtraSpec::ecsinstanceArchitectureIsSet() const
{
    return ecsinstanceArchitectureIsSet_;
}

void FlavorExtraSpec::unsetecsinstanceArchitecture()
{
    ecsinstanceArchitectureIsSet_ = false;
}

}
}
}
}
}


