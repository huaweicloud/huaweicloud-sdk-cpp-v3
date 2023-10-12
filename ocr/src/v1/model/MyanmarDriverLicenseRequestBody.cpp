

#include "huaweicloud/ocr/v1/model/MyanmarDriverLicenseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarDriverLicenseRequestBody::MyanmarDriverLicenseRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    convertUnicode_ = false;
    convertUnicodeIsSet_ = false;
}

MyanmarDriverLicenseRequestBody::~MyanmarDriverLicenseRequestBody() = default;

void MyanmarDriverLicenseRequestBody::validate()
{
}

web::json::value MyanmarDriverLicenseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(convertUnicodeIsSet_) {
        val[utility::conversions::to_string_t("convert_unicode")] = ModelBase::toJson(convertUnicode_);
    }

    return val;
}
bool MyanmarDriverLicenseRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("convert_unicode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("convert_unicode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConvertUnicode(refVal);
        }
    }
    return ok;
}


std::string MyanmarDriverLicenseRequestBody::getImage() const
{
    return image_;
}

void MyanmarDriverLicenseRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool MyanmarDriverLicenseRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void MyanmarDriverLicenseRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string MyanmarDriverLicenseRequestBody::getUrl() const
{
    return url_;
}

void MyanmarDriverLicenseRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool MyanmarDriverLicenseRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void MyanmarDriverLicenseRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool MyanmarDriverLicenseRequestBody::isConvertUnicode() const
{
    return convertUnicode_;
}

void MyanmarDriverLicenseRequestBody::setConvertUnicode(bool value)
{
    convertUnicode_ = value;
    convertUnicodeIsSet_ = true;
}

bool MyanmarDriverLicenseRequestBody::convertUnicodeIsSet() const
{
    return convertUnicodeIsSet_;
}

void MyanmarDriverLicenseRequestBody::unsetconvertUnicode()
{
    convertUnicodeIsSet_ = false;
}

}
}
}
}
}


