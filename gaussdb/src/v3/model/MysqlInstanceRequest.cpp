

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceRequest::MysqlInstanceRequest()
{
    chargeInfoIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    datastoreIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    backupStrategyIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    availabilityZoneMode_ = "";
    availabilityZoneModeIsSet_ = false;
    masterAvailabilityZone_ = "";
    masterAvailabilityZoneIsSet_ = false;
    slaveCount_ = 0;
    slaveCountIsSet_ = false;
    volumeIsSet_ = false;
    tagsIsSet_ = false;
    lowerCaseTableNames_ = 0;
    lowerCaseTableNamesIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    restorePointIsSet_ = false;
}

MysqlInstanceRequest::~MysqlInstanceRequest() = default;

void MysqlInstanceRequest::validate()
{
}

web::json::value MysqlInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
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
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(availabilityZoneModeIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_mode")] = ModelBase::toJson(availabilityZoneMode_);
    }
    if(masterAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("master_availability_zone")] = ModelBase::toJson(masterAvailabilityZone_);
    }
    if(slaveCountIsSet_) {
        val[utility::conversions::to_string_t("slave_count")] = ModelBase::toJson(slaveCount_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(lowerCaseTableNamesIsSet_) {
        val[utility::conversions::to_string_t("lower_case_table_names")] = ModelBase::toJson(lowerCaseTableNames_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(restorePointIsSet_) {
        val[utility::conversions::to_string_t("restore_point")] = ModelBase::toJson(restorePoint_);
    }

    return val;
}

bool MysqlInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            MysqlChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
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
            MysqlDatastoreInReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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
            MysqlBackupStrategy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            MysqlVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lower_case_table_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lower_case_table_names"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowerCaseTableNames(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_point"));
        if(!fieldValue.is_null())
        {
            MysqlRestorePoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestorePoint(refVal);
        }
    }
    return ok;
}

MysqlChargeInfo MysqlInstanceRequest::getChargeInfo() const
{
    return chargeInfo_;
}

