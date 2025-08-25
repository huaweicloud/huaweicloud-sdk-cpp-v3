

#include "huaweicloud/cce/v5/model/ImageCacheDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ImageCacheDetail::ImageCacheDetail()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    imagesIsSet_ = false;
    imageCacheSize_ = 0;
    imageCacheSizeIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    buildingConfigIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ImageCacheDetail::~ImageCacheDetail() = default;

void ImageCacheDetail::validate()
{
}

web::json::value ImageCacheDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(imagesIsSet_) {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(images_);
    }
    if(imageCacheSizeIsSet_) {
        val[utility::conversions::to_string_t("image_cache_size")] = ModelBase::toJson(imageCacheSize_);
    }
    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }
    if(buildingConfigIsSet_) {
        val[utility::conversions::to_string_t("building_config")] = ModelBase::toJson(buildingConfig_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ImageCacheDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_cache_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_cache_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageCacheSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("building_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("building_config"));
        if(!fieldValue.is_null())
        {
            ImageCacheBuildingConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildingConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ImageCacheDetail::getName() const
{
    return name_;
}

void ImageCacheDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImageCacheDetail::nameIsSet() const
{
    return nameIsSet_;
}

void ImageCacheDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string ImageCacheDetail::getId() const
{
    return id_;
}

void ImageCacheDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImageCacheDetail::idIsSet() const
{
    return idIsSet_;
}

void ImageCacheDetail::unsetid()
{
    idIsSet_ = false;
}

std::string ImageCacheDetail::getCreatedAt() const
{
    return createdAt_;
}

void ImageCacheDetail::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ImageCacheDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ImageCacheDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::vector<std::string>& ImageCacheDetail::getImages()
{
    return images_;
}

void ImageCacheDetail::setImages(const std::vector<std::string>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool ImageCacheDetail::imagesIsSet() const
{
    return imagesIsSet_;
}

void ImageCacheDetail::unsetimages()
{
    imagesIsSet_ = false;
}

int32_t ImageCacheDetail::getImageCacheSize() const
{
    return imageCacheSize_;
}

void ImageCacheDetail::setImageCacheSize(int32_t value)
{
    imageCacheSize_ = value;
    imageCacheSizeIsSet_ = true;
}

bool ImageCacheDetail::imageCacheSizeIsSet() const
{
    return imageCacheSizeIsSet_;
}

void ImageCacheDetail::unsetimageCacheSize()
{
    imageCacheSizeIsSet_ = false;
}

int32_t ImageCacheDetail::getRetentionDays() const
{
    return retentionDays_;
}

void ImageCacheDetail::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool ImageCacheDetail::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void ImageCacheDetail::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

ImageCacheBuildingConfig ImageCacheDetail::getBuildingConfig() const
{
    return buildingConfig_;
}

void ImageCacheDetail::setBuildingConfig(const ImageCacheBuildingConfig& value)
{
    buildingConfig_ = value;
    buildingConfigIsSet_ = true;
}

bool ImageCacheDetail::buildingConfigIsSet() const
{
    return buildingConfigIsSet_;
}

void ImageCacheDetail::unsetbuildingConfig()
{
    buildingConfigIsSet_ = false;
}

std::string ImageCacheDetail::getStatus() const
{
    return status_;
}

void ImageCacheDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ImageCacheDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ImageCacheDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ImageCacheDetail::getMessage() const
{
    return message_;
}

void ImageCacheDetail::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ImageCacheDetail::messageIsSet() const
{
    return messageIsSet_;
}

void ImageCacheDetail::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


