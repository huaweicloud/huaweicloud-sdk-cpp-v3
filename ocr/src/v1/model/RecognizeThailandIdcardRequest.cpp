

#include "huaweicloud/ocr/v1/model/RecognizeThailandIdcardRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandIdcardRequest::RecognizeThailandIdcardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeThailandIdcardRequest::~RecognizeThailandIdcardRequest() = default;

void RecognizeThailandIdcardRequest::validate()
{
}

web::json::value RecognizeThailandIdcardRequest::toJson() const
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

bool RecognizeThailandIdcardRequest::fromJson(const web::json::value& val)
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
            ThailandIdcardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeThailandIdcardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeThailandIdcardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeThailandIdcardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeThailandIdcardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ThailandIdcardRequestBody RecognizeThailandIdcardRequest::getBody() const
{
    return body_;
}

void RecognizeThailandIdcardRequest::setBody(const ThailandIdcardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeThailandIdcardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeThailandIdcardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


