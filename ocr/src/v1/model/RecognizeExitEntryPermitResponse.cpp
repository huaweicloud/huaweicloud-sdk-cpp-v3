

#include "huaweicloud/ocr/v1/model/RecognizeExitEntryPermitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeExitEntryPermitResponse::RecognizeExitEntryPermitResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeExitEntryPermitResponse::~RecognizeExitEntryPermitResponse() = default;

void RecognizeExitEntryPermitResponse::validate()
{
}

web::json::value RecognizeExitEntryPermitResponse::toJson() const
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
bool RecognizeExitEntryPermitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ExitEntryPermitResult refVal;
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


ExitEntryPermitResult RecognizeExitEntryPermitResponse::getResult() const
{
    return result_;
}

void RecognizeExitEntryPermitResponse::setResult(const ExitEntryPermitResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeExitEntryPermitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeExitEntryPermitResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeExitEntryPermitResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeExitEntryPermitResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeExitEntryPermitResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeExitEntryPermitResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


