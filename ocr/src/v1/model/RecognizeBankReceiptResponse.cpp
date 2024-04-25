

#include "huaweicloud/ocr/v1/model/RecognizeBankReceiptResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBankReceiptResponse::RecognizeBankReceiptResponse()
{
    resultIsSet_ = false;
}

RecognizeBankReceiptResponse::~RecognizeBankReceiptResponse() = default;

void RecognizeBankReceiptResponse::validate()
{
}

web::json::value RecognizeBankReceiptResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeBankReceiptResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BankReceiptResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


BankReceiptResult RecognizeBankReceiptResponse::getResult() const
{
    return result_;
}

void RecognizeBankReceiptResponse::setResult(const BankReceiptResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBankReceiptResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBankReceiptResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


