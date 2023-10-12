

#include "huaweicloud/ocr/v1/model/RecognizeRealEstateCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeRealEstateCertificateResponse::RecognizeRealEstateCertificateResponse()
{
    resultIsSet_ = false;
}

RecognizeRealEstateCertificateResponse::~RecognizeRealEstateCertificateResponse() = default;

void RecognizeRealEstateCertificateResponse::validate()
{
}

web::json::value RecognizeRealEstateCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeRealEstateCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            RealEstateCertificateResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


RealEstateCertificateResult RecognizeRealEstateCertificateResponse::getResult() const
{
    return result_;
}

void RecognizeRealEstateCertificateResponse::setResult(const RealEstateCertificateResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeRealEstateCertificateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeRealEstateCertificateResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