void MysqlInstanceRequest::setChargeInfo(const MysqlChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool MysqlInstanceRequest::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void MysqlInstanceRequest::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string MysqlInstanceRequest::getRegion() const
{
    return region_;
}

void MysqlInstanceRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool MysqlInstanceRequest::regionIsSet() const
{
    return regionIsSet_;
}

void MysqlInstanceRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string MysqlInstanceRequest::getName() const
{
    return name_;
}

void MysqlInstanceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlInstanceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlInstanceRequest::unsetname()
{
    nameIsSet_ = false;
}

MysqlDatastoreInReq MysqlInstanceRequest::getDatastore() const
{
    return datastore_;
}

void MysqlInstanceRequest::setDatastore(const MysqlDatastoreInReq& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool MysqlInstanceRequest::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void MysqlInstanceRequest::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string MysqlInstanceRequest::getMode() const
{
    return mode_;
}

void MysqlInstanceRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool MysqlInstanceRequest::modeIsSet() const
{
    return modeIsSet_;
}

void MysqlInstanceRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string MysqlInstanceRequest::getFlavorRef() const
{
    return flavorRef_;
}

void MysqlInstanceRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool MysqlInstanceRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void MysqlInstanceRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string MysqlInstanceRequest::getVpcId() const
{
    return vpcId_;
}

void MysqlInstanceRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool MysqlInstanceRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void MysqlInstanceRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string MysqlInstanceRequest::getSubnetId() const
{
    return subnetId_;
}

void MysqlInstanceRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool MysqlInstanceRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void MysqlInstanceRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string MysqlInstanceRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void MysqlInstanceRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool MysqlInstanceRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void MysqlInstanceRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string MysqlInstanceRequest::getConfigurationId() const
{
    return configurationId_;
}

void MysqlInstanceRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool MysqlInstanceRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void MysqlInstanceRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string MysqlInstanceRequest::getPassword() const
{
    return password_;
}

void MysqlInstanceRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool MysqlInstanceRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void MysqlInstanceRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

MysqlBackupStrategy MysqlInstanceRequest::getBackupStrategy() const
{
    return backupStrategy_;
}

void MysqlInstanceRequest::setBackupStrategy(const MysqlBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool MysqlInstanceRequest::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void MysqlInstanceRequest::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string MysqlInstanceRequest::getTimeZone() const
{
    return timeZone_;
}

void MysqlInstanceRequest::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool MysqlInstanceRequest::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void MysqlInstanceRequest::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

std::string MysqlInstanceRequest::getAvailabilityZoneMode() const
{
    return availabilityZoneMode_;
}

void MysqlInstanceRequest::setAvailabilityZoneMode(const std::string& value)
{
    availabilityZoneMode_ = value;
    availabilityZoneModeIsSet_ = true;
}

bool MysqlInstanceRequest::availabilityZoneModeIsSet() const
{
    return availabilityZoneModeIsSet_;
}

void MysqlInstanceRequest::unsetavailabilityZoneMode()
{
    availabilityZoneModeIsSet_ = false;
}

std::string MysqlInstanceRequest::getMasterAvailabilityZone() const
{
    return masterAvailabilityZone_;
}

void MysqlInstanceRequest::setMasterAvailabilityZone(const std::string& value)
{
    masterAvailabilityZone_ = value;
    masterAvailabilityZoneIsSet_ = true;
}

bool MysqlInstanceRequest::masterAvailabilityZoneIsSet() const
{
    return masterAvailabilityZoneIsSet_;
}

void MysqlInstanceRequest::unsetmasterAvailabilityZone()
{
    masterAvailabilityZoneIsSet_ = false;
}

int32_t MysqlInstanceRequest::getSlaveCount() const
{
    return slaveCount_;
}

void MysqlInstanceRequest::setSlaveCount(int32_t value)
{
    slaveCount_ = value;
    slaveCountIsSet_ = true;
}

bool MysqlInstanceRequest::slaveCountIsSet() const
{
    return slaveCountIsSet_;
}

void MysqlInstanceRequest::unsetslaveCount()
{
    slaveCountIsSet_ = false;
}

MysqlVolume MysqlInstanceRequest::getVolume() const
{
    return volume_;
}

void MysqlInstanceRequest::setVolume(const MysqlVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool MysqlInstanceRequest::volumeIsSet() const
{
    return volumeIsSet_;
}

void MysqlInstanceRequest::unsetvolume()
{
    volumeIsSet_ = false;
}

std::vector<MysqlTags>& MysqlInstanceRequest::getTags()
{
    return tags_;
}

void MysqlInstanceRequest::setTags(const std::vector<MysqlTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool MysqlInstanceRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void MysqlInstanceRequest::unsettags()
{
    tagsIsSet_ = false;
}

int32_t MysqlInstanceRequest::getLowerCaseTableNames() const
{
    return lowerCaseTableNames_;
}

void MysqlInstanceRequest::setLowerCaseTableNames(int32_t value)
{
    lowerCaseTableNames_ = value;
    lowerCaseTableNamesIsSet_ = true;
}

bool MysqlInstanceRequest::lowerCaseTableNamesIsSet() const
{
    return lowerCaseTableNamesIsSet_;
}

void MysqlInstanceRequest::unsetlowerCaseTableNames()
{
    lowerCaseTableNamesIsSet_ = false;
}

std::string MysqlInstanceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void MysqlInstanceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool MysqlInstanceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void MysqlInstanceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string MysqlInstanceRequest::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void MysqlInstanceRequest::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool MysqlInstanceRequest::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void MysqlInstanceRequest::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

MysqlRestorePoint MysqlInstanceRequest::getRestorePoint() const
{
    return restorePoint_;
}

void MysqlInstanceRequest::setRestorePoint(const MysqlRestorePoint& value)
{
    restorePoint_ = value;
    restorePointIsSet_ = true;
}

bool MysqlInstanceRequest::restorePointIsSet() const
{
    return restorePointIsSet_;
}

void MysqlInstanceRequest::unsetrestorePoint()
{
    restorePointIsSet_ = false;
}

}
}
}
}
}


