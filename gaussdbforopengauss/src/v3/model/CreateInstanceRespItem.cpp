

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceRespItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateInstanceRespItem::CreateInstanceRespItem()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    datastoreIsSet_ = false;
    haIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    volumeIsSet_ = false;
    replicaNum_ = 0;
    replicaNumIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    backupStrategyIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
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

CreateInstanceRespItem::~CreateInstanceRespItem() = default;

void CreateInstanceRespItem::validate()
{
}

web::json::value CreateInstanceRespItem::toJson() const
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
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(replicaNumIsSet_) {
        val[utility::conversions::to_string_t("replica_num")] = ModelBase::toJson(replicaNum_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
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
bool CreateInstanceRespItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("replica_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_strategy"));
        if(!fieldValue.is_null())
        {
            OpenGaussBackupStrategyForResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupStrategy(refVal);
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
            OpenGaussChargeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}


std::string CreateInstanceRespItem::getId() const
{
    return id_;
}

void CreateInstanceRespItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateInstanceRespItem::idIsSet() const
{
    return idIsSet_;
}

void CreateInstanceRespItem::unsetid()
{
    idIsSet_ = false;
}

std::string CreateInstanceRespItem::getName() const
{
    return name_;
}

void CreateInstanceRespItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInstanceRespItem::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInstanceRespItem::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateInstanceRespItem::getStatus() const
{
    return status_;
}

void CreateInstanceRespItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateInstanceRespItem::statusIsSet() const
{
    return statusIsSet_;
}

void CreateInstanceRespItem::unsetstatus()
{
    statusIsSet_ = false;
}

OpenGaussDatastoreResponse CreateInstanceRespItem::getDatastore() const
{
    return datastore_;
}

void CreateInstanceRespItem::setDatastore(const OpenGaussDatastoreResponse& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateInstanceRespItem::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateInstanceRespItem::unsetdatastore()
{
    datastoreIsSet_ = false;
}

OpenGaussHaResponse CreateInstanceRespItem::getHa() const
{
    return ha_;
}

void CreateInstanceRespItem::setHa(const OpenGaussHaResponse& value)
{
    ha_ = value;
    haIsSet_ = true;
}

bool CreateInstanceRespItem::haIsSet() const
{
    return haIsSet_;
}

void CreateInstanceRespItem::unsetha()
{
    haIsSet_ = false;
}

std::string CreateInstanceRespItem::getPort() const
{
    return port_;
}

void CreateInstanceRespItem::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreateInstanceRespItem::portIsSet() const
{
    return portIsSet_;
}

void CreateInstanceRespItem::unsetport()
{
    portIsSet_ = false;
}

OpenGaussVolumeResponse CreateInstanceRespItem::getVolume() const
{
    return volume_;
}

void CreateInstanceRespItem::setVolume(const OpenGaussVolumeResponse& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool CreateInstanceRespItem::volumeIsSet() const
{
    return volumeIsSet_;
}

void CreateInstanceRespItem::unsetvolume()
{
    volumeIsSet_ = false;
}

int32_t CreateInstanceRespItem::getReplicaNum() const
{
    return replicaNum_;
}

void CreateInstanceRespItem::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool CreateInstanceRespItem::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void CreateInstanceRespItem::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

std::string CreateInstanceRespItem::getRegion() const
{
    return region_;
}

void CreateInstanceRespItem::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateInstanceRespItem::regionIsSet() const
{
    return regionIsSet_;
}

void CreateInstanceRespItem::unsetregion()
{
    regionIsSet_ = false;
}

OpenGaussBackupStrategyForResponse CreateInstanceRespItem::getBackupStrategy() const
{
    return backupStrategy_;
}

void CreateInstanceRespItem::setBackupStrategy(const OpenGaussBackupStrategyForResponse& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool CreateInstanceRespItem::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void CreateInstanceRespItem::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string CreateInstanceRespItem::getFlavorRef() const
{
    return flavorRef_;
}

void CreateInstanceRespItem::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateInstanceRespItem::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateInstanceRespItem::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string CreateInstanceRespItem::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateInstanceRespItem::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateInstanceRespItem::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateInstanceRespItem::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateInstanceRespItem::getVpcId() const
{
    return vpcId_;
}

void CreateInstanceRespItem::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateInstanceRespItem::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateInstanceRespItem::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateInstanceRespItem::getSubnetId() const
{
    return subnetId_;
}

void CreateInstanceRespItem::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateInstanceRespItem::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateInstanceRespItem::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string CreateInstanceRespItem::getSecurityGroupId() const
{
    return securityGroupId_;
}

void CreateInstanceRespItem::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool CreateInstanceRespItem::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void CreateInstanceRespItem::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

OpenGaussChargeInfo CreateInstanceRespItem::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateInstanceRespItem::setChargeInfo(const OpenGaussChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateInstanceRespItem::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateInstanceRespItem::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


