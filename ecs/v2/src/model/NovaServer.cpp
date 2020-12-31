

#include "huaweicloud/ecs/model/NovaServer.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServer::NovaServer()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    flavorIsSet_ = false;
    imageIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    metadataIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
    addressesIsSet_ = false;
    securityGroupsIsSet_ = false;
    linksIsSet_ = false;
    oSDCFdiskConfig_ = "";
    oSDCFdiskConfigIsSet_ = false;
    oSEXTAZavailabilityZone_ = "";
    oSEXTAZavailabilityZoneIsSet_ = false;
    oSEXTSRVATTRhost_ = "";
    oSEXTSRVATTRhostIsSet_ = false;
    oSEXTSRVATTRhypervisorHostname_ = "";
    oSEXTSRVATTRhypervisorHostnameIsSet_ = false;
    oSEXTSRVATTRinstanceName_ = "";
    oSEXTSRVATTRinstanceNameIsSet_ = false;
    oSEXTSTSpowerState_ = 0;
    oSEXTSTSpowerStateIsSet_ = false;
    oSEXTSTStaskState_ = "";
    oSEXTSTStaskStateIsSet_ = false;
    oSEXTSTSvmState_ = "";
    oSEXTSTSvmStateIsSet_ = false;
    oSSRVUSGlaunchedAt_ = "";
    oSSRVUSGlaunchedAtIsSet_ = false;
    oSSRVUSGterminatedAt_ = "";
    oSSRVUSGterminatedAtIsSet_ = false;
    osExtendedVolumesvolumesAttachedIsSet_ = false;
    faultIsSet_ = false;
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
    tagsIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    accessIPv4_ = "";
    accessIPv4IsSet_ = false;
    accessIPv6_ = "";
    accessIPv6IsSet_ = false;
    configDrive_ = "";
    configDriveIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
}

NovaServer::~NovaServer() = default;

void NovaServer::validate()
{
}

