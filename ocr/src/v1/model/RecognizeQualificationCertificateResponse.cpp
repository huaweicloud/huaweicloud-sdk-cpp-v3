

#include "huaweicloud/ocr/v1/model/RecognizeQualificationCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeQualificationCertificateResponse::RecognizeQualificationCertificateResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeQualificationCertificateResponse::~RecognizeQualificationCertificateResponse() = default;

void RecognizeQualificationCertificateResponse::validate()
{
}

web::json::value RecognizeQualificationCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool RecognizeQualificationCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QualificationCertificateResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


QualificationCertificateResult RecognizeQualificationCertificateResponse::getResult() const
{
    return result_;
}

void RecognizeQualificationCertificateResponse::setResult(const QualificationCertificateResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeQualificationCertificateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeQualificationCertificateResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeQualificationCertificateResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeQualificationCertificateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeQualificationCertificateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeQualificationCertificateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


