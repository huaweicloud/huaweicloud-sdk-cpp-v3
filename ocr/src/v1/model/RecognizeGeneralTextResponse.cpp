

#include "huaweicloud/ocr/v1/model/RecognizeGeneralTextResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeGeneralTextResponse::RecognizeGeneralTextResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeGeneralTextResponse::~RecognizeGeneralTextResponse() = default;

void RecognizeGeneralTextResponse::validate()
{
}

web::json::value RecognizeGeneralTextResponse::toJson() const
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
bool RecognizeGeneralTextResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            GeneralTextResult refVal;
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


GeneralTextResult RecognizeGeneralTextResponse::getResult() const
{
    return result_;
}

void RecognizeGeneralTextResponse::setResult(const GeneralTextResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeGeneralTextResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeGeneralTextResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeGeneralTextResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeGeneralTextResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeGeneralTextResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeGeneralTextResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


