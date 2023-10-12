

#include "huaweicloud/ocr/v1/model/RecognizeColombiaIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeColombiaIdCardResponse::RecognizeColombiaIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizeColombiaIdCardResponse::~RecognizeColombiaIdCardResponse() = default;

void RecognizeColombiaIdCardResponse::validate()
{
}

web::json::value RecognizeColombiaIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeColombiaIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ColombiaIdCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


ColombiaIdCardResult RecognizeColombiaIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeColombiaIdCardResponse::setResult(const ColombiaIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeColombiaIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeColombiaIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


