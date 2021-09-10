

#include "huaweicloud/ocr/v1/model/TaxiInvoiceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TaxiInvoiceRequestBody::TaxiInvoiceRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

TaxiInvoiceRequestBody::~TaxiInvoiceRequestBody() = default;

void TaxiInvoiceRequestBody::validate()
{
}

web::json::value TaxiInvoiceRequestBody::toJson() const
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

bool TaxiInvoiceRequestBody::fromJson(const web::json::value& val)
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


std::string TaxiInvoiceRequestBody::getImage() const
{
    return image_;
}

void TaxiInvoiceRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool TaxiInvoiceRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void TaxiInvoiceRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string TaxiInvoiceRequestBody::getUrl() const
{
    return url_;
}

void TaxiInvoiceRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool TaxiInvoiceRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void TaxiInvoiceRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


