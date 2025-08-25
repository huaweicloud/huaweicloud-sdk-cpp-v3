

#include "huaweicloud/cce/v5/model/ListImageCachesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ListImageCachesResponse::ListImageCachesResponse()
{
    imageCachesIsSet_ = false;
}

ListImageCachesResponse::~ListImageCachesResponse() = default;

void ListImageCachesResponse::validate()
{
}

web::json::value ListImageCachesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageCachesIsSet_) {
        val[utility::conversions::to_string_t("image_caches")] = ModelBase::toJson(imageCaches_);
    }

    return val;
}
bool ListImageCachesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_caches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_caches"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageCacheDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageCaches(refVal);
        }
    }
    return ok;
}


std::vector<ImageCacheDetail>& ListImageCachesResponse::getImageCaches()
{
    return imageCaches_;
}

void ListImageCachesResponse::setImageCaches(const std::vector<ImageCacheDetail>& value)
{
    imageCaches_ = value;
    imageCachesIsSet_ = true;
}

bool ListImageCachesResponse::imageCachesIsSet() const
{
    return imageCachesIsSet_;
}

void ListImageCachesResponse::unsetimageCaches()
{
    imageCachesIsSet_ = false;
}

}
}
}
}
}


