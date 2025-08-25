

#include "huaweicloud/cce/v5/model/ShowImageCacheRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ShowImageCacheRequest::ShowImageCacheRequest()
{
    imageCacheId_ = "";
    imageCacheIdIsSet_ = false;
}

ShowImageCacheRequest::~ShowImageCacheRequest() = default;

void ShowImageCacheRequest::validate()
{
}

web::json::value ShowImageCacheRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageCacheIdIsSet_) {
        val[utility::conversions::to_string_t("image_cache_id")] = ModelBase::toJson(imageCacheId_);
    }

    return val;
}
bool ShowImageCacheRequest::fromJson(const web::json::value& val)
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


std::string ShowImageCacheRequest::getImageCacheId() const
{
    return imageCacheId_;
}

void ShowImageCacheRequest::setImageCacheId(const std::string& value)
{
    imageCacheId_ = value;
    imageCacheIdIsSet_ = true;
}

bool ShowImageCacheRequest::imageCacheIdIsSet() const
{
    return imageCacheIdIsSet_;
}

void ShowImageCacheRequest::unsetimageCacheId()
{
    imageCacheIdIsSet_ = false;
}

}
}
}
}
}


