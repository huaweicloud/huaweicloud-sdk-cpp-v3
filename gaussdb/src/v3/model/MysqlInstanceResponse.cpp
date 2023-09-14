

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceResponse::MysqlInstanceResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    datastoreIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    availabilityZoneMode_ = "";
    availabilityZoneModeIsSet_ = false;
    masterAvailabilityZone_ = "";
    masterAvailabilityZoneIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    chargeInfoIsSet_ = false;
    volumeIsSet_ = false;
}

MysqlInstanceResponse::~MysqlInstanceResponse() = default;

void MysqlInstanceResponse::validate()
{
}

web::json::value MysqlInstanceResponse::toJson() const
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
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(availabilityZoneModeIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_mode")] = ModelBase::toJson(availabilityZoneMode_);
    }
    if(masterAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("master_availability_zone")] = ModelBase::toJson(masterAvailabilityZone_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}

bool MysqlInstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            MysqlDatastoreInRes refVal;
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
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            MysqlBackupStrategy refVal;
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            MysqlChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            MysqlVolumeResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}

std::string MysqlInstanceResponse::getId() const
{
    return id_;
}

void MysqlInstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlInstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void MysqlInstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlInstanceResponse::getName() const
{
    return name_;
}

void MysqlInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlInstanceResponse::getStatus() const
{
    return status_;
}

void MysqlInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

MysqlDatastoreInRes MysqlInstanceResponse::getDatastore() const
{
    return datastore_;
}

void MysqlInstanceResponse::setDatastore(const MysqlDatastoreInRes& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool MysqlInstanceResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void MysqlInstanceResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string MysqlInstanceResponse::getMode() const
{
    return mode_;
}

void MysqlInstanceResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool MysqlInstanceResponse::modeIsSet() const
{
    return modeIsSet_;
}

void MysqlInstanceResponse::unsetmode()
{
    modeIsSet_ = false;
}

std::string MysqlInstanceResponse::getConfigurationId() const
{
    return configurationId_;
}

void MysqlInstanceResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool MysqlInstanceResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void MysqlInstanceResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string MysqlInstanceResponse::getPort() const
{
    return port_;
}

void MysqlInstanceResponse::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool MysqlInstanceResponse::portIsSet() const
{
    return portIsSet_;
}

void MysqlInstanceResponse::unsetport()
{
    portIsSet_ = false;
}

MysqlBackupStrategy MysqlInstanceResponse::getBackupStrategy() const
{
    return backupStrategy_;
}

void MysqlInstanceResponse::setBackupStrategy(const MysqlBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool MysqlInstanceResponse::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void MysqlInstanceResponse::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string MysqlInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void MysqlInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool MysqlInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void MysqlInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string MysqlInstanceResponse::getRegion() const
{
    return region_;
}

void MysqlInstanceResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool MysqlInstanceResponse::regionIsSet() const
{
    return regionIsSet_;
}

void MysqlInstanceResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string MysqlInstanceResponse::getAvailabilityZoneMode() const
{
    return availabilityZoneMode_;
}

void MysqlInstanceResponse::setAvailabilityZoneMode(const std::string& value)
{
    availabilityZoneMode_ = value;
    availabilityZoneModeIsSet_ = true;
}

bool MysqlInstanceResponse::availabilityZoneModeIsSet() const
{
    return availabilityZoneModeIsSet_;
}

void MysqlInstanceResponse::unsetavailabilityZoneMode()
{
    availabilityZoneModeIsSet_ = false;
}

std::string MysqlInstanceResponse::getMasterAvailabilityZone() const
{
    return masterAvailabilityZone_;
}

void MysqlInstanceResponse::setMasterAvailabilityZone(const std::string& value)
{
    masterAvailabilityZone_ = value;
    masterAvailabilityZoneIsSet_ = true;
}

bool MysqlInstanceResponse::masterAvailabilityZoneIsSet() const
{
    return masterAvailabilityZoneIsSet_;
}

void MysqlInstanceResponse::unsetmasterAvailabilityZone()
{
    masterAvailabilityZoneIsSet_ = false;
}

std::string MysqlInstanceResponse::getVpcId() const
{
    return vpcId_;
}

void MysqlInstanceResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool MysqlInstanceResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void MysqlInstanceResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string MysqlInstanceResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void MysqlInstanceResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool MysqlInstanceResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void MysqlInstanceResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string MysqlInstanceResponse::getSubnetId() const
{
    return subnetId_;
}

void MysqlInstanceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool MysqlInstanceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void MysqlInstanceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string MysqlInstanceResponse::getFlavorRef() const
{
    return flavorRef_;
}

void MysqlInstanceResponse::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool MysqlInstanceResponse::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void MysqlInstanceResponse::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

MysqlChargeInfo MysqlInstanceResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void MysqlInstanceResponse::setChargeInfo(const MysqlChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool MysqlInstanceResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void MysqlInstanceResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

MysqlVolumeResp MysqlInstanceResponse::getVolume() const
{
    return volume_;
}

void MysqlInstanceResponse::setVolume(const MysqlVolumeResp& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool MysqlInstanceResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void MysqlInstanceResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


