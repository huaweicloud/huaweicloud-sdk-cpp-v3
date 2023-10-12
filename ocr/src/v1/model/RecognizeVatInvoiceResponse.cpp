

#include "huaweicloud/ocr/v1/model/RecognizeVatInvoiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVatInvoiceResponse::RecognizeVatInvoiceResponse()
{
    resultIsSet_ = false;
}

RecognizeVatInvoiceResponse::~RecognizeVatInvoiceResponse() = default;

void RecognizeVatInvoiceResponse::validate()
{
}

web::json::value RecognizeVatInvoiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeVatInvoiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VatInvoiceResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


VatInvoiceResult RecognizeVatInvoiceResponse::getResult() const
{
    return result_;
}

void RecognizeVatInvoiceResponse::setResult(const VatInvoiceResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVatInvoiceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVatInvoiceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


