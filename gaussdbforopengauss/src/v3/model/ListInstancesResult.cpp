

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstancesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstancesResult::ListInstancesResult()
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
    mysqlCompatibilityIsSet_ = false;
}

ListInstancesResult::~ListInstancesResult() = default;

void ListInstancesResult::validate()
{
}

web::json::value ListInstancesResult::toJson() const
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
    if(mysqlCompatibilityIsSet_) {
        val[utility::conversions::to_string_t("mysql_compatibility")] = ModelBase::toJson(mysqlCompatibility_);
    }

    return val;
}
bool ListInstancesResult::fromJson(const web::json::value& val)
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
            ListInstanceDatastore refVal;
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
    if(val.has_field(utility::conversions::to_string_t("mysql_compatibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mysql_compatibility"));
        if(!fieldValue.is_null())
        {
            MySQLCompatibilityResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMysqlCompatibility(refVal);
        }
    }
    return ok;
}


std::string ListInstancesResult::getId() const
{
    return id_;
}

void ListInstancesResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInstancesResult::idIsSet() const
{
    return idIsSet_;
}

void ListInstancesResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListInstancesResult::getName() const
{
    return name_;
}

void ListInstancesResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstancesResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstancesResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstancesResult::getStatus() const
{
    return status_;
}

void ListInstancesResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInstancesResult::statusIsSet() const
{
    return statusIsSet_;
}

void ListInstancesResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListInstancesResult::getPrivateIps()
{
    return privateIps_;
}

void ListInstancesResult::setPrivateIps(const std::vector<std::string>& value)
{
    privateIps_ = value;
    privateIpsIsSet_ = true;
}

bool ListInstancesResult::privateIpsIsSet() const
{
    return privateIpsIsSet_;
}

void ListInstancesResult::unsetprivateIps()
{
    privateIpsIsSet_ = false;
}

std::vector<std::string>& ListInstancesResult::getPublicIps()
{
    return publicIps_;
}

