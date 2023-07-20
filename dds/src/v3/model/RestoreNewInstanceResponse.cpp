

#include "huaweicloud/dds/v3/model/RestoreNewInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreNewInstanceResponse::RestoreNewInstanceResponse()
{
    id_ = "";
    idIsSet_ = false;
    datastoreIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
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
    diskEncryptionId_ = "";
    diskEncryptionIdIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    configurationsIsSet_ = false;
    flavorIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    sslOption_ = "";
    sslOptionIsSet_ = false;
    dssPoolId_ = "";
    dssPoolIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    chargeInfoIsSet_ = false;
}

RestoreNewInstanceResponse::~RestoreNewInstanceResponse() = default;

void RestoreNewInstanceResponse::validate()
{
}

web::json::value RestoreNewInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(diskEncryptionIdIsSet_) {
        val[utility::conversions::to_string_t("disk_encryption_id")] = ModelBase::toJson(diskEncryptionId_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
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
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }

    return val;
}

bool RestoreNewInstanceResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("disk_encryption_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_encryption_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskEncryptionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            ChargeInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}

std::string RestoreNewInstanceResponse::getId() const
{
    return id_;
}

void RestoreNewInstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RestoreNewInstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void RestoreNewInstanceResponse::unsetid()
{
    idIsSet_ = false;
}

Datastore RestoreNewInstanceResponse::getDatastore() const
{
    return datastore_;
}

void RestoreNewInstanceResponse::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool RestoreNewInstanceResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void RestoreNewInstanceResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getName() const
{
    return name_;
}

void RestoreNewInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RestoreNewInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void RestoreNewInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getCreated() const
{
    return created_;
}

void RestoreNewInstanceResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool RestoreNewInstanceResponse::createdIsSet() const
{
    return createdIsSet_;
}

void RestoreNewInstanceResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getStatus() const
{
    return status_;
}

void RestoreNewInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RestoreNewInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void RestoreNewInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getRegion() const
{
    return region_;
}

void RestoreNewInstanceResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RestoreNewInstanceResponse::regionIsSet() const
{
    return regionIsSet_;
}

void RestoreNewInstanceResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void RestoreNewInstanceResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool RestoreNewInstanceResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void RestoreNewInstanceResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getVpcId() const
{
    return vpcId_;
}

void RestoreNewInstanceResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void RestoreNewInstanceResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getSubnetId() const
{
    return subnetId_;
}

void RestoreNewInstanceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void RestoreNewInstanceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void RestoreNewInstanceResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void RestoreNewInstanceResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getDiskEncryptionId() const
{
    return diskEncryptionId_;
}

void RestoreNewInstanceResponse::setDiskEncryptionId(const std::string& value)
{
    diskEncryptionId_ = value;
    diskEncryptionIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::diskEncryptionIdIsSet() const
{
    return diskEncryptionIdIsSet_;
}

void RestoreNewInstanceResponse::unsetdiskEncryptionId()
{
    diskEncryptionIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getMode() const
{
    return mode_;
}

void RestoreNewInstanceResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool RestoreNewInstanceResponse::modeIsSet() const
{
    return modeIsSet_;
}

void RestoreNewInstanceResponse::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<RestoreNewInstanceConfigurationsOption>& RestoreNewInstanceResponse::getConfigurations()
{
    return configurations_;
}

void RestoreNewInstanceResponse::setConfigurations(const std::vector<RestoreNewInstanceConfigurationsOption>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool RestoreNewInstanceResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void RestoreNewInstanceResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

std::vector<RestoreNewInstanceFlavorOption>& RestoreNewInstanceResponse::getFlavor()
{
    return flavor_;
}

void RestoreNewInstanceResponse::setFlavor(const std::vector<RestoreNewInstanceFlavorOption>& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool RestoreNewInstanceResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void RestoreNewInstanceResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

BackupStrategy RestoreNewInstanceResponse::getBackupStrategy() const
{
    return backupStrategy_;
}

void RestoreNewInstanceResponse::setBackupStrategy(const BackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool RestoreNewInstanceResponse::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void RestoreNewInstanceResponse::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RestoreNewInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RestoreNewInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getSslOption() const
{
    return sslOption_;
}

void RestoreNewInstanceResponse::setSslOption(const std::string& value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool RestoreNewInstanceResponse::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void RestoreNewInstanceResponse::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getDssPoolId() const
{
    return dssPoolId_;
}

void RestoreNewInstanceResponse::setDssPoolId(const std::string& value)
{
    dssPoolId_ = value;
    dssPoolIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::dssPoolIdIsSet() const
{
    return dssPoolIdIsSet_;
}

void RestoreNewInstanceResponse::unsetdssPoolId()
{
    dssPoolIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestoreNewInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreNewInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RestoreNewInstanceResponse::getOrderId() const
{
    return orderId_;
}

void RestoreNewInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool RestoreNewInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void RestoreNewInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

ChargeInfoResult RestoreNewInstanceResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void RestoreNewInstanceResponse::setChargeInfo(const ChargeInfoResult& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool RestoreNewInstanceResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void RestoreNewInstanceResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


