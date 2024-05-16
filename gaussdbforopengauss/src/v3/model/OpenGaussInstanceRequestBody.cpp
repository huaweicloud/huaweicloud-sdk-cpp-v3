

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussInstanceRequestBody::OpenGaussInstanceRequestBody()
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

OpenGaussInstanceRequestBody::~OpenGaussInstanceRequestBody() = default;

void OpenGaussInstanceRequestBody::validate()
{
}

web::json::value OpenGaussInstanceRequestBody::toJson() const
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
bool OpenGaussInstanceRequestBody::fromJson(const web::json::value& val)
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
            OpenGaussDatastoreOption refVal;
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


std::string OpenGaussInstanceRequestBody::getName() const
{
    return name_;
}

void OpenGaussInstanceRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void OpenGaussInstanceRequestBody::unsetname()
{
    nameIsSet_ = false;
}

OpenGaussDatastoreOption OpenGaussInstanceRequestBody::getDatastore() const
{
    return datastore_;
}

void OpenGaussInstanceRequestBody::setDatastore(const OpenGaussDatastoreOption& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void OpenGaussInstanceRequestBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

OpenGaussHaOption OpenGaussInstanceRequestBody::getHa() const
{
    return ha_;
}

void OpenGaussInstanceRequestBody::setHa(const OpenGaussHaOption& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::haIsSet() const
{
    return haIsSet_;
}

void OpenGaussInstanceRequestBody::unsetha()
{
    haIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getConfigurationId() const
{
    return configurationId_;
}

void OpenGaussInstanceRequestBody::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void OpenGaussInstanceRequestBody::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getPort() const
{
    return port_;
}

void OpenGaussInstanceRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::portIsSet() const
{
    return portIsSet_;
}

void OpenGaussInstanceRequestBody::unsetport()
{
    portIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getPassword() const
{
    return password_;
}

void OpenGaussInstanceRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void OpenGaussInstanceRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

OpenGaussBackupStrategy OpenGaussInstanceRequestBody::getBackupStrategy() const
{
    return backupStrategy_;
}

void OpenGaussInstanceRequestBody::setBackupStrategy(const OpenGaussBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void OpenGaussInstanceRequestBody::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void OpenGaussInstanceRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void OpenGaussInstanceRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void OpenGaussInstanceRequestBody::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void OpenGaussInstanceRequestBody::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void OpenGaussInstanceRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpenGaussInstanceRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

OpenGaussVolume OpenGaussInstanceRequestBody::getVolume() const
{
    return volume_;
}

void OpenGaussInstanceRequestBody::setVolume(const OpenGaussVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void OpenGaussInstanceRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getRegion() const
{
    return region_;
}

void OpenGaussInstanceRequestBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::regionIsSet() const
{
    return regionIsSet_;
}

void OpenGaussInstanceRequestBody::unsetregion()
{
    regionIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void OpenGaussInstanceRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void OpenGaussInstanceRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getVpcId() const
{
    return vpcId_;
}

void OpenGaussInstanceRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void OpenGaussInstanceRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void OpenGaussInstanceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void OpenGaussInstanceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void OpenGaussInstanceRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void OpenGaussInstanceRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

OpenGaussChargeInfo OpenGaussInstanceRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void OpenGaussInstanceRequestBody::setChargeInfo(const OpenGaussChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void OpenGaussInstanceRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string OpenGaussInstanceRequestBody::getTimeZone() const
{
    return timeZone_;
}

void OpenGaussInstanceRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void OpenGaussInstanceRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

int32_t OpenGaussInstanceRequestBody::getShardingNum() const
{
    return shardingNum_;
}

void OpenGaussInstanceRequestBody::setShardingNum(int32_t value)
{
    shardingNum_ = value;
    shardingNumIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::shardingNumIsSet() const
{
    return shardingNumIsSet_;
}

void OpenGaussInstanceRequestBody::unsetshardingNum()
{
    shardingNumIsSet_ = false;
}

int32_t OpenGaussInstanceRequestBody::getCoordinatorNum() const
{
    return coordinatorNum_;
}

void OpenGaussInstanceRequestBody::setCoordinatorNum(int32_t value)
{
    coordinatorNum_ = value;
    coordinatorNumIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::coordinatorNumIsSet() const
{
    return coordinatorNumIsSet_;
}

void OpenGaussInstanceRequestBody::unsetcoordinatorNum()
{
    coordinatorNumIsSet_ = false;
}

int32_t OpenGaussInstanceRequestBody::getReplicaNum() const
{
    return replicaNum_;
}

void OpenGaussInstanceRequestBody::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void OpenGaussInstanceRequestBody::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

bool OpenGaussInstanceRequestBody::isEnableForceSwitch() const
{
    return enableForceSwitch_;
}

void OpenGaussInstanceRequestBody::setEnableForceSwitch(bool value)
{
    enableForceSwitch_ = value;
    enableForceSwitchIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::enableForceSwitchIsSet() const
{
    return enableForceSwitchIsSet_;
}

void OpenGaussInstanceRequestBody::unsetenableForceSwitch()
{
    enableForceSwitchIsSet_ = false;
}

bool OpenGaussInstanceRequestBody::isEnableSingleFloatIp() const
{
    return enableSingleFloatIp_;
}

void OpenGaussInstanceRequestBody::setEnableSingleFloatIp(bool value)
{
    enableSingleFloatIp_ = value;
    enableSingleFloatIpIsSet_ = true;
}

bool OpenGaussInstanceRequestBody::enableSingleFloatIpIsSet() const
{
    return enableSingleFloatIpIsSet_;
}

void OpenGaussInstanceRequestBody::unsetenableSingleFloatIp()
{
    enableSingleFloatIpIsSet_ = false;
}

}
}
}
}
}


