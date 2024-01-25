

#include "huaweicloud/rds/v3/model/InstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceRequest::InstanceRequest()
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
    dataVip_ = "";
    dataVipIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    chargeInfoIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    dsspoolId_ = "";
    dsspoolIdIsSet_ = false;
    replicaOfId_ = "";
    replicaOfIdIsSet_ = false;
    restorePointIsSet_ = false;
    collation_ = "";
    collationIsSet_ = false;
    tagsIsSet_ = false;
    unchangeableParamIsSet_ = false;
    dryRun_ = false;
    dryRunIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    serverlessInfoIsSet_ = false;
}

InstanceRequest::~InstanceRequest() = default;

void InstanceRequest::validate()
{
}

web::json::value InstanceRequest::toJson() const
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
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
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
    if(dsspoolIdIsSet_) {
        val[utility::conversions::to_string_t("dsspool_id")] = ModelBase::toJson(dsspoolId_);
    }
    if(replicaOfIdIsSet_) {
        val[utility::conversions::to_string_t("replica_of_id")] = ModelBase::toJson(replicaOfId_);
    }
    if(restorePointIsSet_) {
        val[utility::conversions::to_string_t("restore_point")] = ModelBase::toJson(restorePoint_);
    }
    if(collationIsSet_) {
        val[utility::conversions::to_string_t("collation")] = ModelBase::toJson(collation_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(unchangeableParamIsSet_) {
        val[utility::conversions::to_string_t("unchangeable_param")] = ModelBase::toJson(unchangeableParam_);
    }
    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(serverlessInfoIsSet_) {
        val[utility::conversions::to_string_t("serverless_info")] = ModelBase::toJson(serverlessInfo_);
    }

    return val;
}
bool InstanceRequest::fromJson(const web::json::value& val)
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
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            Ha refVal;
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
            BackupStrategy refVal;
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
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
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
            ChargeInfo refVal;
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
    if(val.has_field(utility::conversions::to_string_t("dsspool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dsspool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDsspoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_of_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_of_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaOfId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_point"));
        if(!fieldValue.is_null())
        {
            RestorePoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestorePoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagWithKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unchangeable_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unchangeable_param"));
        if(!fieldValue.is_null())
        {
            UnchangeableParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnchangeableParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serverless_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverless_info"));
        if(!fieldValue.is_null())
        {
            ServerlessInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerlessInfo(refVal);
        }
    }
    return ok;
}


std::string InstanceRequest::getName() const
{
    return name_;
}

void InstanceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstanceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void InstanceRequest::unsetname()
{
    nameIsSet_ = false;
}

Datastore InstanceRequest::getDatastore() const
{
    return datastore_;
}

void InstanceRequest::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool InstanceRequest::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void InstanceRequest::unsetdatastore()
{
    datastoreIsSet_ = false;
}

Ha InstanceRequest::getHa() const
{
    return ha_;
}

void InstanceRequest::setHa(const Ha& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool InstanceRequest::haIsSet() const
{
    return haIsSet_;
}

void InstanceRequest::unsetha()
{
    haIsSet_ = false;
}

std::string InstanceRequest::getConfigurationId() const
{
    return configurationId_;
}

void InstanceRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool InstanceRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void InstanceRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string InstanceRequest::getPort() const
{
    return port_;
}

void InstanceRequest::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool InstanceRequest::portIsSet() const
{
    return portIsSet_;
}

void InstanceRequest::unsetport()
{
    portIsSet_ = false;
}

std::string InstanceRequest::getPassword() const
{
    return password_;
}

void InstanceRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool InstanceRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void InstanceRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

BackupStrategy InstanceRequest::getBackupStrategy() const
{
    return backupStrategy_;
}

void InstanceRequest::setBackupStrategy(const BackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool InstanceRequest::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void InstanceRequest::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string InstanceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void InstanceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool InstanceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void InstanceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string InstanceRequest::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void InstanceRequest::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool InstanceRequest::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void InstanceRequest::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string InstanceRequest::getFlavorRef() const
{
    return flavorRef_;
}

void InstanceRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool InstanceRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void InstanceRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

Volume InstanceRequest::getVolume() const
{
    return volume_;
}

void InstanceRequest::setVolume(const Volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool InstanceRequest::volumeIsSet() const
{
    return volumeIsSet_;
}

void InstanceRequest::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string InstanceRequest::getRegion() const
{
    return region_;
}

void InstanceRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool InstanceRequest::regionIsSet() const
{
    return regionIsSet_;
}

void InstanceRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string InstanceRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void InstanceRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool InstanceRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void InstanceRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string InstanceRequest::getVpcId() const
{
    return vpcId_;
}

void InstanceRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool InstanceRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void InstanceRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string InstanceRequest::getSubnetId() const
{
    return subnetId_;
}

void InstanceRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool InstanceRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void InstanceRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string InstanceRequest::getDataVip() const
{
    return dataVip_;
}

void InstanceRequest::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool InstanceRequest::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void InstanceRequest::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string InstanceRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void InstanceRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool InstanceRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void InstanceRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

ChargeInfo InstanceRequest::getChargeInfo() const
{
    return chargeInfo_;
}

void InstanceRequest::setChargeInfo(const ChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool InstanceRequest::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void InstanceRequest::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string InstanceRequest::getTimeZone() const
{
    return timeZone_;
}

void InstanceRequest::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool InstanceRequest::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void InstanceRequest::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string InstanceRequest::getDsspoolId() const
{
    return dsspoolId_;
}

void InstanceRequest::setDsspoolId(const std::string& value)
{
    dsspoolId_ = value;
    dsspoolIdIsSet_ = true;
}

bool InstanceRequest::dsspoolIdIsSet() const
{
    return dsspoolIdIsSet_;
}

void InstanceRequest::unsetdsspoolId()
{
    dsspoolIdIsSet_ = false;
}

std::string InstanceRequest::getReplicaOfId() const
{
    return replicaOfId_;
}

void InstanceRequest::setReplicaOfId(const std::string& value)
{
    replicaOfId_ = value;
    replicaOfIdIsSet_ = true;
}

bool InstanceRequest::replicaOfIdIsSet() const
{
    return replicaOfIdIsSet_;
}

void InstanceRequest::unsetreplicaOfId()
{
    replicaOfIdIsSet_ = false;
}

RestorePoint InstanceRequest::getRestorePoint() const
{
    return restorePoint_;
}

void InstanceRequest::setRestorePoint(const RestorePoint& value)
{
    restorePoint_ = value;
    restorePointIsSet_ = true;
}

bool InstanceRequest::restorePointIsSet() const
{
    return restorePointIsSet_;
}

void InstanceRequest::unsetrestorePoint()
{
    restorePointIsSet_ = false;
}

std::string InstanceRequest::getCollation() const
{
    return collation_;
}

void InstanceRequest::setCollation(const std::string& value)
{
    collation_ = value;
    collationIsSet_ = true;
}

bool InstanceRequest::collationIsSet() const
{
    return collationIsSet_;
}

void InstanceRequest::unsetcollation()
{
    collationIsSet_ = false;
}

std::vector<TagWithKeyValue>& InstanceRequest::getTags()
{
    return tags_;
}

void InstanceRequest::setTags(const std::vector<TagWithKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool InstanceRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void InstanceRequest::unsettags()
{
    tagsIsSet_ = false;
}

UnchangeableParam InstanceRequest::getUnchangeableParam() const
{
    return unchangeableParam_;
}

void InstanceRequest::setUnchangeableParam(const UnchangeableParam& value)
{
    unchangeableParam_ = value;
    unchangeableParamIsSet_ = true;
}

bool InstanceRequest::unchangeableParamIsSet() const
{
    return unchangeableParamIsSet_;
}

void InstanceRequest::unsetunchangeableParam()
{
    unchangeableParamIsSet_ = false;
}

bool InstanceRequest::isDryRun() const
{
    return dryRun_;
}

void InstanceRequest::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool InstanceRequest::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void InstanceRequest::unsetdryRun()
{
    dryRunIsSet_ = false;
}

int32_t InstanceRequest::getCount() const
{
    return count_;
}

void InstanceRequest::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool InstanceRequest::countIsSet() const
{
    return countIsSet_;
}

void InstanceRequest::unsetcount()
{
    countIsSet_ = false;
}

ServerlessInfo InstanceRequest::getServerlessInfo() const
{
    return serverlessInfo_;
}

void InstanceRequest::setServerlessInfo(const ServerlessInfo& value)
{
    serverlessInfo_ = value;
    serverlessInfoIsSet_ = true;
}

bool InstanceRequest::serverlessInfoIsSet() const
{
    return serverlessInfoIsSet_;
}

void InstanceRequest::unsetserverlessInfo()
{
    serverlessInfoIsSet_ = false;
}

}
}
}
}
}


