

#include "huaweicloud/ocr/v1/model/MvsInvoiceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MvsInvoiceRequestBody::MvsInvoiceRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
    returnConfidence_ = false;
    returnConfidenceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

MvsInvoiceRequestBody::~MvsInvoiceRequestBody() = default;

void MvsInvoiceRequestBody::validate()
{
}

web::json::value MvsInvoiceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }
    if(returnConfidenceIsSet_) {
        val[utility::conversions::to_string_t("return_confidence")] = ModelBase::toJson(returnConfidence_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool MvsInvoiceRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("return_text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_text_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_confidence"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

std::string MvsInvoiceRequestBody::getImage() const
{
    return image_;
}

void MvsInvoiceRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool MvsInvoiceRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void MvsInvoiceRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string MvsInvoiceRequestBody::getUrl() const
{
    return url_;
}

void MvsInvoiceRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool MvsInvoiceRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void MvsInvoiceRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool MvsInvoiceRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void MvsInvoiceRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool MvsInvoiceRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void MvsInvoiceRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

bool MvsInvoiceRequestBody::isReturnConfidence() const
{
    return returnConfidence_;
}

void MvsInvoiceRequestBody::setReturnConfidence(bool value)
{
    returnConfidence_ = value;
    returnConfidenceIsSet_ = true;
}

bool MvsInvoiceRequestBody::returnConfidenceIsSet() const
{
    return returnConfidenceIsSet_;
}

void MvsInvoiceRequestBody::unsetreturnConfidence()
{
    returnConfidenceIsSet_ = false;
}

std::string MvsInvoiceRequestBody::getType() const
{
    return type_;
}

void MvsInvoiceRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MvsInvoiceRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void MvsInvoiceRequestBody::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


