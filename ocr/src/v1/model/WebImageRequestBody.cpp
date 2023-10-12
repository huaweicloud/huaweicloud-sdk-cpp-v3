

#include "huaweicloud/ocr/v1/model/WebImageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageRequestBody::WebImageRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
    extractTypeIsSet_ = false;
    detectFont_ = false;
    detectFontIsSet_ = false;
    detectTextDirection_ = false;
    detectTextDirectionIsSet_ = false;
}

WebImageRequestBody::~WebImageRequestBody() = default;

void WebImageRequestBody::validate()
{
}

web::json::value WebImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(detectDirectionIsSet_) {
        val[utility::conversions::to_string_t("detect_direction")] = ModelBase::toJson(detectDirection_);
    }
    if(extractTypeIsSet_) {
        val[utility::conversions::to_string_t("extract_type")] = ModelBase::toJson(extractType_);
    }
    if(detectFontIsSet_) {
        val[utility::conversions::to_string_t("detect_font")] = ModelBase::toJson(detectFont_);
    }
    if(detectTextDirectionIsSet_) {
        val[utility::conversions::to_string_t("detect_text_direction")] = ModelBase::toJson(detectTextDirection_);
    }

    return val;
}
bool WebImageRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detect_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_direction"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extract_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extract_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtractType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_font"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_font"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectFont(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_text_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_text_direction"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectTextDirection(refVal);
        }
    }
    return ok;
}


std::string WebImageRequestBody::getImage() const
{
    return image_;
}

void WebImageRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool WebImageRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void WebImageRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string WebImageRequestBody::getUrl() const
{
    return url_;
}

void WebImageRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebImageRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void WebImageRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool WebImageRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void WebImageRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool WebImageRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void WebImageRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

std::vector<std::string>& WebImageRequestBody::getExtractType()
{
    return extractType_;
}

void WebImageRequestBody::setExtractType(const std::vector<std::string>& value)
{
    extractType_ = value;
    extractTypeIsSet_ = true;
}

bool WebImageRequestBody::extractTypeIsSet() const
{
    return extractTypeIsSet_;
}

void WebImageRequestBody::unsetextractType()
{
    extractTypeIsSet_ = false;
}

bool WebImageRequestBody::isDetectFont() const
{
    return detectFont_;
}

void WebImageRequestBody::setDetectFont(bool value)
{
    detectFont_ = value;
    detectFontIsSet_ = true;
}

bool WebImageRequestBody::detectFontIsSet() const
{
    return detectFontIsSet_;
}

void WebImageRequestBody::unsetdetectFont()
{
    detectFontIsSet_ = false;
}

bool WebImageRequestBody::isDetectTextDirection() const
{
    return detectTextDirection_;
}

void WebImageRequestBody::setDetectTextDirection(bool value)
{
    detectTextDirection_ = value;
    detectTextDirectionIsSet_ = true;
}

bool WebImageRequestBody::detectTextDirectionIsSet() const
{
    return detectTextDirectionIsSet_;
}

void WebImageRequestBody::unsetdetectTextDirection()
{
    detectTextDirectionIsSet_ = false;
}

}
}
}
}
}


