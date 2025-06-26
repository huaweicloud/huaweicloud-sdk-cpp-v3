

#include "huaweicloud/ecs/v2/model/FlavorExtraSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FlavorExtraSpec::FlavorExtraSpec()
{
    ecsPerformancetype_ = "";
    ecsPerformancetypeIsSet_ = false;
    hwNumaNodes_ = "";
    hwNumaNodesIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    hpetSupport_ = "";
    hpetSupportIsSet_ = false;
    instanceVnicType_ = "";
    instanceVnicTypeIsSet_ = false;
    instanceVnicInstanceBandwidth_ = "";
    instanceVnicInstanceBandwidthIsSet_ = false;
    instanceVnicMaxCount_ = "";
    instanceVnicMaxCountIsSet_ = false;
    quotaLocalDisk_ = "";
    quotaLocalDiskIsSet_ = false;
    quotaNvmeSsd_ = "";
    quotaNvmeSsdIsSet_ = false;
    extraSpecIoPersistentGrant_ = "";
    extraSpecIoPersistentGrantIsSet_ = false;
    ecsGeneration_ = "";
    ecsGenerationIsSet_ = false;
    ecsVirtualizationEnvTypes_ = "";
    ecsVirtualizationEnvTypesIsSet_ = false;
    pciPassthroughEnableGpu_ = "";
    pciPassthroughEnableGpuIsSet_ = false;
    pciPassthroughGpuSpecs_ = "";
    pciPassthroughGpuSpecsIsSet_ = false;
    pciPassthroughAlias_ = "";
    pciPassthroughAliasIsSet_ = false;
    condOperationStatus_ = "";
    condOperationStatusIsSet_ = false;
    condOperationAz_ = "";
    condOperationAzIsSet_ = false;
    quotaMaxRate_ = "";
    quotaMaxRateIsSet_ = false;
    quotaMinRate_ = "";
    quotaMinRateIsSet_ = false;
    quotaMaxPps_ = "";
    quotaMaxPpsIsSet_ = false;
    condOperationCharge_ = "";
    condOperationChargeIsSet_ = false;
    condOperationChargeStop_ = "";
    condOperationChargeStopIsSet_ = false;
    condSpotOperationAz_ = "";
    condSpotOperationAzIsSet_ = false;
    condOperationRoles_ = "";
    condOperationRolesIsSet_ = false;
    condSpotOperationStatus_ = "";
    condSpotOperationStatusIsSet_ = false;
    condNetwork_ = "";
    condNetworkIsSet_ = false;
    condStorage_ = "";
    condStorageIsSet_ = false;
    condStorageType_ = "";
    condStorageTypeIsSet_ = false;
    condComputeLiveResizable_ = "";
    condComputeLiveResizableIsSet_ = false;
    condCompute_ = "";
    condComputeIsSet_ = false;
    infoGpuName_ = "";
    infoGpuNameIsSet_ = false;
    infoCpuName_ = "";
    infoCpuNameIsSet_ = false;
    quotaGpu_ = "";
    quotaGpuIsSet_ = false;
    quotaVifMaxNum_ = "";
    quotaVifMaxNumIsSet_ = false;
    quotaSubNetworkInterfaceMaxNum_ = "";
    quotaSubNetworkInterfaceMaxNumIsSet_ = false;
    ecsInstanceArchitecture_ = "";
    ecsInstanceArchitectureIsSet_ = false;
    networkInterfaceTrafficMirroringSupported_ = "";
    networkInterfaceTrafficMirroringSupportedIsSet_ = false;
    securityEnclaveSupported_ = "";
    securityEnclaveSupportedIsSet_ = false;
    infoGpus_ = "";
    infoGpusIsSet_ = false;
    infoAsicAccelerators_ = "";
    infoAsicAcceleratorsIsSet_ = false;
    infoFeatures_ = "";
    infoFeaturesIsSet_ = false;
}

FlavorExtraSpec::~FlavorExtraSpec() = default;

void FlavorExtraSpec::validate()
{
}

