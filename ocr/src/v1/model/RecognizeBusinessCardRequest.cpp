

#include "huaweicloud/ocr/v1/model/RecognizeBusinessCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBusinessCardRequest::RecognizeBusinessCardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeBusinessCardRequest::~RecognizeBusinessCardRequest() = default;

void RecognizeBusinessCardRequest::validate()
{
}

web::json::value RecognizeBusinessCardRequest::toJson() const
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

bool RecognizeBusinessCardRequest::fromJson(const web::json::value& val)
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
            BusinessCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeBusinessCardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeBusinessCardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeBusinessCardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeBusinessCardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

BusinessCardRequestBody RecognizeBusinessCardRequest::getBody() const
{
    return body_;
}

void RecognizeBusinessCardRequest::setBody(const BusinessCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeBusinessCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeBusinessCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


