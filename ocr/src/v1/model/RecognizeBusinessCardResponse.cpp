

#include "huaweicloud/ocr/v1/model/RecognizeBusinessCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBusinessCardResponse::RecognizeBusinessCardResponse()
{
    resultIsSet_ = false;
}

RecognizeBusinessCardResponse::~RecognizeBusinessCardResponse() = default;

void RecognizeBusinessCardResponse::validate()
{
}

web::json::value RecognizeBusinessCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeBusinessCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BusinessCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


BusinessCardResult RecognizeBusinessCardResponse::getResult() const
{
    return result_;
}

void RecognizeBusinessCardResponse::setResult(const BusinessCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBusinessCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBusinessCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