void ListInstancesResult::setPublicIps(const std::vector<std::string>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool ListInstancesResult::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void ListInstancesResult::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

int32_t ListInstancesResult::getPort() const
{
    return port_;
}

void ListInstancesResult::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ListInstancesResult::portIsSet() const
{
    return portIsSet_;
}

void ListInstancesResult::unsetport()
{
    portIsSet_ = false;
}

std::string ListInstancesResult::getType() const
{
    return type_;
}

void ListInstancesResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInstancesResult::typeIsSet() const
{
    return typeIsSet_;
}

void ListInstancesResult::unsettype()
{
    typeIsSet_ = false;
}

ListHaResult ListInstancesResult::getHa() const
{
    return ha_;
}

void ListInstancesResult::setHa(const ListHaResult& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool ListInstancesResult::haIsSet() const
{
    return haIsSet_;
}

void ListInstancesResult::unsetha()
{
    haIsSet_ = false;
}

int32_t ListInstancesResult::getReplicaNum() const
{
    return replicaNum_;
}

void ListInstancesResult::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool ListInstancesResult::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void ListInstancesResult::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

std::string ListInstancesResult::getRegion() const
{
    return region_;
}

void ListInstancesResult::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListInstancesResult::regionIsSet() const
{
    return regionIsSet_;
}

void ListInstancesResult::unsetregion()
{
    regionIsSet_ = false;
}

ListInstanceDatastore ListInstancesResult::getDatastore() const
{
    return datastore_;
}

void ListInstancesResult::setDatastore(const ListInstanceDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ListInstancesResult::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ListInstancesResult::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string ListInstancesResult::getCreated() const
{
    return created_;
}

void ListInstancesResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ListInstancesResult::createdIsSet() const
{
    return createdIsSet_;
}

void ListInstancesResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ListInstancesResult::getUpdated() const
{
    return updated_;
}

void ListInstancesResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ListInstancesResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ListInstancesResult::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ListInstancesResult::getDbUserName() const
{
    return dbUserName_;
}

void ListInstancesResult::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool ListInstancesResult::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void ListInstancesResult::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

std::string ListInstancesResult::getVpcId() const
{
    return vpcId_;
}

void ListInstancesResult::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListInstancesResult::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListInstancesResult::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListInstancesResult::getSubnetId() const
{
    return subnetId_;
}

void ListInstancesResult::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ListInstancesResult::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ListInstancesResult::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string ListInstancesResult::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ListInstancesResult::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ListInstancesResult::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ListInstancesResult::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ListInstancesResult::getFlavorRef() const
{
    return flavorRef_;
}

void ListInstancesResult::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool ListInstancesResult::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void ListInstancesResult::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

ListFlavorInfo ListInstancesResult::getFlavorInfo() const
{
    return flavorInfo_;
}

void ListInstancesResult::setFlavorInfo(const ListFlavorInfo& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool ListInstancesResult::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void ListInstancesResult::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

ListVolume ListInstancesResult::getVolume() const
{
    return volume_;
}

void ListInstancesResult::setVolume(const ListVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ListInstancesResult::volumeIsSet() const
{
    return volumeIsSet_;
}

void ListInstancesResult::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string ListInstancesResult::getSwitchStrategy() const
{
    return switchStrategy_;
}

void ListInstancesResult::setSwitchStrategy(const std::string& value)
{
    switchStrategy_ = value;
    switchStrategyIsSet_ = true;
}

bool ListInstancesResult::switchStrategyIsSet() const
{
    return switchStrategyIsSet_;
}

void ListInstancesResult::unsetswitchStrategy()
{
    switchStrategyIsSet_ = false;
}

OpenGaussBackupStrategyForListResponse ListInstancesResult::getBackupStrategy() const
{
    return backupStrategy_;
}

void ListInstancesResult::setBackupStrategy(const OpenGaussBackupStrategyForListResponse& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool ListInstancesResult::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void ListInstancesResult::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string ListInstancesResult::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void ListInstancesResult::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool ListInstancesResult::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void ListInstancesResult::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

std::vector<NodeResult>& ListInstancesResult::getNodes()
{
    return nodes_;
}

void ListInstancesResult::setNodes(const std::vector<NodeResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListInstancesResult::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListInstancesResult::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string ListInstancesResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListInstancesResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListInstancesResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListInstancesResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListInstancesResult::getInstanceMode() const
{
    return instanceMode_;
}

void ListInstancesResult::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ListInstancesResult::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ListInstancesResult::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ListInstancesResult::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void ListInstancesResult::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool ListInstancesResult::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void ListInstancesResult::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

OpenGaussChargeInfoListResponse ListInstancesResult::getChargeInfo() const
{
    return chargeInfo_;
}

void ListInstancesResult::setChargeInfo(const OpenGaussChargeInfoListResponse& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool ListInstancesResult::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void ListInstancesResult::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string ListInstancesResult::getTimeZone() const
{
    return timeZone_;
}

void ListInstancesResult::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ListInstancesResult::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ListInstancesResult::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::vector<TagResult>& ListInstancesResult::getTags()
{
    return tags_;
}

void ListInstancesResult::setTags(const std::vector<TagResult>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstancesResult::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstancesResult::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListInstancesResult::getDiskUsage() const
{
    return diskUsage_;
}

void ListInstancesResult::setDiskUsage(const std::string& value)
{
    diskUsage_ = value;
    diskUsageIsSet_ = true;
}

bool ListInstancesResult::diskUsageIsSet() const
{
    return diskUsageIsSet_;
}

void ListInstancesResult::unsetdiskUsage()
{
    diskUsageIsSet_ = false;
}

MySQLCompatibilityResult ListInstancesResult::getMysqlCompatibility() const
{
    return mysqlCompatibility_;
}

void ListInstancesResult::setMysqlCompatibility(const MySQLCompatibilityResult& value)
{
    mysqlCompatibility_ = value;
    mysqlCompatibilityIsSet_ = true;
}

bool ListInstancesResult::mysqlCompatibilityIsSet() const
{
    return mysqlCompatibilityIsSet_;
}

void ListInstancesResult::unsetmysqlCompatibility()
{
    mysqlCompatibilityIsSet_ = false;
}

}
}
}
}
}


