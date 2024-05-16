

#include "huaweicloud/ocr/v1/model/RecognizeVatInvoiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVatInvoiceResponse::RecognizeVatInvoiceResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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

std::string RecognizeVatInvoiceResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeVatInvoiceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeVatInvoiceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeVatInvoiceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


