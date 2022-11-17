

#include "huaweicloud/ocr/v1/model/RecognizeTollInvoiceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTollInvoiceRequest::RecognizeTollInvoiceRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeTollInvoiceRequest::~RecognizeTollInvoiceRequest() = default;

void RecognizeTollInvoiceRequest::validate()
{
}

web::json::value RecognizeTollInvoiceRequest::toJson() const
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

bool RecognizeTollInvoiceRequest::fromJson(const web::json::value& val)
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
            TollInvoiceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeTollInvoiceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeTollInvoiceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeTollInvoiceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeTollInvoiceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

TollInvoiceRequestBody RecognizeTollInvoiceRequest::getBody() const
{
    return body_;
}

void RecognizeTollInvoiceRequest::setBody(const TollInvoiceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeTollInvoiceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeTollInvoiceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


