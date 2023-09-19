

#include "huaweicloud/ocr/v1/model/RecognizeRealEstateCertificateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeRealEstateCertificateRequest::RecognizeRealEstateCertificateRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeRealEstateCertificateRequest::~RecognizeRealEstateCertificateRequest() = default;

void RecognizeRealEstateCertificateRequest::validate()
{
}

web::json::value RecognizeRealEstateCertificateRequest::toJson() const
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

bool RecognizeRealEstateCertificateRequest::fromJson(const web::json::value& val)
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
            RealEstateCertificateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeRealEstateCertificateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeRealEstateCertificateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeRealEstateCertificateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeRealEstateCertificateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

RealEstateCertificateRequestBody RecognizeRealEstateCertificateRequest::getBody() const
{
    return body_;
}

void RecognizeRealEstateCertificateRequest::setBody(const RealEstateCertificateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeRealEstateCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeRealEstateCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


