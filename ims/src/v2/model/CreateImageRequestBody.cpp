

#include "huaweicloud/ims/v2/model/CreateImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateImageRequestBody::CreateImageRequestBody()
{
    dataImagesIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    imageTagsIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tagsIsSet_ = false;
    maxRam_ = 0;
    maxRamIsSet_ = false;
    minRam_ = 0;
    minRamIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    isConfig_ = false;
    isConfigIsSet_ = false;
    cmkId_ = "";
    cmkIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    isQuickImport_ = false;
    isQuickImportIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

CreateImageRequestBody::~CreateImageRequestBody() = default;

void CreateImageRequestBody::validate()
{
}

web::json::value CreateImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataImagesIsSet_) {
        val[utility::conversions::to_string_t("data_images")] = ModelBase::toJson(dataImages_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(imageTagsIsSet_) {
        val[utility::conversions::to_string_t("image_tags")] = ModelBase::toJson(imageTags_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(maxRamIsSet_) {
        val[utility::conversions::to_string_t("max_ram")] = ModelBase::toJson(maxRam_);
    }
    if(minRamIsSet_) {
        val[utility::conversions::to_string_t("min_ram")] = ModelBase::toJson(minRam_);
    }
    if(osVersionIsSet_) {
        val[utility::conversions::to_string_t("os_version")] = ModelBase::toJson(osVersion_);
    }
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(minDiskIsSet_) {
        val[utility::conversions::to_string_t("min_disk")] = ModelBase::toJson(minDisk_);
    }
    if(isConfigIsSet_) {
        val[utility::conversions::to_string_t("is_config")] = ModelBase::toJson(isConfig_);
    }
    if(cmkIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_id")] = ModelBase::toJson(cmkId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isQuickImportIsSet_) {
        val[utility::conversions::to_string_t("is_quick_import")] = ModelBase::toJson(isQuickImport_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}

bool CreateImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_images"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateDataImage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataImages(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_config"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_quick_import"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_quick_import"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQuickImport(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchitecture(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}

std::vector<CreateDataImage>& CreateImageRequestBody::getDataImages()
{
    return dataImages_;
}

void CreateImageRequestBody::setDataImages(const std::vector<CreateDataImage>& value)
{
    dataImages_ = value;
    dataImagesIsSet_ = true;
}

bool CreateImageRequestBody::dataImagesIsSet() const
{
    return dataImagesIsSet_;
}

void CreateImageRequestBody::unsetdataImages()
{
    dataImagesIsSet_ = false;
}

std::string CreateImageRequestBody::getDescription() const
{
    return description_;
}

void CreateImageRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateImageRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateImageRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateImageRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateImageRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateImageRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateImageRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<TagKeyValue>& CreateImageRequestBody::getImageTags()
{
    return imageTags_;
}

void CreateImageRequestBody::setImageTags(const std::vector<TagKeyValue>& value)
{
    imageTags_ = value;
    imageTagsIsSet_ = true;
}

bool CreateImageRequestBody::imageTagsIsSet() const
{
    return imageTagsIsSet_;
}

void CreateImageRequestBody::unsetimageTags()
{
    imageTagsIsSet_ = false;
}

std::string CreateImageRequestBody::getInstanceId() const
{
    return instanceId_;
}

void CreateImageRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateImageRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateImageRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateImageRequestBody::getName() const
{
    return name_;
}

void CreateImageRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateImageRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateImageRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateImageRequestBody::getTags()
{
    return tags_;
}

void CreateImageRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateImageRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateImageRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

int32_t CreateImageRequestBody::getMaxRam() const
{
    return maxRam_;
}

void CreateImageRequestBody::setMaxRam(int32_t value)
{
    maxRam_ = value;
    maxRamIsSet_ = true;
}

bool CreateImageRequestBody::maxRamIsSet() const
{
    return maxRamIsSet_;
}

void CreateImageRequestBody::unsetmaxRam()
{
    maxRamIsSet_ = false;
}

int32_t CreateImageRequestBody::getMinRam() const
{
    return minRam_;
}

void CreateImageRequestBody::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool CreateImageRequestBody::minRamIsSet() const
{
    return minRamIsSet_;
}

void CreateImageRequestBody::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string CreateImageRequestBody::getOsVersion() const
{
    return osVersion_;
}

void CreateImageRequestBody::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool CreateImageRequestBody::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void CreateImageRequestBody::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string CreateImageRequestBody::getImageUrl() const
{
    return imageUrl_;
}

void CreateImageRequestBody::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool CreateImageRequestBody::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void CreateImageRequestBody::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

int32_t CreateImageRequestBody::getMinDisk() const
{
    return minDisk_;
}

void CreateImageRequestBody::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool CreateImageRequestBody::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void CreateImageRequestBody::unsetminDisk()
{
    minDiskIsSet_ = false;
}

bool CreateImageRequestBody::isIsConfig() const
{
    return isConfig_;
}

void CreateImageRequestBody::setIsConfig(bool value)
{
    isConfig_ = value;
    isConfigIsSet_ = true;
}

bool CreateImageRequestBody::isConfigIsSet() const
{
    return isConfigIsSet_;
}

void CreateImageRequestBody::unsetisConfig()
{
    isConfigIsSet_ = false;
}

std::string CreateImageRequestBody::getCmkId() const
{
    return cmkId_;
}

void CreateImageRequestBody::setCmkId(const std::string& value)
{
    cmkId_ = value;
    cmkIdIsSet_ = true;
}

bool CreateImageRequestBody::cmkIdIsSet() const
{
    return cmkIdIsSet_;
}

void CreateImageRequestBody::unsetcmkId()
{
    cmkIdIsSet_ = false;
}

std::string CreateImageRequestBody::getType() const
{
    return type_;
}

void CreateImageRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateImageRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateImageRequestBody::unsettype()
{
    typeIsSet_ = false;
}

bool CreateImageRequestBody::isIsQuickImport() const
{
    return isQuickImport_;
}

void CreateImageRequestBody::setIsQuickImport(bool value)
{
    isQuickImport_ = value;
    isQuickImportIsSet_ = true;
}

bool CreateImageRequestBody::isQuickImportIsSet() const
{
    return isQuickImportIsSet_;
}

void CreateImageRequestBody::unsetisQuickImport()
{
    isQuickImportIsSet_ = false;
}

std::string CreateImageRequestBody::getArchitecture() const
{
    return architecture_;
}

void CreateImageRequestBody::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool CreateImageRequestBody::architectureIsSet() const
{
    return architectureIsSet_;
}

void CreateImageRequestBody::unsetarchitecture()
{
    architectureIsSet_ = false;
}

std::string CreateImageRequestBody::getVolumeId() const
{
    return volumeId_;
}

void CreateImageRequestBody::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateImageRequestBody::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateImageRequestBody::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


