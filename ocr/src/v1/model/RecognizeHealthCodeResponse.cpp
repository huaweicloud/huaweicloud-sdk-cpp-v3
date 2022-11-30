

#include "huaweicloud/ocr/v1/model/RecognizeHealthCodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHealthCodeResponse::RecognizeHealthCodeResponse()
{
    resultIsSet_ = false;
}

RecognizeHealthCodeResponse::~RecognizeHealthCodeResponse() = default;

void RecognizeHealthCodeResponse::validate()
{
}

web::json::value RecognizeHealthCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeHealthCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            HealthCodeResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


HealthCodeResult RecognizeHealthCodeResponse::getResult() const
{
    return result_;
}

void RecognizeHealthCodeResponse::setResult(const HealthCodeResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeHealthCodeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeHealthCodeResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


