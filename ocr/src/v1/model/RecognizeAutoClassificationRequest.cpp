

#include "huaweicloud/ocr/v1/model/RecognizeAutoClassificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAutoClassificationRequest::RecognizeAutoClassificationRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeAutoClassificationRequest::~RecognizeAutoClassificationRequest() = default;

void RecognizeAutoClassificationRequest::validate()
{
}

web::json::value RecognizeAutoClassificationRequest::toJson() const
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

bool RecognizeAutoClassificationRequest::fromJson(const web::json::value& val)
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
            AutoClassificationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RecognizeAutoClassificationRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeAutoClassificationRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeAutoClassificationRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeAutoClassificationRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

AutoClassificationRequestBody RecognizeAutoClassificationRequest::getBody() const
{
    return body_;
}

void RecognizeAutoClassificationRequest::setBody(const AutoClassificationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeAutoClassificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeAutoClassificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