web::json::value NovaServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("hostId")] = ModelBase::toJson(hostId_);
    }
    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(oSDCFdiskConfigIsSet_) {
        val[utility::conversions::to_string_t("OS-DCF:diskConfig")] = ModelBase::toJson(oSDCFdiskConfig_);
    }
    if(oSEXTAZavailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-AZ:availability_zone")] = ModelBase::toJson(oSEXTAZavailabilityZone_);
    }
    if(oSEXTSRVATTRhostIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:host")] = ModelBase::toJson(oSEXTSRVATTRhost_);
    }
    if(oSEXTSRVATTRhypervisorHostnameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname")] = ModelBase::toJson(oSEXTSRVATTRhypervisorHostname_);
    }
    if(oSEXTSRVATTRinstanceNameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:instance_name")] = ModelBase::toJson(oSEXTSRVATTRinstanceName_);
    }
    if(oSEXTSTSpowerStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:power_state")] = ModelBase::toJson(oSEXTSTSpowerState_);
    }
    if(oSEXTSTStaskStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:task_state")] = ModelBase::toJson(oSEXTSTStaskState_);
    }
    if(oSEXTSTSvmStateIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-STS:vm_state")] = ModelBase::toJson(oSEXTSTSvmState_);
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
    if(faultIsSet_) {
        val[utility::conversions::to_string_t("fault")] = ModelBase::toJson(fault_);
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(accessIPv4IsSet_) {
        val[utility::conversions::to_string_t("accessIPv4")] = ModelBase::toJson(accessIPv4_);
    }
    if(accessIPv6IsSet_) {
        val[utility::conversions::to_string_t("accessIPv6")] = ModelBase::toJson(accessIPv6_);
    }
    if(configDriveIsSet_) {
        val[utility::conversions::to_string_t("config_drive")] = ModelBase::toJson(configDrive_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }

    return val;
}

bool NovaServer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            NovaServerFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            NovaServerImage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<NovaNetwork>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaServerSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaLink> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-AZ:availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-AZ:availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTAZavailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hypervisor_hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRhypervisorHostname(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-STS:power_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-STS:power_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSTSpowerState(refVal);
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
            std::vector<NovaServerVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsExtendedVolumesvolumesAttached(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fault"));
        if(!fieldValue.is_null())
        {
            NovaServerFault refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFault(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("config_drive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_drive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigDrive(refVal);
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
    return ok;
}


std::string NovaServer::getName() const
{
    return name_;
}

void NovaServer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaServer::nameIsSet() const
{
    return nameIsSet_;
}

void NovaServer::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaServer::getId() const
{
    return id_;
}

void NovaServer::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaServer::idIsSet() const
{
    return idIsSet_;
}

void NovaServer::unsetid()
{
    idIsSet_ = false;
}

std::string NovaServer::getStatus() const
{
    return status_;
}

void NovaServer::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NovaServer::statusIsSet() const
{
    return statusIsSet_;
}

void NovaServer::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NovaServer::getCreated() const
{
    return created_;
}

void NovaServer::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool NovaServer::createdIsSet() const
{
    return createdIsSet_;
}

void NovaServer::unsetcreated()
{
    createdIsSet_ = false;
}

std::string NovaServer::getUpdated() const
{
    return updated_;
}

void NovaServer::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool NovaServer::updatedIsSet() const
{
    return updatedIsSet_;
}

void NovaServer::unsetupdated()
{
    updatedIsSet_ = false;
}

NovaServerFlavor NovaServer::getFlavor() const
{
    return flavor_;
}

void NovaServer::setFlavor(const NovaServerFlavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NovaServer::flavorIsSet() const
{
    return flavorIsSet_;
}

void NovaServer::unsetflavor()
{
    flavorIsSet_ = false;
}

NovaServerImage NovaServer::getImage() const
{
    return image_;
}

void NovaServer::setImage(const NovaServerImage& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool NovaServer::imageIsSet() const
{
    return imageIsSet_;
}

void NovaServer::unsetimage()
{
    imageIsSet_ = false;
}

std::string NovaServer::getTenantId() const
{
    return tenantId_;
}

void NovaServer::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NovaServer::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NovaServer::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NovaServer::getKeyName() const
{
    return keyName_;
}

void NovaServer::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool NovaServer::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void NovaServer::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string NovaServer::getUserId() const
{
    return userId_;
}

void NovaServer::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool NovaServer::userIdIsSet() const
{
    return userIdIsSet_;
}

void NovaServer::unsetuserId()
{
    userIdIsSet_ = false;
}

std::map<std::string, std::string>& NovaServer::getMetadata()
{
    return metadata_;
}

void NovaServer::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NovaServer::metadataIsSet() const
{
    return metadataIsSet_;
}

void NovaServer::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string NovaServer::getHostId() const
{
    return hostId_;
}

void NovaServer::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool NovaServer::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void NovaServer::unsethostId()
{
    hostIdIsSet_ = false;
}

std::map<std::string, std::vector<NovaNetwork>>& NovaServer::getAddresses()
{
    return addresses_;
}

void NovaServer::setAddresses(const std::map<std::string, std::vector<NovaNetwork>>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool NovaServer::addressesIsSet() const
{
    return addressesIsSet_;
}

void NovaServer::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::vector<NovaServerSecurityGroup>& NovaServer::getSecurityGroups()
{
    return securityGroups_;
}

void NovaServer::setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool NovaServer::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void NovaServer::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<NovaLink>& NovaServer::getLinks()
{
    return links_;
}

void NovaServer::setLinks(const std::vector<NovaLink>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool NovaServer::linksIsSet() const
{
    return linksIsSet_;
}

void NovaServer::unsetlinks()
{
    linksIsSet_ = false;
}

std::string NovaServer::getOSDCFdiskConfig() const
{
    return oSDCFdiskConfig_;
}

void NovaServer::setOSDCFdiskConfig(const std::string& value)
{
    oSDCFdiskConfig_ = value;
    oSDCFdiskConfigIsSet_ = true;
}

bool NovaServer::oSDCFdiskConfigIsSet() const
{
    return oSDCFdiskConfigIsSet_;
}

void NovaServer::unsetoSDCFdiskConfig()
{
    oSDCFdiskConfigIsSet_ = false;
}

std::string NovaServer::getOSEXTAZavailabilityZone() const
{
    return oSEXTAZavailabilityZone_;
}

void NovaServer::setOSEXTAZavailabilityZone(const std::string& value)
{
    oSEXTAZavailabilityZone_ = value;
    oSEXTAZavailabilityZoneIsSet_ = true;
}

bool NovaServer::oSEXTAZavailabilityZoneIsSet() const
{
    return oSEXTAZavailabilityZoneIsSet_;
}

void NovaServer::unsetoSEXTAZavailabilityZone()
{
    oSEXTAZavailabilityZoneIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRhost() const
{
    return oSEXTSRVATTRhost_;
}

void NovaServer::setOSEXTSRVATTRhost(const std::string& value)
{
    oSEXTSRVATTRhost_ = value;
    oSEXTSRVATTRhostIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRhostIsSet() const
{
    return oSEXTSRVATTRhostIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRhost()
{
    oSEXTSRVATTRhostIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRhypervisorHostname() const
{
    return oSEXTSRVATTRhypervisorHostname_;
}

void NovaServer::setOSEXTSRVATTRhypervisorHostname(const std::string& value)
{
    oSEXTSRVATTRhypervisorHostname_ = value;
    oSEXTSRVATTRhypervisorHostnameIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRhypervisorHostnameIsSet() const
{
    return oSEXTSRVATTRhypervisorHostnameIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRhypervisorHostname()
{
    oSEXTSRVATTRhypervisorHostnameIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRinstanceName() const
{
    return oSEXTSRVATTRinstanceName_;
}

void NovaServer::setOSEXTSRVATTRinstanceName(const std::string& value)
{
    oSEXTSRVATTRinstanceName_ = value;
    oSEXTSRVATTRinstanceNameIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRinstanceNameIsSet() const
{
    return oSEXTSRVATTRinstanceNameIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRinstanceName()
{
    oSEXTSRVATTRinstanceNameIsSet_ = false;
}

int32_t NovaServer::getOSEXTSTSpowerState() const
{
    return oSEXTSTSpowerState_;
}

void NovaServer::setOSEXTSTSpowerState(int32_t value)
{
    oSEXTSTSpowerState_ = value;
    oSEXTSTSpowerStateIsSet_ = true;
}

bool NovaServer::oSEXTSTSpowerStateIsSet() const
{
    return oSEXTSTSpowerStateIsSet_;
}

void NovaServer::unsetoSEXTSTSpowerState()
{
    oSEXTSTSpowerStateIsSet_ = false;
}

std::string NovaServer::getOSEXTSTStaskState() const
{
    return oSEXTSTStaskState_;
}

void NovaServer::setOSEXTSTStaskState(const std::string& value)
{
    oSEXTSTStaskState_ = value;
    oSEXTSTStaskStateIsSet_ = true;
}

bool NovaServer::oSEXTSTStaskStateIsSet() const
{
    return oSEXTSTStaskStateIsSet_;
}

void NovaServer::unsetoSEXTSTStaskState()
{
    oSEXTSTStaskStateIsSet_ = false;
}

std::string NovaServer::getOSEXTSTSvmState() const
{
    return oSEXTSTSvmState_;
}

void NovaServer::setOSEXTSTSvmState(const std::string& value)
{
    oSEXTSTSvmState_ = value;
    oSEXTSTSvmStateIsSet_ = true;
}

bool NovaServer::oSEXTSTSvmStateIsSet() const
{
    return oSEXTSTSvmStateIsSet_;
}

void NovaServer::unsetoSEXTSTSvmState()
{
    oSEXTSTSvmStateIsSet_ = false;
}

std::string NovaServer::getOSSRVUSGlaunchedAt() const
{
    return oSSRVUSGlaunchedAt_;
}

void NovaServer::setOSSRVUSGlaunchedAt(const std::string& value)
{
    oSSRVUSGlaunchedAt_ = value;
    oSSRVUSGlaunchedAtIsSet_ = true;
}

bool NovaServer::oSSRVUSGlaunchedAtIsSet() const
{
    return oSSRVUSGlaunchedAtIsSet_;
}

void NovaServer::unsetoSSRVUSGlaunchedAt()
{
    oSSRVUSGlaunchedAtIsSet_ = false;
}

std::string NovaServer::getOSSRVUSGterminatedAt() const
{
    return oSSRVUSGterminatedAt_;
}

void NovaServer::setOSSRVUSGterminatedAt(const std::string& value)
{
    oSSRVUSGterminatedAt_ = value;
    oSSRVUSGterminatedAtIsSet_ = true;
}

bool NovaServer::oSSRVUSGterminatedAtIsSet() const
{
    return oSSRVUSGterminatedAtIsSet_;
}

void NovaServer::unsetoSSRVUSGterminatedAt()
{
    oSSRVUSGterminatedAtIsSet_ = false;
}

std::vector<NovaServerVolume>& NovaServer::getOsExtendedVolumesvolumesAttached()
{
    return osExtendedVolumesvolumesAttached_;
}

void NovaServer::setOsExtendedVolumesvolumesAttached(const std::vector<NovaServerVolume>& value)
{
    osExtendedVolumesvolumesAttached_ = value;
    osExtendedVolumesvolumesAttachedIsSet_ = true;
}

bool NovaServer::osExtendedVolumesvolumesAttachedIsSet() const
{
    return osExtendedVolumesvolumesAttachedIsSet_;
}

void NovaServer::unsetosExtendedVolumesvolumesAttached()
{
    osExtendedVolumesvolumesAttachedIsSet_ = false;
}

NovaServerFault NovaServer::getFault() const
{
    return fault_;
}

void NovaServer::setFault(const NovaServerFault& value)
{
    fault_ = value;
    faultIsSet_ = true;
}

bool NovaServer::faultIsSet() const
{
    return faultIsSet_;
}

void NovaServer::unsetfault()
{
    faultIsSet_ = false;
}

std::string NovaServer::getDescription() const
{
    return description_;
}

void NovaServer::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NovaServer::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NovaServer::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NovaServer::getHostStatus() const
{
    return hostStatus_;
}

void NovaServer::setHostStatus(const std::string& value)
{
    hostStatus_ = value;
    hostStatusIsSet_ = true;
}

bool NovaServer::hostStatusIsSet() const
{
    return hostStatusIsSet_;
}

void NovaServer::unsethostStatus()
{
    hostStatusIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRhostname() const
{
    return oSEXTSRVATTRhostname_;
}

void NovaServer::setOSEXTSRVATTRhostname(const std::string& value)
{
    oSEXTSRVATTRhostname_ = value;
    oSEXTSRVATTRhostnameIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRhostnameIsSet() const
{
    return oSEXTSRVATTRhostnameIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRhostname()
{
    oSEXTSRVATTRhostnameIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRreservationId() const
{
    return oSEXTSRVATTRreservationId_;
}

void NovaServer::setOSEXTSRVATTRreservationId(const std::string& value)
{
    oSEXTSRVATTRreservationId_ = value;
    oSEXTSRVATTRreservationIdIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRreservationIdIsSet() const
{
    return oSEXTSRVATTRreservationIdIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRreservationId()
{
    oSEXTSRVATTRreservationIdIsSet_ = false;
}

int32_t NovaServer::getOSEXTSRVATTRlaunchIndex() const
{
    return oSEXTSRVATTRlaunchIndex_;
}

void NovaServer::setOSEXTSRVATTRlaunchIndex(int32_t value)
{
    oSEXTSRVATTRlaunchIndex_ = value;
    oSEXTSRVATTRlaunchIndexIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRlaunchIndexIsSet() const
{
    return oSEXTSRVATTRlaunchIndexIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRlaunchIndex()
{
    oSEXTSRVATTRlaunchIndexIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRkernelId() const
{
    return oSEXTSRVATTRkernelId_;
}

void NovaServer::setOSEXTSRVATTRkernelId(const std::string& value)
{
    oSEXTSRVATTRkernelId_ = value;
    oSEXTSRVATTRkernelIdIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRkernelIdIsSet() const
{
    return oSEXTSRVATTRkernelIdIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRkernelId()
{
    oSEXTSRVATTRkernelIdIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRramdiskId() const
{
    return oSEXTSRVATTRramdiskId_;
}

void NovaServer::setOSEXTSRVATTRramdiskId(const std::string& value)
{
    oSEXTSRVATTRramdiskId_ = value;
    oSEXTSRVATTRramdiskIdIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRramdiskIdIsSet() const
{
    return oSEXTSRVATTRramdiskIdIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRramdiskId()
{
    oSEXTSRVATTRramdiskIdIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRrootDeviceName() const
{
    return oSEXTSRVATTRrootDeviceName_;
}

void NovaServer::setOSEXTSRVATTRrootDeviceName(const std::string& value)
{
    oSEXTSRVATTRrootDeviceName_ = value;
    oSEXTSRVATTRrootDeviceNameIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRrootDeviceNameIsSet() const
{
    return oSEXTSRVATTRrootDeviceNameIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRrootDeviceName()
{
    oSEXTSRVATTRrootDeviceNameIsSet_ = false;
}

std::string NovaServer::getOSEXTSRVATTRuserData() const
{
    return oSEXTSRVATTRuserData_;
}

void NovaServer::setOSEXTSRVATTRuserData(const std::string& value)
{
    oSEXTSRVATTRuserData_ = value;
    oSEXTSRVATTRuserDataIsSet_ = true;
}

bool NovaServer::oSEXTSRVATTRuserDataIsSet() const
{
    return oSEXTSRVATTRuserDataIsSet_;
}

void NovaServer::unsetoSEXTSRVATTRuserData()
{
    oSEXTSRVATTRuserDataIsSet_ = false;
}

std::vector<std::string>& NovaServer::getTags()
{
    return tags_;
}

void NovaServer::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool NovaServer::tagsIsSet() const
{
    return tagsIsSet_;
}

void NovaServer::unsettags()
{
    tagsIsSet_ = false;
}

bool NovaServer::isLocked() const
{
    return locked_;
}

void NovaServer::setLocked(bool value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool NovaServer::lockedIsSet() const
{
    return lockedIsSet_;
}

void NovaServer::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string NovaServer::getAccessIPv4() const
{
    return accessIPv4_;
}

void NovaServer::setAccessIPv4(const std::string& value)
{
    accessIPv4_ = value;
    accessIPv4IsSet_ = true;
}

bool NovaServer::accessIPv4IsSet() const
{
    return accessIPv4IsSet_;
}

void NovaServer::unsetaccessIPv4()
{
    accessIPv4IsSet_ = false;
}

std::string NovaServer::getAccessIPv6() const
{
    return accessIPv6_;
}

void NovaServer::setAccessIPv6(const std::string& value)
{
    accessIPv6_ = value;
    accessIPv6IsSet_ = true;
}

bool NovaServer::accessIPv6IsSet() const
{
    return accessIPv6IsSet_;
}

void NovaServer::unsetaccessIPv6()
{
    accessIPv6IsSet_ = false;
}

std::string NovaServer::getConfigDrive() const
{
    return configDrive_;
}

void NovaServer::setConfigDrive(const std::string& value)
{
    configDrive_ = value;
    configDriveIsSet_ = true;
}

bool NovaServer::configDriveIsSet() const
{
    return configDriveIsSet_;
}

void NovaServer::unsetconfigDrive()
{
    configDriveIsSet_ = false;
}

int32_t NovaServer::getProgress() const
{
    return progress_;
}

void NovaServer::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool NovaServer::progressIsSet() const
{
    return progressIsSet_;
}

void NovaServer::unsetprogress()
{
    progressIsSet_ = false;
}

}
}
}
}
}


