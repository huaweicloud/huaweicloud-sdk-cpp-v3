

#include "huaweicloud/ocr/v1/model/RecognizeWebImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeWebImageRequest::RecognizeWebImageRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeWebImageRequest::~RecognizeWebImageRequest() = default;

void RecognizeWebImageRequest::validate()
{
}

web::json::value RecognizeWebImageRequest::toJson() const
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

bool RecognizeWebImageRequest::fromJson(const web::json::value& val)
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
            WebImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeWebImageRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeWebImageRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeWebImageRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeWebImageRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

WebImageRequestBody RecognizeWebImageRequest::getBody() const
{
    return body_;
}

void RecognizeWebImageRequest::setBody(const WebImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeWebImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeWebImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


