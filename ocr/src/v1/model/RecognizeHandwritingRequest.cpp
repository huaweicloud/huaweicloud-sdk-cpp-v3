

#include "huaweicloud/ocr/v1/model/RecognizeHandwritingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHandwritingRequest::RecognizeHandwritingRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeHandwritingRequest::~RecognizeHandwritingRequest() = default;

void RecognizeHandwritingRequest::validate()
{
}

web::json::value RecognizeHandwritingRequest::toJson() const
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
bool RecognizeHandwritingRequest::fromJson(const web::json::value& val)
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
            HandwritingRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeHandwritingRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeHandwritingRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeHandwritingRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeHandwritingRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

HandwritingRequestBody RecognizeHandwritingRequest::getBody() const
{
    return body_;
}

void RecognizeHandwritingRequest::setBody(const HandwritingRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeHandwritingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeHandwritingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


