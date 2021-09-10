

#include "huaweicloud/frs/v2/model/Landmark.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




Landmark::Landmark()
{
    eyesContourIsSet_ = false;
    mouthContourIsSet_ = false;
    faceContourIsSet_ = false;
    eyebrowContourIsSet_ = false;
    noseContourIsSet_ = false;
}

Landmark::~Landmark() = default;

void Landmark::validate()
{
}

web::json::value Landmark::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eyesContourIsSet_) {
        val[utility::conversions::to_string_t("eyes_contour")] = ModelBase::toJson(eyesContour_);
    }
    if(mouthContourIsSet_) {
        val[utility::conversions::to_string_t("mouth_contour")] = ModelBase::toJson(mouthContour_);
    }
    if(faceContourIsSet_) {
        val[utility::conversions::to_string_t("face_contour")] = ModelBase::toJson(faceContour_);
    }
    if(eyebrowContourIsSet_) {
        val[utility::conversions::to_string_t("eyebrow_contour")] = ModelBase::toJson(eyebrowContour_);
    }
    if(noseContourIsSet_) {
        val[utility::conversions::to_string_t("nose_contour")] = ModelBase::toJson(noseContour_);
    }

    return val;
}

bool Landmark::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eyes_contour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eyes_contour"));
        if(!fieldValue.is_null())
        {
            std::vector<Point> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEyesContour(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mouth_contour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mouth_contour"));
        if(!fieldValue.is_null())
        {
            std::vector<Point> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMouthContour(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_contour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_contour"));
        if(!fieldValue.is_null())
        {
            std::vector<Point> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceContour(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eyebrow_contour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eyebrow_contour"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Point>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEyebrowContour(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nose_contour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nose_contour"));
        if(!fieldValue.is_null())
        {
            std::vector<Point> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoseContour(refVal);
        }
    }
    return ok;
}


std::vector<Point>& Landmark::getEyesContour()
{
    return eyesContour_;
}

void Landmark::setEyesContour(const std::vector<Point>& value)
{
    eyesContour_ = value;
    eyesContourIsSet_ = true;
}

bool Landmark::eyesContourIsSet() const
{
    return eyesContourIsSet_;
}

void Landmark::unseteyesContour()
{
    eyesContourIsSet_ = false;
}

std::vector<Point>& Landmark::getMouthContour()
{
    return mouthContour_;
}

void Landmark::setMouthContour(const std::vector<Point>& value)
{
    mouthContour_ = value;
    mouthContourIsSet_ = true;
}

bool Landmark::mouthContourIsSet() const
{
    return mouthContourIsSet_;
}

void Landmark::unsetmouthContour()
{
    mouthContourIsSet_ = false;
}

std::vector<Point>& Landmark::getFaceContour()
{
    return faceContour_;
}

void Landmark::setFaceContour(const std::vector<Point>& value)
{
    faceContour_ = value;
    faceContourIsSet_ = true;
}

bool Landmark::faceContourIsSet() const
{
    return faceContourIsSet_;
}

void Landmark::unsetfaceContour()
{
    faceContourIsSet_ = false;
}

std::vector<std::map<std::string, Point>>& Landmark::getEyebrowContour()
{
    return eyebrowContour_;
}

void Landmark::setEyebrowContour(const std::vector<std::map<std::string, Point>>& value)
{
    eyebrowContour_ = value;
    eyebrowContourIsSet_ = true;
}

bool Landmark::eyebrowContourIsSet() const
{
    return eyebrowContourIsSet_;
}

void Landmark::unseteyebrowContour()
{
    eyebrowContourIsSet_ = false;
}

std::vector<Point>& Landmark::getNoseContour()
{
    return noseContour_;
}

void Landmark::setNoseContour(const std::vector<Point>& value)
{
    noseContour_ = value;
    noseContourIsSet_ = true;
}

bool Landmark::noseContourIsSet() const
{
    return noseContourIsSet_;
}

void Landmark::unsetnoseContour()
{
    noseContourIsSet_ = false;
}

}
}
}
}
}


