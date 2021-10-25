

#include "huaweicloud/ocr/v1/model/RecognizeFinancialStatementResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFinancialStatementResponse::RecognizeFinancialStatementResponse()
{
    resultIsSet_ = false;
}

RecognizeFinancialStatementResponse::~RecognizeFinancialStatementResponse() = default;

void RecognizeFinancialStatementResponse::validate()
{
}

web::json::value RecognizeFinancialStatementResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeFinancialStatementResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FinancialStatementResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


FinancialStatementResult RecognizeFinancialStatementResponse::getResult() const
{
    return result_;
}

void RecognizeFinancialStatementResponse::setResult(const FinancialStatementResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeFinancialStatementResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeFinancialStatementResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


