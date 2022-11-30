

#include "huaweicloud/ocr/v1/model/RecognizeGeneralTextRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeGeneralTextRequest::RecognizeGeneralTextRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeGeneralTextRequest::~RecognizeGeneralTextRequest() = default;

void RecognizeGeneralTextRequest::validate()
{
}

web::json::value RecognizeGeneralTextRequest::toJson() const
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

bool RecognizeGeneralTextRequest::fromJson(const web::json::value& val)
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
            GeneralTextRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeGeneralTextRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeGeneralTextRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeGeneralTextRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeGeneralTextRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

GeneralTextRequestBody RecognizeGeneralTextRequest::getBody() const
{
    return body_;
}

void RecognizeGeneralTextRequest::setBody(const GeneralTextRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeGeneralTextRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeGeneralTextRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


