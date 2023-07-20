

#include "huaweicloud/gaussdbfornosql/v3/model/CreateInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateInstanceResponse::CreateInstanceResponse()
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
    mode_ = "";
    modeIsSet_ = false;
    flavorIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    sslOption_ = "";
    sslOptionIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    chargeInfoIsSet_ = false;
}

CreateInstanceResponse::~CreateInstanceResponse() = default;

void CreateInstanceResponse::validate()
{
}

web::json::value CreateInstanceResponse::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
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
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
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

bool CreateInstanceResponse::fromJson(const web::json::value& val)
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
            DatastoreResult refVal;
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
            std::vector<CreateInstanceFlavorResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            BackupStrategyResult refVal;
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

std::string CreateInstanceResponse::getId() const
{
    return id_;
}

void CreateInstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateInstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateInstanceResponse::unsetid()
{
    idIsSet_ = false;
}

DatastoreResult CreateInstanceResponse::getDatastore() const
{
    return datastore_;
}

void CreateInstanceResponse::setDatastore(const DatastoreResult& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateInstanceResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateInstanceResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string CreateInstanceResponse::getName() const
{
    return name_;
}

void CreateInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateInstanceResponse::getCreated() const
{
    return created_;
}

void CreateInstanceResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool CreateInstanceResponse::createdIsSet() const
{
    return createdIsSet_;
}

void CreateInstanceResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string CreateInstanceResponse::getStatus() const
{
    return status_;
}

void CreateInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateInstanceResponse::getRegion() const
{
    return region_;
}

void CreateInstanceResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateInstanceResponse::regionIsSet() const
{
    return regionIsSet_;
}

void CreateInstanceResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string CreateInstanceResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateInstanceResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateInstanceResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateInstanceResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateInstanceResponse::getVpcId() const
{
    return vpcId_;
}

void CreateInstanceResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateInstanceResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateInstanceResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateInstanceResponse::getSubnetId() const
{
    return subnetId_;
}

void CreateInstanceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateInstanceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateInstanceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateInstanceResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateInstanceResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateInstanceResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateInstanceResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string CreateInstanceResponse::getMode() const
{
    return mode_;
}

void CreateInstanceResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateInstanceResponse::modeIsSet() const
{
    return modeIsSet_;
}

void CreateInstanceResponse::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<CreateInstanceFlavorResult>& CreateInstanceResponse::getFlavor()
{
    return flavor_;
}

void CreateInstanceResponse::setFlavor(const std::vector<CreateInstanceFlavorResult>& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateInstanceResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateInstanceResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

BackupStrategyResult CreateInstanceResponse::getBackupStrategy() const
{
    return backupStrategy_;
}

void CreateInstanceResponse::setBackupStrategy(const BackupStrategyResult& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool CreateInstanceResponse::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void CreateInstanceResponse::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string CreateInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateInstanceResponse::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void CreateInstanceResponse::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool CreateInstanceResponse::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void CreateInstanceResponse::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::string CreateInstanceResponse::getSslOption() const
{
    return sslOption_;
}

void CreateInstanceResponse::setSslOption(const std::string& value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool CreateInstanceResponse::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void CreateInstanceResponse::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

std::string CreateInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateInstanceResponse::getOrderId() const
{
    return orderId_;
}

void CreateInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

ChargeInfoResult CreateInstanceResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateInstanceResponse::setChargeInfo(const ChargeInfoResult& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateInstanceResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateInstanceResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


