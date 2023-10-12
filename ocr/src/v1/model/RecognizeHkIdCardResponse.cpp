

#include "huaweicloud/ocr/v1/model/RecognizeHkIdCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHkIdCardResponse::RecognizeHkIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizeHkIdCardResponse::~RecognizeHkIdCardResponse() = default;

void RecognizeHkIdCardResponse::validate()
{
}

web::json::value RecognizeHkIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeHkIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            HkIdCardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


HkIdCardResult RecognizeHkIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeHkIdCardResponse::setResult(const HkIdCardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeHkIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeHkIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


