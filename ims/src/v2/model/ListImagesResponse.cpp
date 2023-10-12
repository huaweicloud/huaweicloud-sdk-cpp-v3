

#include "huaweicloud/ims/v2/model/ListImagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImagesResponse::ListImagesResponse()
{
    imagesIsSet_ = false;
}

ListImagesResponse::~ListImagesResponse() = default;

void ListImagesResponse::validate()
{
}

web::json::value ListImagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imagesIsSet_) {
        val[utility::conversions::to_string_t("images")] = ModelBase::toJson(images_);
    }

    return val;
}
bool ListImagesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("images"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("images"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImages(refVal);
        }
    }
    return ok;
}


std::vector<ImageInfo>& ListImagesResponse::getImages()
{
    return images_;
}

void ListImagesResponse::setImages(const std::vector<ImageInfo>& value)
{
    images_ = value;
    imagesIsSet_ = true;
}

bool ListImagesResponse::imagesIsSet() const
{
    return imagesIsSet_;
}

void ListImagesResponse::unsetimages()
{
    imagesIsSet_ = false;
}

}
}
}
}
}


