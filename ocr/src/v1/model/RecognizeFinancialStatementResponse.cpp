

#include "huaweicloud/ocr/v1/model/RecognizeFinancialStatementResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFinancialStatementResponse::RecognizeFinancialStatementResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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

std::string RecognizeFinancialStatementResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeFinancialStatementResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeFinancialStatementResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeFinancialStatementResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


