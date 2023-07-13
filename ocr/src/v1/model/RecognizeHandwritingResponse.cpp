

#include "huaweicloud/ocr/v1/model/RecognizeHandwritingResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHandwritingResponse::RecognizeHandwritingResponse()
{
    resultIsSet_ = false;
}

RecognizeHandwritingResponse::~RecognizeHandwritingResponse() = default;

void RecognizeHandwritingResponse::validate()
{
}

web::json::value RecognizeHandwritingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeHandwritingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            HandwritingResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

HandwritingResult RecognizeHandwritingResponse::getResult() const
{
    return result_;
}

void RecognizeHandwritingResponse::setResult(const HandwritingResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeHandwritingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeHandwritingResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


