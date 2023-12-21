

#include "huaweicloud/ivs/v2/model/StandardReqDataByNameAndId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




StandardReqDataByNameAndId::StandardReqDataByNameAndId()
{
    verificationName_ = "";
    verificationNameIsSet_ = false;
    verificationId_ = "";
    verificationIdIsSet_ = false;
    faceImage_ = "";
    faceImageIsSet_ = false;
    detail_ = false;
    detailIsSet_ = false;
    crop_ = false;
    cropIsSet_ = false;
}

StandardReqDataByNameAndId::~StandardReqDataByNameAndId() = default;

void StandardReqDataByNameAndId::validate()
{
}

web::json::value StandardReqDataByNameAndId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verificationNameIsSet_) {
        val[utility::conversions::to_string_t("verification_name")] = ModelBase::toJson(verificationName_);
    }
    if(verificationIdIsSet_) {
        val[utility::conversions::to_string_t("verification_id")] = ModelBase::toJson(verificationId_);
    }
    if(faceImageIsSet_) {
        val[utility::conversions::to_string_t("face_image")] = ModelBase::toJson(faceImage_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(cropIsSet_) {
        val[utility::conversions::to_string_t("crop")] = ModelBase::toJson(crop_);
    }

    return val;
}
bool StandardReqDataByNameAndId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verification_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("crop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("crop"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrop(refVal);
        }
    }
    return ok;
}


std::string StandardReqDataByNameAndId::getVerificationName() const
{
    return verificationName_;
}

void StandardReqDataByNameAndId::setVerificationName(const std::string& value)
{
    verificationName_ = value;
    verificationNameIsSet_ = true;
}

bool StandardReqDataByNameAndId::verificationNameIsSet() const
{
    return verificationNameIsSet_;
}

void StandardReqDataByNameAndId::unsetverificationName()
{
    verificationNameIsSet_ = false;
}

std::string StandardReqDataByNameAndId::getVerificationId() const
{
    return verificationId_;
}

void StandardReqDataByNameAndId::setVerificationId(const std::string& value)
{
    verificationId_ = value;
    verificationIdIsSet_ = true;
}

bool StandardReqDataByNameAndId::verificationIdIsSet() const
{
    return verificationIdIsSet_;
}

void StandardReqDataByNameAndId::unsetverificationId()
{
    verificationIdIsSet_ = false;
}

std::string StandardReqDataByNameAndId::getFaceImage() const
{
    return faceImage_;
}

void StandardReqDataByNameAndId::setFaceImage(const std::string& value)
{
    faceImage_ = value;
    faceImageIsSet_ = true;
}

bool StandardReqDataByNameAndId::faceImageIsSet() const
{
    return faceImageIsSet_;
}

void StandardReqDataByNameAndId::unsetfaceImage()
{
    faceImageIsSet_ = false;
}

bool StandardReqDataByNameAndId::isDetail() const
{
    return detail_;
}

void StandardReqDataByNameAndId::setDetail(bool value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool StandardReqDataByNameAndId::detailIsSet() const
{
    return detailIsSet_;
}

void StandardReqDataByNameAndId::unsetdetail()
{
    detailIsSet_ = false;
}

bool StandardReqDataByNameAndId::isCrop() const
{
    return crop_;
}

void StandardReqDataByNameAndId::setCrop(bool value)
{
    crop_ = value;
    cropIsSet_ = true;
}

bool StandardReqDataByNameAndId::cropIsSet() const
{
    return cropIsSet_;
}

void StandardReqDataByNameAndId::unsetcrop()
{
    cropIsSet_ = false;
}

}
}
}
}
}


