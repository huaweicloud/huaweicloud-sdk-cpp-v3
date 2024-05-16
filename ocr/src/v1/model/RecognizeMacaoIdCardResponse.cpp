

#include "huaweicloud/ocr/v1/model/RecognizeMacaoIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMacaoIdCardResponse::RecognizeMacaoIdCardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeMacaoIdCardResponse::~RecognizeMacaoIdCardResponse() = default;

void RecognizeMacaoIdCardResponse::validate()
{
}

web::json::value RecognizeMacaoIdCardResponse::toJson() const
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
bool RecognizeMacaoIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MacaoIdCardResult refVal;
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


MacaoIdCardResult RecognizeMacaoIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeMacaoIdCardResponse::setResult(const MacaoIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeMacaoIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeMacaoIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeMacaoIdCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeMacaoIdCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeMacaoIdCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeMacaoIdCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


