

#include "huaweicloud/ocr/v1/model/RecognizeMvsInvoiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMvsInvoiceResponse::RecognizeMvsInvoiceResponse()
{
    resultIsSet_ = false;
}

RecognizeMvsInvoiceResponse::~RecognizeMvsInvoiceResponse() = default;

void RecognizeMvsInvoiceResponse::validate()
{
}

web::json::value RecognizeMvsInvoiceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeMvsInvoiceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MvsInvoiceResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


MvsInvoiceResult RecognizeMvsInvoiceResponse::getResult() const
{
    return result_;
}

void RecognizeMvsInvoiceResponse::setResult(const MvsInvoiceResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeMvsInvoiceResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeMvsInvoiceResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


