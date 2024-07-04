

#include "huaweicloud/rds/v3/model/CustomerCreateInstanceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerCreateInstanceReq::CustomerCreateInstanceReq()
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
    subscriptionAgency_ = "";
    subscriptionAgencyIsSet_ = false;
}

CustomerCreateInstanceReq::~CustomerCreateInstanceReq() = default;

void CustomerCreateInstanceReq::validate()
{
}

web::json::value CustomerCreateInstanceReq::toJson() const
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
    if(subscriptionAgencyIsSet_) {
        val[utility::conversions::to_string_t("subscription_agency")] = ModelBase::toJson(subscriptionAgency_);
    }

    return val;
}
bool CustomerCreateInstanceReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("subscription_agency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_agency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionAgency(refVal);
        }
    }
    return ok;
}


std::string CustomerCreateInstanceReq::getName() const
{
    return name_;
}

void CustomerCreateInstanceReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomerCreateInstanceReq::nameIsSet() const
{
    return nameIsSet_;
}

void CustomerCreateInstanceReq::unsetname()
{
    nameIsSet_ = false;
}

Datastore CustomerCreateInstanceReq::getDatastore() const
{
    return datastore_;
}

void CustomerCreateInstanceReq::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CustomerCreateInstanceReq::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CustomerCreateInstanceReq::unsetdatastore()
{
    datastoreIsSet_ = false;
}

Ha CustomerCreateInstanceReq::getHa() const
{
    return ha_;
}

