

#include "huaweicloud/ocr/v1/model/RecognizePassportRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizePassportRequest::RecognizePassportRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizePassportRequest::~RecognizePassportRequest() = default;

void RecognizePassportRequest::validate()
{
}

web::json::value RecognizePassportRequest::toJson() const
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

bool RecognizePassportRequest::fromJson(const web::json::value& val)
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
            PassportRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizePassportRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizePassportRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizePassportRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizePassportRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

PassportRequestBody RecognizePassportRequest::getBody() const
{
    return body_;
}

void RecognizePassportRequest::setBody(const PassportRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizePassportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizePassportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


