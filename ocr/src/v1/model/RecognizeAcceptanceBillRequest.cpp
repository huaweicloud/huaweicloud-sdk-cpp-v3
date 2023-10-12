

#include "huaweicloud/ocr/v1/model/RecognizeAcceptanceBillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAcceptanceBillRequest::RecognizeAcceptanceBillRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeAcceptanceBillRequest::~RecognizeAcceptanceBillRequest() = default;

void RecognizeAcceptanceBillRequest::validate()
{
}

web::json::value RecognizeAcceptanceBillRequest::toJson() const
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
bool RecognizeAcceptanceBillRequest::fromJson(const web::json::value& val)
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
            AcceptanceBillRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeAcceptanceBillRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeAcceptanceBillRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeAcceptanceBillRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeAcceptanceBillRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

AcceptanceBillRequestBody RecognizeAcceptanceBillRequest::getBody() const
{
    return body_;
}

void RecognizeAcceptanceBillRequest::setBody(const AcceptanceBillRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeAcceptanceBillRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeAcceptanceBillRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


