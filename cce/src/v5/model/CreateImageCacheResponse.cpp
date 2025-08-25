

#include "huaweicloud/cce/v5/model/CreateImageCacheResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




CreateImageCacheResponse::CreateImageCacheResponse()
{
    imageCacheIsSet_ = false;
}

CreateImageCacheResponse::~CreateImageCacheResponse() = default;

void CreateImageCacheResponse::validate()
{
}

web::json::value CreateImageCacheResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageCacheIsSet_) {
        val[utility::conversions::to_string_t("image_cache")] = ModelBase::toJson(imageCache_);
    }

    return val;
}
bool CreateImageCacheResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_cache"));
        if(!fieldValue.is_null())
        {
            ImageCacheDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageCache(refVal);
        }
    }
    return ok;
}


ImageCacheDetail CreateImageCacheResponse::getImageCache() const
{
    return imageCache_;
}

void CreateImageCacheResponse::setImageCache(const ImageCacheDetail& value)
{
    imageCache_ = value;
    imageCacheIsSet_ = true;
}

bool CreateImageCacheResponse::imageCacheIsSet() const
{
    return imageCacheIsSet_;
}

void CreateImageCacheResponse::unsetimageCache()
{
    imageCacheIsSet_ = false;
}

}
}
}
}
}


