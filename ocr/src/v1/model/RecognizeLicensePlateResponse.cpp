

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
            std::vector<LicensePlateResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<LicensePlateResult>& RecognizeLicensePlateResponse::getResult()
{
    return result_;
}

void RecognizeLicensePlateResponse::setResult(const std::vector<LicensePlateResult>& value)
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


