

#include "huaweicloud/ocr/v1/model/RecognizeBankcardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBankcardResponse::RecognizeBankcardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeBankcardResponse::~RecognizeBankcardResponse() = default;

void RecognizeBankcardResponse::validate()
{
}

web::json::value RecognizeBankcardResponse::toJson() const
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
bool RecognizeBankcardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BankcardResult refVal;
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


BankcardResult RecognizeBankcardResponse::getResult() const
{
    return result_;
}

void RecognizeBankcardResponse::setResult(const BankcardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBankcardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBankcardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeBankcardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeBankcardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeBankcardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeBankcardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


