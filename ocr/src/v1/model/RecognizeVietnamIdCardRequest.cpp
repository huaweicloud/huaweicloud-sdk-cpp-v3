

#include "huaweicloud/ocr/v1/model/RecognizeVietnamIdCardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVietnamIdCardRequest::RecognizeVietnamIdCardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeVietnamIdCardRequest::~RecognizeVietnamIdCardRequest() = default;

void RecognizeVietnamIdCardRequest::validate()
{
}

web::json::value RecognizeVietnamIdCardRequest::toJson() const
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

bool RecognizeVietnamIdCardRequest::fromJson(const web::json::value& val)
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
            VietnamIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeVietnamIdCardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeVietnamIdCardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeVietnamIdCardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeVietnamIdCardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

VietnamIdCardRequestBody RecognizeVietnamIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeVietnamIdCardRequest::setBody(const VietnamIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVietnamIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVietnamIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