void CustomerCreateInstanceReq::setHa(const Ha& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool CustomerCreateInstanceReq::haIsSet() const
{
    return haIsSet_;
}

void CustomerCreateInstanceReq::unsetha()
{
    haIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getConfigurationId() const
{
    return configurationId_;
}

void CustomerCreateInstanceReq::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CustomerCreateInstanceReq::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getPort() const
{
    return port_;
}

void CustomerCreateInstanceReq::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CustomerCreateInstanceReq::portIsSet() const
{
    return portIsSet_;
}

void CustomerCreateInstanceReq::unsetport()
{
    portIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getPassword() const
{
    return password_;
}

void CustomerCreateInstanceReq::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CustomerCreateInstanceReq::passwordIsSet() const
{
    return passwordIsSet_;
}

void CustomerCreateInstanceReq::unsetpassword()
{
    passwordIsSet_ = false;
}

BackupStrategy CustomerCreateInstanceReq::getBackupStrategy() const
{
    return backupStrategy_;
}

void CustomerCreateInstanceReq::setBackupStrategy(const BackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool CustomerCreateInstanceReq::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void CustomerCreateInstanceReq::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CustomerCreateInstanceReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CustomerCreateInstanceReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void CustomerCreateInstanceReq::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void CustomerCreateInstanceReq::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getFlavorRef() const
{
    return flavorRef_;
}

void CustomerCreateInstanceReq::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CustomerCreateInstanceReq::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CustomerCreateInstanceReq::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

Volume CustomerCreateInstanceReq::getVolume() const
{
    return volume_;
}

void CustomerCreateInstanceReq::setVolume(const Volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CustomerCreateInstanceReq::volumeIsSet() const
{
    return volumeIsSet_;
}

void CustomerCreateInstanceReq::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getRegion() const
{
    return region_;
}

void CustomerCreateInstanceReq::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CustomerCreateInstanceReq::regionIsSet() const
{
    return regionIsSet_;
}

void CustomerCreateInstanceReq::unsetregion()
{
    regionIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CustomerCreateInstanceReq::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CustomerCreateInstanceReq::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CustomerCreateInstanceReq::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getVpcId() const
{
    return vpcId_;
}

void CustomerCreateInstanceReq::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CustomerCreateInstanceReq::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getSubnetId() const
{
    return subnetId_;
}

void CustomerCreateInstanceReq::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CustomerCreateInstanceReq::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getDataVip() const
{
    return dataVip_;
}

void CustomerCreateInstanceReq::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool CustomerCreateInstanceReq::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void CustomerCreateInstanceReq::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CustomerCreateInstanceReq::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CustomerCreateInstanceReq::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

ChargeInfo CustomerCreateInstanceReq::getChargeInfo() const
{
    return chargeInfo_;
}

void CustomerCreateInstanceReq::setChargeInfo(const ChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CustomerCreateInstanceReq::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CustomerCreateInstanceReq::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getTimeZone() const
{
    return timeZone_;
}

void CustomerCreateInstanceReq::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool CustomerCreateInstanceReq::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void CustomerCreateInstanceReq::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getDsspoolId() const
{
    return dsspoolId_;
}

void CustomerCreateInstanceReq::setDsspoolId(const std::string& value)
{
    dsspoolId_ = value;
    dsspoolIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::dsspoolIdIsSet() const
{
    return dsspoolIdIsSet_;
}

void CustomerCreateInstanceReq::unsetdsspoolId()
{
    dsspoolIdIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getReplicaOfId() const
{
    return replicaOfId_;
}

void CustomerCreateInstanceReq::setReplicaOfId(const std::string& value)
{
    replicaOfId_ = value;
    replicaOfIdIsSet_ = true;
}

bool CustomerCreateInstanceReq::replicaOfIdIsSet() const
{
    return replicaOfIdIsSet_;
}

void CustomerCreateInstanceReq::unsetreplicaOfId()
{
    replicaOfIdIsSet_ = false;
}

RestorePoint CustomerCreateInstanceReq::getRestorePoint() const
{
    return restorePoint_;
}

void CustomerCreateInstanceReq::setRestorePoint(const RestorePoint& value)
{
    restorePoint_ = value;
    restorePointIsSet_ = true;
}

bool CustomerCreateInstanceReq::restorePointIsSet() const
{
    return restorePointIsSet_;
}

void CustomerCreateInstanceReq::unsetrestorePoint()
{
    restorePointIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getCollation() const
{
    return collation_;
}

void CustomerCreateInstanceReq::setCollation(const std::string& value)
{
    collation_ = value;
    collationIsSet_ = true;
}

bool CustomerCreateInstanceReq::collationIsSet() const
{
    return collationIsSet_;
}

void CustomerCreateInstanceReq::unsetcollation()
{
    collationIsSet_ = false;
}

std::vector<TagWithKeyValue>& CustomerCreateInstanceReq::getTags()
{
    return tags_;
}

void CustomerCreateInstanceReq::setTags(const std::vector<TagWithKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CustomerCreateInstanceReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void CustomerCreateInstanceReq::unsettags()
{
    tagsIsSet_ = false;
}

UnchangeableParam CustomerCreateInstanceReq::getUnchangeableParam() const
{
    return unchangeableParam_;
}

void CustomerCreateInstanceReq::setUnchangeableParam(const UnchangeableParam& value)
{
    unchangeableParam_ = value;
    unchangeableParamIsSet_ = true;
}

bool CustomerCreateInstanceReq::unchangeableParamIsSet() const
{
    return unchangeableParamIsSet_;
}

void CustomerCreateInstanceReq::unsetunchangeableParam()
{
    unchangeableParamIsSet_ = false;
}

bool CustomerCreateInstanceReq::isDryRun() const
{
    return dryRun_;
}

void CustomerCreateInstanceReq::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool CustomerCreateInstanceReq::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void CustomerCreateInstanceReq::unsetdryRun()
{
    dryRunIsSet_ = false;
}

int32_t CustomerCreateInstanceReq::getCount() const
{
    return count_;
}

void CustomerCreateInstanceReq::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CustomerCreateInstanceReq::countIsSet() const
{
    return countIsSet_;
}

void CustomerCreateInstanceReq::unsetcount()
{
    countIsSet_ = false;
}

ServerlessInfo CustomerCreateInstanceReq::getServerlessInfo() const
{
    return serverlessInfo_;
}

void CustomerCreateInstanceReq::setServerlessInfo(const ServerlessInfo& value)
{
    serverlessInfo_ = value;
    serverlessInfoIsSet_ = true;
}

bool CustomerCreateInstanceReq::serverlessInfoIsSet() const
{
    return serverlessInfoIsSet_;
}

void CustomerCreateInstanceReq::unsetserverlessInfo()
{
    serverlessInfoIsSet_ = false;
}

std::string CustomerCreateInstanceReq::getSubscriptionAgency() const
{
    return subscriptionAgency_;
}

void CustomerCreateInstanceReq::setSubscriptionAgency(const std::string& value)
{
    subscriptionAgency_ = value;
    subscriptionAgencyIsSet_ = true;
}

bool CustomerCreateInstanceReq::subscriptionAgencyIsSet() const
{
    return subscriptionAgencyIsSet_;
}

void CustomerCreateInstanceReq::unsetsubscriptionAgency()
{
    subscriptionAgencyIsSet_ = false;
}

}
}
}
}
}


