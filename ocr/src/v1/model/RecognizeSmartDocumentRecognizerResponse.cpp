

#include "huaweicloud/ocr/v1/model/RecognizeSmartDocumentRecognizerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeSmartDocumentRecognizerResponse::RecognizeSmartDocumentRecognizerResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeSmartDocumentRecognizerResponse::~RecognizeSmartDocumentRecognizerResponse() = default;

void RecognizeSmartDocumentRecognizerResponse::validate()
{
}

web::json::value RecognizeSmartDocumentRecognizerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool RecognizeSmartDocumentRecognizerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<SmartDocumentRecognizerResult>& RecognizeSmartDocumentRecognizerResponse::getResult()
{
    return result_;
}

void RecognizeSmartDocumentRecognizerResponse::setResult(const std::vector<SmartDocumentRecognizerResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeSmartDocumentRecognizerResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeSmartDocumentRecognizerResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeSmartDocumentRecognizerResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeSmartDocumentRecognizerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeSmartDocumentRecognizerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeSmartDocumentRecognizerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


