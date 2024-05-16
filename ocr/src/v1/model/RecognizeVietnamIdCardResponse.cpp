

#include "huaweicloud/ocr/v1/model/RecognizeVietnamIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVietnamIdCardResponse::RecognizeVietnamIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeVietnamIdCardResponse::~RecognizeVietnamIdCardResponse() = default;

void RecognizeVietnamIdCardResponse::validate()
{
}

web::json::value RecognizeVietnamIdCardResponse::toJson() const
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
bool RecognizeVietnamIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VietnamIdCardResult refVal;
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


VietnamIdCardResult RecognizeVietnamIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeVietnamIdCardResponse::setResult(const VietnamIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVietnamIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVietnamIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeVietnamIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeVietnamIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeVietnamIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeVietnamIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


