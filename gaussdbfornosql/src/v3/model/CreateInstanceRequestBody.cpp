

#include "huaweicloud/gaussdbfornosql/v3/model/CreateInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateInstanceRequestBody::CreateInstanceRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    datastoreIsSet_ = false;
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
    password_ = "";
    passwordIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    flavorIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    sslOption_ = "";
    sslOptionIsSet_ = false;
    chargeInfoIsSet_ = false;
    restoreInfoIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
}

CreateInstanceRequestBody::~CreateInstanceRequestBody() = default;

void CreateInstanceRequestBody::validate()
{
}

web::json::value CreateInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
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
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(restoreInfoIsSet_) {
        val[utility::conversions::to_string_t("restore_info")] = ModelBase::toJson(restoreInfo_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool CreateInstanceRequestBody::fromJson(const web::json::value& val)
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
            DatastoreOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateInstanceFlavorOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            BackupStrategyOption refVal;
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfoOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_info"));
        if(!fieldValue.is_null())
        {
            RestoreInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreInfo(refVal);
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
    return ok;
}

std::string CreateInstanceRequestBody::getName() const
{
    return name_;
}

void CreateInstanceRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstanceRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstanceRequestBody::unsetname()
{
    nameIsSet_ = false;
}

DatastoreOption CreateInstanceRequestBody::getDatastore() const
{
    return datastore_;
}

void CreateInstanceRequestBody::setDatastore(const DatastoreOption& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateInstanceRequestBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateInstanceRequestBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string CreateInstanceRequestBody::getRegion() const
{
    return region_;
}

void CreateInstanceRequestBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateInstanceRequestBody::regionIsSet() const
{
    return regionIsSet_;
}

void CreateInstanceRequestBody::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateInstanceRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateInstanceRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateInstanceRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateInstanceRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateInstanceRequestBody::getVpcId() const
{
    return vpcId_;
}

void CreateInstanceRequestBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateInstanceRequestBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateInstanceRequestBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateInstanceRequestBody::getSubnetId() const
{
    return subnetId_;
}

void CreateInstanceRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateInstanceRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateInstanceRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateInstanceRequestBody::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateInstanceRequestBody::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateInstanceRequestBody::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateInstanceRequestBody::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string CreateInstanceRequestBody::getPassword() const
{
    return password_;
}

void CreateInstanceRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateInstanceRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateInstanceRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string CreateInstanceRequestBody::getMode() const
{
    return mode_;
}

void CreateInstanceRequestBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateInstanceRequestBody::modeIsSet() const
{
    return modeIsSet_;
}

void CreateInstanceRequestBody::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<CreateInstanceFlavorOption>& CreateInstanceRequestBody::getFlavor()
{
    return flavor_;
}

void CreateInstanceRequestBody::setFlavor(const std::vector<CreateInstanceFlavorOption>& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateInstanceRequestBody::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateInstanceRequestBody::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string CreateInstanceRequestBody::getConfigurationId() const
{
    return configurationId_;
}

void CreateInstanceRequestBody::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CreateInstanceRequestBody::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CreateInstanceRequestBody::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

BackupStrategyOption CreateInstanceRequestBody::getBackupStrategy() const
{
    return backupStrategy_;
}

void CreateInstanceRequestBody::setBackupStrategy(const BackupStrategyOption& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool CreateInstanceRequestBody::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void CreateInstanceRequestBody::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string CreateInstanceRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateInstanceRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateInstanceRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateInstanceRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateInstanceRequestBody::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void CreateInstanceRequestBody::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool CreateInstanceRequestBody::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void CreateInstanceRequestBody::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::string CreateInstanceRequestBody::getSslOption() const
{
    return sslOption_;
}

void CreateInstanceRequestBody::setSslOption(const std::string& value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool CreateInstanceRequestBody::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void CreateInstanceRequestBody::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

ChargeInfoOption CreateInstanceRequestBody::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateInstanceRequestBody::setChargeInfo(const ChargeInfoOption& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateInstanceRequestBody::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateInstanceRequestBody::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

RestoreInfo CreateInstanceRequestBody::getRestoreInfo() const
{
    return restoreInfo_;
}

void CreateInstanceRequestBody::setRestoreInfo(const RestoreInfo& value)
{
    restoreInfo_ = value;
    restoreInfoIsSet_ = true;
}

bool CreateInstanceRequestBody::restoreInfoIsSet() const
{
    return restoreInfoIsSet_;
}

void CreateInstanceRequestBody::unsetrestoreInfo()
{
    restoreInfoIsSet_ = false;
}

std::string CreateInstanceRequestBody::getPort() const
{
    return port_;
}

void CreateInstanceRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateInstanceRequestBody::portIsSet() const
{
    return portIsSet_;
}

void CreateInstanceRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


