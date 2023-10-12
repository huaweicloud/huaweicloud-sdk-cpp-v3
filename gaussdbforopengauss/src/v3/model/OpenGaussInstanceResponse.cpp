

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussInstanceResponse::OpenGaussInstanceResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    datastoreIsSet_ = false;
    haIsSet_ = false;
    replicaNum_ = 0;
    replicaNumIsSet_ = false;
    backupStrategyIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
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
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    chargeInfoIsSet_ = false;
}

OpenGaussInstanceResponse::~OpenGaussInstanceResponse() = default;

void OpenGaussInstanceResponse::validate()
{
}

web::json::value OpenGaussInstanceResponse::toJson() const
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
    if(haIsSet_) {
        val[utility::conversions::to_string_t("ha")] = ModelBase::toJson(ha_);
    }
    if(replicaNumIsSet_) {
        val[utility::conversions::to_string_t("replica_num")] = ModelBase::toJson(replicaNum_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }

    return val;
}
bool OpenGaussInstanceResponse::fromJson(const web::json::value& val)
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
            OpenGaussDatastoreResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha"));
        if(!fieldValue.is_null())
        {
            OpenGaussHaResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            OpenGaussBackupStrategyForResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
            OpenGaussVolumeResponse refVal;
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
            OpenGaussChargeInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}


std::string OpenGaussInstanceResponse::getId() const
{
    return id_;
}

void OpenGaussInstanceResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OpenGaussInstanceResponse::idIsSet() const
{
    return idIsSet_;
}

void OpenGaussInstanceResponse::unsetid()
{
    idIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getName() const
{
    return name_;
}

void OpenGaussInstanceResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OpenGaussInstanceResponse::nameIsSet() const
{
    return nameIsSet_;
}

void OpenGaussInstanceResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getStatus() const
{
    return status_;
}

void OpenGaussInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OpenGaussInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void OpenGaussInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

OpenGaussDatastoreResponse OpenGaussInstanceResponse::getDatastore() const
{
    return datastore_;
}

void OpenGaussInstanceResponse::setDatastore(const OpenGaussDatastoreResponse& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool OpenGaussInstanceResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void OpenGaussInstanceResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

OpenGaussHaResponse OpenGaussInstanceResponse::getHa() const
{
    return ha_;
}

void OpenGaussInstanceResponse::setHa(const OpenGaussHaResponse& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool OpenGaussInstanceResponse::haIsSet() const
{
    return haIsSet_;
}

void OpenGaussInstanceResponse::unsetha()
{
    haIsSet_ = false;
}

int32_t OpenGaussInstanceResponse::getReplicaNum() const
{
    return replicaNum_;
}

void OpenGaussInstanceResponse::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool OpenGaussInstanceResponse::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void OpenGaussInstanceResponse::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

OpenGaussBackupStrategyForResponse OpenGaussInstanceResponse::getBackupStrategy() const
{
    return backupStrategy_;
}

void OpenGaussInstanceResponse::setBackupStrategy(const OpenGaussBackupStrategyForResponse& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool OpenGaussInstanceResponse::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void OpenGaussInstanceResponse::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getPort() const
{
    return port_;
}

void OpenGaussInstanceResponse::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool OpenGaussInstanceResponse::portIsSet() const
{
    return portIsSet_;
}

void OpenGaussInstanceResponse::unsetport()
{
    portIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void OpenGaussInstanceResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool OpenGaussInstanceResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void OpenGaussInstanceResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getFlavorRef() const
{
    return flavorRef_;
}

void OpenGaussInstanceResponse::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpenGaussInstanceResponse::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpenGaussInstanceResponse::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

OpenGaussVolumeResponse OpenGaussInstanceResponse::getVolume() const
{
    return volume_;
}

void OpenGaussInstanceResponse::setVolume(const OpenGaussVolumeResponse& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool OpenGaussInstanceResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void OpenGaussInstanceResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getRegion() const
{
    return region_;
}

void OpenGaussInstanceResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool OpenGaussInstanceResponse::regionIsSet() const
{
    return regionIsSet_;
}

void OpenGaussInstanceResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void OpenGaussInstanceResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool OpenGaussInstanceResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void OpenGaussInstanceResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getVpcId() const
{
    return vpcId_;
}

void OpenGaussInstanceResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool OpenGaussInstanceResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void OpenGaussInstanceResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getSubnetId() const
{
    return subnetId_;
}

void OpenGaussInstanceResponse::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool OpenGaussInstanceResponse::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void OpenGaussInstanceResponse::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string OpenGaussInstanceResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void OpenGaussInstanceResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool OpenGaussInstanceResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void OpenGaussInstanceResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

OpenGaussChargeInfoResponse OpenGaussInstanceResponse::getChargeInfo() const
{
    return chargeInfo_;
}

void OpenGaussInstanceResponse::setChargeInfo(const OpenGaussChargeInfoResponse& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool OpenGaussInstanceResponse::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void OpenGaussInstanceResponse::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


