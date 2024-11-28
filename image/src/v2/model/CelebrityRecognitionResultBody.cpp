

#include "huaweicloud/image/v2/model/CelebrityRecognitionResultBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




CelebrityRecognitionResultBody::CelebrityRecognitionResultBody()
{
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    faceDetailIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
}

CelebrityRecognitionResultBody::~CelebrityRecognitionResultBody() = default;

void CelebrityRecognitionResultBody::validate()
{
}

web::json::value CelebrityRecognitionResultBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(faceDetailIsSet_) {
        val[utility::conversions::to_string_t("face_detail")] = ModelBase::toJson(faceDetail_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }

    return val;
}
bool CelebrityRecognitionResultBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    return ok;
}


float CelebrityRecognitionResultBody::getConfidence() const
{
    return confidence_;
}

void CelebrityRecognitionResultBody::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool CelebrityRecognitionResultBody::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void CelebrityRecognitionResultBody::unsetconfidence()
{
    confidenceIsSet_ = false;
}

Object CelebrityRecognitionResultBody::getFaceDetail() const
{
    return faceDetail_;
}

void CelebrityRecognitionResultBody::setFaceDetail(const Object& value)
{
    faceDetail_ = value;
    faceDetailIsSet_ = true;
}

bool CelebrityRecognitionResultBody::faceDetailIsSet() const
{
    return faceDetailIsSet_;
}

void CelebrityRecognitionResultBody::unsetfaceDetail()
{
    faceDetailIsSet_ = false;
}

std::string CelebrityRecognitionResultBody::getLabel() const
{
    return label_;
}

void CelebrityRecognitionResultBody::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool CelebrityRecognitionResultBody::labelIsSet() const
{
    return labelIsSet_;
}

void CelebrityRecognitionResultBody::unsetlabel()
{
    labelIsSet_ = false;
}

}
}
}
}
}


