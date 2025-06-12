

#include "huaweicloud/ecs/v2/model/ServerDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerDetail::ServerDetail()
{
    status_ = "";
    statusIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    autoTerminateTime_ = "";
    autoTerminateTimeIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
    oSEXTSRVATTRHost_ = "";
    oSEXTSRVATTRHostIsSet_ = false;
    addressesIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    imageIsSet_ = false;
    oSEXTSTSTaskState_ = "";
    oSEXTSTSTaskStateIsSet_ = false;
    oSEXTSTSVmState_ = "";
    oSEXTSTSVmStateIsSet_ = false;
    oSEXTSRVATTRInstanceName_ = "";
    oSEXTSRVATTRInstanceNameIsSet_ = false;
    oSEXTSRVATTRHypervisorHostname_ = "";
    oSEXTSRVATTRHypervisorHostnameIsSet_ = false;
    flavorIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    securityGroupsIsSet_ = false;
    oSEXTAZAvailabilityZone_ = "";
    oSEXTAZAvailabilityZoneIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    oSDCFDiskConfig_ = "";
    oSDCFDiskConfigIsSet_ = false;
    accessIPv4_ = "";
    accessIPv4IsSet_ = false;
    accessIPv6_ = "";
    accessIPv6IsSet_ = false;
    faultIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    oSEXTSTSPowerState_ = 0;
    oSEXTSTSPowerStateIsSet_ = false;
    configDrive_ = "";
    configDriveIsSet_ = false;
    metadataIsSet_ = false;
    oSSRVUSGLaunchedAt_ = "";
    oSSRVUSGLaunchedAtIsSet_ = false;
    oSSRVUSGTerminatedAt_ = "";
    oSSRVUSGTerminatedAtIsSet_ = false;
    osExtendedVolumesVolumesAttachedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    hostStatus_ = "";
    hostStatusIsSet_ = false;
    oSEXTSRVATTRHostname_ = "";
    oSEXTSRVATTRHostnameIsSet_ = false;
    oSEXTSRVATTRReservationId_ = "";
    oSEXTSRVATTRReservationIdIsSet_ = false;
    oSEXTSRVATTRLaunchIndex_ = 0;
    oSEXTSRVATTRLaunchIndexIsSet_ = false;
    oSEXTSRVATTRKernelId_ = "";
    oSEXTSRVATTRKernelIdIsSet_ = false;
    oSEXTSRVATTRRamdiskId_ = "";
    oSEXTSRVATTRRamdiskIdIsSet_ = false;
    oSEXTSRVATTRRootDeviceName_ = "";
    oSEXTSRVATTRRootDeviceNameIsSet_ = false;
    oSEXTSRVATTRUserData_ = "";
    oSEXTSRVATTRUserDataIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    tagsIsSet_ = false;
    osSchedulerHintsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sysTagsIsSet_ = false;
    cpuOptionsIsSet_ = false;
    securityOptionsIsSet_ = false;
    hypervisorIsSet_ = false;
}

ServerDetail::~ServerDetail() = default;

void ServerDetail::validate()
{
}

