

#include "huaweicloud/image/v2/model/ImageMediaTaggingDetInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingDetInstance::ImageMediaTaggingDetInstance()
{
    boundingBoxIsSet_ = false;
    confidence_ = "";
    confidenceIsSet_ = false;
}

ImageMediaTaggingDetInstance::~ImageMediaTaggingDetInstance() = default;

void ImageMediaTaggingDetInstance::validate()
{
}

web::json::value ImageMediaTaggingDetInstance::toJson() const
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
bool ImageMediaTaggingDetInstance::fromJson(const web::json::value& val)
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


BoundingBox ImageMediaTaggingDetInstance::getBoundingBox() const
{
    return boundingBox_;
}

void ImageMediaTaggingDetInstance::setBoundingBox(const BoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool ImageMediaTaggingDetInstance::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void ImageMediaTaggingDetInstance::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

std::string ImageMediaTaggingDetInstance::getConfidence() const
{
    return confidence_;
}

void ImageMediaTaggingDetInstance::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageMediaTaggingDetInstance::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageMediaTaggingDetInstance::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


