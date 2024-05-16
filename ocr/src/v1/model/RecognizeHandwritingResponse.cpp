

#include "huaweicloud/ocr/v1/model/RecognizeHandwritingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHandwritingResponse::RecognizeHandwritingResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeHandwritingResponse::~RecognizeHandwritingResponse() = default;

void RecognizeHandwritingResponse::validate()
{
}

web::json::value RecognizeHandwritingResponse::toJson() const
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
bool RecognizeHandwritingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            HandwritingResult refVal;
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


HandwritingResult RecognizeHandwritingResponse::getResult() const
{
    return result_;
}

void RecognizeHandwritingResponse::setResult(const HandwritingResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeHandwritingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeHandwritingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeHandwritingResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeHandwritingResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeHandwritingResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeHandwritingResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