web::json::value ServerDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(autoTerminateTimeIsSet_) {
        val[utility::conversions::to_string_t("auto_terminate_time")] = ModelBase::toJson(autoTerminateTime_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("hostId")] = ModelBase::toJson(hostId_);
    }
    if(oSEXTSRVATTRHostIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:host")] = ModelBase::toJson(oSEXTSRVATTRHost_);
    }
    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(oSEXTSTSTaskStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:task_state")] = ModelBase::toJson(oSEXTSTSTaskState_);
    }
    if(oSEXTSTSVmStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:vm_state")] = ModelBase::toJson(oSEXTSTSVmState_);
    }
    if(oSEXTSRVATTRInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name")] = ModelBase::toJson(oSEXTSRVATTRInstanceName_);
    }
    if(oSEXTSRVATTRHypervisorHostnameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname")] = ModelBase::toJson(oSEXTSRVATTRHypervisorHostname_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(oSEXTAZAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-AZ:availability_zone")] = ModelBase::toJson(oSEXTAZAvailabilityZone_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(oSDCFDiskConfigIsSet_) {
        val[utility::conversions::to_string_t("OS-DCF:diskConfig")] = ModelBase::toJson(oSDCFDiskConfig_);
    }
    if(accessIPv4IsSet_) {
        val[utility::conversions::to_string_t("accessIPv4")] = ModelBase::toJson(accessIPv4_);
    }
    if(accessIPv6IsSet_) {
        val[utility::conversions::to_string_t("accessIPv6")] = ModelBase::toJson(accessIPv6_);
    }
    if(faultIsSet_) {
        val[utility::conversions::to_string_t("fault")] = ModelBase::toJson(fault_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(oSEXTSTSPowerStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:power_state")] = ModelBase::toJson(oSEXTSTSPowerState_);
    }
    if(configDriveIsSet_) {
        val[utility::conversions::to_string_t("config_drive")] = ModelBase::toJson(configDrive_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(oSSRVUSGLaunchedAtIsSet_) {
        val[utility::conversions::to_string_t("OS-SRV-USG:launched_at")] = ModelBase::toJson(oSSRVUSGLaunchedAt_);
    }
    if(oSSRVUSGTerminatedAtIsSet_) {
        val[utility::conversions::to_string_t("OS-SRV-USG:terminated_at")] = ModelBase::toJson(oSSRVUSGTerminatedAt_);
    }
    if(osExtendedVolumesVolumesAttachedIsSet_) {
        val[utility::conversions::to_string_t("os-extended-volumes:volumes_attached")] = ModelBase::toJson(osExtendedVolumesVolumesAttached_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(hostStatusIsSet_) {
        val[utility::conversions::to_string_t("host_status")] = ModelBase::toJson(hostStatus_);
    }
    if(oSEXTSRVATTRHostnameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname")] = ModelBase::toJson(oSEXTSRVATTRHostname_);
    }
    if(oSEXTSRVATTRReservationIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:reservation_id")] = ModelBase::toJson(oSEXTSRVATTRReservationId_);
    }
    if(oSEXTSRVATTRLaunchIndexIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:launch_index")] = ModelBase::toJson(oSEXTSRVATTRLaunchIndex_);
    }
    if(oSEXTSRVATTRKernelIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:kernel_id")] = ModelBase::toJson(oSEXTSRVATTRKernelId_);
    }
    if(oSEXTSRVATTRRamdiskIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:ramdisk_id")] = ModelBase::toJson(oSEXTSRVATTRRamdiskId_);
    }
    if(oSEXTSRVATTRRootDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:root_device_name")] = ModelBase::toJson(oSEXTSRVATTRRootDeviceName_);
    }
    if(oSEXTSRVATTRUserDataIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data")] = ModelBase::toJson(oSEXTSRVATTRUserData_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(osSchedulerHintsIsSet_) {
        val[utility::conversions::to_string_t("os:scheduler_hints")] = ModelBase::toJson(osSchedulerHints_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(cpuOptionsIsSet_) {
        val[utility::conversions::to_string_t("cpu_options")] = ModelBase::toJson(cpuOptions_);
    }
    if(securityOptionsIsSet_) {
        val[utility::conversions::to_string_t("security_options")] = ModelBase::toJson(securityOptions_);
    }
    if(hypervisorIsSet_) {
        val[utility::conversions::to_string_t("hypervisor")] = ModelBase::toJson(hypervisor_);
    }

    return val;
}
bool ServerDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_terminate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_terminate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTerminateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<ServerAddress>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            ServerImage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-STS:task_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-STS:task_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSTSTaskState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-STS:vm_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-STS:vm_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSTSVmState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRHypervisorHostname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            ServerFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-AZ:availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-AZ:availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTAZAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-DCF:diskConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-DCF:diskConfig"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSDCFDiskConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessIPv4"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessIPv4"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessIPv4(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessIPv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessIPv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessIPv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fault"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-STS:power_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-STS:power_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSTSPowerState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_drive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_drive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigDrive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-SRV-USG:launched_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-SRV-USG:launched_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSSRVUSGLaunchedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-SRV-USG:terminated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-SRV-USG:terminated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSSRVUSGTerminatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-extended-volumes:volumes_attached"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-extended-volumes:volumes_attached"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerExtendVolumeAttachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtendedVolumesVolumesAttached(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRHostname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:reservation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:reservation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRReservationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:launch_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:launch_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRLaunchIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:kernel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:kernel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRKernelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:ramdisk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:ramdisk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRRamdiskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:root_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:root_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRRootDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os:scheduler_hints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os:scheduler_hints"));
        if(!fieldValue.is_null())
        {
            ServerSchedulerHints refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsSchedulerHints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerSystemTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_options"));
        if(!fieldValue.is_null())
        {
            CpuOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_options"));
        if(!fieldValue.is_null())
        {
            SecurityOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hypervisor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hypervisor"));
        if(!fieldValue.is_null())
        {
            Hypervisor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHypervisor(refVal);
        }
    }
    return ok;
}


std::string ServerDetail::getStatus() const
{
    return status_;
}

void ServerDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServerDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ServerDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ServerDetail::getUpdated() const
{
    return updated_;
}

void ServerDetail::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ServerDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void ServerDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ServerDetail::getAutoTerminateTime() const
{
    return autoTerminateTime_;
}

void ServerDetail::setAutoTerminateTime(const std::string& value)
{
    autoTerminateTime_ = value;
    autoTerminateTimeIsSet_ = true;
}

bool ServerDetail::autoTerminateTimeIsSet() const
{
    return autoTerminateTimeIsSet_;
}

void ServerDetail::unsetautoTerminateTime()
{
    autoTerminateTimeIsSet_ = false;
}

std::string ServerDetail::getHostId() const
{
    return hostId_;
}

void ServerDetail::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool ServerDetail::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void ServerDetail::unsethostId()
{
    hostIdIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRHost() const
{
    return oSEXTSRVATTRHost_;
}

void ServerDetail::setOSEXTSRVATTRHost(const std::string& value)
{
    oSEXTSRVATTRHost_ = value;
    oSEXTSRVATTRHostIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRHostIsSet() const
{
    return oSEXTSRVATTRHostIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRHost()
{
    oSEXTSRVATTRHostIsSet_ = false;
}

std::map<std::string, std::vector<ServerAddress>>& ServerDetail::getAddresses()
{
    return addresses_;
}

void ServerDetail::setAddresses(const std::map<std::string, std::vector<ServerAddress>>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool ServerDetail::addressesIsSet() const
{
    return addressesIsSet_;
}

void ServerDetail::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string ServerDetail::getKeyName() const
{
    return keyName_;
}

void ServerDetail::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool ServerDetail::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void ServerDetail::unsetkeyName()
{
    keyNameIsSet_ = false;
}

ServerImage ServerDetail::getImage() const
{
    return image_;
}

void ServerDetail::setImage(const ServerImage& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ServerDetail::imageIsSet() const
{
    return imageIsSet_;
}

void ServerDetail::unsetimage()
{
    imageIsSet_ = false;
}

std::string ServerDetail::getOSEXTSTSTaskState() const
{
    return oSEXTSTSTaskState_;
}

void ServerDetail::setOSEXTSTSTaskState(const std::string& value)
{
    oSEXTSTSTaskState_ = value;
    oSEXTSTSTaskStateIsSet_ = true;
}

bool ServerDetail::oSEXTSTSTaskStateIsSet() const
{
    return oSEXTSTSTaskStateIsSet_;
}

void ServerDetail::unsetoSEXTSTSTaskState()
{
    oSEXTSTSTaskStateIsSet_ = false;
}

std::string ServerDetail::getOSEXTSTSVmState() const
{
    return oSEXTSTSVmState_;
}

void ServerDetail::setOSEXTSTSVmState(const std::string& value)
{
    oSEXTSTSVmState_ = value;
    oSEXTSTSVmStateIsSet_ = true;
}

bool ServerDetail::oSEXTSTSVmStateIsSet() const
{
    return oSEXTSTSVmStateIsSet_;
}

void ServerDetail::unsetoSEXTSTSVmState()
{
    oSEXTSTSVmStateIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRInstanceName() const
{
    return oSEXTSRVATTRInstanceName_;
}

void ServerDetail::setOSEXTSRVATTRInstanceName(const std::string& value)
{
    oSEXTSRVATTRInstanceName_ = value;
    oSEXTSRVATTRInstanceNameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRInstanceNameIsSet() const
{
    return oSEXTSRVATTRInstanceNameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRInstanceName()
{
    oSEXTSRVATTRInstanceNameIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRHypervisorHostname() const
{
    return oSEXTSRVATTRHypervisorHostname_;
}

void ServerDetail::setOSEXTSRVATTRHypervisorHostname(const std::string& value)
{
    oSEXTSRVATTRHypervisorHostname_ = value;
    oSEXTSRVATTRHypervisorHostnameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRHypervisorHostnameIsSet() const
{
    return oSEXTSRVATTRHypervisorHostnameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRHypervisorHostname()
{
    oSEXTSRVATTRHypervisorHostnameIsSet_ = false;
}

ServerFlavor ServerDetail::getFlavor() const
{
    return flavor_;
}

void ServerDetail::setFlavor(const ServerFlavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerDetail::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerDetail::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ServerDetail::getId() const
{
    return id_;
}

void ServerDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerDetail::idIsSet() const
{
    return idIsSet_;
}

void ServerDetail::unsetid()
{
    idIsSet_ = false;
}

std::vector<ServerSecurityGroup>& ServerDetail::getSecurityGroups()
{
    return securityGroups_;
}

void ServerDetail::setSecurityGroups(const std::vector<ServerSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool ServerDetail::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void ServerDetail::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string ServerDetail::getOSEXTAZAvailabilityZone() const
{
    return oSEXTAZAvailabilityZone_;
}

void ServerDetail::setOSEXTAZAvailabilityZone(const std::string& value)
{
    oSEXTAZAvailabilityZone_ = value;
    oSEXTAZAvailabilityZoneIsSet_ = true;
}

bool ServerDetail::oSEXTAZAvailabilityZoneIsSet() const
{
    return oSEXTAZAvailabilityZoneIsSet_;
}

void ServerDetail::unsetoSEXTAZAvailabilityZone()
{
    oSEXTAZAvailabilityZoneIsSet_ = false;
}

std::string ServerDetail::getUserId() const
{
    return userId_;
}

void ServerDetail::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ServerDetail::userIdIsSet() const
{
    return userIdIsSet_;
}

void ServerDetail::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ServerDetail::getName() const
{
    return name_;
}

void ServerDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServerDetail::nameIsSet() const
{
    return nameIsSet_;
}

void ServerDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string ServerDetail::getCreated() const
{
    return created_;
}

void ServerDetail::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ServerDetail::createdIsSet() const
{
    return createdIsSet_;
}

void ServerDetail::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ServerDetail::getTenantId() const
{
    return tenantId_;
}

void ServerDetail::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ServerDetail::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ServerDetail::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ServerDetail::getOSDCFDiskConfig() const
{
    return oSDCFDiskConfig_;
}

void ServerDetail::setOSDCFDiskConfig(const std::string& value)
{
    oSDCFDiskConfig_ = value;
    oSDCFDiskConfigIsSet_ = true;
}

bool ServerDetail::oSDCFDiskConfigIsSet() const
{
    return oSDCFDiskConfigIsSet_;
}

void ServerDetail::unsetoSDCFDiskConfig()
{
    oSDCFDiskConfigIsSet_ = false;
}

std::string ServerDetail::getAccessIPv4() const
{
    return accessIPv4_;
}

void ServerDetail::setAccessIPv4(const std::string& value)
{
    accessIPv4_ = value;
    accessIPv4IsSet_ = true;
}

bool ServerDetail::accessIPv4IsSet() const
{
    return accessIPv4IsSet_;
}

void ServerDetail::unsetaccessIPv4()
{
    accessIPv4IsSet_ = false;
}

std::string ServerDetail::getAccessIPv6() const
{
    return accessIPv6_;
}

void ServerDetail::setAccessIPv6(const std::string& value)
{
    accessIPv6_ = value;
    accessIPv6IsSet_ = true;
}

bool ServerDetail::accessIPv6IsSet() const
{
    return accessIPv6IsSet_;
}

void ServerDetail::unsetaccessIPv6()
{
    accessIPv6IsSet_ = false;
}

Object ServerDetail::getFault() const
{
    return fault_;
}

void ServerDetail::setFault(const Object& value)
{
    fault_ = value;
    faultIsSet_ = true;
}

bool ServerDetail::faultIsSet() const
{
    return faultIsSet_;
}

void ServerDetail::unsetfault()
{
    faultIsSet_ = false;
}

int32_t ServerDetail::getProgress() const
{
    return progress_;
}

void ServerDetail::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ServerDetail::progressIsSet() const
{
    return progressIsSet_;
}

void ServerDetail::unsetprogress()
{
    progressIsSet_ = false;
}

int32_t ServerDetail::getOSEXTSTSPowerState() const
{
    return oSEXTSTSPowerState_;
}

void ServerDetail::setOSEXTSTSPowerState(int32_t value)
{
    oSEXTSTSPowerState_ = value;
    oSEXTSTSPowerStateIsSet_ = true;
}

bool ServerDetail::oSEXTSTSPowerStateIsSet() const
{
    return oSEXTSTSPowerStateIsSet_;
}

void ServerDetail::unsetoSEXTSTSPowerState()
{
    oSEXTSTSPowerStateIsSet_ = false;
}

std::string ServerDetail::getConfigDrive() const
{
    return configDrive_;
}

void ServerDetail::setConfigDrive(const std::string& value)
{
    configDrive_ = value;
    configDriveIsSet_ = true;
}

bool ServerDetail::configDriveIsSet() const
{
    return configDriveIsSet_;
}

void ServerDetail::unsetconfigDrive()
{
    configDriveIsSet_ = false;
}

std::map<std::string, std::string>& ServerDetail::getMetadata()
{
    return metadata_;
}

void ServerDetail::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ServerDetail::metadataIsSet() const
{
    return metadataIsSet_;
}

void ServerDetail::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string ServerDetail::getOSSRVUSGLaunchedAt() const
{
    return oSSRVUSGLaunchedAt_;
}

void ServerDetail::setOSSRVUSGLaunchedAt(const std::string& value)
{
    oSSRVUSGLaunchedAt_ = value;
    oSSRVUSGLaunchedAtIsSet_ = true;
}

bool ServerDetail::oSSRVUSGLaunchedAtIsSet() const
{
    return oSSRVUSGLaunchedAtIsSet_;
}

void ServerDetail::unsetoSSRVUSGLaunchedAt()
{
    oSSRVUSGLaunchedAtIsSet_ = false;
}

std::string ServerDetail::getOSSRVUSGTerminatedAt() const
{
    return oSSRVUSGTerminatedAt_;
}

void ServerDetail::setOSSRVUSGTerminatedAt(const std::string& value)
{
    oSSRVUSGTerminatedAt_ = value;
    oSSRVUSGTerminatedAtIsSet_ = true;
}

bool ServerDetail::oSSRVUSGTerminatedAtIsSet() const
{
    return oSSRVUSGTerminatedAtIsSet_;
}

void ServerDetail::unsetoSSRVUSGTerminatedAt()
{
    oSSRVUSGTerminatedAtIsSet_ = false;
}

std::vector<ServerExtendVolumeAttachment>& ServerDetail::getOsExtendedVolumesVolumesAttached()
{
    return osExtendedVolumesVolumesAttached_;
}

void ServerDetail::setOsExtendedVolumesVolumesAttached(const std::vector<ServerExtendVolumeAttachment>& value)
{
    osExtendedVolumesVolumesAttached_ = value;
    osExtendedVolumesVolumesAttachedIsSet_ = true;
}

bool ServerDetail::osExtendedVolumesVolumesAttachedIsSet() const
{
    return osExtendedVolumesVolumesAttachedIsSet_;
}

void ServerDetail::unsetosExtendedVolumesVolumesAttached()
{
    osExtendedVolumesVolumesAttachedIsSet_ = false;
}

std::string ServerDetail::getDescription() const
{
    return description_;
}

void ServerDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServerDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServerDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ServerDetail::getHostStatus() const
{
    return hostStatus_;
}

void ServerDetail::setHostStatus(const std::string& value)
{
    hostStatus_ = value;
    hostStatusIsSet_ = true;
}

bool ServerDetail::hostStatusIsSet() const
{
    return hostStatusIsSet_;
}

void ServerDetail::unsethostStatus()
{
    hostStatusIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRHostname() const
{
    return oSEXTSRVATTRHostname_;
}

void ServerDetail::setOSEXTSRVATTRHostname(const std::string& value)
{
    oSEXTSRVATTRHostname_ = value;
    oSEXTSRVATTRHostnameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRHostnameIsSet() const
{
    return oSEXTSRVATTRHostnameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRHostname()
{
    oSEXTSRVATTRHostnameIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRReservationId() const
{
    return oSEXTSRVATTRReservationId_;
}

void ServerDetail::setOSEXTSRVATTRReservationId(const std::string& value)
{
    oSEXTSRVATTRReservationId_ = value;
    oSEXTSRVATTRReservationIdIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRReservationIdIsSet() const
{
    return oSEXTSRVATTRReservationIdIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRReservationId()
{
    oSEXTSRVATTRReservationIdIsSet_ = false;
}

int32_t ServerDetail::getOSEXTSRVATTRLaunchIndex() const
{
    return oSEXTSRVATTRLaunchIndex_;
}

void ServerDetail::setOSEXTSRVATTRLaunchIndex(int32_t value)
{
    oSEXTSRVATTRLaunchIndex_ = value;
    oSEXTSRVATTRLaunchIndexIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRLaunchIndexIsSet() const
{
    return oSEXTSRVATTRLaunchIndexIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRLaunchIndex()
{
    oSEXTSRVATTRLaunchIndexIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRKernelId() const
{
    return oSEXTSRVATTRKernelId_;
}

void ServerDetail::setOSEXTSRVATTRKernelId(const std::string& value)
{
    oSEXTSRVATTRKernelId_ = value;
    oSEXTSRVATTRKernelIdIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRKernelIdIsSet() const
{
    return oSEXTSRVATTRKernelIdIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRKernelId()
{
    oSEXTSRVATTRKernelIdIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRRamdiskId() const
{
    return oSEXTSRVATTRRamdiskId_;
}

void ServerDetail::setOSEXTSRVATTRRamdiskId(const std::string& value)
{
    oSEXTSRVATTRRamdiskId_ = value;
    oSEXTSRVATTRRamdiskIdIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRRamdiskIdIsSet() const
{
    return oSEXTSRVATTRRamdiskIdIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRRamdiskId()
{
    oSEXTSRVATTRRamdiskIdIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRRootDeviceName() const
{
    return oSEXTSRVATTRRootDeviceName_;
}

void ServerDetail::setOSEXTSRVATTRRootDeviceName(const std::string& value)
{
    oSEXTSRVATTRRootDeviceName_ = value;
    oSEXTSRVATTRRootDeviceNameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRRootDeviceNameIsSet() const
{
    return oSEXTSRVATTRRootDeviceNameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRRootDeviceName()
{
    oSEXTSRVATTRRootDeviceNameIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRUserData() const
{
    return oSEXTSRVATTRUserData_;
}

void ServerDetail::setOSEXTSRVATTRUserData(const std::string& value)
{
    oSEXTSRVATTRUserData_ = value;
    oSEXTSRVATTRUserDataIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRUserDataIsSet() const
{
    return oSEXTSRVATTRUserDataIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRUserData()
{
    oSEXTSRVATTRUserDataIsSet_ = false;
}

bool ServerDetail::isLocked() const
{
    return locked_;
}

void ServerDetail::setLocked(bool value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool ServerDetail::lockedIsSet() const
{
    return lockedIsSet_;
}

void ServerDetail::unsetlocked()
{
    lockedIsSet_ = false;
}

std::vector<std::string>& ServerDetail::getTags()
{
    return tags_;
}

void ServerDetail::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ServerDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void ServerDetail::unsettags()
{
    tagsIsSet_ = false;
}

ServerSchedulerHints ServerDetail::getOsSchedulerHints() const
{
    return osSchedulerHints_;
}

void ServerDetail::setOsSchedulerHints(const ServerSchedulerHints& value)
{
    osSchedulerHints_ = value;
    osSchedulerHintsIsSet_ = true;
}

bool ServerDetail::osSchedulerHintsIsSet() const
{
    return osSchedulerHintsIsSet_;
}

void ServerDetail::unsetosSchedulerHints()
{
    osSchedulerHintsIsSet_ = false;
}

std::string ServerDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ServerDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ServerDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ServerDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<ServerSystemTag>& ServerDetail::getSysTags()
{
    return sysTags_;
}

void ServerDetail::setSysTags(const std::vector<ServerSystemTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ServerDetail::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ServerDetail::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

CpuOptions ServerDetail::getCpuOptions() const
{
    return cpuOptions_;
}

void ServerDetail::setCpuOptions(const CpuOptions& value)
{
    cpuOptions_ = value;
    cpuOptionsIsSet_ = true;
}

bool ServerDetail::cpuOptionsIsSet() const
{
    return cpuOptionsIsSet_;
}

void ServerDetail::unsetcpuOptions()
{
    cpuOptionsIsSet_ = false;
}

SecurityOptions ServerDetail::getSecurityOptions() const
{
    return securityOptions_;
}

void ServerDetail::setSecurityOptions(const SecurityOptions& value)
{
    securityOptions_ = value;
    securityOptionsIsSet_ = true;
}

bool ServerDetail::securityOptionsIsSet() const
{
    return securityOptionsIsSet_;
}

void ServerDetail::unsetsecurityOptions()
{
    securityOptionsIsSet_ = false;
}

Hypervisor ServerDetail::getHypervisor() const
{
    return hypervisor_;
}

void ServerDetail::setHypervisor(const Hypervisor& value)
{
    hypervisor_ = value;
    hypervisorIsSet_ = true;
}

bool ServerDetail::hypervisorIsSet() const
{
    return hypervisorIsSet_;
}

void ServerDetail::unsethypervisor()
{
    hypervisorIsSet_ = false;
}

}
}
}
}
}


