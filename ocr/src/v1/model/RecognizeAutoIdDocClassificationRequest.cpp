

#include "huaweicloud/ocr/v1/model/RecognizeAutoIdDocClassificationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAutoIdDocClassificationRequest::RecognizeAutoIdDocClassificationRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeAutoIdDocClassificationRequest::~RecognizeAutoIdDocClassificationRequest() = default;

void RecognizeAutoIdDocClassificationRequest::validate()
{
}

web::json::value RecognizeAutoIdDocClassificationRequest::toJson() const
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
bool RecognizeAutoIdDocClassificationRequest::fromJson(const web::json::value& val)
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
            AutoIdDocClassificationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeAutoIdDocClassificationRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeAutoIdDocClassificationRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeAutoIdDocClassificationRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeAutoIdDocClassificationRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

AutoIdDocClassificationRequestBody RecognizeAutoIdDocClassificationRequest::getBody() const
{
    return body_;
}

void RecognizeAutoIdDocClassificationRequest::setBody(const AutoIdDocClassificationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeAutoIdDocClassificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeAutoIdDocClassificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


