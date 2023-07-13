

#include "huaweicloud/ocr/v1/model/RecognizeGeneralTextResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeGeneralTextResponse::RecognizeGeneralTextResponse()
{
    resultIsSet_ = false;
}

RecognizeGeneralTextResponse::~RecognizeGeneralTextResponse() = default;

void RecognizeGeneralTextResponse::validate()
{
}

web::json::value RecognizeGeneralTextResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeGeneralTextResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            GeneralTextResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

GeneralTextResult RecognizeGeneralTextResponse::getResult() const
{
    return result_;
}

void RecognizeGeneralTextResponse::setResult(const GeneralTextResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeGeneralTextResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeGeneralTextResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


