

#include "huaweicloud/ocr/v1/model/RecognizeCambodianIdCardResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeCambodianIdCardResponse::RecognizeCambodianIdCardResponse()
{
    resultIsSet_ = false;
}

RecognizeCambodianIdCardResponse::~RecognizeCambodianIdCardResponse() = default;

void RecognizeCambodianIdCardResponse::validate()
{
}

web::json::value RecognizeCambodianIdCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeCambodianIdCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


Object RecognizeCambodianIdCardResponse::getResult() const
{
    return result_;
}

void RecognizeCambodianIdCardResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeCambodianIdCardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeCambodianIdCardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


