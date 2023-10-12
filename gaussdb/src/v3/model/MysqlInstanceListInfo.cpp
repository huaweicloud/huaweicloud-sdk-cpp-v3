

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceListInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceListInfo::MysqlInstanceListInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    privateIpsIsSet_ = false;
    proxyIpsIsSet_ = false;
    readonlyPrivateIpsIsSet_ = false;
    publicIpsIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    datastoreIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    dbUserName_ = "";
    dbUserNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    flavorInfoIsSet_ = false;
    volumeIsSet_ = false;
    backupStrategyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
    chargeInfoIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
    tagsIsSet_ = false;
}

MysqlInstanceListInfo::~MysqlInstanceListInfo() = default;

void MysqlInstanceListInfo::validate()
{
}

web::json::value MysqlInstanceListInfo::toJson() const
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
    if(privateIpsIsSet_) {
        val[utility::conversions::to_string_t("private_ips")] = ModelBase::toJson(privateIps_);
    }
    if(proxyIpsIsSet_) {
        val[utility::conversions::to_string_t("proxy_ips")] = ModelBase::toJson(proxyIps_);
    }
    if(readonlyPrivateIpsIsSet_) {
        val[utility::conversions::to_string_t("readonly_private_ips")] = ModelBase::toJson(readonlyPrivateIps_);
    }
    if(publicIpsIsSet_) {
        val[utility::conversions::to_string_t("public_ips")] = ModelBase::toJson(publicIps_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(dbUserNameIsSet_) {
        val[utility::conversions::to_string_t("db_user_name")] = ModelBase::toJson(dbUserName_);
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
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(flavorInfoIsSet_) {
        val[utility::conversions::to_string_t("flavor_info")] = ModelBase::toJson(flavorInfo_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(backupStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_strategy")] = ModelBase::toJson(backupStrategy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool MysqlInstanceListInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("private_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_private_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_private_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyPrivateIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            MysqlDatastoreWithKernelVersion refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_info"));
        if(!fieldValue.is_null())
        {
            MysqlFlavorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            MysqlVolumeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string MysqlInstanceListInfo::getId() const
{
    return id_;
}

void MysqlInstanceListInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlInstanceListInfo::idIsSet() const
{
    return idIsSet_;
}

void MysqlInstanceListInfo::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlInstanceListInfo::getName() const
{
    return name_;
}

void MysqlInstanceListInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlInstanceListInfo::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlInstanceListInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlInstanceListInfo::getStatus() const
{
    return status_;
}

void MysqlInstanceListInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlInstanceListInfo::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlInstanceListInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceListInfo::getPrivateIps()
{
    return privateIps_;
}

void MysqlInstanceListInfo::setPrivateIps(const std::vector<std::string>& value)
{
    privateIps_ = value;
    privateIpsIsSet_ = true;
}

bool MysqlInstanceListInfo::privateIpsIsSet() const
{
    return privateIpsIsSet_;
}

void MysqlInstanceListInfo::unsetprivateIps()
{
    privateIpsIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceListInfo::getProxyIps()
{
    return proxyIps_;
}

void MysqlInstanceListInfo::setProxyIps(const std::vector<std::string>& value)
{
    proxyIps_ = value;
    proxyIpsIsSet_ = true;
}

bool MysqlInstanceListInfo::proxyIpsIsSet() const
{
    return proxyIpsIsSet_;
}

void MysqlInstanceListInfo::unsetproxyIps()
{
    proxyIpsIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceListInfo::getReadonlyPrivateIps()
{
    return readonlyPrivateIps_;
}

void MysqlInstanceListInfo::setReadonlyPrivateIps(const std::vector<std::string>& value)
{
    readonlyPrivateIps_ = value;
    readonlyPrivateIpsIsSet_ = true;
}

bool MysqlInstanceListInfo::readonlyPrivateIpsIsSet() const
{
    return readonlyPrivateIpsIsSet_;
}

void MysqlInstanceListInfo::unsetreadonlyPrivateIps()
{
    readonlyPrivateIpsIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceListInfo::getPublicIps()
{
    return publicIps_;
}

void MysqlInstanceListInfo::setPublicIps(const std::vector<std::string>& value)
{
    publicIps_ = value;
    publicIpsIsSet_ = true;
}

bool MysqlInstanceListInfo::publicIpsIsSet() const
{
    return publicIpsIsSet_;
}

void MysqlInstanceListInfo::unsetpublicIps()
{
    publicIpsIsSet_ = false;
}

std::string MysqlInstanceListInfo::getPort() const
{
    return port_;
}

void MysqlInstanceListInfo::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool MysqlInstanceListInfo::portIsSet() const
{
    return portIsSet_;
}

void MysqlInstanceListInfo::unsetport()
{
    portIsSet_ = false;
}

std::string MysqlInstanceListInfo::getType() const
{
    return type_;
}

void MysqlInstanceListInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlInstanceListInfo::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlInstanceListInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlInstanceListInfo::getRegion() const
{
    return region_;
}

void MysqlInstanceListInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool MysqlInstanceListInfo::regionIsSet() const
{
    return regionIsSet_;
}

void MysqlInstanceListInfo::unsetregion()
{
    regionIsSet_ = false;
}

MysqlDatastoreWithKernelVersion MysqlInstanceListInfo::getDatastore() const
{
    return datastore_;
}

void MysqlInstanceListInfo::setDatastore(const MysqlDatastoreWithKernelVersion& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool MysqlInstanceListInfo::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void MysqlInstanceListInfo::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string MysqlInstanceListInfo::getCreated() const
{
    return created_;
}

void MysqlInstanceListInfo::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool MysqlInstanceListInfo::createdIsSet() const
{
    return createdIsSet_;
}

void MysqlInstanceListInfo::unsetcreated()
{
    createdIsSet_ = false;
}

std::string MysqlInstanceListInfo::getUpdated() const
{
    return updated_;
}

void MysqlInstanceListInfo::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool MysqlInstanceListInfo::updatedIsSet() const
{
    return updatedIsSet_;
}

void MysqlInstanceListInfo::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string MysqlInstanceListInfo::getDbUserName() const
{
    return dbUserName_;
}

void MysqlInstanceListInfo::setDbUserName(const std::string& value)
{
    dbUserName_ = value;
    dbUserNameIsSet_ = true;
}

bool MysqlInstanceListInfo::dbUserNameIsSet() const
{
    return dbUserNameIsSet_;
}

void MysqlInstanceListInfo::unsetdbUserName()
{
    dbUserNameIsSet_ = false;
}

std::string MysqlInstanceListInfo::getVpcId() const
{
    return vpcId_;
}

void MysqlInstanceListInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool MysqlInstanceListInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void MysqlInstanceListInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string MysqlInstanceListInfo::getSubnetId() const
{
    return subnetId_;
}

void MysqlInstanceListInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool MysqlInstanceListInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void MysqlInstanceListInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string MysqlInstanceListInfo::getSecurityGroupId() const
{
    return securityGroupId_;
}

void MysqlInstanceListInfo::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool MysqlInstanceListInfo::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void MysqlInstanceListInfo::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string MysqlInstanceListInfo::getFlavorRef() const
{
    return flavorRef_;
}

void MysqlInstanceListInfo::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool MysqlInstanceListInfo::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void MysqlInstanceListInfo::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

MysqlFlavorInfo MysqlInstanceListInfo::getFlavorInfo() const
{
    return flavorInfo_;
}

void MysqlInstanceListInfo::setFlavorInfo(const MysqlFlavorInfo& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool MysqlInstanceListInfo::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void MysqlInstanceListInfo::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

MysqlVolumeInfo MysqlInstanceListInfo::getVolume() const
{
    return volume_;
}

void MysqlInstanceListInfo::setVolume(const MysqlVolumeInfo& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool MysqlInstanceListInfo::volumeIsSet() const
{
    return volumeIsSet_;
}

void MysqlInstanceListInfo::unsetvolume()
{
    volumeIsSet_ = false;
}

MysqlBackupStrategy MysqlInstanceListInfo::getBackupStrategy() const
{
    return backupStrategy_;
}

void MysqlInstanceListInfo::setBackupStrategy(const MysqlBackupStrategy& value)
{
    backupStrategy_ = value;
    backupStrategyIsSet_ = true;
}

bool MysqlInstanceListInfo::backupStrategyIsSet() const
{
    return backupStrategyIsSet_;
}

void MysqlInstanceListInfo::unsetbackupStrategy()
{
    backupStrategyIsSet_ = false;
}

std::string MysqlInstanceListInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void MysqlInstanceListInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool MysqlInstanceListInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void MysqlInstanceListInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string MysqlInstanceListInfo::getTimeZone() const
{
    return timeZone_;
}

void MysqlInstanceListInfo::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool MysqlInstanceListInfo::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void MysqlInstanceListInfo::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

MysqlChargeInfo MysqlInstanceListInfo::getChargeInfo() const
{
    return chargeInfo_;
}

void MysqlInstanceListInfo::setChargeInfo(const MysqlChargeInfo& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool MysqlInstanceListInfo::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void MysqlInstanceListInfo::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

std::string MysqlInstanceListInfo::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void MysqlInstanceListInfo::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool MysqlInstanceListInfo::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void MysqlInstanceListInfo::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

std::vector<InstanceTagItem>& MysqlInstanceListInfo::getTags()
{
    return tags_;
}

void MysqlInstanceListInfo::setTags(const std::vector<InstanceTagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool MysqlInstanceListInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void MysqlInstanceListInfo::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


