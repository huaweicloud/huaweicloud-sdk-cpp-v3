

#include "huaweicloud/ocr/v1/model/RecognizeQualificationCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeQualificationCertificateRequest::RecognizeQualificationCertificateRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeQualificationCertificateRequest::~RecognizeQualificationCertificateRequest() = default;

void RecognizeQualificationCertificateRequest::validate()
{
}

web::json::value RecognizeQualificationCertificateRequest::toJson() const
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
bool RecognizeQualificationCertificateRequest::fromJson(const web::json::value& val)
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
            QualificationCertificateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeQualificationCertificateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeQualificationCertificateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeQualificationCertificateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeQualificationCertificateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

QualificationCertificateRequestBody RecognizeQualificationCertificateRequest::getBody() const
{
    return body_;
}

void RecognizeQualificationCertificateRequest::setBody(const QualificationCertificateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeQualificationCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeQualificationCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


