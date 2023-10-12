

#include "huaweicloud/ivs/v2/model/ExtentionReqDataByIdCardImage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ExtentionReqDataByIdCardImage::ExtentionReqDataByIdCardImage()
{
    idcardImage1_ = "";
    idcardImage1IsSet_ = false;
    idcardImage2_ = "";
    idcardImage2IsSet_ = false;
}

ExtentionReqDataByIdCardImage::~ExtentionReqDataByIdCardImage() = default;

void ExtentionReqDataByIdCardImage::validate()
{
}

web::json::value ExtentionReqDataByIdCardImage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idcardImage1IsSet_) {
        val[utility::conversions::to_string_t("idcard_image1")] = ModelBase::toJson(idcardImage1_);
    }
    if(idcardImage2IsSet_) {
        val[utility::conversions::to_string_t("idcard_image2")] = ModelBase::toJson(idcardImage2_);
    }

    return val;
}
bool ExtentionReqDataByIdCardImage::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ExtentionReqDataByIdCardImage::getIdcardImage1() const
{
    return idcardImage1_;
}

void ExtentionReqDataByIdCardImage::setIdcardImage1(const std::string& value)
{
    idcardImage1_ = value;
    idcardImage1IsSet_ = true;
}

bool ExtentionReqDataByIdCardImage::idcardImage1IsSet() const
{
    return idcardImage1IsSet_;
}

void ExtentionReqDataByIdCardImage::unsetidcardImage1()
{
    idcardImage1IsSet_ = false;
}

std::string ExtentionReqDataByIdCardImage::getIdcardImage2() const
{
    return idcardImage2_;
}

void ExtentionReqDataByIdCardImage::setIdcardImage2(const std::string& value)
{
    idcardImage2_ = value;
    idcardImage2IsSet_ = true;
}

bool ExtentionReqDataByIdCardImage::idcardImage2IsSet() const
{
    return idcardImage2IsSet_;
}

void ExtentionReqDataByIdCardImage::unsetidcardImage2()
{
    idcardImage2IsSet_ = false;
}

}
}
}
}
}


