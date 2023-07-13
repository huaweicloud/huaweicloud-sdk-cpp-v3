

#include "huaweicloud/ocr/v1/model/RecognizeHealthCodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHealthCodeRequest::RecognizeHealthCodeRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeHealthCodeRequest::~RecognizeHealthCodeRequest() = default;

void RecognizeHealthCodeRequest::validate()
{
}

web::json::value RecognizeHealthCodeRequest::toJson() const
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

bool RecognizeHealthCodeRequest::fromJson(const web::json::value& val)
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
            HealthCodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeHealthCodeRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeHealthCodeRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeHealthCodeRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeHealthCodeRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

HealthCodeRequestBody RecognizeHealthCodeRequest::getBody() const
{
    return body_;
}

void RecognizeHealthCodeRequest::setBody(const HealthCodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeHealthCodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeHealthCodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


