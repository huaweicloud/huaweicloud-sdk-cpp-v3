

#include "huaweicloud/ocr/v1/model/RecognizeFinancialStatementRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFinancialStatementRequest::RecognizeFinancialStatementRequest()
{
    bodyIsSet_ = false;
}

RecognizeFinancialStatementRequest::~RecognizeFinancialStatementRequest() = default;

void RecognizeFinancialStatementRequest::validate()
{
}

web::json::value RecognizeFinancialStatementRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeFinancialStatementRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            FinancialStatementRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


FinancialStatementRequestBody RecognizeFinancialStatementRequest::getBody() const
{
    return body_;
}

void RecognizeFinancialStatementRequest::setBody(const FinancialStatementRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeFinancialStatementRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeFinancialStatementRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


