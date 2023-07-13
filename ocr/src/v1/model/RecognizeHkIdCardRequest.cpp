

#include "huaweicloud/ocr/v1/model/RecognizeHkIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHkIdCardRequest::RecognizeHkIdCardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeHkIdCardRequest::~RecognizeHkIdCardRequest() = default;

void RecognizeHkIdCardRequest::validate()
{
}

web::json::value RecognizeHkIdCardRequest::toJson() const
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

bool RecognizeHkIdCardRequest::fromJson(const web::json::value& val)
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
            HkIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeHkIdCardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeHkIdCardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeHkIdCardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeHkIdCardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

HkIdCardRequestBody RecognizeHkIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeHkIdCardRequest::setBody(const HkIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeHkIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeHkIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


