

#include "huaweicloud/ocr/v1/model/RecognizeQuotaInvoiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeQuotaInvoiceResponse::RecognizeQuotaInvoiceResponse()
{
    resultIsSet_ = false;
}

RecognizeQuotaInvoiceResponse::~RecognizeQuotaInvoiceResponse() = default;

void RecognizeQuotaInvoiceResponse::validate()
{
}

web::json::value RecognizeQuotaInvoiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeQuotaInvoiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            QuotaInvoiceResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


QuotaInvoiceResult RecognizeQuotaInvoiceResponse::getResult() const
{
    return result_;
}

void RecognizeQuotaInvoiceResponse::setResult(const QuotaInvoiceResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeQuotaInvoiceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeQuotaInvoiceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


