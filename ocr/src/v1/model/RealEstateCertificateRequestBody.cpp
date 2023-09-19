

#include "huaweicloud/ocr/v1/model/RealEstateCertificateRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RealEstateCertificateRequestBody::RealEstateCertificateRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

RealEstateCertificateRequestBody::~RealEstateCertificateRequestBody() = default;

void RealEstateCertificateRequestBody::validate()
{
}

web::json::value RealEstateCertificateRequestBody::toJson() const
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

bool RealEstateCertificateRequestBody::fromJson(const web::json::value& val)
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

std::string RealEstateCertificateRequestBody::getImage() const
{
    return image_;
}

void RealEstateCertificateRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool RealEstateCertificateRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void RealEstateCertificateRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string RealEstateCertificateRequestBody::getUrl() const
{
    return url_;
}

void RealEstateCertificateRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RealEstateCertificateRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void RealEstateCertificateRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


