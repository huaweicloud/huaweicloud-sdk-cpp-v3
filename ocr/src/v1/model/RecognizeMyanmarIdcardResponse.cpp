

#include "huaweicloud/ocr/v1/model/RecognizeMyanmarIdcardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMyanmarIdcardResponse::RecognizeMyanmarIdcardResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeMyanmarIdcardResponse::~RecognizeMyanmarIdcardResponse() = default;

void RecognizeMyanmarIdcardResponse::validate()
{
}

web::json::value RecognizeMyanmarIdcardResponse::toJson() const
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
bool RecognizeMyanmarIdcardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MyanmarIdcardResult refVal;
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


MyanmarIdcardResult RecognizeMyanmarIdcardResponse::getResult() const
{
    return result_;
}

void RecognizeMyanmarIdcardResponse::setResult(const MyanmarIdcardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeMyanmarIdcardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeMyanmarIdcardResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeMyanmarIdcardResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeMyanmarIdcardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeMyanmarIdcardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeMyanmarIdcardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


