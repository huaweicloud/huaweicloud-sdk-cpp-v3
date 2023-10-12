

#include "huaweicloud/ocr/v1/model/QuotaInvoiceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QuotaInvoiceRequestBody::QuotaInvoiceRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

QuotaInvoiceRequestBody::~QuotaInvoiceRequestBody() = default;

void QuotaInvoiceRequestBody::validate()
{
}

web::json::value QuotaInvoiceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool QuotaInvoiceRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string QuotaInvoiceRequestBody::getImage() const
{
    return image_;
}

void QuotaInvoiceRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool QuotaInvoiceRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void QuotaInvoiceRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string QuotaInvoiceRequestBody::getUrl() const
{
    return url_;
}

void QuotaInvoiceRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool QuotaInvoiceRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void QuotaInvoiceRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


