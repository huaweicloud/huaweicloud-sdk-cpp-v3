

#include "huaweicloud/ocr/v1/model/RecognizeVinResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVinResponse::RecognizeVinResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeVinResponse::~RecognizeVinResponse() = default;

void RecognizeVinResponse::validate()
{
}

web::json::value RecognizeVinResponse::toJson() const
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
bool RecognizeVinResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VINResult refVal;
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


VINResult RecognizeVinResponse::getResult() const
{
    return result_;
}

void RecognizeVinResponse::setResult(const VINResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVinResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVinResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeVinResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeVinResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeVinResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeVinResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


