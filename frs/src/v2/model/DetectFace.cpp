

#include "huaweicloud/frs/v2/model/DetectFace.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFace::DetectFace()
{
    boundingBoxIsSet_ = false;
    attributesIsSet_ = false;
    landmarkIsSet_ = false;
}

DetectFace::~DetectFace() = default;

void DetectFace::validate()
{
}

web::json::value DetectFace::toJson() const
{
    web::json::value val = web::json::value::object();

    if(boundingBoxIsSet_) {
        val[utility::conversions::to_string_t("bounding_box")] = ModelBase::toJson(boundingBox_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }
    if(landmarkIsSet_) {
        val[utility::conversions::to_string_t("landmark")] = ModelBase::toJson(landmark_);
    }

    return val;
}

bool DetectFace::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            Attributes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("landmark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("landmark"));
        if(!fieldValue.is_null())
        {
            Landmark refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLandmark(refVal);
        }
    }
    return ok;
}


BoundingBox DetectFace::getBoundingBox() const
{
    return boundingBox_;
}

void DetectFace::setBoundingBox(const BoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool DetectFace::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void DetectFace::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

Attributes DetectFace::getAttributes() const
{
    return attributes_;
}

void DetectFace::setAttributes(const Attributes& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool DetectFace::attributesIsSet() const
{
    return attributesIsSet_;
}

void DetectFace::unsetattributes()
{
    attributesIsSet_ = false;
}

Landmark DetectFace::getLandmark() const
{
    return landmark_;
}

void DetectFace::setLandmark(const Landmark& value)
{
    landmark_ = value;
    landmarkIsSet_ = true;
}

bool DetectFace::landmarkIsSet() const
{
    return landmarkIsSet_;
}

void DetectFace::unsetlandmark()
{
    landmarkIsSet_ = false;
}

}
}
}
}
}


