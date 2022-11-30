

#include "huaweicloud/ocr/v1/model/RecognizeQuotaInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeQuotaInvoiceRequest::RecognizeQuotaInvoiceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeQuotaInvoiceRequest::~RecognizeQuotaInvoiceRequest() = default;

void RecognizeQuotaInvoiceRequest::validate()
{
}

web::json::value RecognizeQuotaInvoiceRequest::toJson() const
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

bool RecognizeQuotaInvoiceRequest::fromJson(const web::json::value& val)
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
            QuotaInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeQuotaInvoiceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeQuotaInvoiceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeQuotaInvoiceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeQuotaInvoiceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

QuotaInvoiceRequestBody RecognizeQuotaInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeQuotaInvoiceRequest::setBody(const QuotaInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeQuotaInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeQuotaInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


