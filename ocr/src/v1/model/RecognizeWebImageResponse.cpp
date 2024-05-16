

#include "huaweicloud/ocr/v1/model/RecognizeWebImageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeWebImageResponse::RecognizeWebImageResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeWebImageResponse::~RecognizeWebImageResponse() = default;

void RecognizeWebImageResponse::validate()
{
}

web::json::value RecognizeWebImageResponse::toJson() const
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
bool RecognizeWebImageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            WebImageResult refVal;
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


WebImageResult RecognizeWebImageResponse::getResult() const
{
    return result_;
}

void RecognizeWebImageResponse::setResult(const WebImageResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeWebImageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeWebImageResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeWebImageResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeWebImageResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeWebImageResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeWebImageResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


