

#include "huaweicloud/image/v2/model/ImageMediaTaggingInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingInstance::ImageMediaTaggingInstance()
{
    boundingBoxIsSet_ = false;
    confidence_ = "";
    confidenceIsSet_ = false;
}

ImageMediaTaggingInstance::~ImageMediaTaggingInstance() = default;

void ImageMediaTaggingInstance::validate()
{
}

web::json::value ImageMediaTaggingInstance::toJson() const
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
bool ImageMediaTaggingInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bounding_box"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounding_box"));
        if(!fieldValue.is_null())
        {
            BoundingBox refVal;
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


BoundingBox ImageMediaTaggingInstance::getBoundingBox() const
{
    return boundingBox_;
}

void ImageMediaTaggingInstance::setBoundingBox(const BoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool ImageMediaTaggingInstance::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void ImageMediaTaggingInstance::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

std::string ImageMediaTaggingInstance::getConfidence() const
{
    return confidence_;
}

void ImageMediaTaggingInstance::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageMediaTaggingInstance::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageMediaTaggingInstance::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


