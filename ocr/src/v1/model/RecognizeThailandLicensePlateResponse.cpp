

#include "huaweicloud/ocr/v1/model/RecognizeThailandLicensePlateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeThailandLicensePlateResponse::RecognizeThailandLicensePlateResponse()
{
    resultIsSet_ = false;
}

RecognizeThailandLicensePlateResponse::~RecognizeThailandLicensePlateResponse() = default;

void RecognizeThailandLicensePlateResponse::validate()
{
}

web::json::value RecognizeThailandLicensePlateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeThailandLicensePlateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ThailandLicensePlateItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


ThailandLicensePlateItem RecognizeThailandLicensePlateResponse::getResult() const
{
    return result_;
}

void RecognizeThailandLicensePlateResponse::setResult(const ThailandLicensePlateItem& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeThailandLicensePlateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeThailandLicensePlateResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


