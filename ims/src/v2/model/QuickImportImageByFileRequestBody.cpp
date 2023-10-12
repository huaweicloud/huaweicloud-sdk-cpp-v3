

#include "huaweicloud/ims/v2/model/QuickImportImageByFileRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




QuickImportImageByFileRequestBody::QuickImportImageByFileRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    tagsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
    imageTagsIsSet_ = false;
}

QuickImportImageByFileRequestBody::~QuickImportImageByFileRequestBody() = default;

void QuickImportImageByFileRequestBody::validate()
{
}

web::json::value QuickImportImageByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("os_type")] = ModelBase::toJson(osType_);
    }
    if(imageTagsIsSet_) {
        val[utility::conversions::to_string_t("image_tags")] = ModelBase::toJson(imageTags_);
    }

    return val;
}
bool QuickImportImageByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTags(refVal);
        }
    }
    return ok;
}


std::string QuickImportImageByFileRequestBody::getName() const
{
    return name_;
}

void QuickImportImageByFileRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void QuickImportImageByFileRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getDescription() const
{
    return description_;
}

void QuickImportImageByFileRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QuickImportImageByFileRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getOsVersion() const
{
    return osVersion_;
}

void QuickImportImageByFileRequestBody::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void QuickImportImageByFileRequestBody::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getImageUrl() const
{
    return imageUrl_;
}

void QuickImportImageByFileRequestBody::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void QuickImportImageByFileRequestBody::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

int32_t QuickImportImageByFileRequestBody::getMinDisk() const
{
    return minDisk_;
}

void QuickImportImageByFileRequestBody::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void QuickImportImageByFileRequestBody::unsetminDisk()
{
    minDiskIsSet_ = false;
}

std::vector<std::string>& QuickImportImageByFileRequestBody::getTags()
{
    return tags_;
}

void QuickImportImageByFileRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void QuickImportImageByFileRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getType() const
{
    return type_;
}

void QuickImportImageByFileRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void QuickImportImageByFileRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void QuickImportImageByFileRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void QuickImportImageByFileRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getArchitecture() const
{
    return architecture_;
}

void QuickImportImageByFileRequestBody::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::architectureIsSet() const
{
    return architectureIsSet_;
}

void QuickImportImageByFileRequestBody::unsetarchitecture()
{
    architectureIsSet_ = false;
}

std::string QuickImportImageByFileRequestBody::getOsType() const
{
    return osType_;
}

void QuickImportImageByFileRequestBody::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void QuickImportImageByFileRequestBody::unsetosType()
{
    osTypeIsSet_ = false;
}

std::vector<ResourceTag>& QuickImportImageByFileRequestBody::getImageTags()
{
    return imageTags_;
}

void QuickImportImageByFileRequestBody::setImageTags(const std::vector<ResourceTag>& value)
{
    imageTags_ = value;
    imageTagsIsSet_ = true;
}

bool QuickImportImageByFileRequestBody::imageTagsIsSet() const
{
    return imageTagsIsSet_;
}

void QuickImportImageByFileRequestBody::unsetimageTags()
{
    imageTagsIsSet_ = false;
}

}
}
}
}
}


