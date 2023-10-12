

#include "huaweicloud/ocr/v1/model/RecognizeVinRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVinRequest::RecognizeVinRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeVinRequest::~RecognizeVinRequest() = default;

void RecognizeVinRequest::validate()
{
}

web::json::value RecognizeVinRequest::toJson() const
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
bool RecognizeVinRequest::fromJson(const web::json::value& val)
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
            VinRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeVinRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeVinRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeVinRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeVinRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

VinRequestBody RecognizeVinRequest::getBody() const
{
    return body_;
}

void RecognizeVinRequest::setBody(const VinRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeVinRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeVinRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


