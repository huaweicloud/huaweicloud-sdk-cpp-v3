

#include "huaweicloud/ocr/v1/model/RecognizeThailandIdcardResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandIdcardResponse::RecognizeThailandIdcardResponse()
{
    resultIsSet_ = false;
}

RecognizeThailandIdcardResponse::~RecognizeThailandIdcardResponse() = default;

void RecognizeThailandIdcardResponse::validate()
{
}

web::json::value RecognizeThailandIdcardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeThailandIdcardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ThailandIdcardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

ThailandIdcardResult RecognizeThailandIdcardResponse::getResult() const
{
    return result_;
}

void RecognizeThailandIdcardResponse::setResult(const ThailandIdcardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeThailandIdcardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeThailandIdcardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


