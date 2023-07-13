

#include "huaweicloud/ocr/v1/model/RecognizeMainlandTravelPermitResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMainlandTravelPermitResponse::RecognizeMainlandTravelPermitResponse()
{
    resultIsSet_ = false;
}

RecognizeMainlandTravelPermitResponse::~RecognizeMainlandTravelPermitResponse() = default;

void RecognizeMainlandTravelPermitResponse::validate()
{
}

web::json::value RecognizeMainlandTravelPermitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeMainlandTravelPermitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MainlandTravelPermitResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

MainlandTravelPermitResult RecognizeMainlandTravelPermitResponse::getResult() const
{
    return result_;
}

void RecognizeMainlandTravelPermitResponse::setResult(const MainlandTravelPermitResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeMainlandTravelPermitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeMainlandTravelPermitResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


