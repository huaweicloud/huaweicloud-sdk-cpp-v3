

#include "huaweicloud/ocr/v1/model/QualificationCertificateRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QualificationCertificateRequestBody::QualificationCertificateRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

QualificationCertificateRequestBody::~QualificationCertificateRequestBody() = default;

void QualificationCertificateRequestBody::validate()
{
}

web::json::value QualificationCertificateRequestBody::toJson() const
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

bool QualificationCertificateRequestBody::fromJson(const web::json::value& val)
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

std::string QualificationCertificateRequestBody::getImage() const
{
    return image_;
}

void QualificationCertificateRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool QualificationCertificateRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void QualificationCertificateRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string QualificationCertificateRequestBody::getUrl() const
{
    return url_;
}

void QualificationCertificateRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool QualificationCertificateRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void QualificationCertificateRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


