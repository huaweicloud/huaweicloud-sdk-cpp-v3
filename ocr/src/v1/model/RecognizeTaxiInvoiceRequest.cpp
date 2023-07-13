

#include "huaweicloud/ocr/v1/model/RecognizeTaxiInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTaxiInvoiceRequest::RecognizeTaxiInvoiceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeTaxiInvoiceRequest::~RecognizeTaxiInvoiceRequest() = default;

void RecognizeTaxiInvoiceRequest::validate()
{
}

web::json::value RecognizeTaxiInvoiceRequest::toJson() const
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

bool RecognizeTaxiInvoiceRequest::fromJson(const web::json::value& val)
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
            TaxiInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeTaxiInvoiceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeTaxiInvoiceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeTaxiInvoiceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeTaxiInvoiceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

TaxiInvoiceRequestBody RecognizeTaxiInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeTaxiInvoiceRequest::setBody(const TaxiInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeTaxiInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeTaxiInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


