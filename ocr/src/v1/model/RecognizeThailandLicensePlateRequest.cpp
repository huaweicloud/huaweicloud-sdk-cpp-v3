

#include "huaweicloud/ocr/v1/model/RecognizeThailandLicensePlateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandLicensePlateRequest::RecognizeThailandLicensePlateRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeThailandLicensePlateRequest::~RecognizeThailandLicensePlateRequest() = default;

void RecognizeThailandLicensePlateRequest::validate()
{
}

web::json::value RecognizeThailandLicensePlateRequest::toJson() const
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

bool RecognizeThailandLicensePlateRequest::fromJson(const web::json::value& val)
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
            ThailandLicensePlateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeThailandLicensePlateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeThailandLicensePlateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeThailandLicensePlateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeThailandLicensePlateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ThailandLicensePlateRequestBody RecognizeThailandLicensePlateRequest::getBody() const
{
    return body_;
}

void RecognizeThailandLicensePlateRequest::setBody(const ThailandLicensePlateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeThailandLicensePlateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeThailandLicensePlateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


