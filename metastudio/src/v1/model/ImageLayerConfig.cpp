

#include "huaweicloud/metastudio/v1/model/ImageLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ImageLayerConfig::ImageLayerConfig()
{
    imageUrl_ = "";
    imageUrlIsSet_ = false;
}

ImageLayerConfig::~ImageLayerConfig() = default;

void ImageLayerConfig::validate()
{
}

web::json::value ImageLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }

    return val;
}
bool ImageLayerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    return ok;
}


std::string ImageLayerConfig::getImageUrl() const
{
    return imageUrl_;
}

void ImageLayerConfig::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool ImageLayerConfig::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void ImageLayerConfig::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


