

#include "huaweicloud/cce/v5/model/DeleteImageCacheRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




DeleteImageCacheRequest::DeleteImageCacheRequest()
{
    imageCacheId_ = "";
    imageCacheIdIsSet_ = false;
}

DeleteImageCacheRequest::~DeleteImageCacheRequest() = default;

void DeleteImageCacheRequest::validate()
{
}

web::json::value DeleteImageCacheRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageCacheIdIsSet_) {
        val[utility::conversions::to_string_t("image_cache_id")] = ModelBase::toJson(imageCacheId_);
    }

    return val;
}
bool DeleteImageCacheRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_cache_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_cache_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageCacheId(refVal);
        }
    }
    return ok;
}


std::string DeleteImageCacheRequest::getImageCacheId() const
{
    return imageCacheId_;
}

void DeleteImageCacheRequest::setImageCacheId(const std::string& value)
{
    imageCacheId_ = value;
    imageCacheIdIsSet_ = true;
}

bool DeleteImageCacheRequest::imageCacheIdIsSet() const
{
    return imageCacheIdIsSet_;
}

void DeleteImageCacheRequest::unsetimageCacheId()
{
    imageCacheIdIsSet_ = false;
}

}
}
}
}
}


