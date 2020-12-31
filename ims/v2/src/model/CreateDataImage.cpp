

#include "huaweicloud/ims/model/CreateDataImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateDataImage::CreateDataImage()
{
    name_ = "";
    nameIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
}

CreateDataImage::~CreateDataImage() = default;

void CreateDataImage::validate()
{
}

web::json::value CreateDataImage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool CreateDataImage::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
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
    return ok;
}


std::string CreateDataImage::getName() const
{
    return name_;
}

void CreateDataImage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDataImage::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDataImage::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDataImage::getVolumeId() const
{
    return volumeId_;
}

void CreateDataImage::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateDataImage::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateDataImage::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string CreateDataImage::getDescription() const
{
    return description_;
}

void CreateDataImage::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDataImage::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDataImage::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& CreateDataImage::getTags()
{
    return tags_;
}

void CreateDataImage::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateDataImage::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateDataImage::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


