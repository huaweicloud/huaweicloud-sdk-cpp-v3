

#include "huaweicloud/cbr/v1/model/ImageData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ImageData::ImageData()
{
    imageId_ = "";
    imageIdIsSet_ = false;
}

ImageData::~ImageData() = default;

void ImageData::validate()
{
}

web::json::value ImageData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }

    return val;
}
bool ImageData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    return ok;
}


std::string ImageData::getImageId() const
{
    return imageId_;
}

void ImageData::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ImageData::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ImageData::unsetimageId()
{
    imageIdIsSet_ = false;
}

}
}
}
}
}


