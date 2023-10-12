

#include "huaweicloud/ocr/v1/model/RecognizeCustomTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeCustomTemplateRequest::RecognizeCustomTemplateRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeCustomTemplateRequest::~RecognizeCustomTemplateRequest() = default;

void RecognizeCustomTemplateRequest::validate()
{
}

web::json::value RecognizeCustomTemplateRequest::toJson() const
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
bool RecognizeCustomTemplateRequest::fromJson(const web::json::value& val)
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
            CustomTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeCustomTemplateRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeCustomTemplateRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeCustomTemplateRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeCustomTemplateRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

CustomTemplateRequestBody RecognizeCustomTemplateRequest::getBody() const
{
    return body_;
}

void RecognizeCustomTemplateRequest::setBody(const CustomTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeCustomTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeCustomTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


