

#include "huaweicloud/modelarts/v1/model/ServerCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerCreateRequest::ServerCreateRequest()
{
    adminPass_ = "";
    adminPassIsSet_ = false;
    arch_ = "";
    archIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    chargingInfoIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    keyPairName_ = "";
    keyPairNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumeIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    hpsClusterId_ = "";
    hpsClusterIdIsSet_ = false;
}

ServerCreateRequest::~ServerCreateRequest() = default;

void ServerCreateRequest::validate()
{
}

web::json::value ServerCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminPassIsSet_) {
        val[utility::conversions::to_string_t("admin_pass")] = ModelBase::toJson(adminPass_);
    }
    if(archIsSet_) {
        val[utility::conversions::to_string_t("arch")] = ModelBase::toJson(arch_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(chargingInfoIsSet_) {
        val[utility::conversions::to_string_t("charging_info")] = ModelBase::toJson(chargingInfo_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(keyPairNameIsSet_) {
        val[utility::conversions::to_string_t("key_pair_name")] = ModelBase::toJson(keyPairName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("root_volume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumeIsSet_) {
        val[utility::conversions::to_string_t("data_volume")] = ModelBase::toJson(dataVolume_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(hpsClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hps_cluster_id")] = ModelBase::toJson(hpsClusterId_);
    }

    return val;
}
bool ServerCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("admin_pass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_pass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminPass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("charging_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_info"));
        if(!fieldValue.is_null())
        {
            ChargingInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_pair_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_pair_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPairName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            ServerNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_volume"));
        if(!fieldValue.is_null())
        {
            EvsVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volume"));
        if(!fieldValue.is_null())
        {
            ServerDataVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hps_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hps_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpsClusterId(refVal);
        }
    }
    return ok;
}


std::string ServerCreateRequest::getAdminPass() const
{
    return adminPass_;
}

void ServerCreateRequest::setAdminPass(const std::string& value)
{
    adminPass_ = value;
    adminPassIsSet_ = true;
}

bool ServerCreateRequest::adminPassIsSet() const
{
    return adminPassIsSet_;
}

void ServerCreateRequest::unsetadminPass()
{
    adminPassIsSet_ = false;
}

std::string ServerCreateRequest::getArch() const
{
    return arch_;
}

void ServerCreateRequest::setArch(const std::string& value)
{
    arch_ = value;
    archIsSet_ = true;
}

bool ServerCreateRequest::archIsSet() const
{
    return archIsSet_;
}

void ServerCreateRequest::unsetarch()
{
    archIsSet_ = false;
}

std::string ServerCreateRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ServerCreateRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ServerCreateRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ServerCreateRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

ChargingInfo ServerCreateRequest::getChargingInfo() const
{
    return chargingInfo_;
}

void ServerCreateRequest::setChargingInfo(const ChargingInfo& value)
{
    chargingInfo_ = value;
    chargingInfoIsSet_ = true;
}

bool ServerCreateRequest::chargingInfoIsSet() const
{
    return chargingInfoIsSet_;
}

void ServerCreateRequest::unsetchargingInfo()
{
    chargingInfoIsSet_ = false;
}

int32_t ServerCreateRequest::getCount() const
{
    return count_;
}

void ServerCreateRequest::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ServerCreateRequest::countIsSet() const
{
    return countIsSet_;
}

void ServerCreateRequest::unsetcount()
{
    countIsSet_ = false;
}

std::string ServerCreateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ServerCreateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ServerCreateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ServerCreateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ServerCreateRequest::getFlavor() const
{
    return flavor_;
}

void ServerCreateRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerCreateRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerCreateRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ServerCreateRequest::getResourceFlavor() const
{
    return resourceFlavor_;
}

void ServerCreateRequest::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool ServerCreateRequest::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void ServerCreateRequest::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

std::string ServerCreateRequest::getImageId() const
{
    return imageId_;
}

void ServerCreateRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ServerCreateRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ServerCreateRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ServerCreateRequest::getKeyPairName() const
{
    return keyPairName_;
}

void ServerCreateRequest::setKeyPairName(const std::string& value)
{
    keyPairName_ = value;
    keyPairNameIsSet_ = true;
}

bool ServerCreateRequest::keyPairNameIsSet() const
{
    return keyPairNameIsSet_;
}

void ServerCreateRequest::unsetkeyPairName()
{
    keyPairNameIsSet_ = false;
}

std::string ServerCreateRequest::getName() const
{
    return name_;
}

void ServerCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServerCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ServerCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

ServerNetwork ServerCreateRequest::getNetwork() const
{
    return network_;
}

void ServerCreateRequest::setNetwork(const ServerNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool ServerCreateRequest::networkIsSet() const
{
    return networkIsSet_;
}

void ServerCreateRequest::unsetnetwork()
{
    networkIsSet_ = false;
}

EvsVolume ServerCreateRequest::getRootVolume() const
{
    return rootVolume_;
}

void ServerCreateRequest::setRootVolume(const EvsVolume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool ServerCreateRequest::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void ServerCreateRequest::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

ServerDataVolume ServerCreateRequest::getDataVolume() const
{
    return dataVolume_;
}

void ServerCreateRequest::setDataVolume(const ServerDataVolume& value)
{
    dataVolume_ = value;
    dataVolumeIsSet_ = true;
}

bool ServerCreateRequest::dataVolumeIsSet() const
{
    return dataVolumeIsSet_;
}

void ServerCreateRequest::unsetdataVolume()
{
    dataVolumeIsSet_ = false;
}

std::string ServerCreateRequest::getServerType() const
{
    return serverType_;
}

void ServerCreateRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ServerCreateRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ServerCreateRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string ServerCreateRequest::getUserData() const
{
    return userData_;
}

void ServerCreateRequest::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ServerCreateRequest::userDataIsSet() const
{
    return userDataIsSet_;
}

void ServerCreateRequest::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ServerCreateRequest::getHpsClusterId() const
{
    return hpsClusterId_;
}

void ServerCreateRequest::setHpsClusterId(const std::string& value)
{
    hpsClusterId_ = value;
    hpsClusterIdIsSet_ = true;
}

bool ServerCreateRequest::hpsClusterIdIsSet() const
{
    return hpsClusterIdIsSet_;
}

void ServerCreateRequest::unsethpsClusterId()
{
    hpsClusterIdIsSet_ = false;
}

}
}
}
}
}


