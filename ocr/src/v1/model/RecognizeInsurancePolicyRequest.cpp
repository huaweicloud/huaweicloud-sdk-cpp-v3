

#include "huaweicloud/ocr/v1/model/RecognizeInsurancePolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeInsurancePolicyRequest::RecognizeInsurancePolicyRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeInsurancePolicyRequest::~RecognizeInsurancePolicyRequest() = default;

void RecognizeInsurancePolicyRequest::validate()
{
}

web::json::value RecognizeInsurancePolicyRequest::toJson() const
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

bool RecognizeInsurancePolicyRequest::fromJson(const web::json::value& val)
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
            InsurancePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeInsurancePolicyRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeInsurancePolicyRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeInsurancePolicyRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeInsurancePolicyRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

InsurancePolicyRequestBody RecognizeInsurancePolicyRequest::getBody() const
{
    return body_;
}

void RecognizeInsurancePolicyRequest::setBody(const InsurancePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeInsurancePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeInsurancePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


