

#include "huaweicloud/cce/v5/model/CreateImageCacheRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




CreateImageCacheRequestBody::CreateImageCacheRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    imagesIsSet_ = false;
    imageCacheSize_ = 0;
    imageCacheSizeIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    buildingConfigIsSet_ = false;
}

CreateImageCacheRequestBody::~CreateImageCacheRequestBody() = default;

void CreateImageCacheRequestBody::validate()
{
}

web::json::value CreateImageCacheRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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

    return val;
}
bool CreateImageCacheRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateImageCacheRequestBody::getName() const
{
    return name_;
}

void CreateImageCacheRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateImageCacheRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateImageCacheRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateImageCacheRequestBody::getImages()
{
    return images_;
}

void CreateImageCacheRequestBody::setImages(const std::vector<std::string>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool CreateImageCacheRequestBody::imagesIsSet() const
{
    return imagesIsSet_;
}

void CreateImageCacheRequestBody::unsetimages()
{
    imagesIsSet_ = false;
}

int32_t CreateImageCacheRequestBody::getImageCacheSize() const
{
    return imageCacheSize_;
}

void CreateImageCacheRequestBody::setImageCacheSize(int32_t value)
{
    imageCacheSize_ = value;
    imageCacheSizeIsSet_ = true;
}

bool CreateImageCacheRequestBody::imageCacheSizeIsSet() const
{
    return imageCacheSizeIsSet_;
}

void CreateImageCacheRequestBody::unsetimageCacheSize()
{
    imageCacheSizeIsSet_ = false;
}

int32_t CreateImageCacheRequestBody::getRetentionDays() const
{
    return retentionDays_;
}

void CreateImageCacheRequestBody::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool CreateImageCacheRequestBody::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void CreateImageCacheRequestBody::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

ImageCacheBuildingConfig CreateImageCacheRequestBody::getBuildingConfig() const
{
    return buildingConfig_;
}

void CreateImageCacheRequestBody::setBuildingConfig(const ImageCacheBuildingConfig& value)
{
    buildingConfig_ = value;
    buildingConfigIsSet_ = true;
}

bool CreateImageCacheRequestBody::buildingConfigIsSet() const
{
    return buildingConfigIsSet_;
}

void CreateImageCacheRequestBody::unsetbuildingConfig()
{
    buildingConfigIsSet_ = false;
}

}
}
}
}
}


