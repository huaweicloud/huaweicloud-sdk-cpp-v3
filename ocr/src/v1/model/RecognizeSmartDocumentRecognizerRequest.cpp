

#include "huaweicloud/ocr/v1/model/RecognizeSmartDocumentRecognizerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeSmartDocumentRecognizerRequest::RecognizeSmartDocumentRecognizerRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

RecognizeSmartDocumentRecognizerRequest::~RecognizeSmartDocumentRecognizerRequest() = default;

void RecognizeSmartDocumentRecognizerRequest::validate()
{
}

web::json::value RecognizeSmartDocumentRecognizerRequest::toJson() const
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
bool RecognizeSmartDocumentRecognizerRequest::fromJson(const web::json::value& val)
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
            SmartDocumentRecognizerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RecognizeSmartDocumentRecognizerRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecognizeSmartDocumentRecognizerRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecognizeSmartDocumentRecognizerRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecognizeSmartDocumentRecognizerRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

SmartDocumentRecognizerRequestBody RecognizeSmartDocumentRecognizerRequest::getBody() const
{
    return body_;
}

void RecognizeSmartDocumentRecognizerRequest::setBody(const SmartDocumentRecognizerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeSmartDocumentRecognizerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeSmartDocumentRecognizerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


