

#include "huaweicloud/ocr/v1/model/RecognizeTollInvoiceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTollInvoiceResponse::RecognizeTollInvoiceResponse()
{
    resultIsSet_ = false;
}

RecognizeTollInvoiceResponse::~RecognizeTollInvoiceResponse() = default;

void RecognizeTollInvoiceResponse::validate()
{
}

web::json::value RecognizeTollInvoiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeTollInvoiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            TollInvoiceResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

TollInvoiceResult RecognizeTollInvoiceResponse::getResult() const
{
    return result_;
}

void RecognizeTollInvoiceResponse::setResult(const TollInvoiceResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeTollInvoiceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeTollInvoiceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


