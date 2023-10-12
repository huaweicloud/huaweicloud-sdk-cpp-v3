

#include "huaweicloud/ocr/v1/model/RecognizeChileIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeChileIdCardResponse::RecognizeChileIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizeChileIdCardResponse::~RecognizeChileIdCardResponse() = default;

void RecognizeChileIdCardResponse::validate()
{
}

web::json::value RecognizeChileIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeChileIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ChileIdCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


ChileIdCardResult RecognizeChileIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeChileIdCardResponse::setResult(const ChileIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeChileIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeChileIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