web::json::value FlavorExtraSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ecsPerformancetypeIsSet_) {
        val[utility::conversions::to_string_t("ecs:performancetype")] = ModelBase::toJson(ecsPerformancetype_);
    }
    if(hwNumaNodesIsSet_) {
        val[utility::conversions::to_string_t("hw:numa_nodes")] = ModelBase::toJson(hwNumaNodes_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(hpetSupportIsSet_) {
        val[utility::conversions::to_string_t("hpet_support")] = ModelBase::toJson(hpetSupport_);
    }
    if(instanceVnicTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_vnic:type")] = ModelBase::toJson(instanceVnicType_);
    }
    if(instanceVnicInstanceBandwidthIsSet_) {
        val[utility::conversions::to_string_t("instance_vnic:instance_bandwidth")] = ModelBase::toJson(instanceVnicInstanceBandwidth_);
    }
    if(instanceVnicMaxCountIsSet_) {
        val[utility::conversions::to_string_t("instance_vnic:max_count")] = ModelBase::toJson(instanceVnicMaxCount_);
    }
    if(quotaLocalDiskIsSet_) {
        val[utility::conversions::to_string_t("quota:local_disk")] = ModelBase::toJson(quotaLocalDisk_);
    }
    if(quotaNvmeSsdIsSet_) {
        val[utility::conversions::to_string_t("quota:nvme_ssd")] = ModelBase::toJson(quotaNvmeSsd_);
    }
    if(extraSpecIoPersistentGrantIsSet_) {
        val[utility::conversions::to_string_t("extra_spec:io:persistent_grant")] = ModelBase::toJson(extraSpecIoPersistentGrant_);
    }
    if(ecsGenerationIsSet_) {
        val[utility::conversions::to_string_t("ecs:generation")] = ModelBase::toJson(ecsGeneration_);
    }
    if(ecsVirtualizationEnvTypesIsSet_) {
        val[utility::conversions::to_string_t("ecs:virtualization_env_types")] = ModelBase::toJson(ecsVirtualizationEnvTypes_);
    }
    if(pciPassthroughEnableGpuIsSet_) {
        val[utility::conversions::to_string_t("pci_passthrough:enable_gpu")] = ModelBase::toJson(pciPassthroughEnableGpu_);
    }
    if(pciPassthroughGpuSpecsIsSet_) {
        val[utility::conversions::to_string_t("pci_passthrough:gpu_specs")] = ModelBase::toJson(pciPassthroughGpuSpecs_);
    }
    if(pciPassthroughAliasIsSet_) {
        val[utility::conversions::to_string_t("pci_passthrough:alias")] = ModelBase::toJson(pciPassthroughAlias_);
    }
    if(condOperationStatusIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:status")] = ModelBase::toJson(condOperationStatus_);
    }
    if(condOperationAzIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:az")] = ModelBase::toJson(condOperationAz_);
    }
    if(quotaMaxRateIsSet_) {
        val[utility::conversions::to_string_t("quota:max_rate")] = ModelBase::toJson(quotaMaxRate_);
    }
    if(quotaMinRateIsSet_) {
        val[utility::conversions::to_string_t("quota:min_rate")] = ModelBase::toJson(quotaMinRate_);
    }
    if(quotaMaxPpsIsSet_) {
        val[utility::conversions::to_string_t("quota:max_pps")] = ModelBase::toJson(quotaMaxPps_);
    }
    if(condOperationChargeIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:charge")] = ModelBase::toJson(condOperationCharge_);
    }
    if(condOperationChargeStopIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:charge:stop")] = ModelBase::toJson(condOperationChargeStop_);
    }
    if(condSpotOperationAzIsSet_) {
        val[utility::conversions::to_string_t("cond:spot:operation:az")] = ModelBase::toJson(condSpotOperationAz_);
    }
    if(condOperationRolesIsSet_) {
        val[utility::conversions::to_string_t("cond:operation:roles")] = ModelBase::toJson(condOperationRoles_);
    }
    if(condSpotOperationStatusIsSet_) {
        val[utility::conversions::to_string_t("cond:spot:operation:status")] = ModelBase::toJson(condSpotOperationStatus_);
    }
    if(condNetworkIsSet_) {
        val[utility::conversions::to_string_t("cond:network")] = ModelBase::toJson(condNetwork_);
    }
    if(condStorageIsSet_) {
        val[utility::conversions::to_string_t("cond:storage")] = ModelBase::toJson(condStorage_);
    }
    if(condStorageTypeIsSet_) {
        val[utility::conversions::to_string_t("cond:storage:type")] = ModelBase::toJson(condStorageType_);
    }
    if(condComputeLiveResizableIsSet_) {
        val[utility::conversions::to_string_t("cond:compute:live_resizable")] = ModelBase::toJson(condComputeLiveResizable_);
    }
    if(condComputeIsSet_) {
        val[utility::conversions::to_string_t("cond:compute")] = ModelBase::toJson(condCompute_);
    }
    if(infoGpuNameIsSet_) {
        val[utility::conversions::to_string_t("info:gpu:name")] = ModelBase::toJson(infoGpuName_);
    }
    if(infoCpuNameIsSet_) {
        val[utility::conversions::to_string_t("info:cpu:name")] = ModelBase::toJson(infoCpuName_);
    }
    if(quotaGpuIsSet_) {
        val[utility::conversions::to_string_t("quota:gpu")] = ModelBase::toJson(quotaGpu_);
    }
    if(quotaVifMaxNumIsSet_) {
        val[utility::conversions::to_string_t("quota:vif_max_num")] = ModelBase::toJson(quotaVifMaxNum_);
    }
    if(quotaSubNetworkInterfaceMaxNumIsSet_) {
        val[utility::conversions::to_string_t("quota:sub_network_interface_max_num")] = ModelBase::toJson(quotaSubNetworkInterfaceMaxNum_);
    }
    if(ecsInstanceArchitectureIsSet_) {
        val[utility::conversions::to_string_t("ecs:instance_architecture")] = ModelBase::toJson(ecsInstanceArchitecture_);
    }
    if(networkInterfaceTrafficMirroringSupportedIsSet_) {
        val[utility::conversions::to_string_t("network_interface:traffic_mirroring_supported")] = ModelBase::toJson(networkInterfaceTrafficMirroringSupported_);
    }
    if(securityEnclaveSupportedIsSet_) {
        val[utility::conversions::to_string_t("security:enclave_supported")] = ModelBase::toJson(securityEnclaveSupported_);
    }
    if(infoGpusIsSet_) {
        val[utility::conversions::to_string_t("info:gpus")] = ModelBase::toJson(infoGpus_);
    }
    if(infoAsicAcceleratorsIsSet_) {
        val[utility::conversions::to_string_t("info:asic_accelerators")] = ModelBase::toJson(infoAsicAccelerators_);
    }
    if(infoFeaturesIsSet_) {
        val[utility::conversions::to_string_t("info:features")] = ModelBase::toJson(infoFeatures_);
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
            setEcsPerformancetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw:numa_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:numa_nodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwNumaNodes(refVal);
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
            setInstanceVnicType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_vnic:instance_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_vnic:instance_bandwidth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceVnicInstanceBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_vnic:max_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_vnic:max_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceVnicMaxCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:local_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:local_disk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaLocalDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:nvme_ssd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:nvme_ssd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaNvmeSsd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_spec:io:persistent_grant"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_spec:io:persistent_grant"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraSpecIoPersistentGrant(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs:generation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:generation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsGeneration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs:virtualization_env_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:virtualization_env_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsVirtualizationEnvTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_passthrough:enable_gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_passthrough:enable_gpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciPassthroughEnableGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_passthrough:gpu_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_passthrough:gpu_specs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciPassthroughGpuSpecs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pci_passthrough:alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pci_passthrough:alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPciPassthroughAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondOperationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondOperationAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:max_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:max_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaMaxRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:min_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:min_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaMinRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:max_pps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:max_pps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaMaxPps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:charge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:charge"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondOperationCharge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:charge:stop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:charge:stop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondOperationChargeStop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:spot:operation:az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:spot:operation:az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondSpotOperationAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:operation:roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:operation:roles"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondOperationRoles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:spot:operation:status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:spot:operation:status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondSpotOperationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:network"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:storage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:storage:type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:storage:type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondStorageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:compute:live_resizable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:compute:live_resizable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondComputeLiveResizable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cond:compute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cond:compute"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondCompute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:gpu:name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:gpu:name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfoGpuName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:cpu:name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:cpu:name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfoCpuName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:gpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:gpu"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaGpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:vif_max_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:vif_max_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaVifMaxNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota:sub_network_interface_max_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota:sub_network_interface_max_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotaSubNetworkInterfaceMaxNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecs:instance_architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs:instance_architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsInstanceArchitecture(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_interface:traffic_mirroring_supported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_interface:traffic_mirroring_supported"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkInterfaceTrafficMirroringSupported(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security:enclave_supported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security:enclave_supported"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityEnclaveSupported(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:gpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:gpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfoGpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:asic_accelerators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:asic_accelerators"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfoAsicAccelerators(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("info:features"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info:features"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfoFeatures(refVal);
        }
    }
    return ok;
}


std::string FlavorExtraSpec::getEcsPerformancetype() const
{
    return ecsPerformancetype_;
}

void FlavorExtraSpec::setEcsPerformancetype(const std::string& value)
{
    ecsPerformancetype_ = value;
    ecsPerformancetypeIsSet_ = true;
}

bool FlavorExtraSpec::ecsPerformancetypeIsSet() const
{
    return ecsPerformancetypeIsSet_;
}

void FlavorExtraSpec::unsetecsPerformancetype()
{
    ecsPerformancetypeIsSet_ = false;
}

std::string FlavorExtraSpec::getHwNumaNodes() const
{
    return hwNumaNodes_;
}

void FlavorExtraSpec::setHwNumaNodes(const std::string& value)
{
    hwNumaNodes_ = value;
    hwNumaNodesIsSet_ = true;
}

bool FlavorExtraSpec::hwNumaNodesIsSet() const
{
    return hwNumaNodesIsSet_;
}

void FlavorExtraSpec::unsethwNumaNodes()
{
    hwNumaNodesIsSet_ = false;
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

std::string FlavorExtraSpec::getInstanceVnicType() const
{
    return instanceVnicType_;
}

void FlavorExtraSpec::setInstanceVnicType(const std::string& value)
{
    instanceVnicType_ = value;
    instanceVnicTypeIsSet_ = true;
}

bool FlavorExtraSpec::instanceVnicTypeIsSet() const
{
    return instanceVnicTypeIsSet_;
}

void FlavorExtraSpec::unsetinstanceVnicType()
{
    instanceVnicTypeIsSet_ = false;
}

std::string FlavorExtraSpec::getInstanceVnicInstanceBandwidth() const
{
    return instanceVnicInstanceBandwidth_;
}

void FlavorExtraSpec::setInstanceVnicInstanceBandwidth(const std::string& value)
{
    instanceVnicInstanceBandwidth_ = value;
    instanceVnicInstanceBandwidthIsSet_ = true;
}

bool FlavorExtraSpec::instanceVnicInstanceBandwidthIsSet() const
{
    return instanceVnicInstanceBandwidthIsSet_;
}

void FlavorExtraSpec::unsetinstanceVnicInstanceBandwidth()
{
    instanceVnicInstanceBandwidthIsSet_ = false;
}

std::string FlavorExtraSpec::getInstanceVnicMaxCount() const
{
    return instanceVnicMaxCount_;
}

void FlavorExtraSpec::setInstanceVnicMaxCount(const std::string& value)
{
    instanceVnicMaxCount_ = value;
    instanceVnicMaxCountIsSet_ = true;
}

bool FlavorExtraSpec::instanceVnicMaxCountIsSet() const
{
    return instanceVnicMaxCountIsSet_;
}

void FlavorExtraSpec::unsetinstanceVnicMaxCount()
{
    instanceVnicMaxCountIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaLocalDisk() const
{
    return quotaLocalDisk_;
}

void FlavorExtraSpec::setQuotaLocalDisk(const std::string& value)
{
    quotaLocalDisk_ = value;
    quotaLocalDiskIsSet_ = true;
}

bool FlavorExtraSpec::quotaLocalDiskIsSet() const
{
    return quotaLocalDiskIsSet_;
}

void FlavorExtraSpec::unsetquotaLocalDisk()
{
    quotaLocalDiskIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaNvmeSsd() const
{
    return quotaNvmeSsd_;
}

void FlavorExtraSpec::setQuotaNvmeSsd(const std::string& value)
{
    quotaNvmeSsd_ = value;
    quotaNvmeSsdIsSet_ = true;
}

bool FlavorExtraSpec::quotaNvmeSsdIsSet() const
{
    return quotaNvmeSsdIsSet_;
}

void FlavorExtraSpec::unsetquotaNvmeSsd()
{
    quotaNvmeSsdIsSet_ = false;
}

std::string FlavorExtraSpec::getExtraSpecIoPersistentGrant() const
{
    return extraSpecIoPersistentGrant_;
}

void FlavorExtraSpec::setExtraSpecIoPersistentGrant(const std::string& value)
{
    extraSpecIoPersistentGrant_ = value;
    extraSpecIoPersistentGrantIsSet_ = true;
}

bool FlavorExtraSpec::extraSpecIoPersistentGrantIsSet() const
{
    return extraSpecIoPersistentGrantIsSet_;
}

void FlavorExtraSpec::unsetextraSpecIoPersistentGrant()
{
    extraSpecIoPersistentGrantIsSet_ = false;
}

std::string FlavorExtraSpec::getEcsGeneration() const
{
    return ecsGeneration_;
}

void FlavorExtraSpec::setEcsGeneration(const std::string& value)
{
    ecsGeneration_ = value;
    ecsGenerationIsSet_ = true;
}

bool FlavorExtraSpec::ecsGenerationIsSet() const
{
    return ecsGenerationIsSet_;
}

void FlavorExtraSpec::unsetecsGeneration()
{
    ecsGenerationIsSet_ = false;
}

std::string FlavorExtraSpec::getEcsVirtualizationEnvTypes() const
{
    return ecsVirtualizationEnvTypes_;
}

void FlavorExtraSpec::setEcsVirtualizationEnvTypes(const std::string& value)
{
    ecsVirtualizationEnvTypes_ = value;
    ecsVirtualizationEnvTypesIsSet_ = true;
}

bool FlavorExtraSpec::ecsVirtualizationEnvTypesIsSet() const
{
    return ecsVirtualizationEnvTypesIsSet_;
}

void FlavorExtraSpec::unsetecsVirtualizationEnvTypes()
{
    ecsVirtualizationEnvTypesIsSet_ = false;
}

std::string FlavorExtraSpec::getPciPassthroughEnableGpu() const
{
    return pciPassthroughEnableGpu_;
}

void FlavorExtraSpec::setPciPassthroughEnableGpu(const std::string& value)
{
    pciPassthroughEnableGpu_ = value;
    pciPassthroughEnableGpuIsSet_ = true;
}

bool FlavorExtraSpec::pciPassthroughEnableGpuIsSet() const
{
    return pciPassthroughEnableGpuIsSet_;
}

void FlavorExtraSpec::unsetpciPassthroughEnableGpu()
{
    pciPassthroughEnableGpuIsSet_ = false;
}

std::string FlavorExtraSpec::getPciPassthroughGpuSpecs() const
{
    return pciPassthroughGpuSpecs_;
}

void FlavorExtraSpec::setPciPassthroughGpuSpecs(const std::string& value)
{
    pciPassthroughGpuSpecs_ = value;
    pciPassthroughGpuSpecsIsSet_ = true;
}

bool FlavorExtraSpec::pciPassthroughGpuSpecsIsSet() const
{
    return pciPassthroughGpuSpecsIsSet_;
}

void FlavorExtraSpec::unsetpciPassthroughGpuSpecs()
{
    pciPassthroughGpuSpecsIsSet_ = false;
}

std::string FlavorExtraSpec::getPciPassthroughAlias() const
{
    return pciPassthroughAlias_;
}

void FlavorExtraSpec::setPciPassthroughAlias(const std::string& value)
{
    pciPassthroughAlias_ = value;
    pciPassthroughAliasIsSet_ = true;
}

bool FlavorExtraSpec::pciPassthroughAliasIsSet() const
{
    return pciPassthroughAliasIsSet_;
}

void FlavorExtraSpec::unsetpciPassthroughAlias()
{
    pciPassthroughAliasIsSet_ = false;
}

std::string FlavorExtraSpec::getCondOperationStatus() const
{
    return condOperationStatus_;
}

void FlavorExtraSpec::setCondOperationStatus(const std::string& value)
{
    condOperationStatus_ = value;
    condOperationStatusIsSet_ = true;
}

bool FlavorExtraSpec::condOperationStatusIsSet() const
{
    return condOperationStatusIsSet_;
}

void FlavorExtraSpec::unsetcondOperationStatus()
{
    condOperationStatusIsSet_ = false;
}

std::string FlavorExtraSpec::getCondOperationAz() const
{
    return condOperationAz_;
}

void FlavorExtraSpec::setCondOperationAz(const std::string& value)
{
    condOperationAz_ = value;
    condOperationAzIsSet_ = true;
}

bool FlavorExtraSpec::condOperationAzIsSet() const
{
    return condOperationAzIsSet_;
}

void FlavorExtraSpec::unsetcondOperationAz()
{
    condOperationAzIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaMaxRate() const
{
    return quotaMaxRate_;
}

void FlavorExtraSpec::setQuotaMaxRate(const std::string& value)
{
    quotaMaxRate_ = value;
    quotaMaxRateIsSet_ = true;
}

bool FlavorExtraSpec::quotaMaxRateIsSet() const
{
    return quotaMaxRateIsSet_;
}

void FlavorExtraSpec::unsetquotaMaxRate()
{
    quotaMaxRateIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaMinRate() const
{
    return quotaMinRate_;
}

void FlavorExtraSpec::setQuotaMinRate(const std::string& value)
{
    quotaMinRate_ = value;
    quotaMinRateIsSet_ = true;
}

bool FlavorExtraSpec::quotaMinRateIsSet() const
{
    return quotaMinRateIsSet_;
}

void FlavorExtraSpec::unsetquotaMinRate()
{
    quotaMinRateIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaMaxPps() const
{
    return quotaMaxPps_;
}

void FlavorExtraSpec::setQuotaMaxPps(const std::string& value)
{
    quotaMaxPps_ = value;
    quotaMaxPpsIsSet_ = true;
}

bool FlavorExtraSpec::quotaMaxPpsIsSet() const
{
    return quotaMaxPpsIsSet_;
}

void FlavorExtraSpec::unsetquotaMaxPps()
{
    quotaMaxPpsIsSet_ = false;
}

std::string FlavorExtraSpec::getCondOperationCharge() const
{
    return condOperationCharge_;
}

void FlavorExtraSpec::setCondOperationCharge(const std::string& value)
{
    condOperationCharge_ = value;
    condOperationChargeIsSet_ = true;
}

bool FlavorExtraSpec::condOperationChargeIsSet() const
{
    return condOperationChargeIsSet_;
}

void FlavorExtraSpec::unsetcondOperationCharge()
{
    condOperationChargeIsSet_ = false;
}

std::string FlavorExtraSpec::getCondOperationChargeStop() const
{
    return condOperationChargeStop_;
}

void FlavorExtraSpec::setCondOperationChargeStop(const std::string& value)
{
    condOperationChargeStop_ = value;
    condOperationChargeStopIsSet_ = true;
}

bool FlavorExtraSpec::condOperationChargeStopIsSet() const
{
    return condOperationChargeStopIsSet_;
}

void FlavorExtraSpec::unsetcondOperationChargeStop()
{
    condOperationChargeStopIsSet_ = false;
}

std::string FlavorExtraSpec::getCondSpotOperationAz() const
{
    return condSpotOperationAz_;
}

void FlavorExtraSpec::setCondSpotOperationAz(const std::string& value)
{
    condSpotOperationAz_ = value;
    condSpotOperationAzIsSet_ = true;
}

bool FlavorExtraSpec::condSpotOperationAzIsSet() const
{
    return condSpotOperationAzIsSet_;
}

void FlavorExtraSpec::unsetcondSpotOperationAz()
{
    condSpotOperationAzIsSet_ = false;
}

std::string FlavorExtraSpec::getCondOperationRoles() const
{
    return condOperationRoles_;
}

void FlavorExtraSpec::setCondOperationRoles(const std::string& value)
{
    condOperationRoles_ = value;
    condOperationRolesIsSet_ = true;
}

bool FlavorExtraSpec::condOperationRolesIsSet() const
{
    return condOperationRolesIsSet_;
}

void FlavorExtraSpec::unsetcondOperationRoles()
{
    condOperationRolesIsSet_ = false;
}

std::string FlavorExtraSpec::getCondSpotOperationStatus() const
{
    return condSpotOperationStatus_;
}

void FlavorExtraSpec::setCondSpotOperationStatus(const std::string& value)
{
    condSpotOperationStatus_ = value;
    condSpotOperationStatusIsSet_ = true;
}

bool FlavorExtraSpec::condSpotOperationStatusIsSet() const
{
    return condSpotOperationStatusIsSet_;
}

void FlavorExtraSpec::unsetcondSpotOperationStatus()
{
    condSpotOperationStatusIsSet_ = false;
}

std::string FlavorExtraSpec::getCondNetwork() const
{
    return condNetwork_;
}

void FlavorExtraSpec::setCondNetwork(const std::string& value)
{
    condNetwork_ = value;
    condNetworkIsSet_ = true;
}

bool FlavorExtraSpec::condNetworkIsSet() const
{
    return condNetworkIsSet_;
}

void FlavorExtraSpec::unsetcondNetwork()
{
    condNetworkIsSet_ = false;
}

std::string FlavorExtraSpec::getCondStorage() const
{
    return condStorage_;
}

void FlavorExtraSpec::setCondStorage(const std::string& value)
{
    condStorage_ = value;
    condStorageIsSet_ = true;
}

bool FlavorExtraSpec::condStorageIsSet() const
{
    return condStorageIsSet_;
}

void FlavorExtraSpec::unsetcondStorage()
{
    condStorageIsSet_ = false;
}

std::string FlavorExtraSpec::getCondStorageType() const
{
    return condStorageType_;
}

void FlavorExtraSpec::setCondStorageType(const std::string& value)
{
    condStorageType_ = value;
    condStorageTypeIsSet_ = true;
}

bool FlavorExtraSpec::condStorageTypeIsSet() const
{
    return condStorageTypeIsSet_;
}

void FlavorExtraSpec::unsetcondStorageType()
{
    condStorageTypeIsSet_ = false;
}

std::string FlavorExtraSpec::getCondComputeLiveResizable() const
{
    return condComputeLiveResizable_;
}

void FlavorExtraSpec::setCondComputeLiveResizable(const std::string& value)
{
    condComputeLiveResizable_ = value;
    condComputeLiveResizableIsSet_ = true;
}

bool FlavorExtraSpec::condComputeLiveResizableIsSet() const
{
    return condComputeLiveResizableIsSet_;
}

void FlavorExtraSpec::unsetcondComputeLiveResizable()
{
    condComputeLiveResizableIsSet_ = false;
}

std::string FlavorExtraSpec::getCondCompute() const
{
    return condCompute_;
}

void FlavorExtraSpec::setCondCompute(const std::string& value)
{
    condCompute_ = value;
    condComputeIsSet_ = true;
}

bool FlavorExtraSpec::condComputeIsSet() const
{
    return condComputeIsSet_;
}

void FlavorExtraSpec::unsetcondCompute()
{
    condComputeIsSet_ = false;
}

std::string FlavorExtraSpec::getInfoGpuName() const
{
    return infoGpuName_;
}

void FlavorExtraSpec::setInfoGpuName(const std::string& value)
{
    infoGpuName_ = value;
    infoGpuNameIsSet_ = true;
}

bool FlavorExtraSpec::infoGpuNameIsSet() const
{
    return infoGpuNameIsSet_;
}

void FlavorExtraSpec::unsetinfoGpuName()
{
    infoGpuNameIsSet_ = false;
}

std::string FlavorExtraSpec::getInfoCpuName() const
{
    return infoCpuName_;
}

void FlavorExtraSpec::setInfoCpuName(const std::string& value)
{
    infoCpuName_ = value;
    infoCpuNameIsSet_ = true;
}

bool FlavorExtraSpec::infoCpuNameIsSet() const
{
    return infoCpuNameIsSet_;
}

void FlavorExtraSpec::unsetinfoCpuName()
{
    infoCpuNameIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaGpu() const
{
    return quotaGpu_;
}

void FlavorExtraSpec::setQuotaGpu(const std::string& value)
{
    quotaGpu_ = value;
    quotaGpuIsSet_ = true;
}

bool FlavorExtraSpec::quotaGpuIsSet() const
{
    return quotaGpuIsSet_;
}

void FlavorExtraSpec::unsetquotaGpu()
{
    quotaGpuIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaVifMaxNum() const
{
    return quotaVifMaxNum_;
}

void FlavorExtraSpec::setQuotaVifMaxNum(const std::string& value)
{
    quotaVifMaxNum_ = value;
    quotaVifMaxNumIsSet_ = true;
}

bool FlavorExtraSpec::quotaVifMaxNumIsSet() const
{
    return quotaVifMaxNumIsSet_;
}

void FlavorExtraSpec::unsetquotaVifMaxNum()
{
    quotaVifMaxNumIsSet_ = false;
}

std::string FlavorExtraSpec::getQuotaSubNetworkInterfaceMaxNum() const
{
    return quotaSubNetworkInterfaceMaxNum_;
}

void FlavorExtraSpec::setQuotaSubNetworkInterfaceMaxNum(const std::string& value)
{
    quotaSubNetworkInterfaceMaxNum_ = value;
    quotaSubNetworkInterfaceMaxNumIsSet_ = true;
}

bool FlavorExtraSpec::quotaSubNetworkInterfaceMaxNumIsSet() const
{
    return quotaSubNetworkInterfaceMaxNumIsSet_;
}

void FlavorExtraSpec::unsetquotaSubNetworkInterfaceMaxNum()
{
    quotaSubNetworkInterfaceMaxNumIsSet_ = false;
}

std::string FlavorExtraSpec::getEcsInstanceArchitecture() const
{
    return ecsInstanceArchitecture_;
}

void FlavorExtraSpec::setEcsInstanceArchitecture(const std::string& value)
{
    ecsInstanceArchitecture_ = value;
    ecsInstanceArchitectureIsSet_ = true;
}

bool FlavorExtraSpec::ecsInstanceArchitectureIsSet() const
{
    return ecsInstanceArchitectureIsSet_;
}

void FlavorExtraSpec::unsetecsInstanceArchitecture()
{
    ecsInstanceArchitectureIsSet_ = false;
}

std::string FlavorExtraSpec::getNetworkInterfaceTrafficMirroringSupported() const
{
    return networkInterfaceTrafficMirroringSupported_;
}

void FlavorExtraSpec::setNetworkInterfaceTrafficMirroringSupported(const std::string& value)
{
    networkInterfaceTrafficMirroringSupported_ = value;
    networkInterfaceTrafficMirroringSupportedIsSet_ = true;
}

bool FlavorExtraSpec::networkInterfaceTrafficMirroringSupportedIsSet() const
{
    return networkInterfaceTrafficMirroringSupportedIsSet_;
}

void FlavorExtraSpec::unsetnetworkInterfaceTrafficMirroringSupported()
{
    networkInterfaceTrafficMirroringSupportedIsSet_ = false;
}

std::string FlavorExtraSpec::getSecurityEnclaveSupported() const
{
    return securityEnclaveSupported_;
}

void FlavorExtraSpec::setSecurityEnclaveSupported(const std::string& value)
{
    securityEnclaveSupported_ = value;
    securityEnclaveSupportedIsSet_ = true;
}

bool FlavorExtraSpec::securityEnclaveSupportedIsSet() const
{
    return securityEnclaveSupportedIsSet_;
}

void FlavorExtraSpec::unsetsecurityEnclaveSupported()
{
    securityEnclaveSupportedIsSet_ = false;
}

std::string FlavorExtraSpec::getInfoGpus() const
{
    return infoGpus_;
}

void FlavorExtraSpec::setInfoGpus(const std::string& value)
{
    infoGpus_ = value;
    infoGpusIsSet_ = true;
}

bool FlavorExtraSpec::infoGpusIsSet() const
{
    return infoGpusIsSet_;
}

void FlavorExtraSpec::unsetinfoGpus()
{
    infoGpusIsSet_ = false;
}

std::string FlavorExtraSpec::getInfoAsicAccelerators() const
{
    return infoAsicAccelerators_;
}

void FlavorExtraSpec::setInfoAsicAccelerators(const std::string& value)
{
    infoAsicAccelerators_ = value;
    infoAsicAcceleratorsIsSet_ = true;
}

bool FlavorExtraSpec::infoAsicAcceleratorsIsSet() const
{
    return infoAsicAcceleratorsIsSet_;
}

void FlavorExtraSpec::unsetinfoAsicAccelerators()
{
    infoAsicAcceleratorsIsSet_ = false;
}

std::string FlavorExtraSpec::getInfoFeatures() const
{
    return infoFeatures_;
}

void FlavorExtraSpec::setInfoFeatures(const std::string& value)
{
    infoFeatures_ = value;
    infoFeaturesIsSet_ = true;
}

bool FlavorExtraSpec::infoFeaturesIsSet() const
{
    return infoFeaturesIsSet_;
}

void FlavorExtraSpec::unsetinfoFeatures()
{
    infoFeaturesIsSet_ = false;
}

}
}
}
}
}


