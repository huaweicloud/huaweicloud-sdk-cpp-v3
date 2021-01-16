

#include "huaweicloud/ecs/v2/model/PostPaidServer.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServer::PostPaidServer()
{
    adminPass_ = "";
    adminPassIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    dataVolumesIsSet_ = false;
    extendparamIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    imageRef_ = "";
    imageRefIsSet_ = false;
    isAutoRename_ = false;
    isAutoRenameIsSet_ = false;
    keyName_ = "";
    keyNameIsSet_ = false;
    metadataIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nicsIsSet_ = false;
    osschedulerHintsIsSet_ = false;
    publicipIsSet_ = false;
    rootVolumeIsSet_ = false;
    securityGroupsIsSet_ = false;
    serverTagsIsSet_ = false;
    tagsIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    vpcid_ = "";
    vpcidIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

PostPaidServer::~PostPaidServer() = default;

void PostPaidServer::validate()
{
}

web::json::value PostPaidServer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(adminPassIsSet_) {
        val[utility::conversions::to_string_t("adminPass")] = ModelBase::toJson(adminPass_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("data_volumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(imageRefIsSet_) {
        val[utility::conversions::to_string_t("imageRef")] = ModelBase::toJson(imageRef_);
    }
    if(isAutoRenameIsSet_) {
        val[utility::conversions::to_string_t("isAutoRename")] = ModelBase::toJson(isAutoRename_);
    }
    if(keyNameIsSet_) {
        val[utility::conversions::to_string_t("key_name")] = ModelBase::toJson(keyName_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }
    if(osschedulerHintsIsSet_) {
        val[utility::conversions::to_string_t("os:scheduler_hints")] = ModelBase::toJson(osschedulerHints_);
    }
    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("root_volume")] = ModelBase::toJson(rootVolume_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(serverTagsIsSet_) {
        val[utility::conversions::to_string_t("server_tags")] = ModelBase::toJson(serverTags_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(vpcidIsSet_) {
        val[utility::conversions::to_string_t("vpcid")] = ModelBase::toJson(vpcid_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool PostPaidServer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("adminPass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminPass"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminPass(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<PostPaidServerDataVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PostPaidServerExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("imageRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<PostPaidServerNic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os:scheduler_hints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os:scheduler_hints"));
        if(!fieldValue.is_null())
        {
            PostPaidServerSchedulerHints refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsschedulerHints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PostPaidServerPublicip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_volume"));
        if(!fieldValue.is_null())
        {
            PostPaidServerRootVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<PostPaidServerSecurityGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<PostPaidServerTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
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


std::string PostPaidServer::getAdminPass() const
{
    return adminPass_;
}

void PostPaidServer::setAdminPass(const std::string& value)
{
    adminPass_ = value;
    adminPassIsSet_ = true;
}

bool PostPaidServer::adminPassIsSet() const
{
    return adminPassIsSet_;
}

void PostPaidServer::unsetadminPass()
{
    adminPassIsSet_ = false;
}

std::string PostPaidServer::getAvailabilityZone() const
{
    return availabilityZone_;
}

void PostPaidServer::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool PostPaidServer::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void PostPaidServer::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

int32_t PostPaidServer::getCount() const
{
    return count_;
}

void PostPaidServer::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PostPaidServer::countIsSet() const
{
    return countIsSet_;
}

void PostPaidServer::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PostPaidServerDataVolume>& PostPaidServer::getDataVolumes()
{
    return dataVolumes_;
}

void PostPaidServer::setDataVolumes(const std::vector<PostPaidServerDataVolume>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool PostPaidServer::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void PostPaidServer::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

PostPaidServerExtendParam PostPaidServer::getExtendparam() const
{
    return extendparam_;
}

void PostPaidServer::setExtendparam(const PostPaidServerExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PostPaidServer::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PostPaidServer::unsetextendparam()
{
    extendparamIsSet_ = false;
}

std::string PostPaidServer::getFlavorRef() const
{
    return flavorRef_;
}

void PostPaidServer::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool PostPaidServer::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void PostPaidServer::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string PostPaidServer::getImageRef() const
{
    return imageRef_;
}

void PostPaidServer::setImageRef(const std::string& value)
{
    imageRef_ = value;
    imageRefIsSet_ = true;
}

bool PostPaidServer::imageRefIsSet() const
{
    return imageRefIsSet_;
}

void PostPaidServer::unsetimageRef()
{
    imageRefIsSet_ = false;
}

bool PostPaidServer::isIsAutoRename() const
{
    return isAutoRename_;
}

void PostPaidServer::setIsAutoRename(bool value)
{
    isAutoRename_ = value;
    isAutoRenameIsSet_ = true;
}

bool PostPaidServer::isAutoRenameIsSet() const
{
    return isAutoRenameIsSet_;
}

void PostPaidServer::unsetisAutoRename()
{
    isAutoRenameIsSet_ = false;
}

std::string PostPaidServer::getKeyName() const
{
    return keyName_;
}

void PostPaidServer::setKeyName(const std::string& value)
{
    keyName_ = value;
    keyNameIsSet_ = true;
}

bool PostPaidServer::keyNameIsSet() const
{
    return keyNameIsSet_;
}

void PostPaidServer::unsetkeyName()
{
    keyNameIsSet_ = false;
}

std::map<std::string, std::string>& PostPaidServer::getMetadata()
{
    return metadata_;
}

void PostPaidServer::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PostPaidServer::metadataIsSet() const
{
    return metadataIsSet_;
}

void PostPaidServer::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string PostPaidServer::getName() const
{
    return name_;
}

void PostPaidServer::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostPaidServer::nameIsSet() const
{
    return nameIsSet_;
}

void PostPaidServer::unsetname()
{
    nameIsSet_ = false;
}

std::vector<PostPaidServerNic>& PostPaidServer::getNics()
{
    return nics_;
}

void PostPaidServer::setNics(const std::vector<PostPaidServerNic>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool PostPaidServer::nicsIsSet() const
{
    return nicsIsSet_;
}

void PostPaidServer::unsetnics()
{
    nicsIsSet_ = false;
}

PostPaidServerSchedulerHints PostPaidServer::getOsschedulerHints() const
{
    return osschedulerHints_;
}

void PostPaidServer::setOsschedulerHints(const PostPaidServerSchedulerHints& value)
{
    osschedulerHints_ = value;
    osschedulerHintsIsSet_ = true;
}

bool PostPaidServer::osschedulerHintsIsSet() const
{
    return osschedulerHintsIsSet_;
}

void PostPaidServer::unsetosschedulerHints()
{
    osschedulerHintsIsSet_ = false;
}

PostPaidServerPublicip PostPaidServer::getPublicip() const
{
    return publicip_;
}

void PostPaidServer::setPublicip(const PostPaidServerPublicip& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool PostPaidServer::publicipIsSet() const
{
    return publicipIsSet_;
}

void PostPaidServer::unsetpublicip()
{
    publicipIsSet_ = false;
}

PostPaidServerRootVolume PostPaidServer::getRootVolume() const
{
    return rootVolume_;
}

void PostPaidServer::setRootVolume(const PostPaidServerRootVolume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool PostPaidServer::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void PostPaidServer::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<PostPaidServerSecurityGroup>& PostPaidServer::getSecurityGroups()
{
    return securityGroups_;
}

void PostPaidServer::setSecurityGroups(const std::vector<PostPaidServerSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool PostPaidServer::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void PostPaidServer::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::vector<PostPaidServerTag>& PostPaidServer::getServerTags()
{
    return serverTags_;
}

void PostPaidServer::setServerTags(const std::vector<PostPaidServerTag>& value)
{
    serverTags_ = value;
    serverTagsIsSet_ = true;
}

bool PostPaidServer::serverTagsIsSet() const
{
    return serverTagsIsSet_;
}

void PostPaidServer::unsetserverTags()
{
    serverTagsIsSet_ = false;
}

std::vector<std::string>& PostPaidServer::getTags()
{
    return tags_;
}

void PostPaidServer::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PostPaidServer::tagsIsSet() const
{
    return tagsIsSet_;
}

void PostPaidServer::unsettags()
{
    tagsIsSet_ = false;
}

std::string PostPaidServer::getUserData() const
{
    return userData_;
}

void PostPaidServer::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool PostPaidServer::userDataIsSet() const
{
    return userDataIsSet_;
}

void PostPaidServer::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string PostPaidServer::getVpcid() const
{
    return vpcid_;
}

void PostPaidServer::setVpcid(const std::string& value)
{
    vpcid_ = value;
    vpcidIsSet_ = true;
}

bool PostPaidServer::vpcidIsSet() const
{
    return vpcidIsSet_;
}

void PostPaidServer::unsetvpcid()
{
    vpcidIsSet_ = false;
}

std::string PostPaidServer::getDescription() const
{
    return description_;
}

void PostPaidServer::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PostPaidServer::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PostPaidServer::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


