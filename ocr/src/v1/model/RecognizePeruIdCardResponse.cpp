

#include "huaweicloud/ocr/v1/model/RecognizePeruIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizePeruIdCardResponse::RecognizePeruIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizePeruIdCardResponse::~RecognizePeruIdCardResponse() = default;

void RecognizePeruIdCardResponse::validate()
{
}

web::json::value RecognizePeruIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizePeruIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PeruIdCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


PeruIdCardResult RecognizePeruIdCardResponse::getResult() const
{
    return result_;
}

void RecognizePeruIdCardResponse::setResult(const PeruIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizePeruIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizePeruIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


