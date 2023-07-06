

#include "huaweicloud/ocr/v1/model/RecognizeFinancialStatementRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeFinancialStatementRequest::RecognizeFinancialStatementRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeFinancialStatementRequest::~RecognizeFinancialStatementRequest() = default;

void RecognizeFinancialStatementRequest::validate()
{
}

web::json::value RecognizeFinancialStatementRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("Enterprise-Project-Id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeFinancialStatementRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Enterprise-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Enterprise-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
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

std::string RecognizeFinancialStatementRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeFinancialStatementRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeFinancialStatementRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeFinancialStatementRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
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


