

#include "huaweicloud/image/v2/model/ImageMainObjectDetectionInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMainObjectDetectionInstance::ImageMainObjectDetectionInstance()
{
    label_ = "";
    labelIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = "";
    confidenceIsSet_ = false;
}

ImageMainObjectDetectionInstance::~ImageMainObjectDetectionInstance() = default;

void ImageMainObjectDetectionInstance::validate()
{
}

web::json::value ImageMainObjectDetectionInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool ImageMainObjectDetectionInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
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


std::string ImageMainObjectDetectionInstance::getLabel() const
{
    return label_;
}

void ImageMainObjectDetectionInstance::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool ImageMainObjectDetectionInstance::labelIsSet() const
{
    return labelIsSet_;
}

void ImageMainObjectDetectionInstance::unsetlabel()
{
    labelIsSet_ = false;
}

Object ImageMainObjectDetectionInstance::getLocation() const
{
    return location_;
}

void ImageMainObjectDetectionInstance::setLocation(const Object& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ImageMainObjectDetectionInstance::locationIsSet() const
{
    return locationIsSet_;
}

void ImageMainObjectDetectionInstance::unsetlocation()
{
    locationIsSet_ = false;
}

std::string ImageMainObjectDetectionInstance::getConfidence() const
{
    return confidence_;
}

void ImageMainObjectDetectionInstance::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageMainObjectDetectionInstance::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageMainObjectDetectionInstance::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


