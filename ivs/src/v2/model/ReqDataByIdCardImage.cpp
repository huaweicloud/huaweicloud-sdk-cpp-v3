

#include "huaweicloud/ivs/v2/model/ReqDataByIdCardImage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ReqDataByIdCardImage::ReqDataByIdCardImage()
{
    idcardImage1_ = "";
    idcardImage1IsSet_ = false;
    idcardImage2_ = "";
    idcardImage2IsSet_ = false;
    faceImage_ = "";
    faceImageIsSet_ = false;
}

ReqDataByIdCardImage::~ReqDataByIdCardImage() = default;

void ReqDataByIdCardImage::validate()
{
}

web::json::value ReqDataByIdCardImage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idcardImage1IsSet_) {
        val[utility::conversions::to_string_t("idcard_image1")] = ModelBase::toJson(idcardImage1_);
    }
    if(idcardImage2IsSet_) {
        val[utility::conversions::to_string_t("idcard_image2")] = ModelBase::toJson(idcardImage2_);
    }
    if(faceImageIsSet_) {
        val[utility::conversions::to_string_t("face_image")] = ModelBase::toJson(faceImage_);
    }

    return val;
}
bool ReqDataByIdCardImage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("idcard_image1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_image1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardImage1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idcard_image2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_image2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardImage2(refVal);
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
    return ok;
}


std::string ReqDataByIdCardImage::getIdcardImage1() const
{
    return idcardImage1_;
}

void ReqDataByIdCardImage::setIdcardImage1(const std::string& value)
{
    idcardImage1_ = value;
    idcardImage1IsSet_ = true;
}

bool ReqDataByIdCardImage::idcardImage1IsSet() const
{
    return idcardImage1IsSet_;
}

void ReqDataByIdCardImage::unsetidcardImage1()
{
    idcardImage1IsSet_ = false;
}

std::string ReqDataByIdCardImage::getIdcardImage2() const
{
    return idcardImage2_;
}

void ReqDataByIdCardImage::setIdcardImage2(const std::string& value)
{
    idcardImage2_ = value;
    idcardImage2IsSet_ = true;
}

bool ReqDataByIdCardImage::idcardImage2IsSet() const
{
    return idcardImage2IsSet_;
}

void ReqDataByIdCardImage::unsetidcardImage2()
{
    idcardImage2IsSet_ = false;
}

std::string ReqDataByIdCardImage::getFaceImage() const
{
    return faceImage_;
}

void ReqDataByIdCardImage::setFaceImage(const std::string& value)
{
    faceImage_ = value;
    faceImageIsSet_ = true;
}

bool ReqDataByIdCardImage::faceImageIsSet() const
{
    return faceImageIsSet_;
}

void ReqDataByIdCardImage::unsetfaceImage()
{
    faceImageIsSet_ = false;
}

}
}
}
}
}


