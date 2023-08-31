

#include "huaweicloud/rds/v3/model/InstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceResponse::InstanceResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enableSsl_ = false;
    enableSslIsSet_ = false;
    privateIpsIsSet_ = false;
    privateDnsNamesIsSet_ = false;
    publicDnsNamesIsSet_ = false;
    publicIpsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    dbUserName_ = "";
    dbUserNameIsSet_ = false;
    switchStrategy_ = "";
    switchStrategyIsSet_ = false;
    readOnlyByUser_ = false;
    readOnlyByUserIsSet_ = false;
    maintenanceWindow_ = "";
    maintenanceWindowIsSet_ = false;
    nodesIsSet_ = false;
    relatedInstanceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    datastoreIsSet_ = false;
    haIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    cpu_ = "";
    cpuIsSet_ = false;
    mem_ = "";
    memIsSet_ = false;
    volumeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    chargeInfoIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    tagsIsSet_ = false;
    backupUsedSpace_ = 0.0;
    backupUsedSpaceIsSet_ = false;
    storageUsedSpace_ = 0.0;
    storageUsedSpaceIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    associatedWithDdm_ = false;
    associatedWithDdmIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    maxIops_ = 0L;
    maxIopsIsSet_ = false;
    expirationTime_ = "";
    expirationTimeIsSet_ = false;
}

InstanceResponse::~InstanceResponse() = default;

void InstanceResponse::validate()
{
}

