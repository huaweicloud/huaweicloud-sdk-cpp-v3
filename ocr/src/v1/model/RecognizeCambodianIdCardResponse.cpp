

#include "huaweicloud/ocr/v1/model/RecognizeCambodianIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeCambodianIdCardResponse::RecognizeCambodianIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeCambodianIdCardResponse::~RecognizeCambodianIdCardResponse() = default;

void RecognizeCambodianIdCardResponse::validate()
{
}

web::json::value RecognizeCambodianIdCardResponse::toJson() const
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
bool RecognizeCambodianIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CambodianIdCardResult refVal;
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


CambodianIdCardResult RecognizeCambodianIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeCambodianIdCardResponse::setResult(const CambodianIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeCambodianIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeCambodianIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeCambodianIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeCambodianIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeCambodianIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeCambodianIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


