

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceResult::ListInstanceResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    privateIpsIsSet_ = false;
    publicIpsIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    haIsSet_ = false;
    replicaNum_ = 0;
    replicaNumIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    datastoreIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    dbUserName_ = "";
    dbUserNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    flavorInfoIsSet_ = false;
    volumeIsSet_ = false;
    switchStrategy_ = "";
    switchStrategyIsSet_ = false;
    backupStrategyIsSet_ = false;
    maintenanceWindow_ = "";
    maintenanceWindowIsSet_ = false;
    nodesIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    chargeInfoIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    tagsIsSet_ = false;
    diskUsage_ = "";
    diskUsageIsSet_ = false;
    backupUsedSpace_ = "";
    backupUsedSpaceIsSet_ = false;
}

ListInstanceResult::~ListInstanceResult() = default;

void ListInstanceResult::validate()
{
}

web::json::value ListInstanceResult::toJson() const
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
    if(privateIpsIsSet_) {
        val[utility::conversions::to_string_t("private_ips")] = ModelBase::toJson(privateIps_);
    }
    if(publicIpsIsSet_) {
        val[utility::conversions::to_string_t("public_ips")] = ModelBase::toJson(publicIps_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(haIsSet_) {
        val[utility::conversions::to_string_t("ha")] = ModelBase::toJson(ha_);
    }
    if(replicaNumIsSet_) {
        val[utility::conversions::to_string_t("replica_num")] = ModelBase::toJson(replicaNum_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
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
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(flavorInfoIsSet_) {
        val[utility::conversions::to_string_t("flavor_info")] = ModelBase::toJson(flavorInfo_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(switchStrategyIsSet_) {
        val[utility::conversions::to_string_t("switch_strategy")] = ModelBase::toJson(switchStrategy_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(maintenanceWindowIsSet_) {
        val[utility::conversions::to_string_t("maintenance_window")] = ModelBase::toJson(maintenanceWindow_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(diskEncryptionIdIsSet_) {
        val[utility::conversions::to_string_t("disk_encryption_id")] = ModelBase::toJson(diskEncryptionId_);
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
    if(diskUsageIsSet_) {
        val[utility::conversions::to_string_t("disk_usage")] = ModelBase::toJson(diskUsage_);
    }
    if(backupUsedSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_used_space")] = ModelBase::toJson(backupUsedSpace_);
    }

    return val;
}
bool ListInstanceResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("private_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            ListHaResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            ListDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_info"));
        if(!fieldValue.is_null())
        {
            ListFlavorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            ListVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            OpenGaussBackupStrategyForListResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
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
            std::vector<NodeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            OpenGaussChargeInfoListResponse refVal;
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
            std::vector<TagResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_used_space"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_used_space"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupUsedSpace(refVal);
        }
    }
    return ok;
}


std::string ListInstanceResult::getId() const
{
    return id_;
}

void ListInstanceResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstanceResult::idIsSet() const
{
    return idIsSet_;
}

void ListInstanceResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstanceResult::getName() const
{
    return name_;
}

void ListInstanceResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstanceResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstanceResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstanceResult::getStatus() const
{
    return status_;
}

void ListInstanceResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInstanceResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListInstanceResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListInstanceResult::getPrivateIps()
{
    return privateIps_;
}

void ListInstanceResult::setPrivateIps(const std::vector<std::string>& value)
{
    privateIps_ = value;
    privateIpsIsSet_ = true;
}

bool ListInstanceResult::privateIpsIsSet() const
{
    return privateIpsIsSet_;
}

void ListInstanceResult::unsetprivateIps()
{
    privateIpsIsSet_ = false;
}

std::vector<std::string>& ListInstanceResult::getPublicIps()
{
    return publicIps_;
}

void ListInstanceResult::setPublicIps(const std::vector<std::string>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool ListInstanceResult::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void ListInstanceResult::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

int32_t ListInstanceResult::getPort() const
{
    return port_;
}

void ListInstanceResult::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ListInstanceResult::portIsSet() const
{
    return portIsSet_;
}

void ListInstanceResult::unsetport()
{
    portIsSet_ = false;
}

std::string ListInstanceResult::getType() const
{
    return type_;
}

void ListInstanceResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInstanceResult::typeIsSet() const
{
    return typeIsSet_;
}

void ListInstanceResult::unsettype()
{
    typeIsSet_ = false;
}

ListHaResult ListInstanceResult::getHa() const
{
    return ha_;
}

void ListInstanceResult::setHa(const ListHaResult& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool ListInstanceResult::haIsSet() const
{
    return haIsSet_;
}

void ListInstanceResult::unsetha()
{
    haIsSet_ = false;
}

int32_t ListInstanceResult::getReplicaNum() const
{
    return replicaNum_;
}

void ListInstanceResult::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool ListInstanceResult::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void ListInstanceResult::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

std::string ListInstanceResult::getRegion() const
{
    return region_;
}

void ListInstanceResult::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListInstanceResult::regionIsSet() const
{
    return regionIsSet_;
}

void ListInstanceResult::unsetregion()
{
    regionIsSet_ = false;
}

ListDatastore ListInstanceResult::getDatastore() const
{
    return datastore_;
}

void ListInstanceResult::setDatastore(const ListDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ListInstanceResult::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ListInstanceResult::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string ListInstanceResult::getCreated() const
{
    return created_;
}

void ListInstanceResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ListInstanceResult::createdIsSet() const
{
    return createdIsSet_;
}

void ListInstanceResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ListInstanceResult::getUpdated() const
{
    return updated_;
}

void ListInstanceResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ListInstanceResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ListInstanceResult::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ListInstanceResult::getDbUserName() const
{
    return dbUserName_;
}

void ListInstanceResult::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool ListInstanceResult::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void ListInstanceResult::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

std::string ListInstanceResult::getVpcId() const
{
    return vpcId_;
}

void ListInstanceResult::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInstanceResult::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInstanceResult::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInstanceResult::getSubnetId() const
{
    return subnetId_;
}

void ListInstanceResult::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstanceResult::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstanceResult::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ListInstanceResult::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ListInstanceResult::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ListInstanceResult::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ListInstanceResult::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ListInstanceResult::getFlavorRef() const
{
    return flavorRef_;
}

void ListInstanceResult::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ListInstanceResult::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ListInstanceResult::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

ListFlavorInfo ListInstanceResult::getFlavorInfo() const
{
    return flavorInfo_;
}

void ListInstanceResult::setFlavorInfo(const ListFlavorInfo& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool ListInstanceResult::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void ListInstanceResult::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

ListVolume ListInstanceResult::getVolume() const
{
    return volume_;
}

void ListInstanceResult::setVolume(const ListVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ListInstanceResult::volumeIsSet() const
{
    return volumeIsSet_;
}

void ListInstanceResult::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string ListInstanceResult::getSwitchStrategy() const
{
    return switchStrategy_;
}

void ListInstanceResult::setSwitchStrategy(const std::string& value)
{
    switchStrategy_ = value;
    switchStrategyIsSet_ = true;
}

bool ListInstanceResult::switchStrategyIsSet() const
{
    return switchStrategyIsSet_;
}

void ListInstanceResult::unsetswitchStrategy()
{
    switchStrategyIsSet_ = false;
}

OpenGaussBackupStrategyForListResponse ListInstanceResult::getBackupStrategy() const
{
    return backupStrategy_;
}

void ListInstanceResult::setBackupStrategy(const OpenGaussBackupStrategyForListResponse& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool ListInstanceResult::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void ListInstanceResult::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string ListInstanceResult::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void ListInstanceResult::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool ListInstanceResult::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void ListInstanceResult::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

std::vector<NodeResult>& ListInstanceResult::getNodes()
{
    return nodes_;
}

void ListInstanceResult::setNodes(const std::vector<NodeResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListInstanceResult::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListInstanceResult::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string ListInstanceResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListInstanceResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListInstanceResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListInstanceResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListInstanceResult::getInstanceMode() const
{
    return instanceMode_;
}

void ListInstanceResult::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ListInstanceResult::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ListInstanceResult::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ListInstanceResult::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void ListInstanceResult::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool ListInstanceResult::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void ListInstanceResult::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

OpenGaussChargeInfoListResponse ListInstanceResult::getChargeInfo() const
{
    return chargeInfo_;
}

void ListInstanceResult::setChargeInfo(const OpenGaussChargeInfoListResponse& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool ListInstanceResult::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void ListInstanceResult::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string ListInstanceResult::getTimeZone() const
{
    return timeZone_;
}

void ListInstanceResult::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ListInstanceResult::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ListInstanceResult::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::vector<TagResult>& ListInstanceResult::getTags()
{
    return tags_;
}

void ListInstanceResult::setTags(const std::vector<TagResult>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstanceResult::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstanceResult::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListInstanceResult::getDiskUsage() const
{
    return diskUsage_;
}

void ListInstanceResult::setDiskUsage(const std::string& value)
{
    diskUsage_ = value;
    diskUsageIsSet_ = true;
}

bool ListInstanceResult::diskUsageIsSet() const
{
    return diskUsageIsSet_;
}

void ListInstanceResult::unsetdiskUsage()
{
    diskUsageIsSet_ = false;
}

std::string ListInstanceResult::getBackupUsedSpace() const
{
    return backupUsedSpace_;
}

void ListInstanceResult::setBackupUsedSpace(const std::string& value)
{
    backupUsedSpace_ = value;
    backupUsedSpaceIsSet_ = true;
}

bool ListInstanceResult::backupUsedSpaceIsSet() const
{
    return backupUsedSpaceIsSet_;
}

void ListInstanceResult::unsetbackupUsedSpace()
{
    backupUsedSpaceIsSet_ = false;
}

}
}
}
}
}


