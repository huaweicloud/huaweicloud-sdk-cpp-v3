

#include "huaweicloud/ocr/v1/model/RecognizeVatInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVatInvoiceRequest::RecognizeVatInvoiceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeVatInvoiceRequest::~RecognizeVatInvoiceRequest() = default;

void RecognizeVatInvoiceRequest::validate()
{
}

web::json::value RecognizeVatInvoiceRequest::toJson() const
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

bool RecognizeVatInvoiceRequest::fromJson(const web::json::value& val)
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
            VatInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeVatInvoiceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeVatInvoiceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeVatInvoiceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeVatInvoiceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

VatInvoiceRequestBody RecognizeVatInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeVatInvoiceRequest::setBody(const VatInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVatInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVatInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


