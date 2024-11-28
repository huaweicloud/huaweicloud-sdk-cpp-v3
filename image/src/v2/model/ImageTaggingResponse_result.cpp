

#include "huaweicloud/image/v2/model/ImageTaggingResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageTaggingResponse_result::ImageTaggingResponse_result()
{
    tagsIsSet_ = false;
}

ImageTaggingResponse_result::~ImageTaggingResponse_result() = default;

void ImageTaggingResponse_result::validate()
{
}

web::json::value ImageTaggingResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ImageTaggingResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageTaggingItemBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ImageTaggingItemBody>& ImageTaggingResponse_result::getTags()
{
    return tags_;
}

void ImageTaggingResponse_result::setTags(const std::vector<ImageTaggingItemBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ImageTaggingResponse_result::tagsIsSet() const
{
    return tagsIsSet_;
}

void ImageTaggingResponse_result::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


