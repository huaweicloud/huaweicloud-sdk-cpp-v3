

#include "huaweicloud/ocr/v1/model/RecognizeChileIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeChileIdCardRequest::RecognizeChileIdCardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeChileIdCardRequest::~RecognizeChileIdCardRequest() = default;

void RecognizeChileIdCardRequest::validate()
{
}

web::json::value RecognizeChileIdCardRequest::toJson() const
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

bool RecognizeChileIdCardRequest::fromJson(const web::json::value& val)
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
            ChileIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeChileIdCardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeChileIdCardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeChileIdCardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeChileIdCardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ChileIdCardRequestBody RecognizeChileIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeChileIdCardRequest::setBody(const ChileIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeChileIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeChileIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


