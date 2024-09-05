

#include "huaweicloud/ecs/v2/model/CloudServer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CloudServer::CloudServer()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    marketInfoIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    vmState_ = "";
    vmStateIsSet_ = false;
    taskState_ = "";
    taskStateIsSet_ = false;
    powerState_ = 0;
    powerStateIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    inRecycleBin_ = false;
    inRecycleBinIsSet_ = false;
    spodId_ = "";
    spodIdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    launchedAt_ = "";
    launchedAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    rootDeviceName_ = "";
    rootDeviceNameIsSet_ = false;
    tenancy_ = "";
    tenancyIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    metadataIsSet_ = false;
    tagsIsSet_ = false;
    addressesIsSet_ = false;
    securityGroupsIsSet_ = false;
    volumesAttachedIsSet_ = false;
    imageIsSet_ = false;
    flavorIsSet_ = false;
    faultIsSet_ = false;
    cpuOptionsIsSet_ = false;
}

CloudServer::~CloudServer() = default;

void CloudServer::validate()
{
}

web::json::value CloudServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(marketInfoIsSet_) {
        val[utility::conversions::to_string_t("market_info")] = ModelBase::toJson(marketInfo_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(vmStateIsSet_) {
        val[utility::conversions::to_string_t("vm_state")] = ModelBase::toJson(vmState_);
    }
    if(taskStateIsSet_) {
        val[utility::conversions::to_string_t("task_state")] = ModelBase::toJson(taskState_);
    }
    if(powerStateIsSet_) {
        val[utility::conversions::to_string_t("power_state")] = ModelBase::toJson(powerState_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(inRecycleBinIsSet_) {
        val[utility::conversions::to_string_t("in_recycle_bin")] = ModelBase::toJson(inRecycleBin_);
    }
    if(spodIdIsSet_) {
        val[utility::conversions::to_string_t("spod_id")] = ModelBase::toJson(spodId_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(launchedAtIsSet_) {
        val[utility::conversions::to_string_t("launched_at")] = ModelBase::toJson(launchedAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(rootDeviceNameIsSet_) {
        val[utility::conversions::to_string_t("root_device_name")] = ModelBase::toJson(rootDeviceName_);
    }
    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(volumesAttachedIsSet_) {
        val[utility::conversions::to_string_t("volumes_attached")] = ModelBase::toJson(volumesAttached_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(faultIsSet_) {
        val[utility::conversions::to_string_t("fault")] = ModelBase::toJson(fault_);
    }
    if(cpuOptionsIsSet_) {
        val[utility::conversions::to_string_t("cpu_options")] = ModelBase::toJson(cpuOptions_);
    }

    return val;
}
bool CloudServer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("market_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("market_info"));
        if(!fieldValue.is_null())
        {
            MarketModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vm_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vm_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("power_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("power_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPowerState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("in_recycle_bin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_recycle_bin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInRecycleBin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spod_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spod_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpodId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("launched_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("launched_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLaunchedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("root_device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenancy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenancy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenancy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<NetworkAddresses>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes_attached"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes_attached"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeAttach> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumesAttached(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            Image refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            FlavorQuasar refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fault"));
        if(!fieldValue.is_null())
        {
            Fault refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFault(refVal);
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
    return ok;
}


std::string CloudServer::getId() const
{
    return id_;
}

void CloudServer::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CloudServer::idIsSet() const
{
    return idIsSet_;
}

void CloudServer::unsetid()
{
    idIsSet_ = false;
}

std::string CloudServer::getName() const
{
    return name_;
}

void CloudServer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CloudServer::nameIsSet() const
{
    return nameIsSet_;
}

void CloudServer::unsetname()
{
    nameIsSet_ = false;
}

std::string CloudServer::getStatus() const
{
    return status_;
}

void CloudServer::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CloudServer::statusIsSet() const
{
    return statusIsSet_;
}

void CloudServer::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CloudServer::getTenantId() const
{
    return tenantId_;
}

void CloudServer::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CloudServer::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CloudServer::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string CloudServer::getUserId() const
{
    return userId_;
}

void CloudServer::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CloudServer::userIdIsSet() const
{
    return userIdIsSet_;
}

void CloudServer::unsetuserId()
{
    userIdIsSet_ = false;
}

MarketModel CloudServer::getMarketInfo() const
{
    return marketInfo_;
}

void CloudServer::setMarketInfo(const MarketModel& value)
{
    marketInfo_ = value;
    marketInfoIsSet_ = true;
}

bool CloudServer::marketInfoIsSet() const
{
    return marketInfoIsSet_;
}

void CloudServer::unsetmarketInfo()
{
    marketInfoIsSet_ = false;
}

std::string CloudServer::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CloudServer::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CloudServer::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CloudServer::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CloudServer::getVmState() const
{
    return vmState_;
}

void CloudServer::setVmState(const std::string& value)
{
    vmState_ = value;
    vmStateIsSet_ = true;
}

bool CloudServer::vmStateIsSet() const
{
    return vmStateIsSet_;
}

void CloudServer::unsetvmState()
{
    vmStateIsSet_ = false;
}

std::string CloudServer::getTaskState() const
{
    return taskState_;
}

void CloudServer::setTaskState(const std::string& value)
{
    taskState_ = value;
    taskStateIsSet_ = true;
}

bool CloudServer::taskStateIsSet() const
{
    return taskStateIsSet_;
}

void CloudServer::unsettaskState()
{
    taskStateIsSet_ = false;
}

int32_t CloudServer::getPowerState() const
{
    return powerState_;
}

void CloudServer::setPowerState(int32_t value)
{
    powerState_ = value;
    powerStateIsSet_ = true;
}

bool CloudServer::powerStateIsSet() const
{
    return powerStateIsSet_;
}

void CloudServer::unsetpowerState()
{
    powerStateIsSet_ = false;
}

std::string CloudServer::getCreated() const
{
    return created_;
}

void CloudServer::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool CloudServer::createdIsSet() const
{
    return createdIsSet_;
}

void CloudServer::unsetcreated()
{
    createdIsSet_ = false;
}

bool CloudServer::isInRecycleBin() const
{
    return inRecycleBin_;
}

void CloudServer::setInRecycleBin(bool value)
{
    inRecycleBin_ = value;
    inRecycleBinIsSet_ = true;
}

bool CloudServer::inRecycleBinIsSet() const
{
    return inRecycleBinIsSet_;
}

void CloudServer::unsetinRecycleBin()
{
    inRecycleBinIsSet_ = false;
}

std::string CloudServer::getSpodId() const
{
    return spodId_;
}

void CloudServer::setSpodId(const std::string& value)
{
    spodId_ = value;
    spodIdIsSet_ = true;
}

bool CloudServer::spodIdIsSet() const
{
    return spodIdIsSet_;
}

void CloudServer::unsetspodId()
{
    spodIdIsSet_ = false;
}

std::string CloudServer::getUpdated() const
{
    return updated_;
}

void CloudServer::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool CloudServer::updatedIsSet() const
{
    return updatedIsSet_;
}

void CloudServer::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string CloudServer::getLaunchedAt() const
{
    return launchedAt_;
}

void CloudServer::setLaunchedAt(const std::string& value)
{
    launchedAt_ = value;
    launchedAtIsSet_ = true;
}

bool CloudServer::launchedAtIsSet() const
{
    return launchedAtIsSet_;
}

void CloudServer::unsetlaunchedAt()
{
    launchedAtIsSet_ = false;
}

std::string CloudServer::getDescription() const
{
    return description_;
}

void CloudServer::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CloudServer::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CloudServer::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CloudServer::getKeyName() const
{
    return keyName_;
}

void CloudServer::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool CloudServer::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void CloudServer::unsetkeyName()
{
    keyNameIsSet_ = false;
}

bool CloudServer::isLocked() const
{
    return locked_;
}

void CloudServer::setLocked(bool value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool CloudServer::lockedIsSet() const
{
    return lockedIsSet_;
}

void CloudServer::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string CloudServer::getRootDeviceName() const
{
    return rootDeviceName_;
}

void CloudServer::setRootDeviceName(const std::string& value)
{
    rootDeviceName_ = value;
    rootDeviceNameIsSet_ = true;
}

bool CloudServer::rootDeviceNameIsSet() const
{
    return rootDeviceNameIsSet_;
}

void CloudServer::unsetrootDeviceName()
{
    rootDeviceNameIsSet_ = false;
}

std::string CloudServer::getTenancy() const
{
    return tenancy_;
}

void CloudServer::setTenancy(const std::string& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool CloudServer::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void CloudServer::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::string CloudServer::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void CloudServer::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool CloudServer::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void CloudServer::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

std::string CloudServer::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CloudServer::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CloudServer::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CloudServer::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::map<std::string, std::string>& CloudServer::getMetadata()
{
    return metadata_;
}

void CloudServer::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CloudServer::metadataIsSet() const
{
    return metadataIsSet_;
}

void CloudServer::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<std::string>& CloudServer::getTags()
{
    return tags_;
}

void CloudServer::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CloudServer::tagsIsSet() const
{
    return tagsIsSet_;
}

void CloudServer::unsettags()
{
    tagsIsSet_ = false;
}

std::map<std::string, std::vector<NetworkAddresses>>& CloudServer::getAddresses()
{
    return addresses_;
}

void CloudServer::setAddresses(const std::map<std::string, std::vector<NetworkAddresses>>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool CloudServer::addressesIsSet() const
{
    return addressesIsSet_;
}

void CloudServer::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::vector<SecurityGroup>& CloudServer::getSecurityGroups()
{
    return securityGroups_;
}

void CloudServer::setSecurityGroups(const std::vector<SecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool CloudServer::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void CloudServer::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<VolumeAttach>& CloudServer::getVolumesAttached()
{
    return volumesAttached_;
}

void CloudServer::setVolumesAttached(const std::vector<VolumeAttach>& value)
{
    volumesAttached_ = value;
    volumesAttachedIsSet_ = true;
}

bool CloudServer::volumesAttachedIsSet() const
{
    return volumesAttachedIsSet_;
}

void CloudServer::unsetvolumesAttached()
{
    volumesAttachedIsSet_ = false;
}

Image CloudServer::getImage() const
{
    return image_;
}

void CloudServer::setImage(const Image& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool CloudServer::imageIsSet() const
{
    return imageIsSet_;
}

void CloudServer::unsetimage()
{
    imageIsSet_ = false;
}

FlavorQuasar CloudServer::getFlavor() const
{
    return flavor_;
}

void CloudServer::setFlavor(const FlavorQuasar& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CloudServer::flavorIsSet() const
{
    return flavorIsSet_;
}

void CloudServer::unsetflavor()
{
    flavorIsSet_ = false;
}

Fault CloudServer::getFault() const
{
    return fault_;
}

void CloudServer::setFault(const Fault& value)
{
    fault_ = value;
    faultIsSet_ = true;
}

bool CloudServer::faultIsSet() const
{
    return faultIsSet_;
}

void CloudServer::unsetfault()
{
    faultIsSet_ = false;
}

CpuOptions CloudServer::getCpuOptions() const
{
    return cpuOptions_;
}

void CloudServer::setCpuOptions(const CpuOptions& value)
{
    cpuOptions_ = value;
    cpuOptionsIsSet_ = true;
}

bool CloudServer::cpuOptionsIsSet() const
{
    return cpuOptionsIsSet_;
}

void CloudServer::unsetcpuOptions()
{
    cpuOptionsIsSet_ = false;
}

}
}
}
}
}


