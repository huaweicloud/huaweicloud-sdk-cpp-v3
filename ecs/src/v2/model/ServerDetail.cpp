

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
    hostId_ = "";
    hostIdIsSet_ = false;
    oSEXTSRVATTRhost_ = "";
    oSEXTSRVATTRhostIsSet_ = false;
    addressesIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    imageIsSet_ = false;
    oSEXTSTStaskState_ = "";
    oSEXTSTStaskStateIsSet_ = false;
    oSEXTSTSvmState_ = "";
    oSEXTSTSvmStateIsSet_ = false;
    oSEXTSRVATTRinstanceName_ = "";
    oSEXTSRVATTRinstanceNameIsSet_ = false;
    oSEXTSRVATTRhypervisorHostname_ = "";
    oSEXTSRVATTRhypervisorHostnameIsSet_ = false;
    flavorIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    securityGroupsIsSet_ = false;
    oSEXTAZavailabilityZone_ = "";
    oSEXTAZavailabilityZoneIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    oSDCFdiskConfig_ = "";
    oSDCFdiskConfigIsSet_ = false;
    accessIPv4_ = "";
    accessIPv4IsSet_ = false;
    accessIPv6_ = "";
    accessIPv6IsSet_ = false;
    faultIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    oSEXTSTSpowerState_ = 0;
    oSEXTSTSpowerStateIsSet_ = false;
    configDrive_ = "";
    configDriveIsSet_ = false;
    metadataIsSet_ = false;
    oSSRVUSGlaunchedAt_ = "";
    oSSRVUSGlaunchedAtIsSet_ = false;
    oSSRVUSGterminatedAt_ = "";
    oSSRVUSGterminatedAtIsSet_ = false;
    osExtendedVolumesvolumesAttachedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    hostStatus_ = "";
    hostStatusIsSet_ = false;
    oSEXTSRVATTRhostname_ = "";
    oSEXTSRVATTRhostnameIsSet_ = false;
    oSEXTSRVATTRreservationId_ = "";
    oSEXTSRVATTRreservationIdIsSet_ = false;
    oSEXTSRVATTRlaunchIndex_ = 0;
    oSEXTSRVATTRlaunchIndexIsSet_ = false;
    oSEXTSRVATTRkernelId_ = "";
    oSEXTSRVATTRkernelIdIsSet_ = false;
    oSEXTSRVATTRramdiskId_ = "";
    oSEXTSRVATTRramdiskIdIsSet_ = false;
    oSEXTSRVATTRrootDeviceName_ = "";
    oSEXTSRVATTRrootDeviceNameIsSet_ = false;
    oSEXTSRVATTRuserData_ = "";
    oSEXTSRVATTRuserDataIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    tagsIsSet_ = false;
    osschedulerHintsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sysTagsIsSet_ = false;
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
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("hostId")] = ModelBase::toJson(hostId_);
    }
    if(oSEXTSRVATTRhostIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:host")] = ModelBase::toJson(oSEXTSRVATTRhost_);
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
    if(oSEXTSTStaskStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:task_state")] = ModelBase::toJson(oSEXTSTStaskState_);
    }
    if(oSEXTSTSvmStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:vm_state")] = ModelBase::toJson(oSEXTSTSvmState_);
    }
    if(oSEXTSRVATTRinstanceNameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name")] = ModelBase::toJson(oSEXTSRVATTRinstanceName_);
    }
    if(oSEXTSRVATTRhypervisorHostnameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname")] = ModelBase::toJson(oSEXTSRVATTRhypervisorHostname_);
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
    if(oSEXTAZavailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-AZ:availability_zone")] = ModelBase::toJson(oSEXTAZavailabilityZone_);
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
    if(oSDCFdiskConfigIsSet_) {
        val[utility::conversions::to_string_t("OS-DCF:diskConfig")] = ModelBase::toJson(oSDCFdiskConfig_);
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
    if(oSEXTSTSpowerStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:power_state")] = ModelBase::toJson(oSEXTSTSpowerState_);
    }
    if(configDriveIsSet_) {
        val[utility::conversions::to_string_t("config_drive")] = ModelBase::toJson(configDrive_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(oSSRVUSGlaunchedAtIsSet_) {
        val[utility::conversions::to_string_t("OS-SRV-USG:launched_at")] = ModelBase::toJson(oSSRVUSGlaunchedAt_);
    }
    if(oSSRVUSGterminatedAtIsSet_) {
        val[utility::conversions::to_string_t("OS-SRV-USG:terminated_at")] = ModelBase::toJson(oSSRVUSGterminatedAt_);
    }
    if(osExtendedVolumesvolumesAttachedIsSet_) {
        val[utility::conversions::to_string_t("os-extended-volumes:volumes_attached")] = ModelBase::toJson(osExtendedVolumesvolumesAttached_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(hostStatusIsSet_) {
        val[utility::conversions::to_string_t("host_status")] = ModelBase::toJson(hostStatus_);
    }
    if(oSEXTSRVATTRhostnameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname")] = ModelBase::toJson(oSEXTSRVATTRhostname_);
    }
    if(oSEXTSRVATTRreservationIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:reservation_id")] = ModelBase::toJson(oSEXTSRVATTRreservationId_);
    }
    if(oSEXTSRVATTRlaunchIndexIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:launch_index")] = ModelBase::toJson(oSEXTSRVATTRlaunchIndex_);
    }
    if(oSEXTSRVATTRkernelIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:kernel_id")] = ModelBase::toJson(oSEXTSRVATTRkernelId_);
    }
    if(oSEXTSRVATTRramdiskIdIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:ramdisk_id")] = ModelBase::toJson(oSEXTSRVATTRramdiskId_);
    }
    if(oSEXTSRVATTRrootDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:root_device_name")] = ModelBase::toJson(oSEXTSRVATTRrootDeviceName_);
    }
    if(oSEXTSRVATTRuserDataIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data")] = ModelBase::toJson(oSEXTSRVATTRuserData_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(osschedulerHintsIsSet_) {
        val[utility::conversions::to_string_t("os:scheduler_hints")] = ModelBase::toJson(osschedulerHints_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
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
            setOSEXTSRVATTRhost(refVal);
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
            setOSEXTSTStaskState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-STS:vm_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-STS:vm_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSTSvmState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRinstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRhypervisorHostname(refVal);
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
            setOSEXTAZavailabilityZone(refVal);
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
            setOSDCFdiskConfig(refVal);
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
            ServerFault refVal;
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
            setOSEXTSTSpowerState(refVal);
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
            setOSSRVUSGlaunchedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-SRV-USG:terminated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-SRV-USG:terminated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSSRVUSGterminatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-extended-volumes:volumes_attached"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-extended-volumes:volumes_attached"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerExtendVolumeAttachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtendedVolumesvolumesAttached(refVal);
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
            setOSEXTSRVATTRhostname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:reservation_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:reservation_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRreservationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:launch_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:launch_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRlaunchIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:kernel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:kernel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRkernelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:ramdisk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:ramdisk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRramdiskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:root_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:root_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRrootDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRuserData(refVal);
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
            setOsschedulerHints(refVal);
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

std::string ServerDetail::getOSEXTSRVATTRhost() const
{
    return oSEXTSRVATTRhost_;
}

void ServerDetail::setOSEXTSRVATTRhost(const std::string& value)
{
    oSEXTSRVATTRhost_ = value;
    oSEXTSRVATTRhostIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRhostIsSet() const
{
    return oSEXTSRVATTRhostIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRhost()
{
    oSEXTSRVATTRhostIsSet_ = false;
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

std::string ServerDetail::getOSEXTSTStaskState() const
{
    return oSEXTSTStaskState_;
}

void ServerDetail::setOSEXTSTStaskState(const std::string& value)
{
    oSEXTSTStaskState_ = value;
    oSEXTSTStaskStateIsSet_ = true;
}

bool ServerDetail::oSEXTSTStaskStateIsSet() const
{
    return oSEXTSTStaskStateIsSet_;
}

void ServerDetail::unsetoSEXTSTStaskState()
{
    oSEXTSTStaskStateIsSet_ = false;
}

std::string ServerDetail::getOSEXTSTSvmState() const
{
    return oSEXTSTSvmState_;
}

void ServerDetail::setOSEXTSTSvmState(const std::string& value)
{
    oSEXTSTSvmState_ = value;
    oSEXTSTSvmStateIsSet_ = true;
}

bool ServerDetail::oSEXTSTSvmStateIsSet() const
{
    return oSEXTSTSvmStateIsSet_;
}

void ServerDetail::unsetoSEXTSTSvmState()
{
    oSEXTSTSvmStateIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRinstanceName() const
{
    return oSEXTSRVATTRinstanceName_;
}

void ServerDetail::setOSEXTSRVATTRinstanceName(const std::string& value)
{
    oSEXTSRVATTRinstanceName_ = value;
    oSEXTSRVATTRinstanceNameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRinstanceNameIsSet() const
{
    return oSEXTSRVATTRinstanceNameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRinstanceName()
{
    oSEXTSRVATTRinstanceNameIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRhypervisorHostname() const
{
    return oSEXTSRVATTRhypervisorHostname_;
}

void ServerDetail::setOSEXTSRVATTRhypervisorHostname(const std::string& value)
{
    oSEXTSRVATTRhypervisorHostname_ = value;
    oSEXTSRVATTRhypervisorHostnameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRhypervisorHostnameIsSet() const
{
    return oSEXTSRVATTRhypervisorHostnameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRhypervisorHostname()
{
    oSEXTSRVATTRhypervisorHostnameIsSet_ = false;
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

std::string ServerDetail::getOSEXTAZavailabilityZone() const
{
    return oSEXTAZavailabilityZone_;
}

void ServerDetail::setOSEXTAZavailabilityZone(const std::string& value)
{
    oSEXTAZavailabilityZone_ = value;
    oSEXTAZavailabilityZoneIsSet_ = true;
}

bool ServerDetail::oSEXTAZavailabilityZoneIsSet() const
{
    return oSEXTAZavailabilityZoneIsSet_;
}

void ServerDetail::unsetoSEXTAZavailabilityZone()
{
    oSEXTAZavailabilityZoneIsSet_ = false;
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

std::string ServerDetail::getOSDCFdiskConfig() const
{
    return oSDCFdiskConfig_;
}

void ServerDetail::setOSDCFdiskConfig(const std::string& value)
{
    oSDCFdiskConfig_ = value;
    oSDCFdiskConfigIsSet_ = true;
}

bool ServerDetail::oSDCFdiskConfigIsSet() const
{
    return oSDCFdiskConfigIsSet_;
}

void ServerDetail::unsetoSDCFdiskConfig()
{
    oSDCFdiskConfigIsSet_ = false;
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

ServerFault ServerDetail::getFault() const
{
    return fault_;
}

void ServerDetail::setFault(const ServerFault& value)
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

int32_t ServerDetail::getOSEXTSTSpowerState() const
{
    return oSEXTSTSpowerState_;
}

void ServerDetail::setOSEXTSTSpowerState(int32_t value)
{
    oSEXTSTSpowerState_ = value;
    oSEXTSTSpowerStateIsSet_ = true;
}

bool ServerDetail::oSEXTSTSpowerStateIsSet() const
{
    return oSEXTSTSpowerStateIsSet_;
}

void ServerDetail::unsetoSEXTSTSpowerState()
{
    oSEXTSTSpowerStateIsSet_ = false;
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

std::string ServerDetail::getOSSRVUSGlaunchedAt() const
{
    return oSSRVUSGlaunchedAt_;
}

void ServerDetail::setOSSRVUSGlaunchedAt(const std::string& value)
{
    oSSRVUSGlaunchedAt_ = value;
    oSSRVUSGlaunchedAtIsSet_ = true;
}

bool ServerDetail::oSSRVUSGlaunchedAtIsSet() const
{
    return oSSRVUSGlaunchedAtIsSet_;
}

void ServerDetail::unsetoSSRVUSGlaunchedAt()
{
    oSSRVUSGlaunchedAtIsSet_ = false;
}

std::string ServerDetail::getOSSRVUSGterminatedAt() const
{
    return oSSRVUSGterminatedAt_;
}

void ServerDetail::setOSSRVUSGterminatedAt(const std::string& value)
{
    oSSRVUSGterminatedAt_ = value;
    oSSRVUSGterminatedAtIsSet_ = true;
}

bool ServerDetail::oSSRVUSGterminatedAtIsSet() const
{
    return oSSRVUSGterminatedAtIsSet_;
}

void ServerDetail::unsetoSSRVUSGterminatedAt()
{
    oSSRVUSGterminatedAtIsSet_ = false;
}

std::vector<ServerExtendVolumeAttachment>& ServerDetail::getOsExtendedVolumesvolumesAttached()
{
    return osExtendedVolumesvolumesAttached_;
}

void ServerDetail::setOsExtendedVolumesvolumesAttached(const std::vector<ServerExtendVolumeAttachment>& value)
{
    osExtendedVolumesvolumesAttached_ = value;
    osExtendedVolumesvolumesAttachedIsSet_ = true;
}

bool ServerDetail::osExtendedVolumesvolumesAttachedIsSet() const
{
    return osExtendedVolumesvolumesAttachedIsSet_;
}

void ServerDetail::unsetosExtendedVolumesvolumesAttached()
{
    osExtendedVolumesvolumesAttachedIsSet_ = false;
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

std::string ServerDetail::getOSEXTSRVATTRhostname() const
{
    return oSEXTSRVATTRhostname_;
}

void ServerDetail::setOSEXTSRVATTRhostname(const std::string& value)
{
    oSEXTSRVATTRhostname_ = value;
    oSEXTSRVATTRhostnameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRhostnameIsSet() const
{
    return oSEXTSRVATTRhostnameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRhostname()
{
    oSEXTSRVATTRhostnameIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRreservationId() const
{
    return oSEXTSRVATTRreservationId_;
}

void ServerDetail::setOSEXTSRVATTRreservationId(const std::string& value)
{
    oSEXTSRVATTRreservationId_ = value;
    oSEXTSRVATTRreservationIdIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRreservationIdIsSet() const
{
    return oSEXTSRVATTRreservationIdIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRreservationId()
{
    oSEXTSRVATTRreservationIdIsSet_ = false;
}

int32_t ServerDetail::getOSEXTSRVATTRlaunchIndex() const
{
    return oSEXTSRVATTRlaunchIndex_;
}

void ServerDetail::setOSEXTSRVATTRlaunchIndex(int32_t value)
{
    oSEXTSRVATTRlaunchIndex_ = value;
    oSEXTSRVATTRlaunchIndexIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRlaunchIndexIsSet() const
{
    return oSEXTSRVATTRlaunchIndexIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRlaunchIndex()
{
    oSEXTSRVATTRlaunchIndexIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRkernelId() const
{
    return oSEXTSRVATTRkernelId_;
}

void ServerDetail::setOSEXTSRVATTRkernelId(const std::string& value)
{
    oSEXTSRVATTRkernelId_ = value;
    oSEXTSRVATTRkernelIdIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRkernelIdIsSet() const
{
    return oSEXTSRVATTRkernelIdIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRkernelId()
{
    oSEXTSRVATTRkernelIdIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRramdiskId() const
{
    return oSEXTSRVATTRramdiskId_;
}

void ServerDetail::setOSEXTSRVATTRramdiskId(const std::string& value)
{
    oSEXTSRVATTRramdiskId_ = value;
    oSEXTSRVATTRramdiskIdIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRramdiskIdIsSet() const
{
    return oSEXTSRVATTRramdiskIdIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRramdiskId()
{
    oSEXTSRVATTRramdiskIdIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRrootDeviceName() const
{
    return oSEXTSRVATTRrootDeviceName_;
}

void ServerDetail::setOSEXTSRVATTRrootDeviceName(const std::string& value)
{
    oSEXTSRVATTRrootDeviceName_ = value;
    oSEXTSRVATTRrootDeviceNameIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRrootDeviceNameIsSet() const
{
    return oSEXTSRVATTRrootDeviceNameIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRrootDeviceName()
{
    oSEXTSRVATTRrootDeviceNameIsSet_ = false;
}

std::string ServerDetail::getOSEXTSRVATTRuserData() const
{
    return oSEXTSRVATTRuserData_;
}

void ServerDetail::setOSEXTSRVATTRuserData(const std::string& value)
{
    oSEXTSRVATTRuserData_ = value;
    oSEXTSRVATTRuserDataIsSet_ = true;
}

bool ServerDetail::oSEXTSRVATTRuserDataIsSet() const
{
    return oSEXTSRVATTRuserDataIsSet_;
}

void ServerDetail::unsetoSEXTSRVATTRuserData()
{
    oSEXTSRVATTRuserDataIsSet_ = false;
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

ServerSchedulerHints ServerDetail::getOsschedulerHints() const
{
    return osschedulerHints_;
}

void ServerDetail::setOsschedulerHints(const ServerSchedulerHints& value)
{
    osschedulerHints_ = value;
    osschedulerHintsIsSet_ = true;
}

bool ServerDetail::osschedulerHintsIsSet() const
{
    return osschedulerHintsIsSet_;
}

void ServerDetail::unsetosschedulerHints()
{
    osschedulerHintsIsSet_ = false;
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

}
}
}
}
}


