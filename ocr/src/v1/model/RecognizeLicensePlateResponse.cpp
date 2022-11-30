

#include "huaweicloud/ocr/v1/model/RecognizeLicensePlateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeLicensePlateResponse::RecognizeLicensePlateResponse()
{
    resultIsSet_ = false;
}

RecognizeLicensePlateResponse::~RecognizeLicensePlateResponse() = default;

void RecognizeLicensePlateResponse::validate()
{
}

web::json::value RecognizeLicensePlateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeLicensePlateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            LicensePlateResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


LicensePlateResult RecognizeLicensePlateResponse::getResult() const
{
    return result_;
}

void RecognizeLicensePlateResponse::setResult(const LicensePlateResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeLicensePlateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeLicensePlateResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


