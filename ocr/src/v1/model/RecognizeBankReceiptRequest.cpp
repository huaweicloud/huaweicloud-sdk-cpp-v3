

#include "huaweicloud/ocr/v1/model/RecognizeBankReceiptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBankReceiptRequest::RecognizeBankReceiptRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeBankReceiptRequest::~RecognizeBankReceiptRequest() = default;

void RecognizeBankReceiptRequest::validate()
{
}

web::json::value RecognizeBankReceiptRequest::toJson() const
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
bool RecognizeBankReceiptRequest::fromJson(const web::json::value& val)
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
            BankReceiptRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeBankReceiptRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeBankReceiptRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeBankReceiptRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeBankReceiptRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

BankReceiptRequestBody RecognizeBankReceiptRequest::getBody() const
{
    return body_;
}

void RecognizeBankReceiptRequest::setBody(const BankReceiptRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeBankReceiptRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeBankReceiptRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


