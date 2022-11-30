

#include "huaweicloud/ocr/v1/model/RecognizeDriverLicenseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeDriverLicenseResponse::RecognizeDriverLicenseResponse()
{
    resultIsSet_ = false;
}

RecognizeDriverLicenseResponse::~RecognizeDriverLicenseResponse() = default;

void RecognizeDriverLicenseResponse::validate()
{
}

web::json::value RecognizeDriverLicenseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeDriverLicenseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            DriverLicenseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


DriverLicenseResult RecognizeDriverLicenseResponse::getResult() const
{
    return result_;
}

void RecognizeDriverLicenseResponse::setResult(const DriverLicenseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeDriverLicenseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeDriverLicenseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


