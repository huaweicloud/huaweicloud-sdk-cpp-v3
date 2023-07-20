

#include "huaweicloud/dds/v3/model/RestoreNewInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreNewInstanceRequestBody::RestoreNewInstanceRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    configurationsIsSet_ = false;
    flavorIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sslOption_ = "";
    sslOptionIsSet_ = false;
    dssPoolId_ = "";
    dssPoolIdIsSet_ = false;
    serverGroupPoliciesIsSet_ = false;
    restorePointIsSet_ = false;
    chargeInfoIsSet_ = false;
}

RestoreNewInstanceRequestBody::~RestoreNewInstanceRequestBody() = default;

void RestoreNewInstanceRequestBody::validate()
{
}

web::json::value RestoreNewInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(diskEncryptionIdIsSet_) {
        val[utility::conversions::to_string_t("disk_encryption_id")] = ModelBase::toJson(diskEncryptionId_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }
    if(dssPoolIdIsSet_) {
        val[utility::conversions::to_string_t("dss_pool_id")] = ModelBase::toJson(dssPoolId_);
    }
    if(serverGroupPoliciesIsSet_) {
        val[utility::conversions::to_string_t("server_group_policies")] = ModelBase::toJson(serverGroupPolicies_);
    }
    if(restorePointIsSet_) {
        val[utility::conversions::to_string_t("restore_point")] = ModelBase::toJson(restorePoint_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }

    return val;
}

bool RestoreNewInstanceRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("disk_encryption_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_encryption_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskEncryptionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreNewInstanceConfigurationsOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreNewInstanceFlavorOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dss_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dss_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDssPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_policies"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupPolicies(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}

std::string RestoreNewInstanceRequestBody::getName() const
{
    return name_;
}

void RestoreNewInstanceRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void RestoreNewInstanceRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void RestoreNewInstanceRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void RestoreNewInstanceRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getVpcId() const
{
    return vpcId_;
}

void RestoreNewInstanceRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void RestoreNewInstanceRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void RestoreNewInstanceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void RestoreNewInstanceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void RestoreNewInstanceRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void RestoreNewInstanceRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getPassword() const
{
    return password_;
}

void RestoreNewInstanceRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void RestoreNewInstanceRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void RestoreNewInstanceRequestBody::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void RestoreNewInstanceRequestBody::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::vector<RestoreNewInstanceConfigurationsOption>& RestoreNewInstanceRequestBody::getConfigurations()
{
    return configurations_;
}

void RestoreNewInstanceRequestBody::setConfigurations(const std::vector<RestoreNewInstanceConfigurationsOption>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void RestoreNewInstanceRequestBody::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

std::vector<RestoreNewInstanceFlavorOption>& RestoreNewInstanceRequestBody::getFlavor()
{
    return flavor_;
}

void RestoreNewInstanceRequestBody::setFlavor(const std::vector<RestoreNewInstanceFlavorOption>& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void RestoreNewInstanceRequestBody::unsetflavor()
{
    flavorIsSet_ = false;
}

BackupStrategy RestoreNewInstanceRequestBody::getBackupStrategy() const
{
    return backupStrategy_;
}

void RestoreNewInstanceRequestBody::setBackupStrategy(const BackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void RestoreNewInstanceRequestBody::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RestoreNewInstanceRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RestoreNewInstanceRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getSslOption() const
{
    return sslOption_;
}

void RestoreNewInstanceRequestBody::setSslOption(const std::string& value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void RestoreNewInstanceRequestBody::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

std::string RestoreNewInstanceRequestBody::getDssPoolId() const
{
    return dssPoolId_;
}

void RestoreNewInstanceRequestBody::setDssPoolId(const std::string& value)
{
    dssPoolId_ = value;
    dssPoolIdIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::dssPoolIdIsSet() const
{
    return dssPoolIdIsSet_;
}

void RestoreNewInstanceRequestBody::unsetdssPoolId()
{
    dssPoolIdIsSet_ = false;
}

std::vector<std::string>& RestoreNewInstanceRequestBody::getServerGroupPolicies()
{
    return serverGroupPolicies_;
}

void RestoreNewInstanceRequestBody::setServerGroupPolicies(const std::vector<std::string>& value)
{
    serverGroupPolicies_ = value;
    serverGroupPoliciesIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::serverGroupPoliciesIsSet() const
{
    return serverGroupPoliciesIsSet_;
}

void RestoreNewInstanceRequestBody::unsetserverGroupPolicies()
{
    serverGroupPoliciesIsSet_ = false;
}

RestorePoint RestoreNewInstanceRequestBody::getRestorePoint() const
{
    return restorePoint_;
}

void RestoreNewInstanceRequestBody::setRestorePoint(const RestorePoint& value)
{
    restorePoint_ = value;
    restorePointIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::restorePointIsSet() const
{
    return restorePointIsSet_;
}

void RestoreNewInstanceRequestBody::unsetrestorePoint()
{
    restorePointIsSet_ = false;
}

ChargeInfoOption RestoreNewInstanceRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void RestoreNewInstanceRequestBody::setChargeInfo(const ChargeInfoOption& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool RestoreNewInstanceRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void RestoreNewInstanceRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


