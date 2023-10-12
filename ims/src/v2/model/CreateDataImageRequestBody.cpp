

#include "huaweicloud/ims/v2/model/CreateDataImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateDataImageRequestBody::CreateDataImageRequestBody()
{
    cmkId_ = "";
    cmkIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    imageTagsIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
    tagsIsSet_ = false;
}

CreateDataImageRequestBody::~CreateDataImageRequestBody() = default;

void CreateDataImageRequestBody::validate()
{
}

web::json::value CreateDataImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cmkIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_id")] = ModelBase::toJson(cmkId_);
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
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(minDiskIsSet_) {
        val[utility::conversions::to_string_t("min_disk")] = ModelBase::toJson(minDisk_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("os_type")] = ModelBase::toJson(osType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateDataImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cmk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkId(refVal);
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
            std::vector<ImageTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateDataImageRequestBody::getCmkId() const
{
    return cmkId_;
}

void CreateDataImageRequestBody::setCmkId(const std::string& value)
{
    cmkId_ = value;
    cmkIdIsSet_ = true;
}

bool CreateDataImageRequestBody::cmkIdIsSet() const
{
    return cmkIdIsSet_;
}

void CreateDataImageRequestBody::unsetcmkId()
{
    cmkIdIsSet_ = false;
}

std::string CreateDataImageRequestBody::getDescription() const
{
    return description_;
}

void CreateDataImageRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDataImageRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDataImageRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateDataImageRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateDataImageRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateDataImageRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateDataImageRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<ImageTag>& CreateDataImageRequestBody::getImageTags()
{
    return imageTags_;
}

void CreateDataImageRequestBody::setImageTags(const std::vector<ImageTag>& value)
{
    imageTags_ = value;
    imageTagsIsSet_ = true;
}

bool CreateDataImageRequestBody::imageTagsIsSet() const
{
    return imageTagsIsSet_;
}

void CreateDataImageRequestBody::unsetimageTags()
{
    imageTagsIsSet_ = false;
}

std::string CreateDataImageRequestBody::getImageUrl() const
{
    return imageUrl_;
}

void CreateDataImageRequestBody::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool CreateDataImageRequestBody::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void CreateDataImageRequestBody::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

int32_t CreateDataImageRequestBody::getMinDisk() const
{
    return minDisk_;
}

void CreateDataImageRequestBody::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool CreateDataImageRequestBody::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void CreateDataImageRequestBody::unsetminDisk()
{
    minDiskIsSet_ = false;
}

std::string CreateDataImageRequestBody::getName() const
{
    return name_;
}

void CreateDataImageRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDataImageRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDataImageRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDataImageRequestBody::getOsType() const
{
    return osType_;
}

void CreateDataImageRequestBody::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool CreateDataImageRequestBody::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void CreateDataImageRequestBody::unsetosType()
{
    osTypeIsSet_ = false;
}

std::vector<std::string>& CreateDataImageRequestBody::getTags()
{
    return tags_;
}

void CreateDataImageRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateDataImageRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateDataImageRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


