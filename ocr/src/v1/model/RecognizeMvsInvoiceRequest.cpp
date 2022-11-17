

#include "huaweicloud/ocr/v1/model/RecognizeMvsInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMvsInvoiceRequest::RecognizeMvsInvoiceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeMvsInvoiceRequest::~RecognizeMvsInvoiceRequest() = default;

void RecognizeMvsInvoiceRequest::validate()
{
}

web::json::value RecognizeMvsInvoiceRequest::toJson() const
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

bool RecognizeMvsInvoiceRequest::fromJson(const web::json::value& val)
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
            MvsInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeMvsInvoiceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeMvsInvoiceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeMvsInvoiceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeMvsInvoiceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

MvsInvoiceRequestBody RecognizeMvsInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeMvsInvoiceRequest::setBody(const MvsInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeMvsInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeMvsInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


