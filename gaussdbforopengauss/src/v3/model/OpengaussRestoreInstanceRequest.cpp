

#include "huaweicloud/gaussdbforopengauss/v3/model/OpengaussRestoreInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpengaussRestoreInstanceRequest::OpengaussRestoreInstanceRequest()
{
    name_ = "";
    nameIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    volumeIsSet_ = false;
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    chargeInfoIsSet_ = false;
    restorePointIsSet_ = false;
    backupStrategyIsSet_ = false;
    enableParallelRestore_ = false;
    enableParallelRestoreIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    enableForceSwitch_ = false;
    enableForceSwitchIsSet_ = false;
}

OpengaussRestoreInstanceRequest::~OpengaussRestoreInstanceRequest() = default;

void OpengaussRestoreInstanceRequest::validate()
{
}

web::json::value OpengaussRestoreInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(diskEncryptionIdIsSet_) {
        val[utility::conversions::to_string_t("disk_encryption_id")] = ModelBase::toJson(diskEncryptionId_);
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
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(restorePointIsSet_) {
        val[utility::conversions::to_string_t("restore_point")] = ModelBase::toJson(restorePoint_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(enableParallelRestoreIsSet_) {
        val[utility::conversions::to_string_t("enable_parallel_restore")] = ModelBase::toJson(enableParallelRestore_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(enableForceSwitchIsSet_) {
        val[utility::conversions::to_string_t("enable_force_switch")] = ModelBase::toJson(enableForceSwitch_);
    }

    return val;
}

bool OpengaussRestoreInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("disk_encryption_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_encryption_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskEncryptionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("restore_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_point"));
        if(!fieldValue.is_null())
        {
            RestorePoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestorePoint(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_parallel_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_parallel_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableParallelRestore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
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

std::string OpengaussRestoreInstanceRequest::getName() const
{
    return name_;
}

void OpengaussRestoreInstanceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void OpengaussRestoreInstanceRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getFlavorRef() const
{
    return flavorRef_;
}

void OpengaussRestoreInstanceRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

OpenGaussVolume OpengaussRestoreInstanceRequest::getVolume() const
{
    return volume_;
}

void OpengaussRestoreInstanceRequest::setVolume(const OpenGaussVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::volumeIsSet() const
{
    return volumeIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void OpengaussRestoreInstanceRequest::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getVpcId() const
{
    return vpcId_;
}

void OpengaussRestoreInstanceRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getSubnetId() const
{
    return subnetId_;
}

void OpengaussRestoreInstanceRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void OpengaussRestoreInstanceRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getPassword() const
{
    return password_;
}

void OpengaussRestoreInstanceRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

OpenGaussChargeInfo OpengaussRestoreInstanceRequest::getChargeInfo() const
{
    return chargeInfo_;
}

void OpengaussRestoreInstanceRequest::setChargeInfo(const OpenGaussChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

RestorePoint OpengaussRestoreInstanceRequest::getRestorePoint() const
{
    return restorePoint_;
}

void OpengaussRestoreInstanceRequest::setRestorePoint(const RestorePoint& value)
{
    restorePoint_ = value;
    restorePointIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::restorePointIsSet() const
{
    return restorePointIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetrestorePoint()
{
    restorePointIsSet_ = false;
}

OpenGaussBackupStrategy OpengaussRestoreInstanceRequest::getBackupStrategy() const
{
    return backupStrategy_;
}

void OpengaussRestoreInstanceRequest::setBackupStrategy(const OpenGaussBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

bool OpengaussRestoreInstanceRequest::isEnableParallelRestore() const
{
    return enableParallelRestore_;
}

void OpengaussRestoreInstanceRequest::setEnableParallelRestore(bool value)
{
    enableParallelRestore_ = value;
    enableParallelRestoreIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::enableParallelRestoreIsSet() const
{
    return enableParallelRestoreIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetenableParallelRestore()
{
    enableParallelRestoreIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getConfigurationId() const
{
    return configurationId_;
}

void OpengaussRestoreInstanceRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void OpengaussRestoreInstanceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getPort() const
{
    return port_;
}

void OpengaussRestoreInstanceRequest::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::portIsSet() const
{
    return portIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetport()
{
    portIsSet_ = false;
}

std::string OpengaussRestoreInstanceRequest::getTimeZone() const
{
    return timeZone_;
}

void OpengaussRestoreInstanceRequest::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void OpengaussRestoreInstanceRequest::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

bool OpengaussRestoreInstanceRequest::isEnableForceSwitch() const
{
    return enableForceSwitch_;
}

void OpengaussRestoreInstanceRequest::setEnableForceSwitch(bool value)
{
    enableForceSwitch_ = value;
    enableForceSwitchIsSet_ = true;
}

bool OpengaussRestoreInstanceRequest::enableForceSwitchIsSet() const
{
    return enableForceSwitchIsSet_;
}

void OpengaussRestoreInstanceRequest::unsetenableForceSwitch()
{
    enableForceSwitchIsSet_ = false;
}

}
}
}
}
}


