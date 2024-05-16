

#include "huaweicloud/ocr/v1/model/RecognizeGeneralTableResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeGeneralTableResponse::RecognizeGeneralTableResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeGeneralTableResponse::~RecognizeGeneralTableResponse() = default;

void RecognizeGeneralTableResponse::validate()
{
}

web::json::value RecognizeGeneralTableResponse::toJson() const
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
bool RecognizeGeneralTableResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            GeneralTableResult refVal;
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


GeneralTableResult RecognizeGeneralTableResponse::getResult() const
{
    return result_;
}

void RecognizeGeneralTableResponse::setResult(const GeneralTableResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeGeneralTableResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeGeneralTableResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeGeneralTableResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeGeneralTableResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeGeneralTableResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeGeneralTableResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