web::json::value InstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
    }
    if(privateIpsIsSet_) {
        val[utility::conversions::to_string_t("private_ips")] = ModelBase::toJson(privateIps_);
    }
    if(privateDnsNamesIsSet_) {
        val[utility::conversions::to_string_t("private_dns_names")] = ModelBase::toJson(privateDnsNames_);
    }
    if(publicDnsNamesIsSet_) {
        val[utility::conversions::to_string_t("public_dns_names")] = ModelBase::toJson(publicDnsNames_);
    }
    if(publicIpsIsSet_) {
        val[utility::conversions::to_string_t("public_ips")] = ModelBase::toJson(publicIps_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(dbUserNameIsSet_) {
        val[utility::conversions::to_string_t("db_user_name")] = ModelBase::toJson(dbUserName_);
    }
    if(switchStrategyIsSet_) {
        val[utility::conversions::to_string_t("switch_strategy")] = ModelBase::toJson(switchStrategy_);
    }
    if(readOnlyByUserIsSet_) {
        val[utility::conversions::to_string_t("read_only_by_user")] = ModelBase::toJson(readOnlyByUser_);
    }
    if(maintenanceWindowIsSet_) {
        val[utility::conversions::to_string_t("maintenance_window")] = ModelBase::toJson(maintenanceWindow_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(relatedInstanceIsSet_) {
        val[utility::conversions::to_string_t("related_instance")] = ModelBase::toJson(relatedInstance_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(haIsSet_) {
        val[utility::conversions::to_string_t("ha")] = ModelBase::toJson(ha_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(diskEncryptionIdIsSet_) {
        val[utility::conversions::to_string_t("disk_encryption_id")] = ModelBase::toJson(diskEncryptionId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(backupUsedSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_used_space")] = ModelBase::toJson(backupUsedSpace_);
    }
    if(storageUsedSpaceIsSet_) {
        val[utility::conversions::to_string_t("storage_used_space")] = ModelBase::toJson(storageUsedSpace_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(associatedWithDdmIsSet_) {
        val[utility::conversions::to_string_t("associated_with_ddm")] = ModelBase::toJson(associatedWithDdm_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(maxIopsIsSet_) {
        val[utility::conversions::to_string_t("max_iops")] = ModelBase::toJson(maxIops_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }

    return val;
}

bool InstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_dns_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_dns_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateDnsNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_dns_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_dns_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicDnsNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("switch_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("read_only_by_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("read_only_by_user"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadOnlyByUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintenance_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maintenance_window"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaintenanceWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_instance"));
        if(!fieldValue.is_null())
        {
            std::vector<RelatedInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedInstance(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            HaResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            BackupStrategyForResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("disk_encryption_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_encryption_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskEncryptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            Volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_used_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_used_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUsedSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_used_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_used_space"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageUsedSpace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_with_ddm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_with_ddm"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedWithDdm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_iops"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
        }
    }
    return ok;
}

std::string InstanceResponse::getId() const
{
    return id_;
}

void InstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void InstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string InstanceResponse::getStatus() const
{
    return status_;
}

void InstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

bool InstanceResponse::isEnableSsl() const
{
    return enableSsl_;
}

void InstanceResponse::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool InstanceResponse::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void InstanceResponse::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

std::vector<std::string>& InstanceResponse::getPrivateIps()
{
    return privateIps_;
}

void InstanceResponse::setPrivateIps(const std::vector<std::string>& value)
{
    privateIps_ = value;
    privateIpsIsSet_ = true;
}

bool InstanceResponse::privateIpsIsSet() const
{
    return privateIpsIsSet_;
}

void InstanceResponse::unsetprivateIps()
{
    privateIpsIsSet_ = false;
}

std::vector<std::string>& InstanceResponse::getPrivateDnsNames()
{
    return privateDnsNames_;
}

void InstanceResponse::setPrivateDnsNames(const std::vector<std::string>& value)
{
    privateDnsNames_ = value;
    privateDnsNamesIsSet_ = true;
}

bool InstanceResponse::privateDnsNamesIsSet() const
{
    return privateDnsNamesIsSet_;
}

void InstanceResponse::unsetprivateDnsNames()
{
    privateDnsNamesIsSet_ = false;
}

std::vector<std::string>& InstanceResponse::getPublicDnsNames()
{
    return publicDnsNames_;
}

void InstanceResponse::setPublicDnsNames(const std::vector<std::string>& value)
{
    publicDnsNames_ = value;
    publicDnsNamesIsSet_ = true;
}

bool InstanceResponse::publicDnsNamesIsSet() const
{
    return publicDnsNamesIsSet_;
}

void InstanceResponse::unsetpublicDnsNames()
{
    publicDnsNamesIsSet_ = false;
}

std::vector<std::string>& InstanceResponse::getPublicIps()
{
    return publicIps_;
}

void InstanceResponse::setPublicIps(const std::vector<std::string>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool InstanceResponse::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void InstanceResponse::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

std::string InstanceResponse::getType() const
{
    return type_;
}

void InstanceResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstanceResponse::typeIsSet() const
{
    return typeIsSet_;
}

void InstanceResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string InstanceResponse::getCreated() const
{
    return created_;
}

void InstanceResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool InstanceResponse::createdIsSet() const
{
    return createdIsSet_;
}

void InstanceResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string InstanceResponse::getUpdated() const
{
    return updated_;
}

void InstanceResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool InstanceResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void InstanceResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string InstanceResponse::getDbUserName() const
{
    return dbUserName_;
}

void InstanceResponse::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool InstanceResponse::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void InstanceResponse::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

std::string InstanceResponse::getSwitchStrategy() const
{
    return switchStrategy_;
}

void InstanceResponse::setSwitchStrategy(const std::string& value)
{
    switchStrategy_ = value;
    switchStrategyIsSet_ = true;
}

bool InstanceResponse::switchStrategyIsSet() const
{
    return switchStrategyIsSet_;
}

void InstanceResponse::unsetswitchStrategy()
{
    switchStrategyIsSet_ = false;
}

bool InstanceResponse::isReadOnlyByUser() const
{
    return readOnlyByUser_;
}

void InstanceResponse::setReadOnlyByUser(bool value)
{
    readOnlyByUser_ = value;
    readOnlyByUserIsSet_ = true;
}

bool InstanceResponse::readOnlyByUserIsSet() const
{
    return readOnlyByUserIsSet_;
}

void InstanceResponse::unsetreadOnlyByUser()
{
    readOnlyByUserIsSet_ = false;
}

std::string InstanceResponse::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void InstanceResponse::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool InstanceResponse::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void InstanceResponse::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

std::vector<NodeResponse>& InstanceResponse::getNodes()
{
    return nodes_;
}

void InstanceResponse::setNodes(const std::vector<NodeResponse>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool InstanceResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void InstanceResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

std::vector<RelatedInstance>& InstanceResponse::getRelatedInstance()
{
    return relatedInstance_;
}

void InstanceResponse::setRelatedInstance(const std::vector<RelatedInstance>& value)
{
    relatedInstance_ = value;
    relatedInstanceIsSet_ = true;
}

bool InstanceResponse::relatedInstanceIsSet() const
{
    return relatedInstanceIsSet_;
}

void InstanceResponse::unsetrelatedInstance()
{
    relatedInstanceIsSet_ = false;
}

std::string InstanceResponse::getName() const
{
    return name_;
}

void InstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void InstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

Datastore InstanceResponse::getDatastore() const
{
    return datastore_;
}

void InstanceResponse::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool InstanceResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void InstanceResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

HaResponse InstanceResponse::getHa() const
{
    return ha_;
}

void InstanceResponse::setHa(const HaResponse& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool InstanceResponse::haIsSet() const
{
    return haIsSet_;
}

void InstanceResponse::unsetha()
{
    haIsSet_ = false;
}

int32_t InstanceResponse::getPort() const
{
    return port_;
}

void InstanceResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool InstanceResponse::portIsSet() const
{
    return portIsSet_;
}

void InstanceResponse::unsetport()
{
    portIsSet_ = false;
}

BackupStrategyForResponse InstanceResponse::getBackupStrategy() const
{
    return backupStrategy_;
}

void InstanceResponse::setBackupStrategy(const BackupStrategyForResponse& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool InstanceResponse::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void InstanceResponse::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string InstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void InstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool InstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void InstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string InstanceResponse::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void InstanceResponse::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool InstanceResponse::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void InstanceResponse::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string InstanceResponse::getFlavorRef() const
{
    return flavorRef_;
}

void InstanceResponse::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool InstanceResponse::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void InstanceResponse::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string InstanceResponse::getCpu() const
{
    return cpu_;
}

void InstanceResponse::setCpu(const std::string& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool InstanceResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void InstanceResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string InstanceResponse::getMem() const
{
    return mem_;
}

void InstanceResponse::setMem(const std::string& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool InstanceResponse::memIsSet() const
{
    return memIsSet_;
}

void InstanceResponse::unsetmem()
{
    memIsSet_ = false;
}

Volume InstanceResponse::getVolume() const
{
    return volume_;
}

void InstanceResponse::setVolume(const Volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool InstanceResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void InstanceResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string InstanceResponse::getRegion() const
{
    return region_;
}

void InstanceResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool InstanceResponse::regionIsSet() const
{
    return regionIsSet_;
}

void InstanceResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string InstanceResponse::getVpcId() const
{
    return vpcId_;
}

void InstanceResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool InstanceResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void InstanceResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string InstanceResponse::getSubnetId() const
{
    return subnetId_;
}

void InstanceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool InstanceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void InstanceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string InstanceResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void InstanceResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool InstanceResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void InstanceResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

ChargeInfoResponse InstanceResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void InstanceResponse::setChargeInfo(const ChargeInfoResponse& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool InstanceResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void InstanceResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string InstanceResponse::getTimeZone() const
{
    return timeZone_;
}

void InstanceResponse::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool InstanceResponse::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void InstanceResponse::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::vector<TagResponse>& InstanceResponse::getTags()
{
    return tags_;
}

void InstanceResponse::setTags(const std::vector<TagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool InstanceResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void InstanceResponse::unsettags()
{
    tagsIsSet_ = false;
}

double InstanceResponse::getBackupUsedSpace() const
{
    return backupUsedSpace_;
}

void InstanceResponse::setBackupUsedSpace(double value)
{
    backupUsedSpace_ = value;
    backupUsedSpaceIsSet_ = true;
}

bool InstanceResponse::backupUsedSpaceIsSet() const
{
    return backupUsedSpaceIsSet_;
}

void InstanceResponse::unsetbackupUsedSpace()
{
    backupUsedSpaceIsSet_ = false;
}

double InstanceResponse::getStorageUsedSpace() const
{
    return storageUsedSpace_;
}

void InstanceResponse::setStorageUsedSpace(double value)
{
    storageUsedSpace_ = value;
    storageUsedSpaceIsSet_ = true;
}

bool InstanceResponse::storageUsedSpaceIsSet() const
{
    return storageUsedSpaceIsSet_;
}

void InstanceResponse::unsetstorageUsedSpace()
{
    storageUsedSpaceIsSet_ = false;
}

std::string InstanceResponse::getOrderId() const
{
    return orderId_;
}

void InstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool InstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void InstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

bool InstanceResponse::isAssociatedWithDdm() const
{
    return associatedWithDdm_;
}

void InstanceResponse::setAssociatedWithDdm(bool value)
{
    associatedWithDdm_ = value;
    associatedWithDdmIsSet_ = true;
}

bool InstanceResponse::associatedWithDdmIsSet() const
{
    return associatedWithDdmIsSet_;
}

void InstanceResponse::unsetassociatedWithDdm()
{
    associatedWithDdmIsSet_ = false;
}

std::string InstanceResponse::getAlias() const
{
    return alias_;
}

void InstanceResponse::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool InstanceResponse::aliasIsSet() const
{
    return aliasIsSet_;
}

void InstanceResponse::unsetalias()
{
    aliasIsSet_ = false;
}

int64_t InstanceResponse::getMaxIops() const
{
    return maxIops_;
}

void InstanceResponse::setMaxIops(int64_t value)
{
    maxIops_ = value;
    maxIopsIsSet_ = true;
}

bool InstanceResponse::maxIopsIsSet() const
{
    return maxIopsIsSet_;
}

void InstanceResponse::unsetmaxIops()
{
    maxIopsIsSet_ = false;
}

std::string InstanceResponse::getExpirationTime() const
{
    return expirationTime_;
}

void InstanceResponse::setExpirationTime(const std::string& value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool InstanceResponse::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void InstanceResponse::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

}
}
}
}
}


