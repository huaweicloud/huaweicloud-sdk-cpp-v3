

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussInstanceRequest::OpenGaussInstanceRequest()
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
}

OpenGaussInstanceRequest::~OpenGaussInstanceRequest() = default;

void OpenGaussInstanceRequest::validate()
{
}

web::json::value OpenGaussInstanceRequest::toJson() const
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

    return val;
}

bool OpenGaussInstanceRequest::fromJson(const web::json::value& val)
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
            OpenGaussDatastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            OpenGaussHa refVal;
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
    return ok;
}

std::string OpenGaussInstanceRequest::getName() const
{
    return name_;
}

void OpenGaussInstanceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OpenGaussInstanceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void OpenGaussInstanceRequest::unsetname()
{
    nameIsSet_ = false;
}

OpenGaussDatastore OpenGaussInstanceRequest::getDatastore() const
{
    return datastore_;
}

void OpenGaussInstanceRequest::setDatastore(const OpenGaussDatastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool OpenGaussInstanceRequest::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void OpenGaussInstanceRequest::unsetdatastore()
{
    datastoreIsSet_ = false;
}

OpenGaussHa OpenGaussInstanceRequest::getHa() const
{
    return ha_;
}

void OpenGaussInstanceRequest::setHa(const OpenGaussHa& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool OpenGaussInstanceRequest::haIsSet() const
{
    return haIsSet_;
}

void OpenGaussInstanceRequest::unsetha()
{
    haIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getConfigurationId() const
{
    return configurationId_;
}

void OpenGaussInstanceRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool OpenGaussInstanceRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void OpenGaussInstanceRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getPort() const
{
    return port_;
}

void OpenGaussInstanceRequest::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool OpenGaussInstanceRequest::portIsSet() const
{
    return portIsSet_;
}

void OpenGaussInstanceRequest::unsetport()
{
    portIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getPassword() const
{
    return password_;
}

void OpenGaussInstanceRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool OpenGaussInstanceRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void OpenGaussInstanceRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

OpenGaussBackupStrategy OpenGaussInstanceRequest::getBackupStrategy() const
{
    return backupStrategy_;
}

void OpenGaussInstanceRequest::setBackupStrategy(const OpenGaussBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool OpenGaussInstanceRequest::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void OpenGaussInstanceRequest::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void OpenGaussInstanceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool OpenGaussInstanceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void OpenGaussInstanceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void OpenGaussInstanceRequest::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool OpenGaussInstanceRequest::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void OpenGaussInstanceRequest::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getFlavorRef() const
{
    return flavorRef_;
}

void OpenGaussInstanceRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpenGaussInstanceRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpenGaussInstanceRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

OpenGaussVolume OpenGaussInstanceRequest::getVolume() const
{
    return volume_;
}

void OpenGaussInstanceRequest::setVolume(const OpenGaussVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool OpenGaussInstanceRequest::volumeIsSet() const
{
    return volumeIsSet_;
}

void OpenGaussInstanceRequest::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getRegion() const
{
    return region_;
}

void OpenGaussInstanceRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool OpenGaussInstanceRequest::regionIsSet() const
{
    return regionIsSet_;
}

void OpenGaussInstanceRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void OpenGaussInstanceRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool OpenGaussInstanceRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void OpenGaussInstanceRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getVpcId() const
{
    return vpcId_;
}

void OpenGaussInstanceRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool OpenGaussInstanceRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void OpenGaussInstanceRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getSubnetId() const
{
    return subnetId_;
}

void OpenGaussInstanceRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool OpenGaussInstanceRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void OpenGaussInstanceRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void OpenGaussInstanceRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool OpenGaussInstanceRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void OpenGaussInstanceRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

OpenGaussChargeInfo OpenGaussInstanceRequest::getChargeInfo() const
{
    return chargeInfo_;
}

void OpenGaussInstanceRequest::setChargeInfo(const OpenGaussChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool OpenGaussInstanceRequest::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void OpenGaussInstanceRequest::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string OpenGaussInstanceRequest::getTimeZone() const
{
    return timeZone_;
}

void OpenGaussInstanceRequest::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool OpenGaussInstanceRequest::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void OpenGaussInstanceRequest::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

int32_t OpenGaussInstanceRequest::getShardingNum() const
{
    return shardingNum_;
}

void OpenGaussInstanceRequest::setShardingNum(int32_t value)
{
    shardingNum_ = value;
    shardingNumIsSet_ = true;
}

bool OpenGaussInstanceRequest::shardingNumIsSet() const
{
    return shardingNumIsSet_;
}

void OpenGaussInstanceRequest::unsetshardingNum()
{
    shardingNumIsSet_ = false;
}

int32_t OpenGaussInstanceRequest::getCoordinatorNum() const
{
    return coordinatorNum_;
}

void OpenGaussInstanceRequest::setCoordinatorNum(int32_t value)
{
    coordinatorNum_ = value;
    coordinatorNumIsSet_ = true;
}

bool OpenGaussInstanceRequest::coordinatorNumIsSet() const
{
    return coordinatorNumIsSet_;
}

void OpenGaussInstanceRequest::unsetcoordinatorNum()
{
    coordinatorNumIsSet_ = false;
}

int32_t OpenGaussInstanceRequest::getReplicaNum() const
{
    return replicaNum_;
}

void OpenGaussInstanceRequest::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool OpenGaussInstanceRequest::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void OpenGaussInstanceRequest::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

bool OpenGaussInstanceRequest::isEnableForceSwitch() const
{
    return enableForceSwitch_;
}

void OpenGaussInstanceRequest::setEnableForceSwitch(bool value)
{
    enableForceSwitch_ = value;
    enableForceSwitchIsSet_ = true;
}

bool OpenGaussInstanceRequest::enableForceSwitchIsSet() const
{
    return enableForceSwitchIsSet_;
}

void OpenGaussInstanceRequest::unsetenableForceSwitch()
{
    enableForceSwitchIsSet_ = false;
}

}
}
}
}
}


