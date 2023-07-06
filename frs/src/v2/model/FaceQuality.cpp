

#include "huaweicloud/frs/v2/model/FaceQuality.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceQuality::FaceQuality()
{
    totalScore_ = 0.0;
    totalScoreIsSet_ = false;
    blur_ = 0.0;
    blurIsSet_ = false;
    pose_ = 0.0;
    poseIsSet_ = false;
    occlusion_ = 0.0;
    occlusionIsSet_ = false;
    illumination_ = 0.0;
    illuminationIsSet_ = false;
}

FaceQuality::~FaceQuality() = default;

void FaceQuality::validate()
{
}

web::json::value FaceQuality::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalScoreIsSet_) {
        val[utility::conversions::to_string_t("total_score")] = ModelBase::toJson(totalScore_);
    }
    if(blurIsSet_) {
        val[utility::conversions::to_string_t("blur")] = ModelBase::toJson(blur_);
    }
    if(poseIsSet_) {
        val[utility::conversions::to_string_t("pose")] = ModelBase::toJson(pose_);
    }
    if(occlusionIsSet_) {
        val[utility::conversions::to_string_t("occlusion")] = ModelBase::toJson(occlusion_);
    }
    if(illuminationIsSet_) {
        val[utility::conversions::to_string_t("illumination")] = ModelBase::toJson(illumination_);
    }

    return val;
}

bool FaceQuality::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blur"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blur"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlur(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pose"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pose"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPose(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("occlusion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("occlusion"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcclusion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("illumination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("illumination"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIllumination(refVal);
        }
    }
    return ok;
}

double FaceQuality::getTotalScore() const
{
    return totalScore_;
}

void FaceQuality::setTotalScore(double value)
{
    totalScore_ = value;
    totalScoreIsSet_ = true;
}

bool FaceQuality::totalScoreIsSet() const
{
    return totalScoreIsSet_;
}

void FaceQuality::unsettotalScore()
{
    totalScoreIsSet_ = false;
}

double FaceQuality::getBlur() const
{
    return blur_;
}

void FaceQuality::setBlur(double value)
{
    blur_ = value;
    blurIsSet_ = true;
}

bool FaceQuality::blurIsSet() const
{
    return blurIsSet_;
}

void FaceQuality::unsetblur()
{
    blurIsSet_ = false;
}

double FaceQuality::getPose() const
{
    return pose_;
}

void FaceQuality::setPose(double value)
{
    pose_ = value;
    poseIsSet_ = true;
}

bool FaceQuality::poseIsSet() const
{
    return poseIsSet_;
}

void FaceQuality::unsetpose()
{
    poseIsSet_ = false;
}

double FaceQuality::getOcclusion() const
{
    return occlusion_;
}

void FaceQuality::setOcclusion(double value)
{
    occlusion_ = value;
    occlusionIsSet_ = true;
}

bool FaceQuality::occlusionIsSet() const
{
    return occlusionIsSet_;
}

void FaceQuality::unsetocclusion()
{
    occlusionIsSet_ = false;
}

double FaceQuality::getIllumination() const
{
    return illumination_;
}

void FaceQuality::setIllumination(double value)
{
    illumination_ = value;
    illuminationIsSet_ = true;
}

bool FaceQuality::illuminationIsSet() const
{
    return illuminationIsSet_;
}

void FaceQuality::unsetillumination()
{
    illuminationIsSet_ = false;
}

}
}
}
}
}


