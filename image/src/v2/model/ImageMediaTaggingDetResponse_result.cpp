

#include "huaweicloud/image/v2/model/ImageMediaTaggingDetResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingDetResponse_result::ImageMediaTaggingDetResponse_result()
{
    tagsIsSet_ = false;
}

ImageMediaTaggingDetResponse_result::~ImageMediaTaggingDetResponse_result() = default;

void ImageMediaTaggingDetResponse_result::validate()
{
}

web::json::value ImageMediaTaggingDetResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ImageMediaTaggingDetResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageMediaTaggingDetItemBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ImageMediaTaggingDetItemBody>& ImageMediaTaggingDetResponse_result::getTags()
{
    return tags_;
}

void ImageMediaTaggingDetResponse_result::setTags(const std::vector<ImageMediaTaggingDetItemBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ImageMediaTaggingDetResponse_result::tagsIsSet() const
{
    return tagsIsSet_;
}

void ImageMediaTaggingDetResponse_result::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


