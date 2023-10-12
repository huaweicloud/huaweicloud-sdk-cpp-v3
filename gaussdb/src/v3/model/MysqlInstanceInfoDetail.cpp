

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceInfoDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceInfoDetail::MysqlInstanceInfoDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    chargeInfoIsSet_ = false;
    nodeCount_ = 0;
    nodeCountIsSet_ = false;
    datastoreIsSet_ = false;
    backupUsedSpace_ = 0.0;
    backupUsedSpaceIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    privateWriteIpsIsSet_ = false;
    privateDnsNamesIsSet_ = false;
    publicIps_ = "";
    publicIpsIsSet_ = false;
    dbUserName_ = "";
    dbUserNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    backupStrategyIsSet_ = false;
    nodesIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    azMode_ = "";
    azModeIsSet_ = false;
    masterAzCode_ = "";
    masterAzCodeIsSet_ = false;
    maintenanceWindow_ = "";
    maintenanceWindowIsSet_ = false;
    tagsIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    proxiesIsSet_ = false;
}

MysqlInstanceInfoDetail::~MysqlInstanceInfoDetail() = default;

void MysqlInstanceInfoDetail::validate()
{
}

web::json::value MysqlInstanceInfoDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(nodeCountIsSet_) {
        val[utility::conversions::to_string_t("node_count")] = ModelBase::toJson(nodeCount_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(backupUsedSpaceIsSet_) {
        val[utility::conversions::to_string_t("backup_used_space")] = ModelBase::toJson(backupUsedSpace_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(privateWriteIpsIsSet_) {
        val[utility::conversions::to_string_t("private_write_ips")] = ModelBase::toJson(privateWriteIps_);
    }
    if(privateDnsNamesIsSet_) {
        val[utility::conversions::to_string_t("private_dns_names")] = ModelBase::toJson(privateDnsNames_);
    }
    if(publicIpsIsSet_) {
        val[utility::conversions::to_string_t("public_ips")] = ModelBase::toJson(publicIps_);
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
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(azModeIsSet_) {
        val[utility::conversions::to_string_t("az_mode")] = ModelBase::toJson(azMode_);
    }
    if(masterAzCodeIsSet_) {
        val[utility::conversions::to_string_t("master_az_code")] = ModelBase::toJson(masterAzCode_);
    }
    if(maintenanceWindowIsSet_) {
        val[utility::conversions::to_string_t("maintenance_window")] = ModelBase::toJson(maintenanceWindow_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(proxiesIsSet_) {
        val[utility::conversions::to_string_t("proxies")] = ModelBase::toJson(proxies_);
    }

    return val;
}
bool MysqlInstanceInfoDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            MysqlInstanceChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            MysqlDatastoreWithKernelVersion refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("private_write_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_write_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateWriteIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            MysqlBackupStrategy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlInstanceNodeInfo> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterAzCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxies"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxies(refVal);
        }
    }
    return ok;
}


std::string MysqlInstanceInfoDetail::getId() const
{
    return id_;
}

void MysqlInstanceInfoDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlInstanceInfoDetail::idIsSet() const
{
    return idIsSet_;
}

void MysqlInstanceInfoDetail::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getName() const
{
    return name_;
}

void MysqlInstanceInfoDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlInstanceInfoDetail::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlInstanceInfoDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getProjectId() const
{
    return projectId_;
}

void MysqlInstanceInfoDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getStatus() const
{
    return status_;
}

void MysqlInstanceInfoDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlInstanceInfoDetail::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlInstanceInfoDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getPort() const
{
    return port_;
}

void MysqlInstanceInfoDetail::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool MysqlInstanceInfoDetail::portIsSet() const
{
    return portIsSet_;
}

void MysqlInstanceInfoDetail::unsetport()
{
    portIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getAlias() const
{
    return alias_;
}

void MysqlInstanceInfoDetail::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool MysqlInstanceInfoDetail::aliasIsSet() const
{
    return aliasIsSet_;
}

void MysqlInstanceInfoDetail::unsetalias()
{
    aliasIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getType() const
{
    return type_;
}

void MysqlInstanceInfoDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlInstanceInfoDetail::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlInstanceInfoDetail::unsettype()
{
    typeIsSet_ = false;
}

MysqlInstanceChargeInfo MysqlInstanceInfoDetail::getChargeInfo() const
{
    return chargeInfo_;
}

void MysqlInstanceInfoDetail::setChargeInfo(const MysqlInstanceChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool MysqlInstanceInfoDetail::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void MysqlInstanceInfoDetail::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

int32_t MysqlInstanceInfoDetail::getNodeCount() const
{
    return nodeCount_;
}

void MysqlInstanceInfoDetail::setNodeCount(int32_t value)
{
    nodeCount_ = value;
    nodeCountIsSet_ = true;
}

bool MysqlInstanceInfoDetail::nodeCountIsSet() const
{
    return nodeCountIsSet_;
}

void MysqlInstanceInfoDetail::unsetnodeCount()
{
    nodeCountIsSet_ = false;
}

MysqlDatastoreWithKernelVersion MysqlInstanceInfoDetail::getDatastore() const
{
    return datastore_;
}

void MysqlInstanceInfoDetail::setDatastore(const MysqlDatastoreWithKernelVersion& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool MysqlInstanceInfoDetail::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void MysqlInstanceInfoDetail::unsetdatastore()
{
    datastoreIsSet_ = false;
}

double MysqlInstanceInfoDetail::getBackupUsedSpace() const
{
    return backupUsedSpace_;
}

void MysqlInstanceInfoDetail::setBackupUsedSpace(double value)
{
    backupUsedSpace_ = value;
    backupUsedSpaceIsSet_ = true;
}

bool MysqlInstanceInfoDetail::backupUsedSpaceIsSet() const
{
    return backupUsedSpaceIsSet_;
}

void MysqlInstanceInfoDetail::unsetbackupUsedSpace()
{
    backupUsedSpaceIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getCreated() const
{
    return created_;
}

void MysqlInstanceInfoDetail::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::createdIsSet() const
{
    return createdIsSet_;
}

void MysqlInstanceInfoDetail::unsetcreated()
{
    createdIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getUpdated() const
{
    return updated_;
}

void MysqlInstanceInfoDetail::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool MysqlInstanceInfoDetail::updatedIsSet() const
{
    return updatedIsSet_;
}

void MysqlInstanceInfoDetail::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceInfoDetail::getPrivateWriteIps()
{
    return privateWriteIps_;
}

void MysqlInstanceInfoDetail::setPrivateWriteIps(const std::vector<std::string>& value)
{
    privateWriteIps_ = value;
    privateWriteIpsIsSet_ = true;
}

bool MysqlInstanceInfoDetail::privateWriteIpsIsSet() const
{
    return privateWriteIpsIsSet_;
}

void MysqlInstanceInfoDetail::unsetprivateWriteIps()
{
    privateWriteIpsIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceInfoDetail::getPrivateDnsNames()
{
    return privateDnsNames_;
}

void MysqlInstanceInfoDetail::setPrivateDnsNames(const std::vector<std::string>& value)
{
    privateDnsNames_ = value;
    privateDnsNamesIsSet_ = true;
}

bool MysqlInstanceInfoDetail::privateDnsNamesIsSet() const
{
    return privateDnsNamesIsSet_;
}

void MysqlInstanceInfoDetail::unsetprivateDnsNames()
{
    privateDnsNamesIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getPublicIps() const
{
    return publicIps_;
}

void MysqlInstanceInfoDetail::setPublicIps(const std::string& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool MysqlInstanceInfoDetail::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void MysqlInstanceInfoDetail::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getDbUserName() const
{
    return dbUserName_;
}

void MysqlInstanceInfoDetail::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool MysqlInstanceInfoDetail::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void MysqlInstanceInfoDetail::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getVpcId() const
{
    return vpcId_;
}

void MysqlInstanceInfoDetail::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getSubnetId() const
{
    return subnetId_;
}

void MysqlInstanceInfoDetail::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getSecurityGroupId() const
{
    return securityGroupId_;
}

void MysqlInstanceInfoDetail::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getConfigurationId() const
{
    return configurationId_;
}

void MysqlInstanceInfoDetail::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

MysqlBackupStrategy MysqlInstanceInfoDetail::getBackupStrategy() const
{
    return backupStrategy_;
}

void MysqlInstanceInfoDetail::setBackupStrategy(const MysqlBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool MysqlInstanceInfoDetail::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void MysqlInstanceInfoDetail::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::vector<MysqlInstanceNodeInfo>& MysqlInstanceInfoDetail::getNodes()
{
    return nodes_;
}

void MysqlInstanceInfoDetail::setNodes(const std::vector<MysqlInstanceNodeInfo>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool MysqlInstanceInfoDetail::nodesIsSet() const
{
    return nodesIsSet_;
}

void MysqlInstanceInfoDetail::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void MysqlInstanceInfoDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getTimeZone() const
{
    return timeZone_;
}

void MysqlInstanceInfoDetail::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool MysqlInstanceInfoDetail::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void MysqlInstanceInfoDetail::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getAzMode() const
{
    return azMode_;
}

void MysqlInstanceInfoDetail::setAzMode(const std::string& value)
{
    azMode_ = value;
    azModeIsSet_ = true;
}

bool MysqlInstanceInfoDetail::azModeIsSet() const
{
    return azModeIsSet_;
}

void MysqlInstanceInfoDetail::unsetazMode()
{
    azModeIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getMasterAzCode() const
{
    return masterAzCode_;
}

void MysqlInstanceInfoDetail::setMasterAzCode(const std::string& value)
{
    masterAzCode_ = value;
    masterAzCodeIsSet_ = true;
}

bool MysqlInstanceInfoDetail::masterAzCodeIsSet() const
{
    return masterAzCodeIsSet_;
}

void MysqlInstanceInfoDetail::unsetmasterAzCode()
{
    masterAzCodeIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getMaintenanceWindow() const
{
    return maintenanceWindow_;
}

void MysqlInstanceInfoDetail::setMaintenanceWindow(const std::string& value)
{
    maintenanceWindow_ = value;
    maintenanceWindowIsSet_ = true;
}

bool MysqlInstanceInfoDetail::maintenanceWindowIsSet() const
{
    return maintenanceWindowIsSet_;
}

void MysqlInstanceInfoDetail::unsetmaintenanceWindow()
{
    maintenanceWindowIsSet_ = false;
}

std::vector<MysqlTags>& MysqlInstanceInfoDetail::getTags()
{
    return tags_;
}

void MysqlInstanceInfoDetail::setTags(const std::vector<MysqlTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool MysqlInstanceInfoDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void MysqlInstanceInfoDetail::unsettags()
{
    tagsIsSet_ = false;
}

std::string MysqlInstanceInfoDetail::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void MysqlInstanceInfoDetail::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool MysqlInstanceInfoDetail::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void MysqlInstanceInfoDetail::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::vector<MysqlProxyInfo>& MysqlInstanceInfoDetail::getProxies()
{
    return proxies_;
}

void MysqlInstanceInfoDetail::setProxies(const std::vector<MysqlProxyInfo>& value)
{
    proxies_ = value;
    proxiesIsSet_ = true;
}

bool MysqlInstanceInfoDetail::proxiesIsSet() const
{
    return proxiesIsSet_;
}

void MysqlInstanceInfoDetail::unsetproxies()
{
    proxiesIsSet_ = false;
}

}
}
}
}
}


