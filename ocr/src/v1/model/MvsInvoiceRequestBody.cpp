

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

}
}
}
}
}


