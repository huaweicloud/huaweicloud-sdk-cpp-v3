

#include "huaweicloud/ocr/v1/model/RecognizeSealResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeSealResponse::RecognizeSealResponse()
{
    resultIsSet_ = false;
}

RecognizeSealResponse::~RecognizeSealResponse() = default;

void RecognizeSealResponse::validate()
{
}

web::json::value RecognizeSealResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeSealResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            SealResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


SealResult RecognizeSealResponse::getResult() const
{
    return result_;
}

void RecognizeSealResponse::setResult(const SealResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeSealResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeSealResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


