

#include "huaweicloud/ecs/v2/model/UpdateServerResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerResult::UpdateServerResult()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    image_ = "";
    imageIsSet_ = false;
    accessIPv4_ = "";
    accessIPv4IsSet_ = false;
    accessIPv6_ = "";
    accessIPv6IsSet_ = false;
    metadataIsSet_ = false;
    addressesIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    hostId_ = "";
    hostIdIsSet_ = false;
    flavorIsSet_ = false;
    oSDCFDiskConfig_ = "";
    oSDCFDiskConfigIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    linksIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    locked_ = false;
    lockedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    oSEXTSRVATTRUserData_ = "";
    oSEXTSRVATTRUserDataIsSet_ = false;
    oSEXTSRVATTRHostname_ = "";
    oSEXTSRVATTRHostnameIsSet_ = false;
}

UpdateServerResult::~UpdateServerResult() = default;

void UpdateServerResult::validate()
{
}

web::json::value UpdateServerResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(accessIPv4IsSet_) {
        val[utility::conversions::to_string_t("accessIPv4")] = ModelBase::toJson(accessIPv4_);
    }
    if(accessIPv6IsSet_) {
        val[utility::conversions::to_string_t("accessIPv6")] = ModelBase::toJson(accessIPv6_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("hostId")] = ModelBase::toJson(hostId_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(oSDCFDiskConfigIsSet_) {
        val[utility::conversions::to_string_t("OS-DCF:diskConfig")] = ModelBase::toJson(oSDCFDiskConfig_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(oSEXTSRVATTRUserDataIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data")] = ModelBase::toJson(oSEXTSRVATTRUserData_);
    }
    if(oSEXTSRVATTRHostnameIsSet_) {
        val[utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname")] = ModelBase::toJson(oSEXTSRVATTRHostname_);
    }

    return val;
}
bool UpdateServerResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessIPv4"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessIPv4"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessIPv4(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessIPv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessIPv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessIPv6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<UpdateServerAddress>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hostId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            SimpleFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-DCF:diskConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-DCF:diskConfig"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSDCFDiskConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Link> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("OS-EXT-SRV-ATTR:hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOSEXTSRVATTRHostname(refVal);
        }
    }
    return ok;
}


std::string UpdateServerResult::getTenantId() const
{
    return tenantId_;
}

void UpdateServerResult::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool UpdateServerResult::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void UpdateServerResult::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string UpdateServerResult::getImage() const
{
    return image_;
}

void UpdateServerResult::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool UpdateServerResult::imageIsSet() const
{
    return imageIsSet_;
}

void UpdateServerResult::unsetimage()
{
    imageIsSet_ = false;
}

std::string UpdateServerResult::getAccessIPv4() const
{
    return accessIPv4_;
}

void UpdateServerResult::setAccessIPv4(const std::string& value)
{
    accessIPv4_ = value;
    accessIPv4IsSet_ = true;
}

bool UpdateServerResult::accessIPv4IsSet() const
{
    return accessIPv4IsSet_;
}

void UpdateServerResult::unsetaccessIPv4()
{
    accessIPv4IsSet_ = false;
}

std::string UpdateServerResult::getAccessIPv6() const
{
    return accessIPv6_;
}

void UpdateServerResult::setAccessIPv6(const std::string& value)
{
    accessIPv6_ = value;
    accessIPv6IsSet_ = true;
}

bool UpdateServerResult::accessIPv6IsSet() const
{
    return accessIPv6IsSet_;
}

void UpdateServerResult::unsetaccessIPv6()
{
    accessIPv6IsSet_ = false;
}

std::map<std::string, std::string>& UpdateServerResult::getMetadata()
{
    return metadata_;
}

void UpdateServerResult::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateServerResult::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateServerResult::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::map<std::string, std::vector<UpdateServerAddress>>& UpdateServerResult::getAddresses()
{
    return addresses_;
}

void UpdateServerResult::setAddresses(const std::map<std::string, std::vector<UpdateServerAddress>>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool UpdateServerResult::addressesIsSet() const
{
    return addressesIsSet_;
}

void UpdateServerResult::unsetaddresses()
{
    addressesIsSet_ = false;
}

std::string UpdateServerResult::getCreated() const
{
    return created_;
}

void UpdateServerResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool UpdateServerResult::createdIsSet() const
{
    return createdIsSet_;
}

void UpdateServerResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string UpdateServerResult::getHostId() const
{
    return hostId_;
}

void UpdateServerResult::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool UpdateServerResult::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void UpdateServerResult::unsethostId()
{
    hostIdIsSet_ = false;
}

SimpleFlavor UpdateServerResult::getFlavor() const
{
    return flavor_;
}

void UpdateServerResult::setFlavor(const SimpleFlavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool UpdateServerResult::flavorIsSet() const
{
    return flavorIsSet_;
}

void UpdateServerResult::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string UpdateServerResult::getOSDCFDiskConfig() const
{
    return oSDCFDiskConfig_;
}

void UpdateServerResult::setOSDCFDiskConfig(const std::string& value)
{
    oSDCFDiskConfig_ = value;
    oSDCFDiskConfigIsSet_ = true;
}

bool UpdateServerResult::oSDCFDiskConfigIsSet() const
{
    return oSDCFDiskConfigIsSet_;
}

void UpdateServerResult::unsetoSDCFDiskConfig()
{
    oSDCFDiskConfigIsSet_ = false;
}

std::string UpdateServerResult::getUserId() const
{
    return userId_;
}

void UpdateServerResult::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateServerResult::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateServerResult::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UpdateServerResult::getName() const
{
    return name_;
}

void UpdateServerResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateServerResult::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateServerResult::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateServerResult::getProgress() const
{
    return progress_;
}

void UpdateServerResult::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool UpdateServerResult::progressIsSet() const
{
    return progressIsSet_;
}

void UpdateServerResult::unsetprogress()
{
    progressIsSet_ = false;
}

std::vector<Link>& UpdateServerResult::getLinks()
{
    return links_;
}

void UpdateServerResult::setLinks(const std::vector<Link>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool UpdateServerResult::linksIsSet() const
{
    return linksIsSet_;
}

void UpdateServerResult::unsetlinks()
{
    linksIsSet_ = false;
}

std::string UpdateServerResult::getId() const
{
    return id_;
}

void UpdateServerResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateServerResult::idIsSet() const
{
    return idIsSet_;
}

void UpdateServerResult::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateServerResult::getUpdated() const
{
    return updated_;
}

void UpdateServerResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool UpdateServerResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void UpdateServerResult::unsetupdated()
{
    updatedIsSet_ = false;
}

bool UpdateServerResult::isLocked() const
{
    return locked_;
}

void UpdateServerResult::setLocked(bool value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool UpdateServerResult::lockedIsSet() const
{
    return lockedIsSet_;
}

void UpdateServerResult::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string UpdateServerResult::getDescription() const
{
    return description_;
}

void UpdateServerResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateServerResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateServerResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& UpdateServerResult::getTags()
{
    return tags_;
}

void UpdateServerResult::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateServerResult::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateServerResult::unsettags()
{
    tagsIsSet_ = false;
}

std::string UpdateServerResult::getStatus() const
{
    return status_;
}

void UpdateServerResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateServerResult::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateServerResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateServerResult::getOSEXTSRVATTRUserData() const
{
    return oSEXTSRVATTRUserData_;
}

void UpdateServerResult::setOSEXTSRVATTRUserData(const std::string& value)
{
    oSEXTSRVATTRUserData_ = value;
    oSEXTSRVATTRUserDataIsSet_ = true;
}

bool UpdateServerResult::oSEXTSRVATTRUserDataIsSet() const
{
    return oSEXTSRVATTRUserDataIsSet_;
}

void UpdateServerResult::unsetoSEXTSRVATTRUserData()
{
    oSEXTSRVATTRUserDataIsSet_ = false;
}

std::string UpdateServerResult::getOSEXTSRVATTRHostname() const
{
    return oSEXTSRVATTRHostname_;
}

void UpdateServerResult::setOSEXTSRVATTRHostname(const std::string& value)
{
    oSEXTSRVATTRHostname_ = value;
    oSEXTSRVATTRHostnameIsSet_ = true;
}

bool UpdateServerResult::oSEXTSRVATTRHostnameIsSet() const
{
    return oSEXTSRVATTRHostnameIsSet_;
}

void UpdateServerResult::unsetoSEXTSRVATTRHostname()
{
    oSEXTSRVATTRHostnameIsSet_ = false;
}

}
}
}
}
}


