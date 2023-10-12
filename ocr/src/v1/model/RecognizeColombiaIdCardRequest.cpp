

#include "huaweicloud/ocr/v1/model/RecognizeColombiaIdCardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeColombiaIdCardRequest::RecognizeColombiaIdCardRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeColombiaIdCardRequest::~RecognizeColombiaIdCardRequest() = default;

void RecognizeColombiaIdCardRequest::validate()
{
}

web::json::value RecognizeColombiaIdCardRequest::toJson() const
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
bool RecognizeColombiaIdCardRequest::fromJson(const web::json::value& val)
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
            ColombiaIdCardRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeColombiaIdCardRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeColombiaIdCardRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeColombiaIdCardRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeColombiaIdCardRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ColombiaIdCardRequestBody RecognizeColombiaIdCardRequest::getBody() const
{
    return body_;
}

void RecognizeColombiaIdCardRequest::setBody(const ColombiaIdCardRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeColombiaIdCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeColombiaIdCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


