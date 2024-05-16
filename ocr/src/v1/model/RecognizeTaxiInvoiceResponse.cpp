

#include "huaweicloud/ocr/v1/model/RecognizeTaxiInvoiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTaxiInvoiceResponse::RecognizeTaxiInvoiceResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeTaxiInvoiceResponse::~RecognizeTaxiInvoiceResponse() = default;

void RecognizeTaxiInvoiceResponse::validate()
{
}

web::json::value RecognizeTaxiInvoiceResponse::toJson() const
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
bool RecognizeTaxiInvoiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            TaxiInvoiceResult refVal;
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


TaxiInvoiceResult RecognizeTaxiInvoiceResponse::getResult() const
{
    return result_;
}

void RecognizeTaxiInvoiceResponse::setResult(const TaxiInvoiceResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeTaxiInvoiceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeTaxiInvoiceResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeTaxiInvoiceResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeTaxiInvoiceResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeTaxiInvoiceResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeTaxiInvoiceResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


