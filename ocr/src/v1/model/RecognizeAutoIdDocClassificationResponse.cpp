

#include "huaweicloud/ocr/v1/model/RecognizeAutoIdDocClassificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAutoIdDocClassificationResponse::RecognizeAutoIdDocClassificationResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeAutoIdDocClassificationResponse::~RecognizeAutoIdDocClassificationResponse() = default;

void RecognizeAutoIdDocClassificationResponse::validate()
{
}

web::json::value RecognizeAutoIdDocClassificationResponse::toJson() const
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
bool RecognizeAutoIdDocClassificationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AutoIdDocClassificationResult refVal;
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


AutoIdDocClassificationResult RecognizeAutoIdDocClassificationResponse::getResult() const
{
    return result_;
}

void RecognizeAutoIdDocClassificationResponse::setResult(const AutoIdDocClassificationResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeAutoIdDocClassificationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeAutoIdDocClassificationResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeAutoIdDocClassificationResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeAutoIdDocClassificationResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeAutoIdDocClassificationResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeAutoIdDocClassificationResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


