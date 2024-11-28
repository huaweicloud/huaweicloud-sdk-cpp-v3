

#include "huaweicloud/image/v2/model/ImageTaggingInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageTaggingInstance::ImageTaggingInstance()
{
    boundingBoxIsSet_ = false;
    confidence_ = "";
    confidenceIsSet_ = false;
}

ImageTaggingInstance::~ImageTaggingInstance() = default;

void ImageTaggingInstance::validate()
{
}

web::json::value ImageTaggingInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(boundingBoxIsSet_) {
        val[utility::conversions::to_string_t("bounding_box")] = ModelBase::toJson(boundingBox_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool ImageTaggingInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bounding_box"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounding_box"));
        if(!fieldValue.is_null())
        {
            ImageTaggingBoundingBox refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoundingBox(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


ImageTaggingBoundingBox ImageTaggingInstance::getBoundingBox() const
{
    return boundingBox_;
}

void ImageTaggingInstance::setBoundingBox(const ImageTaggingBoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool ImageTaggingInstance::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void ImageTaggingInstance::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

std::string ImageTaggingInstance::getConfidence() const
{
    return confidence_;
}

void ImageTaggingInstance::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageTaggingInstance::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageTaggingInstance::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


