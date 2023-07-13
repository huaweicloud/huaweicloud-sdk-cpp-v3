

#include "huaweicloud/ocr/v1/model/RecognizeInvoiceVerificationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeInvoiceVerificationResponse::RecognizeInvoiceVerificationResponse()
{
    resultIsSet_ = false;
}

RecognizeInvoiceVerificationResponse::~RecognizeInvoiceVerificationResponse() = default;

void RecognizeInvoiceVerificationResponse::validate()
{
}

web::json::value RecognizeInvoiceVerificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeInvoiceVerificationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

Object RecognizeInvoiceVerificationResponse::getResult() const
{
    return result_;
}

void RecognizeInvoiceVerificationResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeInvoiceVerificationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeInvoiceVerificationResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


