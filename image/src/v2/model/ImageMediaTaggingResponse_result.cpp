

#include "huaweicloud/image/v2/model/ImageMediaTaggingResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingResponse_result::ImageMediaTaggingResponse_result()
{
    tagsIsSet_ = false;
}

ImageMediaTaggingResponse_result::~ImageMediaTaggingResponse_result() = default;

void ImageMediaTaggingResponse_result::validate()
{
}

web::json::value ImageMediaTaggingResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ImageMediaTaggingResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageMediaTaggingItemBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ImageMediaTaggingItemBody>& ImageMediaTaggingResponse_result::getTags()
{
    return tags_;
}

void ImageMediaTaggingResponse_result::setTags(const std::vector<ImageMediaTaggingItemBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ImageMediaTaggingResponse_result::tagsIsSet() const
{
    return tagsIsSet_;
}

void ImageMediaTaggingResponse_result::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


