

#include "huaweicloud/ocr/v1/model/RecognizeIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeIdCardResponse::RecognizeIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizeIdCardResponse::~RecognizeIdCardResponse() = default;

void RecognizeIdCardResponse::validate()
{
}

web::json::value RecognizeIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            IdCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


IdCardResult RecognizeIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeIdCardResponse::setResult(const IdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


