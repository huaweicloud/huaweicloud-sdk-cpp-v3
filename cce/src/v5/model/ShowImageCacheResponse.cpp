

#include "huaweicloud/cce/v5/model/ShowImageCacheResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ShowImageCacheResponse::ShowImageCacheResponse()
{
    imageCacheIsSet_ = false;
}

ShowImageCacheResponse::~ShowImageCacheResponse() = default;

void ShowImageCacheResponse::validate()
{
}

web::json::value ShowImageCacheResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageCacheIsSet_) {
        val[utility::conversions::to_string_t("image_cache")] = ModelBase::toJson(imageCache_);
    }

    return val;
}
bool ShowImageCacheResponse::fromJson(const web::json::value& val)
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


ImageCacheDetail ShowImageCacheResponse::getImageCache() const
{
    return imageCache_;
}

void ShowImageCacheResponse::setImageCache(const ImageCacheDetail& value)
{
    imageCache_ = value;
    imageCacheIsSet_ = true;
}

bool ShowImageCacheResponse::imageCacheIsSet() const
{
    return imageCacheIsSet_;
}

void ShowImageCacheResponse::unsetimageCache()
{
    imageCacheIsSet_ = false;
}

}
}
}
}
}


