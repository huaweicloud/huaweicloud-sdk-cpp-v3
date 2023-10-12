

#include "huaweicloud/ocr/v1/model/RecognizeVinResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeVinResponse::RecognizeVinResponse()
{
    resultIsSet_ = false;
}

RecognizeVinResponse::~RecognizeVinResponse() = default;

void RecognizeVinResponse::validate()
{
}

web::json::value RecognizeVinResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeVinResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            VINResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


VINResult RecognizeVinResponse::getResult() const
{
    return result_;
}

void RecognizeVinResponse::setResult(const VINResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeVinResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeVinResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


