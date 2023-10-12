

#include "huaweicloud/rds/v3/model/CreateRestoreInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateRestoreInstanceRequestBody::CreateRestoreInstanceRequestBody()
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
}

CreateRestoreInstanceRequestBody::~CreateRestoreInstanceRequestBody() = default;

void CreateRestoreInstanceRequestBody::validate()
{
}

web::json::value CreateRestoreInstanceRequestBody::toJson() const
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

    return val;
}
bool CreateRestoreInstanceRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateRestoreInstanceRequestBody::getName() const
{
    return name_;
}

void CreateRestoreInstanceRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetname()
{
    nameIsSet_ = false;
}

Datastore CreateRestoreInstanceRequestBody::getDatastore() const
{
    return datastore_;
}

void CreateRestoreInstanceRequestBody::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

Ha CreateRestoreInstanceRequestBody::getHa() const
{
    return ha_;
}

void CreateRestoreInstanceRequestBody::setHa(const Ha& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::haIsSet() const
{
    return haIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetha()
{
    haIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getConfigurationId() const
{
    return configurationId_;
}

void CreateRestoreInstanceRequestBody::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getPort() const
{
    return port_;
}

void CreateRestoreInstanceRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::portIsSet() const
{
    return portIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetport()
{
    portIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getPassword() const
{
    return password_;
}

void CreateRestoreInstanceRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

BackupStrategy CreateRestoreInstanceRequestBody::getBackupStrategy() const
{
    return backupStrategy_;
}

void CreateRestoreInstanceRequestBody::setBackupStrategy(const BackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateRestoreInstanceRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void CreateRestoreInstanceRequestBody::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void CreateRestoreInstanceRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

Volume CreateRestoreInstanceRequestBody::getVolume() const
{
    return volume_;
}

void CreateRestoreInstanceRequestBody::setVolume(const Volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getRegion() const
{
    return region_;
}

void CreateRestoreInstanceRequestBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::regionIsSet() const
{
    return regionIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateRestoreInstanceRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getVpcId() const
{
    return vpcId_;
}

void CreateRestoreInstanceRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void CreateRestoreInstanceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getDataVip() const
{
    return dataVip_;
}

void CreateRestoreInstanceRequestBody::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateRestoreInstanceRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

ChargeInfo CreateRestoreInstanceRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateRestoreInstanceRequestBody::setChargeInfo(const ChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getTimeZone() const
{
    return timeZone_;
}

void CreateRestoreInstanceRequestBody::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void CreateRestoreInstanceRequestBody::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getDsspoolId() const
{
    return dsspoolId_;
}

void CreateRestoreInstanceRequestBody::setDsspoolId(const std::string& value)
{
    dsspoolId_ = value;
    dsspoolIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::dsspoolIdIsSet() const
{
    return dsspoolIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetdsspoolId()
{
    dsspoolIdIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getReplicaOfId() const
{
    return replicaOfId_;
}

void CreateRestoreInstanceRequestBody::setReplicaOfId(const std::string& value)
{
    replicaOfId_ = value;
    replicaOfIdIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::replicaOfIdIsSet() const
{
    return replicaOfIdIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetreplicaOfId()
{
    replicaOfIdIsSet_ = false;
}

RestorePoint CreateRestoreInstanceRequestBody::getRestorePoint() const
{
    return restorePoint_;
}

void CreateRestoreInstanceRequestBody::setRestorePoint(const RestorePoint& value)
{
    restorePoint_ = value;
    restorePointIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::restorePointIsSet() const
{
    return restorePointIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetrestorePoint()
{
    restorePointIsSet_ = false;
}

std::string CreateRestoreInstanceRequestBody::getCollation() const
{
    return collation_;
}

void CreateRestoreInstanceRequestBody::setCollation(const std::string& value)
{
    collation_ = value;
    collationIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::collationIsSet() const
{
    return collationIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetcollation()
{
    collationIsSet_ = false;
}

std::vector<TagWithKeyValue>& CreateRestoreInstanceRequestBody::getTags()
{
    return tags_;
}

void CreateRestoreInstanceRequestBody::setTags(const std::vector<TagWithKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateRestoreInstanceRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

UnchangeableParam CreateRestoreInstanceRequestBody::getUnchangeableParam() const
{
    return unchangeableParam_;
}

void CreateRestoreInstanceRequestBody::setUnchangeableParam(const UnchangeableParam& value)
{
    unchangeableParam_ = value;
    unchangeableParamIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::unchangeableParamIsSet() const
{
    return unchangeableParamIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetunchangeableParam()
{
    unchangeableParamIsSet_ = false;
}

bool CreateRestoreInstanceRequestBody::isDryRun() const
{
    return dryRun_;
}

void CreateRestoreInstanceRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool CreateRestoreInstanceRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void CreateRestoreInstanceRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

}
}
}
}
}


