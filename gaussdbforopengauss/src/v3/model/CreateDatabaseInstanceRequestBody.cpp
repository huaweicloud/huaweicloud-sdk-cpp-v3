

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDatabaseInstanceRequestBody::CreateDatabaseInstanceRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    datastoreIsSet_ = false;
    haIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    volumeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    chargeInfoIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    shardingNum_ = 0;
    shardingNumIsSet_ = false;
    coordinatorNum_ = 0;
    coordinatorNumIsSet_ = false;
    replicaNum_ = 0;
    replicaNumIsSet_ = false;
    enableForceSwitch_ = false;
    enableForceSwitchIsSet_ = false;
    enableSingleFloatIp_ = false;
    enableSingleFloatIpIsSet_ = false;
}

CreateDatabaseInstanceRequestBody::~CreateDatabaseInstanceRequestBody() = default;

void CreateDatabaseInstanceRequestBody::validate()
{
}

web::json::value CreateDatabaseInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(haIsSet_) {
        val[utility::conversions::to_string_t("ha")] = ModelBase::toJson(ha_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
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
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
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
    if(shardingNumIsSet_) {
        val[utility::conversions::to_string_t("sharding_num")] = ModelBase::toJson(shardingNum_);
    }
    if(coordinatorNumIsSet_) {
        val[utility::conversions::to_string_t("coordinator_num")] = ModelBase::toJson(coordinatorNum_);
    }
    if(replicaNumIsSet_) {
        val[utility::conversions::to_string_t("replica_num")] = ModelBase::toJson(replicaNum_);
    }
    if(enableForceSwitchIsSet_) {
        val[utility::conversions::to_string_t("enable_force_switch")] = ModelBase::toJson(enableForceSwitch_);
    }
    if(enableSingleFloatIpIsSet_) {
        val[utility::conversions::to_string_t("enable_single_float_ip")] = ModelBase::toJson(enableSingleFloatIp_);
    }

    return val;
}
bool CreateDatabaseInstanceRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            CreateInstanceDatastoreOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            OpenGaussHaOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            OpenGaussBackupStrategy refVal;
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
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            OpenGaussVolume refVal;
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
            OpenGaussChargeInfo refVal;
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
    if(val.has_field(utility::conversions::to_string_t("sharding_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sharding_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardingNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("coordinator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("coordinator_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoordinatorNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_force_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_force_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableForceSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_single_float_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_single_float_ip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSingleFloatIp(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseInstanceRequestBody::getName() const
{
    return name_;
}

void CreateDatabaseInstanceRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetname()
{
    nameIsSet_ = false;
}

CreateInstanceDatastoreOption CreateDatabaseInstanceRequestBody::getDatastore() const
{
    return datastore_;
}

void CreateDatabaseInstanceRequestBody::setDatastore(const CreateInstanceDatastoreOption& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

OpenGaussHaOption CreateDatabaseInstanceRequestBody::getHa() const
{
    return ha_;
}

void CreateDatabaseInstanceRequestBody::setHa(const OpenGaussHaOption& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::haIsSet() const
{
    return haIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetha()
{
    haIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getConfigurationId() const
{
    return configurationId_;
}

void CreateDatabaseInstanceRequestBody::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getPort() const
{
    return port_;
}

void CreateDatabaseInstanceRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::portIsSet() const
{
    return portIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetport()
{
    portIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getPassword() const
{
    return password_;
}

void CreateDatabaseInstanceRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

OpenGaussBackupStrategy CreateDatabaseInstanceRequestBody::getBackupStrategy() const
{
    return backupStrategy_;
}

void CreateDatabaseInstanceRequestBody::setBackupStrategy(const OpenGaussBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateDatabaseInstanceRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void CreateDatabaseInstanceRequestBody::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void CreateDatabaseInstanceRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

OpenGaussVolume CreateDatabaseInstanceRequestBody::getVolume() const
{
    return volume_;
}

void CreateDatabaseInstanceRequestBody::setVolume(const OpenGaussVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getRegion() const
{
    return region_;
}

void CreateDatabaseInstanceRequestBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::regionIsSet() const
{
    return regionIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateDatabaseInstanceRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getVpcId() const
{
    return vpcId_;
}

void CreateDatabaseInstanceRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void CreateDatabaseInstanceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateDatabaseInstanceRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

OpenGaussChargeInfo CreateDatabaseInstanceRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateDatabaseInstanceRequestBody::setChargeInfo(const OpenGaussChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string CreateDatabaseInstanceRequestBody::getTimeZone() const
{
    return timeZone_;
}

void CreateDatabaseInstanceRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

int32_t CreateDatabaseInstanceRequestBody::getShardingNum() const
{
    return shardingNum_;
}

void CreateDatabaseInstanceRequestBody::setShardingNum(int32_t value)
{
    shardingNum_ = value;
    shardingNumIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::shardingNumIsSet() const
{
    return shardingNumIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetshardingNum()
{
    shardingNumIsSet_ = false;
}

int32_t CreateDatabaseInstanceRequestBody::getCoordinatorNum() const
{
    return coordinatorNum_;
}

void CreateDatabaseInstanceRequestBody::setCoordinatorNum(int32_t value)
{
    coordinatorNum_ = value;
    coordinatorNumIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::coordinatorNumIsSet() const
{
    return coordinatorNumIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetcoordinatorNum()
{
    coordinatorNumIsSet_ = false;
}

int32_t CreateDatabaseInstanceRequestBody::getReplicaNum() const
{
    return replicaNum_;
}

void CreateDatabaseInstanceRequestBody::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

bool CreateDatabaseInstanceRequestBody::isEnableForceSwitch() const
{
    return enableForceSwitch_;
}

void CreateDatabaseInstanceRequestBody::setEnableForceSwitch(bool value)
{
    enableForceSwitch_ = value;
    enableForceSwitchIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::enableForceSwitchIsSet() const
{
    return enableForceSwitchIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetenableForceSwitch()
{
    enableForceSwitchIsSet_ = false;
}

bool CreateDatabaseInstanceRequestBody::isEnableSingleFloatIp() const
{
    return enableSingleFloatIp_;
}

void CreateDatabaseInstanceRequestBody::setEnableSingleFloatIp(bool value)
{
    enableSingleFloatIp_ = value;
    enableSingleFloatIpIsSet_ = true;
}

bool CreateDatabaseInstanceRequestBody::enableSingleFloatIpIsSet() const
{
    return enableSingleFloatIpIsSet_;
}

void CreateDatabaseInstanceRequestBody::unsetenableSingleFloatIp()
{
    enableSingleFloatIpIsSet_ = false;
}

}
}
}
}
}


