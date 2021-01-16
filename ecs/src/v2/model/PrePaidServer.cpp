

#include "huaweicloud/ecs/v2/model/PrePaidServer.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServer::PrePaidServer()
{
    imageRef_ = "";
    imageRefIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    adminPass_ = "";
    adminPassIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    vpcid_ = "";
    vpcidIsSet_ = false;
    nicsIsSet_ = false;
    publicipIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    isAutoRename_ = false;
    isAutoRenameIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumesIsSet_ = false;
    securityGroupsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    extendparamIsSet_ = false;
    metadataIsSet_ = false;
    osschedulerHintsIsSet_ = false;
    tagsIsSet_ = false;
    serverTagsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

PrePaidServer::~PrePaidServer() = default;

void PrePaidServer::validate()
{
}

web::json::value PrePaidServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageRefIsSet_) {
        val[utility::conversions::to_string_t("imageRef")] = ModelBase::toJson(imageRef_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(adminPassIsSet_) {
        val[utility::conversions::to_string_t("adminPass")] = ModelBase::toJson(adminPass_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(vpcidIsSet_) {
        val[utility::conversions::to_string_t("vpcid")] = ModelBase::toJson(vpcid_);
    }
    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }
    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(isAutoRenameIsSet_) {
        val[utility::conversions::to_string_t("isAutoRename")] = ModelBase::toJson(isAutoRename_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("root_volume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("data_volumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(osschedulerHintsIsSet_) {
        val[utility::conversions::to_string_t("os:scheduler_hints")] = ModelBase::toJson(osschedulerHints_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(serverTagsIsSet_) {
        val[utility::conversions::to_string_t("server_tags")] = ModelBase::toJson(serverTags_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool PrePaidServer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("imageRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminPass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminPass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminPass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpcid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpcid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<PrePaidServerNic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PrePaidServerPublicip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isAutoRename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRename"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_volume"));
        if(!fieldValue.is_null())
        {
            PrePaidServerRootVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<PrePaidServerDataVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<PrePaidServerSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PrePaidServerExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os:scheduler_hints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os:scheduler_hints"));
        if(!fieldValue.is_null())
        {
            PrePaidServerSchedulerHints refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsschedulerHints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<PrePaidServerTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string PrePaidServer::getImageRef() const
{
    return imageRef_;
}

void PrePaidServer::setImageRef(const std::string& value)
{
    imageRef_ = value;
    imageRefIsSet_ = true;
}

bool PrePaidServer::imageRefIsSet() const
{
    return imageRefIsSet_;
}

void PrePaidServer::unsetimageRef()
{
    imageRefIsSet_ = false;
}

std::string PrePaidServer::getFlavorRef() const
{
    return flavorRef_;
}

void PrePaidServer::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool PrePaidServer::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void PrePaidServer::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string PrePaidServer::getName() const
{
    return name_;
}

void PrePaidServer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PrePaidServer::nameIsSet() const
{
    return nameIsSet_;
}

void PrePaidServer::unsetname()
{
    nameIsSet_ = false;
}

std::string PrePaidServer::getUserData() const
{
    return userData_;
}

void PrePaidServer::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool PrePaidServer::userDataIsSet() const
{
    return userDataIsSet_;
}

void PrePaidServer::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string PrePaidServer::getAdminPass() const
{
    return adminPass_;
}

void PrePaidServer::setAdminPass(const std::string& value)
{
    adminPass_ = value;
    adminPassIsSet_ = true;
}

bool PrePaidServer::adminPassIsSet() const
{
    return adminPassIsSet_;
}

void PrePaidServer::unsetadminPass()
{
    adminPassIsSet_ = false;
}

std::string PrePaidServer::getKeyName() const
{
    return keyName_;
}

void PrePaidServer::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool PrePaidServer::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void PrePaidServer::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::string PrePaidServer::getVpcid() const
{
    return vpcid_;
}

void PrePaidServer::setVpcid(const std::string& value)
{
    vpcid_ = value;
    vpcidIsSet_ = true;
}

bool PrePaidServer::vpcidIsSet() const
{
    return vpcidIsSet_;
}

void PrePaidServer::unsetvpcid()
{
    vpcidIsSet_ = false;
}

std::vector<PrePaidServerNic>& PrePaidServer::getNics()
{
    return nics_;
}

void PrePaidServer::setNics(const std::vector<PrePaidServerNic>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool PrePaidServer::nicsIsSet() const
{
    return nicsIsSet_;
}

void PrePaidServer::unsetnics()
{
    nicsIsSet_ = false;
}

PrePaidServerPublicip PrePaidServer::getPublicip() const
{
    return publicip_;
}

void PrePaidServer::setPublicip(const PrePaidServerPublicip& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool PrePaidServer::publicipIsSet() const
{
    return publicipIsSet_;
}

void PrePaidServer::unsetpublicip()
{
    publicipIsSet_ = false;
}

int32_t PrePaidServer::getCount() const
{
    return count_;
}

void PrePaidServer::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PrePaidServer::countIsSet() const
{
    return countIsSet_;
}

void PrePaidServer::unsetcount()
{
    countIsSet_ = false;
}

bool PrePaidServer::isIsAutoRename() const
{
    return isAutoRename_;
}

void PrePaidServer::setIsAutoRename(bool value)
{
    isAutoRename_ = value;
    isAutoRenameIsSet_ = true;
}

bool PrePaidServer::isAutoRenameIsSet() const
{
    return isAutoRenameIsSet_;
}

void PrePaidServer::unsetisAutoRename()
{
    isAutoRenameIsSet_ = false;
}

PrePaidServerRootVolume PrePaidServer::getRootVolume() const
{
    return rootVolume_;
}

void PrePaidServer::setRootVolume(const PrePaidServerRootVolume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool PrePaidServer::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void PrePaidServer::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<PrePaidServerDataVolume>& PrePaidServer::getDataVolumes()
{
    return dataVolumes_;
}

void PrePaidServer::setDataVolumes(const std::vector<PrePaidServerDataVolume>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool PrePaidServer::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void PrePaidServer::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::vector<PrePaidServerSecurityGroup>& PrePaidServer::getSecurityGroups()
{
    return securityGroups_;
}

void PrePaidServer::setSecurityGroups(const std::vector<PrePaidServerSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool PrePaidServer::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void PrePaidServer::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string PrePaidServer::getAvailabilityZone() const
{
    return availabilityZone_;
}

void PrePaidServer::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool PrePaidServer::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void PrePaidServer::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

PrePaidServerExtendParam PrePaidServer::getExtendparam() const
{
    return extendparam_;
}

void PrePaidServer::setExtendparam(const PrePaidServerExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PrePaidServer::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PrePaidServer::unsetextendparam()
{
    extendparamIsSet_ = false;
}

std::map<std::string, std::string>& PrePaidServer::getMetadata()
{
    return metadata_;
}

void PrePaidServer::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PrePaidServer::metadataIsSet() const
{
    return metadataIsSet_;
}

void PrePaidServer::unsetmetadata()
{
    metadataIsSet_ = false;
}

PrePaidServerSchedulerHints PrePaidServer::getOsschedulerHints() const
{
    return osschedulerHints_;
}

void PrePaidServer::setOsschedulerHints(const PrePaidServerSchedulerHints& value)
{
    osschedulerHints_ = value;
    osschedulerHintsIsSet_ = true;
}

bool PrePaidServer::osschedulerHintsIsSet() const
{
    return osschedulerHintsIsSet_;
}

void PrePaidServer::unsetosschedulerHints()
{
    osschedulerHintsIsSet_ = false;
}

std::vector<std::string>& PrePaidServer::getTags()
{
    return tags_;
}

void PrePaidServer::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PrePaidServer::tagsIsSet() const
{
    return tagsIsSet_;
}

void PrePaidServer::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<PrePaidServerTag>& PrePaidServer::getServerTags()
{
    return serverTags_;
}

void PrePaidServer::setServerTags(const std::vector<PrePaidServerTag>& value)
{
    serverTags_ = value;
    serverTagsIsSet_ = true;
}

bool PrePaidServer::serverTagsIsSet() const
{
    return serverTagsIsSet_;
}

void PrePaidServer::unsetserverTags()
{
    serverTagsIsSet_ = false;
}

std::string PrePaidServer::getDescription() const
{
    return description_;
}

void PrePaidServer::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PrePaidServer::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PrePaidServer::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


